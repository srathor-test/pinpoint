<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8" />
<title>TestSettingTimeoutOnBlockingPoint xref</title>
<link type="text/css" rel="stylesheet" href="../../../../../stylesheet.css" />
</head>
<body>
<div id="overview"><a href="../../../../../../testapidocs/org/apache/hadoop/hbase/regionserver/TestSettingTimeoutOnBlockingPoint.html">View Javadoc</a></div><pre>

<a class="jxr_linenumber" name="1" href="#1">1</a>   <em class="jxr_comment">/*</em>
<a class="jxr_linenumber" name="2" href="#2">2</a>   <em class="jxr_comment"> *</em>
<a class="jxr_linenumber" name="3" href="#3">3</a>   <em class="jxr_comment"> * Licensed to the Apache Software Foundation (ASF) under one</em>
<a class="jxr_linenumber" name="4" href="#4">4</a>   <em class="jxr_comment"> * or more contributor license agreements.  See the NOTICE file</em>
<a class="jxr_linenumber" name="5" href="#5">5</a>   <em class="jxr_comment"> * distributed with this work for additional information</em>
<a class="jxr_linenumber" name="6" href="#6">6</a>   <em class="jxr_comment"> * regarding copyright ownership.  The ASF licenses this file</em>
<a class="jxr_linenumber" name="7" href="#7">7</a>   <em class="jxr_comment"> * to you under the Apache License, Version 2.0 (the</em>
<a class="jxr_linenumber" name="8" href="#8">8</a>   <em class="jxr_comment"> * "License"); you may not use this file except in compliance</em>
<a class="jxr_linenumber" name="9" href="#9">9</a>   <em class="jxr_comment"> * with the License.  You may obtain a copy of the License at</em>
<a class="jxr_linenumber" name="10" href="#10">10</a>  <em class="jxr_comment"> *</em>
<a class="jxr_linenumber" name="11" href="#11">11</a>  <em class="jxr_comment"> *     <a href="http://www.apache.org/licenses/LICENSE-2.0" target="alexandria_uri">http://www.apache.org/licenses/LICENSE-2.0</a></em>
<a class="jxr_linenumber" name="12" href="#12">12</a>  <em class="jxr_comment"> *</em>
<a class="jxr_linenumber" name="13" href="#13">13</a>  <em class="jxr_comment"> * Unless required by applicable law or agreed to in writing, software</em>
<a class="jxr_linenumber" name="14" href="#14">14</a>  <em class="jxr_comment"> * distributed under the License is distributed on an "AS IS" BASIS,</em>
<a class="jxr_linenumber" name="15" href="#15">15</a>  <em class="jxr_comment"> * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.</em>
<a class="jxr_linenumber" name="16" href="#16">16</a>  <em class="jxr_comment"> * See the License for the specific language governing permissions and</em>
<a class="jxr_linenumber" name="17" href="#17">17</a>  <em class="jxr_comment"> * limitations under the License.</em>
<a class="jxr_linenumber" name="18" href="#18">18</a>  <em class="jxr_comment"> */</em>
<a class="jxr_linenumber" name="19" href="#19">19</a>  <strong class="jxr_keyword">package</strong> org.apache.hadoop.hbase.regionserver;
<a class="jxr_linenumber" name="20" href="#20">20</a>  
<a class="jxr_linenumber" name="21" href="#21">21</a>  <strong class="jxr_keyword">import</strong> java.io.IOException;
<a class="jxr_linenumber" name="22" href="#22">22</a>  
<a class="jxr_linenumber" name="23" href="#23">23</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.HBaseTestingUtility;
<a class="jxr_linenumber" name="24" href="#24">24</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.HConstants;
<a class="jxr_linenumber" name="25" href="#25">25</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.HTableDescriptor;
<a class="jxr_linenumber" name="26" href="#26">26</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.TableName;
<a class="jxr_linenumber" name="27" href="#27">27</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.Delete;
<a class="jxr_linenumber" name="28" href="#28">28</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.Get;
<a class="jxr_linenumber" name="29" href="#29">29</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.Increment;
<a class="jxr_linenumber" name="30" href="#30">30</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.Result;
<a class="jxr_linenumber" name="31" href="#31">31</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.Table;
<a class="jxr_linenumber" name="32" href="#32">32</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.coprocessor.BaseRegionObserver;
<a class="jxr_linenumber" name="33" href="#33">33</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.coprocessor.ObserverContext;
<a class="jxr_linenumber" name="34" href="#34">34</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.coprocessor.RegionCoprocessorEnvironment;
<a class="jxr_linenumber" name="35" href="#35">35</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.testclassification.LargeTests;
<a class="jxr_linenumber" name="36" href="#36">36</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.util.Bytes;
<a class="jxr_linenumber" name="37" href="#37">37</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.util.Threads;
<a class="jxr_linenumber" name="38" href="#38">38</a>  <strong class="jxr_keyword">import</strong> org.junit.AfterClass;
<a class="jxr_linenumber" name="39" href="#39">39</a>  <strong class="jxr_keyword">import</strong> org.junit.Assert;
<a class="jxr_linenumber" name="40" href="#40">40</a>  <strong class="jxr_keyword">import</strong> org.junit.BeforeClass;
<a class="jxr_linenumber" name="41" href="#41">41</a>  <strong class="jxr_keyword">import</strong> org.junit.Rule;
<a class="jxr_linenumber" name="42" href="#42">42</a>  <strong class="jxr_keyword">import</strong> org.junit.Test;
<a class="jxr_linenumber" name="43" href="#43">43</a>  <strong class="jxr_keyword">import</strong> org.junit.experimental.categories.Category;
<a class="jxr_linenumber" name="44" href="#44">44</a>  <strong class="jxr_keyword">import</strong> org.junit.rules.TestName;
<a class="jxr_linenumber" name="45" href="#45">45</a>  
<a class="jxr_linenumber" name="46" href="#46">46</a>  @Category({LargeTests.<strong class="jxr_keyword">class</strong>})
<a class="jxr_linenumber" name="47" href="#47">47</a>  <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">class</strong> <a href="../../../../../org/apache/hadoop/hbase/regionserver/TestSettingTimeoutOnBlockingPoint.html">TestSettingTimeoutOnBlockingPoint</a> {
<a class="jxr_linenumber" name="48" href="#48">48</a>  
<a class="jxr_linenumber" name="49" href="#49">49</a>    <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">static</strong> <a href="../../../../../org/apache/hadoop/hbase/HBaseTestingUtility.html">HBaseTestingUtility</a> TEST_UTIL = <strong class="jxr_keyword">new</strong> <a href="../../../../../org/apache/hadoop/hbase/HBaseTestingUtility.html">HBaseTestingUtility</a>();
<a class="jxr_linenumber" name="50" href="#50">50</a>    <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">final</strong> byte[] FAM = Bytes.toBytes(<span class="jxr_string">"f"</span>);
<a class="jxr_linenumber" name="51" href="#51">51</a>    <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">final</strong> byte[] ROW1 = Bytes.toBytes(<span class="jxr_string">"row1"</span>);
<a class="jxr_linenumber" name="52" href="#52">52</a>    <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">final</strong> byte[] ROW2 = Bytes.toBytes(<span class="jxr_string">"row2"</span>);
<a class="jxr_linenumber" name="53" href="#53">53</a>  
<a class="jxr_linenumber" name="54" href="#54">54</a>    @Rule
<a class="jxr_linenumber" name="55" href="#55">55</a>    <strong class="jxr_keyword">public</strong> TestName testName = <strong class="jxr_keyword">new</strong> TestName();
<a class="jxr_linenumber" name="56" href="#56">56</a>  
<a class="jxr_linenumber" name="57" href="#57">57</a>    @BeforeClass
<a class="jxr_linenumber" name="58" href="#58">58</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> setUpBeforeClass() <strong class="jxr_keyword">throws</strong> Exception {
<a class="jxr_linenumber" name="59" href="#59">59</a>      TEST_UTIL.getConfiguration().setBoolean(HConstants.STATUS_PUBLISHED, <strong class="jxr_keyword">true</strong>);
<a class="jxr_linenumber" name="60" href="#60">60</a>      TEST_UTIL.getConfiguration().setInt(HConstants.HBASE_CLIENT_RETRIES_NUMBER, 1);
<a class="jxr_linenumber" name="61" href="#61">61</a>      <em class="jxr_comment">// simulate queue blocking</em>
<a class="jxr_linenumber" name="62" href="#62">62</a>      TEST_UTIL.getConfiguration().setInt(HConstants.REGION_SERVER_HANDLER_COUNT, 2);
<a class="jxr_linenumber" name="63" href="#63">63</a>      TEST_UTIL.startMiniCluster(2);
<a class="jxr_linenumber" name="64" href="#64">64</a>    }
<a class="jxr_linenumber" name="65" href="#65">65</a>  
<a class="jxr_linenumber" name="66" href="#66">66</a>    @AfterClass
<a class="jxr_linenumber" name="67" href="#67">67</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> setUpAfterClass() <strong class="jxr_keyword">throws</strong> Exception {
<a class="jxr_linenumber" name="68" href="#68">68</a>      TEST_UTIL.shutdownMiniCluster();
<a class="jxr_linenumber" name="69" href="#69">69</a>    }
<a class="jxr_linenumber" name="70" href="#70">70</a>  
<a class="jxr_linenumber" name="71" href="#71">71</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">class</strong> <a href="../../../../../org/apache/hadoop/hbase/client/TestHCM.html">SleepCoprocessor</a> <strong class="jxr_keyword">extends</strong> BaseRegionObserver {
<a class="jxr_linenumber" name="72" href="#72">72</a>      <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">int</strong> SLEEP_TIME = 10000;
<a class="jxr_linenumber" name="73" href="#73">73</a>  
<a class="jxr_linenumber" name="74" href="#74">74</a>      @Override
<a class="jxr_linenumber" name="75" href="#75">75</a>      <strong class="jxr_keyword">public</strong> Result preIncrementAfterRowLock(<strong class="jxr_keyword">final</strong> ObserverContext&lt;RegionCoprocessorEnvironment&gt; e,
<a class="jxr_linenumber" name="76" href="#76">76</a>          <strong class="jxr_keyword">final</strong> Increment increment) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="77" href="#77">77</a>        Threads.sleep(SLEEP_TIME);
<a class="jxr_linenumber" name="78" href="#78">78</a>        <strong class="jxr_keyword">return</strong> <strong class="jxr_keyword">super</strong>.preIncrementAfterRowLock(e, increment);
<a class="jxr_linenumber" name="79" href="#79">79</a>      }
<a class="jxr_linenumber" name="80" href="#80">80</a>    }
<a class="jxr_linenumber" name="81" href="#81">81</a>  
<a class="jxr_linenumber" name="82" href="#82">82</a>    @Test
<a class="jxr_linenumber" name="83" href="#83">83</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">void</strong> testRowLock() <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="84" href="#84">84</a>      <strong class="jxr_keyword">final</strong> TableName tableName = TableName.valueOf(testName.getMethodName());
<a class="jxr_linenumber" name="85" href="#85">85</a>      HTableDescriptor hdt = TEST_UTIL.createTableDescriptor(tableName.getNameAsString());
<a class="jxr_linenumber" name="86" href="#86">86</a>      hdt.addCoprocessor(SleepCoprocessor.<strong class="jxr_keyword">class</strong>.getName());
<a class="jxr_linenumber" name="87" href="#87">87</a>      TEST_UTIL.createTable(hdt, <strong class="jxr_keyword">new</strong> byte[][]{FAM}, TEST_UTIL.getConfiguration());
<a class="jxr_linenumber" name="88" href="#88">88</a>  
<a class="jxr_linenumber" name="89" href="#89">89</a>      Thread incrementThread = <strong class="jxr_keyword">new</strong> Thread(<strong class="jxr_keyword">new</strong> Runnable() {
<a class="jxr_linenumber" name="90" href="#90">90</a>        @Override
<a class="jxr_linenumber" name="91" href="#91">91</a>        <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">void</strong> run() {
<a class="jxr_linenumber" name="92" href="#92">92</a>          <strong class="jxr_keyword">try</strong> {
<a class="jxr_linenumber" name="93" href="#93">93</a>            <strong class="jxr_keyword">try</strong>(Table table = TEST_UTIL.getConnection().getTable(tableName)) {
<a class="jxr_linenumber" name="94" href="#94">94</a>              table.incrementColumnValue(ROW1, FAM, FAM, 1);
<a class="jxr_linenumber" name="95" href="#95">95</a>            }
<a class="jxr_linenumber" name="96" href="#96">96</a>          } <strong class="jxr_keyword">catch</strong> (IOException e) {
<a class="jxr_linenumber" name="97" href="#97">97</a>            Assert.fail(e.getMessage());
<a class="jxr_linenumber" name="98" href="#98">98</a>          }
<a class="jxr_linenumber" name="99" href="#99">99</a>        }
<a class="jxr_linenumber" name="100" href="#100">100</a>     });
<a class="jxr_linenumber" name="101" href="#101">101</a>     Thread getThread = <strong class="jxr_keyword">new</strong> Thread(<strong class="jxr_keyword">new</strong> Runnable() {
<a class="jxr_linenumber" name="102" href="#102">102</a>       @Override
<a class="jxr_linenumber" name="103" href="#103">103</a>       <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">void</strong> run() {
<a class="jxr_linenumber" name="104" href="#104">104</a>         <strong class="jxr_keyword">try</strong> {
<a class="jxr_linenumber" name="105" href="#105">105</a>           <strong class="jxr_keyword">try</strong>(Table table = TEST_UTIL.getConnection().getTable(tableName)) {
<a class="jxr_linenumber" name="106" href="#106">106</a>             table.setRpcTimeout(1000);
<a class="jxr_linenumber" name="107" href="#107">107</a>             Delete delete = <strong class="jxr_keyword">new</strong> Delete(ROW1);
<a class="jxr_linenumber" name="108" href="#108">108</a>             table.delete(delete);
<a class="jxr_linenumber" name="109" href="#109">109</a>           }
<a class="jxr_linenumber" name="110" href="#110">110</a>         } <strong class="jxr_keyword">catch</strong> (IOException e) {
<a class="jxr_linenumber" name="111" href="#111">111</a>           Assert.fail(e.getMessage());
<a class="jxr_linenumber" name="112" href="#112">112</a>         }
<a class="jxr_linenumber" name="113" href="#113">113</a>       }
<a class="jxr_linenumber" name="114" href="#114">114</a>     });
<a class="jxr_linenumber" name="115" href="#115">115</a> 
<a class="jxr_linenumber" name="116" href="#116">116</a>     incrementThread.start();
<a class="jxr_linenumber" name="117" href="#117">117</a>     Threads.sleep(1000);
<a class="jxr_linenumber" name="118" href="#118">118</a>     getThread.start();
<a class="jxr_linenumber" name="119" href="#119">119</a>     Threads.sleep(2000);
<a class="jxr_linenumber" name="120" href="#120">120</a>     <strong class="jxr_keyword">try</strong> (Table table = TEST_UTIL.getConnection().getTable(tableName)) {
<a class="jxr_linenumber" name="121" href="#121">121</a>       <em class="jxr_comment">// We have only two handlers. The first thread will get a write lock for row1 and occupy</em>
<a class="jxr_linenumber" name="122" href="#122">122</a>       <em class="jxr_comment">// the first handler. The second thread need a read lock for row1, it should quit after 1000</em>
<a class="jxr_linenumber" name="123" href="#123">123</a>       <em class="jxr_comment">// ms and give back the handler because it can not get the lock in time.</em>
<a class="jxr_linenumber" name="124" href="#124">124</a>       <em class="jxr_comment">// So we can get the value using the second handler.</em>
<a class="jxr_linenumber" name="125" href="#125">125</a>       table.setRpcTimeout(1000);
<a class="jxr_linenumber" name="126" href="#126">126</a>       table.get(<strong class="jxr_keyword">new</strong> Get(ROW2)); <em class="jxr_comment">// Will throw exception if the timeout checking is failed</em>
<a class="jxr_linenumber" name="127" href="#127">127</a>     } <strong class="jxr_keyword">finally</strong> {
<a class="jxr_linenumber" name="128" href="#128">128</a>       incrementThread.interrupt();
<a class="jxr_linenumber" name="129" href="#129">129</a>       getThread.interrupt();
<a class="jxr_linenumber" name="130" href="#130">130</a>     }
<a class="jxr_linenumber" name="131" href="#131">131</a>   }
<a class="jxr_linenumber" name="132" href="#132">132</a> }
</pre>
<hr/><div id="footer">This page was automatically generated by <a href="http://maven.apache.org/">Maven</a></div></body>
</html>

