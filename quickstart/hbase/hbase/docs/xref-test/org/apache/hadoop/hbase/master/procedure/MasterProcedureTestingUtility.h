<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8" />
<title>MasterProcedureTestingUtility xref</title>
<link type="text/css" rel="stylesheet" href="../../../../../../stylesheet.css" />
</head>
<body>
<div id="overview"><a href="../../../../../../../testapidocs/org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">View Javadoc</a></div><pre>

<a class="jxr_linenumber" name="1" href="#1">1</a>   <em class="jxr_javadoccomment">/**</em>
<a class="jxr_linenumber" name="2" href="#2">2</a>   <em class="jxr_javadoccomment"> * Licensed to the Apache Software Foundation (ASF) under one</em>
<a class="jxr_linenumber" name="3" href="#3">3</a>   <em class="jxr_javadoccomment"> * or more contributor license agreements.  See the NOTICE file</em>
<a class="jxr_linenumber" name="4" href="#4">4</a>   <em class="jxr_javadoccomment"> * distributed with this work for additional information</em>
<a class="jxr_linenumber" name="5" href="#5">5</a>   <em class="jxr_javadoccomment"> * regarding copyright ownership.  The ASF licenses this file</em>
<a class="jxr_linenumber" name="6" href="#6">6</a>   <em class="jxr_javadoccomment"> * to you under the Apache License, Version 2.0 (the</em>
<a class="jxr_linenumber" name="7" href="#7">7</a>   <em class="jxr_javadoccomment"> * "License"); you may not use this file except in compliance</em>
<a class="jxr_linenumber" name="8" href="#8">8</a>   <em class="jxr_javadoccomment"> * with the License.  You may obtain a copy of the License at</em>
<a class="jxr_linenumber" name="9" href="#9">9</a>   <em class="jxr_javadoccomment"> *</em>
<a class="jxr_linenumber" name="10" href="#10">10</a>  <em class="jxr_javadoccomment"> *     <a href="http://www.apache.org/licenses/LICENSE-2.0" target="alexandria_uri">http://www.apache.org/licenses/LICENSE-2.0</a></em>
<a class="jxr_linenumber" name="11" href="#11">11</a>  <em class="jxr_javadoccomment"> *</em>
<a class="jxr_linenumber" name="12" href="#12">12</a>  <em class="jxr_javadoccomment"> * Unless required by applicable law or agreed to in writing, software</em>
<a class="jxr_linenumber" name="13" href="#13">13</a>  <em class="jxr_javadoccomment"> * distributed under the License is distributed on an "AS IS" BASIS,</em>
<a class="jxr_linenumber" name="14" href="#14">14</a>  <em class="jxr_javadoccomment"> * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.</em>
<a class="jxr_linenumber" name="15" href="#15">15</a>  <em class="jxr_javadoccomment"> * See the License for the specific language governing permissions and</em>
<a class="jxr_linenumber" name="16" href="#16">16</a>  <em class="jxr_javadoccomment"> * limitations under the License.</em>
<a class="jxr_linenumber" name="17" href="#17">17</a>  <em class="jxr_javadoccomment"> */</em>
<a class="jxr_linenumber" name="18" href="#18">18</a>  
<a class="jxr_linenumber" name="19" href="#19">19</a>  <strong class="jxr_keyword">package</strong> org.apache.hadoop.hbase.master.procedure;
<a class="jxr_linenumber" name="20" href="#20">20</a>  
<a class="jxr_linenumber" name="21" href="#21">21</a>  <strong class="jxr_keyword">import</strong> java.io.IOException;
<a class="jxr_linenumber" name="22" href="#22">22</a>  <strong class="jxr_keyword">import</strong> java.util.concurrent.atomic.AtomicInteger;
<a class="jxr_linenumber" name="23" href="#23">23</a>  <strong class="jxr_keyword">import</strong> java.util.List;
<a class="jxr_linenumber" name="24" href="#24">24</a>  <strong class="jxr_keyword">import</strong> java.util.TreeSet;
<a class="jxr_linenumber" name="25" href="#25">25</a>  
<a class="jxr_linenumber" name="26" href="#26">26</a>  <strong class="jxr_keyword">import</strong> org.apache.commons.logging.Log;
<a class="jxr_linenumber" name="27" href="#27">27</a>  <strong class="jxr_keyword">import</strong> org.apache.commons.logging.LogFactory;
<a class="jxr_linenumber" name="28" href="#28">28</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.fs.FileSystem;
<a class="jxr_linenumber" name="29" href="#29">29</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.fs.Path;
<a class="jxr_linenumber" name="30" href="#30">30</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.HColumnDescriptor;
<a class="jxr_linenumber" name="31" href="#31">31</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.HRegionInfo;
<a class="jxr_linenumber" name="32" href="#32">32</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.HRegionLocation;
<a class="jxr_linenumber" name="33" href="#33">33</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.HTableDescriptor;
<a class="jxr_linenumber" name="34" href="#34">34</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.MetaTableAccessor;
<a class="jxr_linenumber" name="35" href="#35">35</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.RegionLocations;
<a class="jxr_linenumber" name="36" href="#36">36</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.ServerName;
<a class="jxr_linenumber" name="37" href="#37">37</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.TableName;
<a class="jxr_linenumber" name="38" href="#38">38</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.TableStateManager;
<a class="jxr_linenumber" name="39" href="#39">39</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.BufferedMutator;
<a class="jxr_linenumber" name="40" href="#40">40</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.Connection;
<a class="jxr_linenumber" name="41" href="#41">41</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.Durability;
<a class="jxr_linenumber" name="42" href="#42">42</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.Put;
<a class="jxr_linenumber" name="43" href="#43">43</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.MetaScanner;
<a class="jxr_linenumber" name="44" href="#44">44</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.MetaScanner.MetaScannerVisitor;
<a class="jxr_linenumber" name="45" href="#45">45</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.MetaScanner.MetaScannerVisitorBase;
<a class="jxr_linenumber" name="46" href="#46">46</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.client.Result;
<a class="jxr_linenumber" name="47" href="#47">47</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.master.HMaster;
<a class="jxr_linenumber" name="48" href="#48">48</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.procedure2.ProcedureExecutor;
<a class="jxr_linenumber" name="49" href="#49">49</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.procedure2.ProcedureTestingUtility;
<a class="jxr_linenumber" name="50" href="#50">50</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.protobuf.generated.ZooKeeperProtos;
<a class="jxr_linenumber" name="51" href="#51">51</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.util.ModifyRegionUtils;
<a class="jxr_linenumber" name="52" href="#52">52</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.util.Bytes;
<a class="jxr_linenumber" name="53" href="#53">53</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.util.FSUtils;
<a class="jxr_linenumber" name="54" href="#54">54</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.util.MD5Hash;
<a class="jxr_linenumber" name="55" href="#55">55</a>  
<a class="jxr_linenumber" name="56" href="#56">56</a>  <strong class="jxr_keyword">import</strong> <strong class="jxr_keyword">static</strong> org.junit.Assert.assertEquals;
<a class="jxr_linenumber" name="57" href="#57">57</a>  <strong class="jxr_keyword">import</strong> <strong class="jxr_keyword">static</strong> org.junit.Assert.assertFalse;
<a class="jxr_linenumber" name="58" href="#58">58</a>  <strong class="jxr_keyword">import</strong> <strong class="jxr_keyword">static</strong> org.junit.Assert.assertTrue;
<a class="jxr_linenumber" name="59" href="#59">59</a>  
<a class="jxr_linenumber" name="60" href="#60">60</a>  <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">class</strong> <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">MasterProcedureTestingUtility</a> {
<a class="jxr_linenumber" name="61" href="#61">61</a>    <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">final</strong> Log LOG = LogFactory.getLog(MasterProcedureTestingUtility.<strong class="jxr_keyword">class</strong>);
<a class="jxr_linenumber" name="62" href="#62">62</a>  
<a class="jxr_linenumber" name="63" href="#63">63</a>    <strong class="jxr_keyword">private</strong> <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">MasterProcedureTestingUtility</a>() {
<a class="jxr_linenumber" name="64" href="#64">64</a>    }
<a class="jxr_linenumber" name="65" href="#65">65</a>  
<a class="jxr_linenumber" name="66" href="#66">66</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> HTableDescriptor createHTD(<strong class="jxr_keyword">final</strong> TableName tableName, <strong class="jxr_keyword">final</strong> String... family) {
<a class="jxr_linenumber" name="67" href="#67">67</a>      HTableDescriptor htd = <strong class="jxr_keyword">new</strong> HTableDescriptor(tableName);
<a class="jxr_linenumber" name="68" href="#68">68</a>      <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> i = 0; i &lt; family.length; ++i) {
<a class="jxr_linenumber" name="69" href="#69">69</a>        htd.addFamily(<strong class="jxr_keyword">new</strong> HColumnDescriptor(family[i]));
<a class="jxr_linenumber" name="70" href="#70">70</a>      }
<a class="jxr_linenumber" name="71" href="#71">71</a>      <strong class="jxr_keyword">return</strong> htd;
<a class="jxr_linenumber" name="72" href="#72">72</a>    }
<a class="jxr_linenumber" name="73" href="#73">73</a>  
<a class="jxr_linenumber" name="74" href="#74">74</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> HRegionInfo[] createTable(<strong class="jxr_keyword">final</strong> ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec,
<a class="jxr_linenumber" name="75" href="#75">75</a>        <strong class="jxr_keyword">final</strong> TableName tableName, <strong class="jxr_keyword">final</strong> byte[][] splitKeys, String... family) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="76" href="#76">76</a>      HTableDescriptor htd = createHTD(tableName, family);
<a class="jxr_linenumber" name="77" href="#77">77</a>      <strong class="jxr_keyword">return</strong> createTable(procExec, htd, splitKeys);
<a class="jxr_linenumber" name="78" href="#78">78</a>    }
<a class="jxr_linenumber" name="79" href="#79">79</a>  
<a class="jxr_linenumber" name="80" href="#80">80</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> HRegionInfo[] createTable(<strong class="jxr_keyword">final</strong> ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec,
<a class="jxr_linenumber" name="81" href="#81">81</a>        HTableDescriptor htd, <strong class="jxr_keyword">final</strong> byte[][] splitKeys) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="82" href="#82">82</a>      HRegionInfo[] regions = ModifyRegionUtils.createHRegionInfos(htd, splitKeys);
<a class="jxr_linenumber" name="83" href="#83">83</a>      <strong class="jxr_keyword">long</strong> procId = ProcedureTestingUtility.submitAndWait(procExec,
<a class="jxr_linenumber" name="84" href="#84">84</a>        <strong class="jxr_keyword">new</strong> CreateTableProcedure(procExec.getEnvironment(), htd, regions));
<a class="jxr_linenumber" name="85" href="#85">85</a>      ProcedureTestingUtility.assertProcNotFailed(procExec.getResult(procId));
<a class="jxr_linenumber" name="86" href="#86">86</a>      <strong class="jxr_keyword">return</strong> regions;
<a class="jxr_linenumber" name="87" href="#87">87</a>    }
<a class="jxr_linenumber" name="88" href="#88">88</a>  
<a class="jxr_linenumber" name="89" href="#89">89</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> validateTableCreation(<strong class="jxr_keyword">final</strong> HMaster master, <strong class="jxr_keyword">final</strong> TableName tableName,
<a class="jxr_linenumber" name="90" href="#90">90</a>        <strong class="jxr_keyword">final</strong> HRegionInfo[] regions, String... family) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="91" href="#91">91</a>      validateTableCreation(master, tableName, regions, <strong class="jxr_keyword">true</strong>, family);
<a class="jxr_linenumber" name="92" href="#92">92</a>    }
<a class="jxr_linenumber" name="93" href="#93">93</a>  
<a class="jxr_linenumber" name="94" href="#94">94</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> validateTableCreation(<strong class="jxr_keyword">final</strong> HMaster master, <strong class="jxr_keyword">final</strong> TableName tableName,
<a class="jxr_linenumber" name="95" href="#95">95</a>        <strong class="jxr_keyword">final</strong> HRegionInfo[] regions, <strong class="jxr_keyword">boolean</strong> hasFamilyDirs, String... family) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="96" href="#96">96</a>      <em class="jxr_comment">// check filesystem</em>
<a class="jxr_linenumber" name="97" href="#97">97</a>      <strong class="jxr_keyword">final</strong> FileSystem fs = master.getMasterFileSystem().getFileSystem();
<a class="jxr_linenumber" name="98" href="#98">98</a>      <strong class="jxr_keyword">final</strong> Path tableDir = FSUtils.getTableDir(master.getMasterFileSystem().getRootDir(), tableName);
<a class="jxr_linenumber" name="99" href="#99">99</a>      assertTrue(fs.exists(tableDir));
<a class="jxr_linenumber" name="100" href="#100">100</a>     FSUtils.logFileSystemState(fs, tableDir, LOG);
<a class="jxr_linenumber" name="101" href="#101">101</a>     List&lt;Path&gt; allRegionDirs = FSUtils.getRegionDirs(fs, tableDir);
<a class="jxr_linenumber" name="102" href="#102">102</a>     <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> i = 0; i &lt; regions.length; ++i) {
<a class="jxr_linenumber" name="103" href="#103">103</a>       Path regionDir = <strong class="jxr_keyword">new</strong> Path(tableDir, regions[i].getEncodedName());
<a class="jxr_linenumber" name="104" href="#104">104</a>       assertTrue(regions[i] + <span class="jxr_string">" region dir does not exist"</span>, fs.exists(regionDir));
<a class="jxr_linenumber" name="105" href="#105">105</a>       assertTrue(allRegionDirs.remove(regionDir));
<a class="jxr_linenumber" name="106" href="#106">106</a>       List&lt;Path&gt; allFamilyDirs = FSUtils.getFamilyDirs(fs, regionDir);
<a class="jxr_linenumber" name="107" href="#107">107</a>       <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> j = 0; j &lt; family.length; ++j) {
<a class="jxr_linenumber" name="108" href="#108">108</a>         <strong class="jxr_keyword">final</strong> Path familyDir = <strong class="jxr_keyword">new</strong> Path(regionDir, family[j]);
<a class="jxr_linenumber" name="109" href="#109">109</a>         <strong class="jxr_keyword">if</strong> (hasFamilyDirs) {
<a class="jxr_linenumber" name="110" href="#110">110</a>           assertTrue(family[j] + <span class="jxr_string">" family dir does not exist"</span>, fs.exists(familyDir));
<a class="jxr_linenumber" name="111" href="#111">111</a>           assertTrue(allFamilyDirs.remove(familyDir));
<a class="jxr_linenumber" name="112" href="#112">112</a>         } <strong class="jxr_keyword">else</strong> {
<a class="jxr_linenumber" name="113" href="#113">113</a>           <em class="jxr_comment">// TODO: WARN: Modify Table/Families does not create a family dir</em>
<a class="jxr_linenumber" name="114" href="#114">114</a>           <strong class="jxr_keyword">if</strong> (!fs.exists(familyDir)) {
<a class="jxr_linenumber" name="115" href="#115">115</a>             LOG.warn(family[j] + <span class="jxr_string">" family dir does not exist"</span>);
<a class="jxr_linenumber" name="116" href="#116">116</a>           }
<a class="jxr_linenumber" name="117" href="#117">117</a>           allFamilyDirs.remove(familyDir);
<a class="jxr_linenumber" name="118" href="#118">118</a>         }
<a class="jxr_linenumber" name="119" href="#119">119</a>       }
<a class="jxr_linenumber" name="120" href="#120">120</a>       assertTrue(<span class="jxr_string">"found extraneous families: "</span> + allFamilyDirs, allFamilyDirs.isEmpty());
<a class="jxr_linenumber" name="121" href="#121">121</a>     }
<a class="jxr_linenumber" name="122" href="#122">122</a>     assertTrue(<span class="jxr_string">"found extraneous regions: "</span> + allRegionDirs, allRegionDirs.isEmpty());
<a class="jxr_linenumber" name="123" href="#123">123</a> 
<a class="jxr_linenumber" name="124" href="#124">124</a>     <em class="jxr_comment">// check meta</em>
<a class="jxr_linenumber" name="125" href="#125">125</a>     assertTrue(MetaTableAccessor.tableExists(master.getConnection(), tableName));
<a class="jxr_linenumber" name="126" href="#126">126</a>     assertEquals(regions.length, countMetaRegions(master, tableName));
<a class="jxr_linenumber" name="127" href="#127">127</a> 
<a class="jxr_linenumber" name="128" href="#128">128</a>     <em class="jxr_comment">// check htd</em>
<a class="jxr_linenumber" name="129" href="#129">129</a>     HTableDescriptor htd = master.getTableDescriptors().get(tableName);
<a class="jxr_linenumber" name="130" href="#130">130</a>     assertTrue(<span class="jxr_string">"table descriptor not found"</span>, htd != <strong class="jxr_keyword">null</strong>);
<a class="jxr_linenumber" name="131" href="#131">131</a>     <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> i = 0; i &lt; family.length; ++i) {
<a class="jxr_linenumber" name="132" href="#132">132</a>       assertTrue(<span class="jxr_string">"family not found "</span> + family[i], htd.getFamily(Bytes.toBytes(family[i])) != <strong class="jxr_keyword">null</strong>);
<a class="jxr_linenumber" name="133" href="#133">133</a>     }
<a class="jxr_linenumber" name="134" href="#134">134</a>     assertEquals(family.length, htd.getFamilies().size());
<a class="jxr_linenumber" name="135" href="#135">135</a>   }
<a class="jxr_linenumber" name="136" href="#136">136</a> 
<a class="jxr_linenumber" name="137" href="#137">137</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> validateTableDeletion(<strong class="jxr_keyword">final</strong> HMaster master, <strong class="jxr_keyword">final</strong> TableName tableName,
<a class="jxr_linenumber" name="138" href="#138">138</a>       <strong class="jxr_keyword">final</strong> HRegionInfo[] regions, String... family) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="139" href="#139">139</a>     <em class="jxr_comment">// check filesystem</em>
<a class="jxr_linenumber" name="140" href="#140">140</a>     <strong class="jxr_keyword">final</strong> FileSystem fs = master.getMasterFileSystem().getFileSystem();
<a class="jxr_linenumber" name="141" href="#141">141</a>     <strong class="jxr_keyword">final</strong> Path tableDir = FSUtils.getTableDir(master.getMasterFileSystem().getRootDir(), tableName);
<a class="jxr_linenumber" name="142" href="#142">142</a>     assertFalse(fs.exists(tableDir));
<a class="jxr_linenumber" name="143" href="#143">143</a> 
<a class="jxr_linenumber" name="144" href="#144">144</a>     <em class="jxr_comment">// check meta</em>
<a class="jxr_linenumber" name="145" href="#145">145</a>     assertFalse(MetaTableAccessor.tableExists(master.getConnection(), tableName));
<a class="jxr_linenumber" name="146" href="#146">146</a>     assertEquals(0, countMetaRegions(master, tableName));
<a class="jxr_linenumber" name="147" href="#147">147</a> 
<a class="jxr_linenumber" name="148" href="#148">148</a>     <em class="jxr_comment">// check htd</em>
<a class="jxr_linenumber" name="149" href="#149">149</a>     assertTrue(<span class="jxr_string">"found htd of deleted table"</span>,
<a class="jxr_linenumber" name="150" href="#150">150</a>       master.getTableDescriptors().get(tableName) == <strong class="jxr_keyword">null</strong>);
<a class="jxr_linenumber" name="151" href="#151">151</a>   }
<a class="jxr_linenumber" name="152" href="#152">152</a> 
<a class="jxr_linenumber" name="153" href="#153">153</a>   <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">int</strong> countMetaRegions(<strong class="jxr_keyword">final</strong> HMaster master, <strong class="jxr_keyword">final</strong> TableName tableName)
<a class="jxr_linenumber" name="154" href="#154">154</a>       <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="155" href="#155">155</a>     <strong class="jxr_keyword">final</strong> AtomicInteger actualRegCount = <strong class="jxr_keyword">new</strong> AtomicInteger(0);
<a class="jxr_linenumber" name="156" href="#156">156</a>     <strong class="jxr_keyword">final</strong> MetaScannerVisitor visitor = <strong class="jxr_keyword">new</strong> MetaScannerVisitorBase() {
<a class="jxr_linenumber" name="157" href="#157">157</a>       @Override
<a class="jxr_linenumber" name="158" href="#158">158</a>       <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">boolean</strong> processRow(Result rowResult) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="159" href="#159">159</a>         RegionLocations list = MetaTableAccessor.getRegionLocations(rowResult);
<a class="jxr_linenumber" name="160" href="#160">160</a>         <strong class="jxr_keyword">if</strong> (list == <strong class="jxr_keyword">null</strong>) {
<a class="jxr_linenumber" name="161" href="#161">161</a>           LOG.warn(<span class="jxr_string">"No serialized HRegionInfo in "</span> + rowResult);
<a class="jxr_linenumber" name="162" href="#162">162</a>           <strong class="jxr_keyword">return</strong> <strong class="jxr_keyword">true</strong>;
<a class="jxr_linenumber" name="163" href="#163">163</a>         }
<a class="jxr_linenumber" name="164" href="#164">164</a>         HRegionLocation l = list.getRegionLocation();
<a class="jxr_linenumber" name="165" href="#165">165</a>         <strong class="jxr_keyword">if</strong> (l == <strong class="jxr_keyword">null</strong>) {
<a class="jxr_linenumber" name="166" href="#166">166</a>           <strong class="jxr_keyword">return</strong> <strong class="jxr_keyword">true</strong>;
<a class="jxr_linenumber" name="167" href="#167">167</a>         }
<a class="jxr_linenumber" name="168" href="#168">168</a>         <strong class="jxr_keyword">if</strong> (!l.getRegionInfo().getTable().equals(tableName)) {
<a class="jxr_linenumber" name="169" href="#169">169</a>           <strong class="jxr_keyword">return</strong> false;
<a class="jxr_linenumber" name="170" href="#170">170</a>         }
<a class="jxr_linenumber" name="171" href="#171">171</a>         <strong class="jxr_keyword">if</strong> (l.getRegionInfo().isOffline() || l.getRegionInfo().isSplit()) <strong class="jxr_keyword">return</strong> <strong class="jxr_keyword">true</strong>;
<a class="jxr_linenumber" name="172" href="#172">172</a>         HRegionLocation[] locations = list.getRegionLocations();
<a class="jxr_linenumber" name="173" href="#173">173</a>         <strong class="jxr_keyword">for</strong> (HRegionLocation location : locations) {
<a class="jxr_linenumber" name="174" href="#174">174</a>           <strong class="jxr_keyword">if</strong> (location == <strong class="jxr_keyword">null</strong>) <strong class="jxr_keyword">continue</strong>;
<a class="jxr_linenumber" name="175" href="#175">175</a>           ServerName serverName = location.getServerName();
<a class="jxr_linenumber" name="176" href="#176">176</a>           <em class="jxr_comment">// Make sure that regions are assigned to server</em>
<a class="jxr_linenumber" name="177" href="#177">177</a>           <strong class="jxr_keyword">if</strong> (serverName != <strong class="jxr_keyword">null</strong> &amp;&amp; serverName.getHostAndPort() != <strong class="jxr_keyword">null</strong>) {
<a class="jxr_linenumber" name="178" href="#178">178</a>             actualRegCount.incrementAndGet();
<a class="jxr_linenumber" name="179" href="#179">179</a>           }
<a class="jxr_linenumber" name="180" href="#180">180</a>         }
<a class="jxr_linenumber" name="181" href="#181">181</a>         <strong class="jxr_keyword">return</strong> <strong class="jxr_keyword">true</strong>;
<a class="jxr_linenumber" name="182" href="#182">182</a>       }
<a class="jxr_linenumber" name="183" href="#183">183</a>     };
<a class="jxr_linenumber" name="184" href="#184">184</a>     MetaScanner.metaScan(master.getConnection(), visitor, tableName);
<a class="jxr_linenumber" name="185" href="#185">185</a>     <strong class="jxr_keyword">return</strong> actualRegCount.get();
<a class="jxr_linenumber" name="186" href="#186">186</a>   }
<a class="jxr_linenumber" name="187" href="#187">187</a> 
<a class="jxr_linenumber" name="188" href="#188">188</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> validateTableIsEnabled(<strong class="jxr_keyword">final</strong> HMaster master, <strong class="jxr_keyword">final</strong> TableName tableName)
<a class="jxr_linenumber" name="189" href="#189">189</a>       <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="190" href="#190">190</a>     TableStateManager tsm = master.getAssignmentManager().getTableStateManager();
<a class="jxr_linenumber" name="191" href="#191">191</a>     assertTrue(tsm.isTableState(tableName, ZooKeeperProtos.Table.State.ENABLED));
<a class="jxr_linenumber" name="192" href="#192">192</a>   }
<a class="jxr_linenumber" name="193" href="#193">193</a> 
<a class="jxr_linenumber" name="194" href="#194">194</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> validateTableIsDisabled(<strong class="jxr_keyword">final</strong> HMaster master, <strong class="jxr_keyword">final</strong> TableName tableName)
<a class="jxr_linenumber" name="195" href="#195">195</a>       <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="196" href="#196">196</a>     TableStateManager tsm = master.getAssignmentManager().getTableStateManager();
<a class="jxr_linenumber" name="197" href="#197">197</a>     assertTrue(tsm.isTableState(tableName, ZooKeeperProtos.Table.State.DISABLED));
<a class="jxr_linenumber" name="198" href="#198">198</a>   }
<a class="jxr_linenumber" name="199" href="#199">199</a> 
<a class="jxr_linenumber" name="200" href="#200">200</a>   <em class="jxr_javadoccomment">/**</em>
<a class="jxr_linenumber" name="201" href="#201">201</a> <em class="jxr_javadoccomment">   * Run through all procedure flow states TWICE while also restarting procedure executor at each</em>
<a class="jxr_linenumber" name="202" href="#202">202</a> <em class="jxr_javadoccomment">   * step; i.e force a reread of procedure store.</em>
<a class="jxr_linenumber" name="203" href="#203">203</a> <em class="jxr_javadoccomment">   *</em>
<a class="jxr_linenumber" name="204" href="#204">204</a> <em class="jxr_javadoccomment">   *&lt;p&gt;It does</em>
<a class="jxr_linenumber" name="205" href="#205">205</a> <em class="jxr_javadoccomment">   * &lt;ol&gt;&lt;li&gt;Execute step N - kill the executor before store update</em>
<a class="jxr_linenumber" name="206" href="#206">206</a> <em class="jxr_javadoccomment">   * &lt;li&gt;Restart executor/store</em>
<a class="jxr_linenumber" name="207" href="#207">207</a> <em class="jxr_javadoccomment">   * &lt;li&gt;Execute step N - and then save to store</em>
<a class="jxr_linenumber" name="208" href="#208">208</a> <em class="jxr_javadoccomment">   * &lt;/ol&gt;</em>
<a class="jxr_linenumber" name="209" href="#209">209</a> <em class="jxr_javadoccomment">   *</em>
<a class="jxr_linenumber" name="210" href="#210">210</a> <em class="jxr_javadoccomment">   *&lt;p&gt;This is a good test for finding state that needs persisting and steps that are not</em>
<a class="jxr_linenumber" name="211" href="#211">211</a> <em class="jxr_javadoccomment">   * idempotent. Use this version of the test when a procedure executes all flow steps from start to</em>
<a class="jxr_linenumber" name="212" href="#212">212</a> <em class="jxr_javadoccomment">   * finish.</em>
<a class="jxr_linenumber" name="213" href="#213">213</a> <em class="jxr_javadoccomment">   * @see #testRecoveryAndDoubleExecution(ProcedureExecutor, long)</em>
<a class="jxr_linenumber" name="214" href="#214">214</a> <em class="jxr_javadoccomment">   */</em>
<a class="jxr_linenumber" name="215" href="#215">215</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> &lt;TState&gt; <strong class="jxr_keyword">void</strong> testRecoveryAndDoubleExecution(
<a class="jxr_linenumber" name="216" href="#216">216</a>       <strong class="jxr_keyword">final</strong> ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec, <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">long</strong> procId,
<a class="jxr_linenumber" name="217" href="#217">217</a>       <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">int</strong> numSteps, <strong class="jxr_keyword">final</strong> TState[] states) <strong class="jxr_keyword">throws</strong> Exception {
<a class="jxr_linenumber" name="218" href="#218">218</a>     ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="219" href="#219">219</a>     assertEquals(false, procExec.isRunning());
<a class="jxr_linenumber" name="220" href="#220">220</a>     <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> i = 0; i &lt; numSteps; ++i) {
<a class="jxr_linenumber" name="221" href="#221">221</a>       LOG.info(<span class="jxr_string">"Restart "</span>+ i +<span class="jxr_string">" exec state: "</span> + states[i]);
<a class="jxr_linenumber" name="222" href="#222">222</a>       ProcedureTestingUtility.assertProcNotYetCompleted(procExec, procId);
<a class="jxr_linenumber" name="223" href="#223">223</a>       ProcedureTestingUtility.restart(procExec);
<a class="jxr_linenumber" name="224" href="#224">224</a>       ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="225" href="#225">225</a>     }
<a class="jxr_linenumber" name="226" href="#226">226</a>     assertEquals(<strong class="jxr_keyword">true</strong>, procExec.isRunning());
<a class="jxr_linenumber" name="227" href="#227">227</a>     ProcedureTestingUtility.assertProcNotFailed(procExec, procId);
<a class="jxr_linenumber" name="228" href="#228">228</a>   }
<a class="jxr_linenumber" name="229" href="#229">229</a> 
<a class="jxr_linenumber" name="230" href="#230">230</a>   <em class="jxr_javadoccomment">/**</em>
<a class="jxr_linenumber" name="231" href="#231">231</a> <em class="jxr_javadoccomment">   * Run through all procedure flow states TWICE while also restarting procedure executor at each</em>
<a class="jxr_linenumber" name="232" href="#232">232</a> <em class="jxr_javadoccomment">   * step; i.e force a reread of procedure store.</em>
<a class="jxr_linenumber" name="233" href="#233">233</a> <em class="jxr_javadoccomment">   *</em>
<a class="jxr_linenumber" name="234" href="#234">234</a> <em class="jxr_javadoccomment">   *&lt;p&gt;It does</em>
<a class="jxr_linenumber" name="235" href="#235">235</a> <em class="jxr_javadoccomment">   * &lt;ol&gt;&lt;li&gt;Execute step N - kill the executor before store update</em>
<a class="jxr_linenumber" name="236" href="#236">236</a> <em class="jxr_javadoccomment">   * &lt;li&gt;Restart executor/store</em>
<a class="jxr_linenumber" name="237" href="#237">237</a> <em class="jxr_javadoccomment">   * &lt;li&gt;Execute step N - and then save to store</em>
<a class="jxr_linenumber" name="238" href="#238">238</a> <em class="jxr_javadoccomment">   * &lt;/ol&gt;</em>
<a class="jxr_linenumber" name="239" href="#239">239</a> <em class="jxr_javadoccomment">   *</em>
<a class="jxr_linenumber" name="240" href="#240">240</a> <em class="jxr_javadoccomment">   *&lt;p&gt;This is a good test for finding state that needs persisting and steps that are not</em>
<a class="jxr_linenumber" name="241" href="#241">241</a> <em class="jxr_javadoccomment">   * idempotent. Use this version of the test when the order in which flow steps are executed is</em>
<a class="jxr_linenumber" name="242" href="#242">242</a> <em class="jxr_javadoccomment">   * not start to finish; where the procedure may vary the flow steps dependent on circumstance</em>
<a class="jxr_linenumber" name="243" href="#243">243</a> <em class="jxr_javadoccomment">   * found.</em>
<a class="jxr_linenumber" name="244" href="#244">244</a> <em class="jxr_javadoccomment">   * @see #testRecoveryAndDoubleExecution(ProcedureExecutor, long, int, Object[])</em>
<a class="jxr_linenumber" name="245" href="#245">245</a> <em class="jxr_javadoccomment">   */</em>
<a class="jxr_linenumber" name="246" href="#246">246</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> &lt;TState&gt; <strong class="jxr_keyword">void</strong> testRecoveryAndDoubleExecution(
<a class="jxr_linenumber" name="247" href="#247">247</a>       <strong class="jxr_keyword">final</strong> ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec, <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">long</strong> procId)
<a class="jxr_linenumber" name="248" href="#248">248</a>   <strong class="jxr_keyword">throws</strong> Exception {
<a class="jxr_linenumber" name="249" href="#249">249</a>     ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="250" href="#250">250</a>     assertEquals(false, procExec.isRunning());
<a class="jxr_linenumber" name="251" href="#251">251</a>     <strong class="jxr_keyword">while</strong> (!procExec.isFinished(procId)) {
<a class="jxr_linenumber" name="252" href="#252">252</a>       ProcedureTestingUtility.restart(procExec);
<a class="jxr_linenumber" name="253" href="#253">253</a>       ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="254" href="#254">254</a>     }
<a class="jxr_linenumber" name="255" href="#255">255</a>     assertEquals(<strong class="jxr_keyword">true</strong>, procExec.isRunning());
<a class="jxr_linenumber" name="256" href="#256">256</a>     ProcedureTestingUtility.assertProcNotFailed(procExec, procId);
<a class="jxr_linenumber" name="257" href="#257">257</a>   }
<a class="jxr_linenumber" name="258" href="#258">258</a> 
<a class="jxr_linenumber" name="259" href="#259">259</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> &lt;TState&gt; <strong class="jxr_keyword">void</strong> testRollbackAndDoubleExecution(
<a class="jxr_linenumber" name="260" href="#260">260</a>       <strong class="jxr_keyword">final</strong> ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec, <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">long</strong> procId,
<a class="jxr_linenumber" name="261" href="#261">261</a>       <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">int</strong> lastStep, <strong class="jxr_keyword">final</strong> TState[] states) <strong class="jxr_keyword">throws</strong> Exception {
<a class="jxr_linenumber" name="262" href="#262">262</a>     ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="263" href="#263">263</a> 
<a class="jxr_linenumber" name="264" href="#264">264</a>     <em class="jxr_comment">// Restart the executor and execute the step twice</em>
<a class="jxr_linenumber" name="265" href="#265">265</a>     <em class="jxr_comment">//   execute step N - kill before store update</em>
<a class="jxr_linenumber" name="266" href="#266">266</a>     <em class="jxr_comment">//   restart executor/store</em>
<a class="jxr_linenumber" name="267" href="#267">267</a>     <em class="jxr_comment">//   execute step N - save on store</em>
<a class="jxr_linenumber" name="268" href="#268">268</a>     <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> i = 0; i &lt; lastStep; ++i) {
<a class="jxr_linenumber" name="269" href="#269">269</a>       LOG.info(<span class="jxr_string">"Restart "</span>+ i +<span class="jxr_string">" exec state: "</span> + states[i]);
<a class="jxr_linenumber" name="270" href="#270">270</a>       ProcedureTestingUtility.assertProcNotYetCompleted(procExec, procId);
<a class="jxr_linenumber" name="271" href="#271">271</a>       ProcedureTestingUtility.restart(procExec);
<a class="jxr_linenumber" name="272" href="#272">272</a>       ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="273" href="#273">273</a>     }
<a class="jxr_linenumber" name="274" href="#274">274</a> 
<a class="jxr_linenumber" name="275" href="#275">275</a>     <em class="jxr_comment">// Restart the executor and rollback the step twice</em>
<a class="jxr_linenumber" name="276" href="#276">276</a>     <em class="jxr_comment">//   rollback step N - kill before store update</em>
<a class="jxr_linenumber" name="277" href="#277">277</a>     <em class="jxr_comment">//   restart executor/store</em>
<a class="jxr_linenumber" name="278" href="#278">278</a>     <em class="jxr_comment">//   rollback step N - save on store</em>
<a class="jxr_linenumber" name="279" href="#279">279</a>     <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a> abortListener = <strong class="jxr_keyword">new</strong> <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a>(procExec);
<a class="jxr_linenumber" name="280" href="#280">280</a>     procExec.registerListener(abortListener);
<a class="jxr_linenumber" name="281" href="#281">281</a>     <strong class="jxr_keyword">try</strong> {
<a class="jxr_linenumber" name="282" href="#282">282</a>       <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> i = lastStep + 1; i &gt;= 0; --i) {
<a class="jxr_linenumber" name="283" href="#283">283</a>         LOG.info(<span class="jxr_string">"Restart "</span> + i +<span class="jxr_string">" rollback state: "</span>+ states[i]);
<a class="jxr_linenumber" name="284" href="#284">284</a>         ProcedureTestingUtility.assertProcNotYetCompleted(procExec, procId);
<a class="jxr_linenumber" name="285" href="#285">285</a>         ProcedureTestingUtility.restart(procExec);
<a class="jxr_linenumber" name="286" href="#286">286</a>         ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="287" href="#287">287</a>       }
<a class="jxr_linenumber" name="288" href="#288">288</a>     } <strong class="jxr_keyword">finally</strong> {
<a class="jxr_linenumber" name="289" href="#289">289</a>       assertTrue(procExec.unregisterListener(abortListener));
<a class="jxr_linenumber" name="290" href="#290">290</a>     }
<a class="jxr_linenumber" name="291" href="#291">291</a> 
<a class="jxr_linenumber" name="292" href="#292">292</a>     ProcedureTestingUtility.assertIsAbortException(procExec.getResult(procId));
<a class="jxr_linenumber" name="293" href="#293">293</a>   }
<a class="jxr_linenumber" name="294" href="#294">294</a> 
<a class="jxr_linenumber" name="295" href="#295">295</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> &lt;TState&gt; <strong class="jxr_keyword">void</strong> testRollbackAndDoubleExecutionAfterPONR(
<a class="jxr_linenumber" name="296" href="#296">296</a>       <strong class="jxr_keyword">final</strong> ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec, <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">long</strong> procId,
<a class="jxr_linenumber" name="297" href="#297">297</a>       <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">int</strong> lastStep, <strong class="jxr_keyword">final</strong> TState[] states) <strong class="jxr_keyword">throws</strong> Exception {
<a class="jxr_linenumber" name="298" href="#298">298</a>     ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="299" href="#299">299</a> 
<a class="jxr_linenumber" name="300" href="#300">300</a>     <em class="jxr_comment">// Restart the executor and execute the step twice</em>
<a class="jxr_linenumber" name="301" href="#301">301</a>     <em class="jxr_comment">//   execute step N - kill before store update</em>
<a class="jxr_linenumber" name="302" href="#302">302</a>     <em class="jxr_comment">//   restart executor/store</em>
<a class="jxr_linenumber" name="303" href="#303">303</a>     <em class="jxr_comment">//   execute step N - save on store</em>
<a class="jxr_linenumber" name="304" href="#304">304</a>     <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> i = 0; i &lt; lastStep; ++i) {
<a class="jxr_linenumber" name="305" href="#305">305</a>       LOG.info(<span class="jxr_string">"Restart "</span>+ i +<span class="jxr_string">" exec state: "</span> + states[i]);
<a class="jxr_linenumber" name="306" href="#306">306</a>       ProcedureTestingUtility.assertProcNotYetCompleted(procExec, procId);
<a class="jxr_linenumber" name="307" href="#307">307</a>       ProcedureTestingUtility.restart(procExec);
<a class="jxr_linenumber" name="308" href="#308">308</a>       ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="309" href="#309">309</a>     }
<a class="jxr_linenumber" name="310" href="#310">310</a> 
<a class="jxr_linenumber" name="311" href="#311">311</a>     <em class="jxr_comment">// try to inject the abort</em>
<a class="jxr_linenumber" name="312" href="#312">312</a>     ProcedureTestingUtility.setKillAndToggleBeforeStoreUpdate(procExec, false);
<a class="jxr_linenumber" name="313" href="#313">313</a>     <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a> abortListener = <strong class="jxr_keyword">new</strong> <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a>(procExec);
<a class="jxr_linenumber" name="314" href="#314">314</a>     procExec.registerListener(abortListener);
<a class="jxr_linenumber" name="315" href="#315">315</a>     <strong class="jxr_keyword">try</strong> {
<a class="jxr_linenumber" name="316" href="#316">316</a>       ProcedureTestingUtility.assertProcNotYetCompleted(procExec, procId);
<a class="jxr_linenumber" name="317" href="#317">317</a>       ProcedureTestingUtility.restart(procExec);
<a class="jxr_linenumber" name="318" href="#318">318</a>       LOG.info(<span class="jxr_string">"Restart and execute"</span>);
<a class="jxr_linenumber" name="319" href="#319">319</a>       ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="320" href="#320">320</a>     } <strong class="jxr_keyword">finally</strong> {
<a class="jxr_linenumber" name="321" href="#321">321</a>       assertTrue(procExec.unregisterListener(abortListener));
<a class="jxr_linenumber" name="322" href="#322">322</a>     }
<a class="jxr_linenumber" name="323" href="#323">323</a> 
<a class="jxr_linenumber" name="324" href="#324">324</a>     assertEquals(<strong class="jxr_keyword">true</strong>, procExec.isRunning());
<a class="jxr_linenumber" name="325" href="#325">325</a>     ProcedureTestingUtility.assertProcNotFailed(procExec, procId);
<a class="jxr_linenumber" name="326" href="#326">326</a>   }
<a class="jxr_linenumber" name="327" href="#327">327</a> 
<a class="jxr_linenumber" name="328" href="#328">328</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> &lt;TState&gt; <strong class="jxr_keyword">void</strong> testRollbackRetriableFailure(
<a class="jxr_linenumber" name="329" href="#329">329</a>       <strong class="jxr_keyword">final</strong> ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec, <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">long</strong> procId,
<a class="jxr_linenumber" name="330" href="#330">330</a>       <strong class="jxr_keyword">final</strong> <strong class="jxr_keyword">int</strong> lastStep, <strong class="jxr_keyword">final</strong> TState[] states) <strong class="jxr_keyword">throws</strong> Exception {
<a class="jxr_linenumber" name="331" href="#331">331</a>     ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="332" href="#332">332</a> 
<a class="jxr_linenumber" name="333" href="#333">333</a>     <em class="jxr_comment">// Restart the executor and execute the step twice</em>
<a class="jxr_linenumber" name="334" href="#334">334</a>     <em class="jxr_comment">//   execute step N - kill before store update</em>
<a class="jxr_linenumber" name="335" href="#335">335</a>     <em class="jxr_comment">//   restart executor/store</em>
<a class="jxr_linenumber" name="336" href="#336">336</a>     <em class="jxr_comment">//   execute step N - save on store</em>
<a class="jxr_linenumber" name="337" href="#337">337</a>     <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> i = 0; i &lt; lastStep; ++i) {
<a class="jxr_linenumber" name="338" href="#338">338</a>       LOG.info(<span class="jxr_string">"Restart "</span>+ i +<span class="jxr_string">" exec state: "</span> + states[i]);
<a class="jxr_linenumber" name="339" href="#339">339</a>       ProcedureTestingUtility.assertProcNotYetCompleted(procExec, procId);
<a class="jxr_linenumber" name="340" href="#340">340</a>       ProcedureTestingUtility.restart(procExec);
<a class="jxr_linenumber" name="341" href="#341">341</a>       ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="342" href="#342">342</a>     }
<a class="jxr_linenumber" name="343" href="#343">343</a> 
<a class="jxr_linenumber" name="344" href="#344">344</a>     <em class="jxr_comment">// execute the rollback</em>
<a class="jxr_linenumber" name="345" href="#345">345</a>     ProcedureTestingUtility.setKillAndToggleBeforeStoreUpdate(procExec, false);
<a class="jxr_linenumber" name="346" href="#346">346</a>     <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a> abortListener = <strong class="jxr_keyword">new</strong> <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a>(procExec);
<a class="jxr_linenumber" name="347" href="#347">347</a>     procExec.registerListener(abortListener);
<a class="jxr_linenumber" name="348" href="#348">348</a>     <strong class="jxr_keyword">try</strong> {
<a class="jxr_linenumber" name="349" href="#349">349</a>       ProcedureTestingUtility.assertProcNotYetCompleted(procExec, procId);
<a class="jxr_linenumber" name="350" href="#350">350</a>       ProcedureTestingUtility.restart(procExec);
<a class="jxr_linenumber" name="351" href="#351">351</a>       LOG.info(<span class="jxr_string">"Restart and rollback"</span>);
<a class="jxr_linenumber" name="352" href="#352">352</a>       ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="353" href="#353">353</a>     } <strong class="jxr_keyword">finally</strong> {
<a class="jxr_linenumber" name="354" href="#354">354</a>       assertTrue(procExec.unregisterListener(abortListener));
<a class="jxr_linenumber" name="355" href="#355">355</a>     }
<a class="jxr_linenumber" name="356" href="#356">356</a> 
<a class="jxr_linenumber" name="357" href="#357">357</a>     ProcedureTestingUtility.assertIsAbortException(procExec.getResult(procId));
<a class="jxr_linenumber" name="358" href="#358">358</a>   }
<a class="jxr_linenumber" name="359" href="#359">359</a> 
<a class="jxr_linenumber" name="360" href="#360">360</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> testRestartWithAbort(ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec,
<a class="jxr_linenumber" name="361" href="#361">361</a>       <strong class="jxr_keyword">long</strong> procId) <strong class="jxr_keyword">throws</strong> Exception {
<a class="jxr_linenumber" name="362" href="#362">362</a>     <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a> abortListener = <strong class="jxr_keyword">new</strong> <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a>(procExec);
<a class="jxr_linenumber" name="363" href="#363">363</a>     abortListener.addProcId(procId);
<a class="jxr_linenumber" name="364" href="#364">364</a>     procExec.registerListener(abortListener);
<a class="jxr_linenumber" name="365" href="#365">365</a>     <strong class="jxr_keyword">try</strong> {
<a class="jxr_linenumber" name="366" href="#366">366</a>       ProcedureTestingUtility.setKillAndToggleBeforeStoreUpdate(procExec, false);
<a class="jxr_linenumber" name="367" href="#367">367</a>       ProcedureTestingUtility.restart(procExec);
<a class="jxr_linenumber" name="368" href="#368">368</a>       ProcedureTestingUtility.waitProcedure(procExec, procId);
<a class="jxr_linenumber" name="369" href="#369">369</a>     } <strong class="jxr_keyword">finally</strong> {
<a class="jxr_linenumber" name="370" href="#370">370</a>       assertTrue(procExec.unregisterListener(abortListener));
<a class="jxr_linenumber" name="371" href="#371">371</a>     }
<a class="jxr_linenumber" name="372" href="#372">372</a>   }
<a class="jxr_linenumber" name="373" href="#373">373</a> 
<a class="jxr_linenumber" name="374" href="#374">374</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> validateColumnFamilyAddition(<strong class="jxr_keyword">final</strong> HMaster master, <strong class="jxr_keyword">final</strong> TableName tableName,
<a class="jxr_linenumber" name="375" href="#375">375</a>       <strong class="jxr_keyword">final</strong> String family) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="376" href="#376">376</a>     HTableDescriptor htd = master.getTableDescriptors().get(tableName);
<a class="jxr_linenumber" name="377" href="#377">377</a>     assertTrue(htd != <strong class="jxr_keyword">null</strong>);
<a class="jxr_linenumber" name="378" href="#378">378</a>     assertTrue(htd.hasFamily(family.getBytes()));
<a class="jxr_linenumber" name="379" href="#379">379</a>   }
<a class="jxr_linenumber" name="380" href="#380">380</a> 
<a class="jxr_linenumber" name="381" href="#381">381</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> validateColumnFamilyDeletion(<strong class="jxr_keyword">final</strong> HMaster master, <strong class="jxr_keyword">final</strong> TableName tableName,
<a class="jxr_linenumber" name="382" href="#382">382</a>       <strong class="jxr_keyword">final</strong> String family) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="383" href="#383">383</a>     <em class="jxr_comment">// verify htd</em>
<a class="jxr_linenumber" name="384" href="#384">384</a>     HTableDescriptor htd = master.getTableDescriptors().get(tableName);
<a class="jxr_linenumber" name="385" href="#385">385</a>     assertTrue(htd != <strong class="jxr_keyword">null</strong>);
<a class="jxr_linenumber" name="386" href="#386">386</a>     assertFalse(htd.hasFamily(family.getBytes()));
<a class="jxr_linenumber" name="387" href="#387">387</a> 
<a class="jxr_linenumber" name="388" href="#388">388</a>     <em class="jxr_comment">// verify fs</em>
<a class="jxr_linenumber" name="389" href="#389">389</a>     <strong class="jxr_keyword">final</strong> FileSystem fs = master.getMasterFileSystem().getFileSystem();
<a class="jxr_linenumber" name="390" href="#390">390</a>     <strong class="jxr_keyword">final</strong> Path tableDir = FSUtils.getTableDir(master.getMasterFileSystem().getRootDir(), tableName);
<a class="jxr_linenumber" name="391" href="#391">391</a>     <strong class="jxr_keyword">for</strong> (Path regionDir: FSUtils.getRegionDirs(fs, tableDir)) {
<a class="jxr_linenumber" name="392" href="#392">392</a>       <strong class="jxr_keyword">final</strong> Path familyDir = <strong class="jxr_keyword">new</strong> Path(regionDir, family);
<a class="jxr_linenumber" name="393" href="#393">393</a>       assertFalse(family + <span class="jxr_string">" family dir should not exist"</span>, fs.exists(familyDir));
<a class="jxr_linenumber" name="394" href="#394">394</a>     }
<a class="jxr_linenumber" name="395" href="#395">395</a>   }
<a class="jxr_linenumber" name="396" href="#396">396</a> 
<a class="jxr_linenumber" name="397" href="#397">397</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> validateColumnFamilyModification(<strong class="jxr_keyword">final</strong> HMaster master,
<a class="jxr_linenumber" name="398" href="#398">398</a>       <strong class="jxr_keyword">final</strong> TableName tableName, <strong class="jxr_keyword">final</strong> String family, HColumnDescriptor columnDescriptor)
<a class="jxr_linenumber" name="399" href="#399">399</a>       <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="400" href="#400">400</a>     HTableDescriptor htd = master.getTableDescriptors().get(tableName);
<a class="jxr_linenumber" name="401" href="#401">401</a>     assertTrue(htd != <strong class="jxr_keyword">null</strong>);
<a class="jxr_linenumber" name="402" href="#402">402</a> 
<a class="jxr_linenumber" name="403" href="#403">403</a>     HColumnDescriptor hcfd = htd.getFamily(family.getBytes());
<a class="jxr_linenumber" name="404" href="#404">404</a>     assertTrue(hcfd.equals(columnDescriptor));
<a class="jxr_linenumber" name="405" href="#405">405</a>   }
<a class="jxr_linenumber" name="406" href="#406">406</a> 
<a class="jxr_linenumber" name="407" href="#407">407</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> loadData(<strong class="jxr_keyword">final</strong> Connection connection, <strong class="jxr_keyword">final</strong> TableName tableName,
<a class="jxr_linenumber" name="408" href="#408">408</a>       <strong class="jxr_keyword">int</strong> rows, <strong class="jxr_keyword">final</strong> byte[][] splitKeys,  <strong class="jxr_keyword">final</strong> String... sfamilies) <strong class="jxr_keyword">throws</strong> IOException {
<a class="jxr_linenumber" name="409" href="#409">409</a>     byte[][] families = <strong class="jxr_keyword">new</strong> byte[sfamilies.length][];
<a class="jxr_linenumber" name="410" href="#410">410</a>     <strong class="jxr_keyword">for</strong> (<strong class="jxr_keyword">int</strong> i = 0; i &lt; families.length; ++i) {
<a class="jxr_linenumber" name="411" href="#411">411</a>       families[i] = Bytes.toBytes(sfamilies[i]);
<a class="jxr_linenumber" name="412" href="#412">412</a>     }
<a class="jxr_linenumber" name="413" href="#413">413</a> 
<a class="jxr_linenumber" name="414" href="#414">414</a>     BufferedMutator mutator = connection.getBufferedMutator(tableName);
<a class="jxr_linenumber" name="415" href="#415">415</a> 
<a class="jxr_linenumber" name="416" href="#416">416</a>     <em class="jxr_comment">// Ensure one row per region</em>
<a class="jxr_linenumber" name="417" href="#417">417</a>     assertTrue(rows &gt;= splitKeys.length);
<a class="jxr_linenumber" name="418" href="#418">418</a>     <strong class="jxr_keyword">for</strong> (byte[] k: splitKeys) {
<a class="jxr_linenumber" name="419" href="#419">419</a>       byte[] value = Bytes.add(Bytes.toBytes(System.currentTimeMillis()), k);
<a class="jxr_linenumber" name="420" href="#420">420</a>       byte[] key = Bytes.add(k, Bytes.toBytes(MD5Hash.getMD5AsHex(value)));
<a class="jxr_linenumber" name="421" href="#421">421</a>       mutator.mutate(createPut(families, key, value));
<a class="jxr_linenumber" name="422" href="#422">422</a>       rows--;
<a class="jxr_linenumber" name="423" href="#423">423</a>     }
<a class="jxr_linenumber" name="424" href="#424">424</a> 
<a class="jxr_linenumber" name="425" href="#425">425</a>     <em class="jxr_comment">// Add other extra rows. more rows, more files</em>
<a class="jxr_linenumber" name="426" href="#426">426</a>     <strong class="jxr_keyword">while</strong> (rows-- &gt; 0) {
<a class="jxr_linenumber" name="427" href="#427">427</a>       byte[] value = Bytes.add(Bytes.toBytes(System.currentTimeMillis()), Bytes.toBytes(rows));
<a class="jxr_linenumber" name="428" href="#428">428</a>       byte[] key = Bytes.toBytes(MD5Hash.getMD5AsHex(value));
<a class="jxr_linenumber" name="429" href="#429">429</a>       mutator.mutate(createPut(families, key, value));
<a class="jxr_linenumber" name="430" href="#430">430</a>     }
<a class="jxr_linenumber" name="431" href="#431">431</a>     mutator.flush();
<a class="jxr_linenumber" name="432" href="#432">432</a>   }
<a class="jxr_linenumber" name="433" href="#433">433</a> 
<a class="jxr_linenumber" name="434" href="#434">434</a>   <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">static</strong> Put createPut(<strong class="jxr_keyword">final</strong> byte[][] families, <strong class="jxr_keyword">final</strong> byte[] key, <strong class="jxr_keyword">final</strong> byte[] value) {
<a class="jxr_linenumber" name="435" href="#435">435</a>     byte[] q = Bytes.toBytes(<span class="jxr_string">"q"</span>);
<a class="jxr_linenumber" name="436" href="#436">436</a>     Put put = <strong class="jxr_keyword">new</strong> Put(key);
<a class="jxr_linenumber" name="437" href="#437">437</a>     put.setDurability(Durability.SKIP_WAL);
<a class="jxr_linenumber" name="438" href="#438">438</a>     <strong class="jxr_keyword">for</strong> (byte[] family: families) {
<a class="jxr_linenumber" name="439" href="#439">439</a>       put.add(family, q, value);
<a class="jxr_linenumber" name="440" href="#440">440</a>     }
<a class="jxr_linenumber" name="441" href="#441">441</a>     <strong class="jxr_keyword">return</strong> put;
<a class="jxr_linenumber" name="442" href="#442">442</a>   }
<a class="jxr_linenumber" name="443" href="#443">443</a> 
<a class="jxr_linenumber" name="444" href="#444">444</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">long</strong> generateNonceGroup(<strong class="jxr_keyword">final</strong> HMaster master) {
<a class="jxr_linenumber" name="445" href="#445">445</a>     <strong class="jxr_keyword">return</strong> master.getConnection().getNonceGenerator().getNonceGroup();
<a class="jxr_linenumber" name="446" href="#446">446</a>   }
<a class="jxr_linenumber" name="447" href="#447">447</a> 
<a class="jxr_linenumber" name="448" href="#448">448</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">long</strong> generateNonce(<strong class="jxr_keyword">final</strong> HMaster master) {
<a class="jxr_linenumber" name="449" href="#449">449</a>     <strong class="jxr_keyword">return</strong> master.getConnection().getNonceGenerator().newNonce();
<a class="jxr_linenumber" name="450" href="#450">450</a>   }
<a class="jxr_linenumber" name="451" href="#451">451</a> 
<a class="jxr_linenumber" name="452" href="#452">452</a>   <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">class</strong> <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a>
<a class="jxr_linenumber" name="453" href="#453">453</a>       <strong class="jxr_keyword">implements</strong> ProcedureExecutor.ProcedureExecutorListener {
<a class="jxr_linenumber" name="454" href="#454">454</a>     <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">final</strong> ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec;
<a class="jxr_linenumber" name="455" href="#455">455</a>     <strong class="jxr_keyword">private</strong> TreeSet&lt;Long&gt; procsToAbort = <strong class="jxr_keyword">null</strong>;
<a class="jxr_linenumber" name="456" href="#456">456</a> 
<a class="jxr_linenumber" name="457" href="#457">457</a>     <strong class="jxr_keyword">public</strong> <a href="../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureTestingUtility.html">InjectAbortOnLoadListener</a>(<strong class="jxr_keyword">final</strong> ProcedureExecutor&lt;MasterProcedureEnv&gt; procExec) {
<a class="jxr_linenumber" name="458" href="#458">458</a>       <strong class="jxr_keyword">this</strong>.procExec = procExec;
<a class="jxr_linenumber" name="459" href="#459">459</a>     }
<a class="jxr_linenumber" name="460" href="#460">460</a> 
<a class="jxr_linenumber" name="461" href="#461">461</a>     <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">void</strong> addProcId(<strong class="jxr_keyword">long</strong> procId) {
<a class="jxr_linenumber" name="462" href="#462">462</a>       <strong class="jxr_keyword">if</strong> (procsToAbort == <strong class="jxr_keyword">null</strong>) {
<a class="jxr_linenumber" name="463" href="#463">463</a>         procsToAbort = <strong class="jxr_keyword">new</strong> TreeSet&lt;Long&gt;();
<a class="jxr_linenumber" name="464" href="#464">464</a>       }
<a class="jxr_linenumber" name="465" href="#465">465</a>       procsToAbort.add(procId);
<a class="jxr_linenumber" name="466" href="#466">466</a>     }
<a class="jxr_linenumber" name="467" href="#467">467</a> 
<a class="jxr_linenumber" name="468" href="#468">468</a>     @Override
<a class="jxr_linenumber" name="469" href="#469">469</a>     <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">void</strong> procedureLoaded(<strong class="jxr_keyword">long</strong> procId) {
<a class="jxr_linenumber" name="470" href="#470">470</a>       <strong class="jxr_keyword">if</strong> (procsToAbort != <strong class="jxr_keyword">null</strong> &amp;&amp; !procsToAbort.contains(procId)) {
<a class="jxr_linenumber" name="471" href="#471">471</a>         <strong class="jxr_keyword">return</strong>;
<a class="jxr_linenumber" name="472" href="#472">472</a>       }
<a class="jxr_linenumber" name="473" href="#473">473</a>       procExec.abort(procId);
<a class="jxr_linenumber" name="474" href="#474">474</a>     }
<a class="jxr_linenumber" name="475" href="#475">475</a> 
<a class="jxr_linenumber" name="476" href="#476">476</a>     @Override
<a class="jxr_linenumber" name="477" href="#477">477</a>     <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">void</strong> procedureAdded(<strong class="jxr_keyword">long</strong> procId) { <em class="jxr_comment">/*<em class="jxr_comment"> no-op */</em> }</em>
<a class="jxr_linenumber" name="478" href="#478">478</a> 
<a class="jxr_linenumber" name="479" href="#479">479</a>     @Override
<a class="jxr_linenumber" name="480" href="#480">480</a>     <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">void</strong> procedureFinished(<strong class="jxr_keyword">long</strong> procId) { <em class="jxr_comment">/*<em class="jxr_comment"> no-op */</em> }</em>
<a class="jxr_linenumber" name="481" href="#481">481</a>   }
<a class="jxr_linenumber" name="482" href="#482">482</a> }
</pre>
<hr/><div id="footer">This page was automatically generated by <a href="http://maven.apache.org/">Maven</a></div></body>
</html>

