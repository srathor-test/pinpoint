<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8" />
<title>TestGlobalMetricRegistriesAdapter xref</title>
<link type="text/css" rel="stylesheet" href="../../../../../../stylesheet.css" />
</head>
<body>
<div id="overview"><a href="../../../../../../../testapidocs/org/apache/hadoop/hbase/metrics/impl/TestGlobalMetricRegistriesAdapter.html">View Javadoc</a></div><pre>

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
<a class="jxr_linenumber" name="18" href="#18">18</a>  <strong class="jxr_keyword">package</strong> org.apache.hadoop.hbase.metrics.impl;
<a class="jxr_linenumber" name="19" href="#19">19</a>  
<a class="jxr_linenumber" name="20" href="#20">20</a>  <strong class="jxr_keyword">import</strong> <strong class="jxr_keyword">static</strong> org.junit.Assert.assertNotNull;
<a class="jxr_linenumber" name="21" href="#21">21</a>  <strong class="jxr_keyword">import</strong> <strong class="jxr_keyword">static</strong> org.junit.Assert.assertNull;
<a class="jxr_linenumber" name="22" href="#22">22</a>  
<a class="jxr_linenumber" name="23" href="#23">23</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.metrics.MetricRegistryInfo;
<a class="jxr_linenumber" name="24" href="#24">24</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.testclassification.MetricsTests;
<a class="jxr_linenumber" name="25" href="#25">25</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.testclassification.SmallTests;
<a class="jxr_linenumber" name="26" href="#26">26</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.metrics2.MetricsSource;
<a class="jxr_linenumber" name="27" href="#27">27</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.metrics2.MetricsSystem;
<a class="jxr_linenumber" name="28" href="#28">28</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.metrics2.annotation.Metric;
<a class="jxr_linenumber" name="29" href="#29">29</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.metrics2.annotation.Metrics;
<a class="jxr_linenumber" name="30" href="#30">30</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.metrics2.lib.DefaultMetricsSystem;
<a class="jxr_linenumber" name="31" href="#31">31</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.metrics2.lib.MetricsRegistry;
<a class="jxr_linenumber" name="32" href="#32">32</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.metrics2.lib.MutableCounterLong;
<a class="jxr_linenumber" name="33" href="#33">33</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.metrics2.lib.MutableGaugeLong;
<a class="jxr_linenumber" name="34" href="#34">34</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.metrics2.lib.MutableRate;
<a class="jxr_linenumber" name="35" href="#35">35</a>  <strong class="jxr_keyword">import</strong> org.junit.Test;
<a class="jxr_linenumber" name="36" href="#36">36</a>  <strong class="jxr_keyword">import</strong> org.junit.experimental.categories.Category;
<a class="jxr_linenumber" name="37" href="#37">37</a>  <strong class="jxr_keyword">import</strong> org.mockito.Mockito;
<a class="jxr_linenumber" name="38" href="#38">38</a>  
<a class="jxr_linenumber" name="39" href="#39">39</a>  @Category({ MetricsTests.<strong class="jxr_keyword">class</strong>, SmallTests.<strong class="jxr_keyword">class</strong> })
<a class="jxr_linenumber" name="40" href="#40">40</a>  <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">class</strong> <a href="../../../../../../org/apache/hadoop/hbase/metrics/impl/TestGlobalMetricRegistriesAdapter.html">TestGlobalMetricRegistriesAdapter</a> {
<a class="jxr_linenumber" name="41" href="#41">41</a>  
<a class="jxr_linenumber" name="42" href="#42">42</a>    <em class="jxr_javadoccomment">/**</em>
<a class="jxr_linenumber" name="43" href="#43">43</a>  <em class="jxr_javadoccomment">   * Tests that using reflection to unregister the Hadoop metrics source works properly</em>
<a class="jxr_linenumber" name="44" href="#44">44</a>  <em class="jxr_javadoccomment">   */</em>
<a class="jxr_linenumber" name="45" href="#45">45</a>    @Test
<a class="jxr_linenumber" name="46" href="#46">46</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">void</strong> testUnregisterSource() {
<a class="jxr_linenumber" name="47" href="#47">47</a>      GlobalMetricRegistriesAdapter adapter = GlobalMetricRegistriesAdapter.init();
<a class="jxr_linenumber" name="48" href="#48">48</a>      <em class="jxr_comment">// we'll configure the sources manually, so disable the executor</em>
<a class="jxr_linenumber" name="49" href="#49">49</a>      adapter.stop();
<a class="jxr_linenumber" name="50" href="#50">50</a>      <a href="../../../../../../org/apache/hadoop/hbase/metrics/impl/TestGlobalMetricRegistriesAdapter.html">TestSource</a> ts1 = <strong class="jxr_keyword">new</strong> <a href="../../../../../../org/apache/hadoop/hbase/metrics/impl/TestGlobalMetricRegistriesAdapter.html">TestSource</a>(<span class="jxr_string">"ts1"</span>);
<a class="jxr_linenumber" name="51" href="#51">51</a>      <a href="../../../../../../org/apache/hadoop/hbase/metrics/impl/TestGlobalMetricRegistriesAdapter.html">TestSource</a> ts2 = <strong class="jxr_keyword">new</strong> <a href="../../../../../../org/apache/hadoop/hbase/metrics/impl/TestGlobalMetricRegistriesAdapter.html">TestSource</a>(<span class="jxr_string">"ts2"</span>);
<a class="jxr_linenumber" name="52" href="#52">52</a>      MetricsSystem metricsSystem = DefaultMetricsSystem.instance();
<a class="jxr_linenumber" name="53" href="#53">53</a>      metricsSystem.register(<span class="jxr_string">"ts1"</span>, <span class="jxr_string">""</span>, ts1);
<a class="jxr_linenumber" name="54" href="#54">54</a>      metricsSystem.register(<span class="jxr_string">"ts2"</span>, <span class="jxr_string">""</span>, ts2);
<a class="jxr_linenumber" name="55" href="#55">55</a>      MetricsSource s1 = metricsSystem.getSource(<span class="jxr_string">"ts1"</span>);
<a class="jxr_linenumber" name="56" href="#56">56</a>      assertNotNull(s1);
<a class="jxr_linenumber" name="57" href="#57">57</a>      MetricRegistryInfo mockRegistryInfo = Mockito.mock(MetricRegistryInfo.<strong class="jxr_keyword">class</strong>);
<a class="jxr_linenumber" name="58" href="#58">58</a>      Mockito.when(mockRegistryInfo.getMetricsJmxContext()).thenReturn(<span class="jxr_string">"ts1"</span>);
<a class="jxr_linenumber" name="59" href="#59">59</a>      adapter.unregisterSource(mockRegistryInfo);
<a class="jxr_linenumber" name="60" href="#60">60</a>      s1 = metricsSystem.getSource(<span class="jxr_string">"ts1"</span>);
<a class="jxr_linenumber" name="61" href="#61">61</a>      assertNull(s1);
<a class="jxr_linenumber" name="62" href="#62">62</a>      MetricsSource s2 = metricsSystem.getSource(<span class="jxr_string">"ts2"</span>);
<a class="jxr_linenumber" name="63" href="#63">63</a>      assertNotNull(s2);
<a class="jxr_linenumber" name="64" href="#64">64</a>    }
<a class="jxr_linenumber" name="65" href="#65">65</a>  
<a class="jxr_linenumber" name="66" href="#66">66</a>    @Metrics(context = <span class="jxr_string">"test"</span>)
<a class="jxr_linenumber" name="67" href="#67">67</a>    <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">class</strong> <a href="../../../../../../org/apache/hadoop/hbase/metrics/impl/TestGlobalMetricRegistriesAdapter.html">TestSource</a> {
<a class="jxr_linenumber" name="68" href="#68">68</a>      @Metric(<span class="jxr_string">"C1 desc"</span>)
<a class="jxr_linenumber" name="69" href="#69">69</a>      MutableCounterLong c1;
<a class="jxr_linenumber" name="70" href="#70">70</a>      @Metric(<span class="jxr_string">"XXX desc"</span>)
<a class="jxr_linenumber" name="71" href="#71">71</a>      MutableCounterLong xxx;
<a class="jxr_linenumber" name="72" href="#72">72</a>      @Metric(<span class="jxr_string">"G1 desc"</span>)
<a class="jxr_linenumber" name="73" href="#73">73</a>      MutableGaugeLong g1;
<a class="jxr_linenumber" name="74" href="#74">74</a>      @Metric(<span class="jxr_string">"YYY desc"</span>)
<a class="jxr_linenumber" name="75" href="#75">75</a>      MutableGaugeLong yyy;
<a class="jxr_linenumber" name="76" href="#76">76</a>      @Metric
<a class="jxr_linenumber" name="77" href="#77">77</a>      MutableRate s1;
<a class="jxr_linenumber" name="78" href="#78">78</a>      @SuppressWarnings(<span class="jxr_string">"unused"</span>)
<a class="jxr_linenumber" name="79" href="#79">79</a>      <strong class="jxr_keyword">final</strong> MetricsRegistry registry;
<a class="jxr_linenumber" name="80" href="#80">80</a>  
<a class="jxr_linenumber" name="81" href="#81">81</a>      <a href="../../../../../../org/apache/hadoop/hbase/metrics/impl/TestGlobalMetricRegistriesAdapter.html">TestSource</a>(String recName) {
<a class="jxr_linenumber" name="82" href="#82">82</a>        registry = <strong class="jxr_keyword">new</strong> MetricsRegistry(recName);
<a class="jxr_linenumber" name="83" href="#83">83</a>      }
<a class="jxr_linenumber" name="84" href="#84">84</a>    }
<a class="jxr_linenumber" name="85" href="#85">85</a>  
<a class="jxr_linenumber" name="86" href="#86">86</a>  }
</pre>
<hr/><div id="footer">This page was automatically generated by <a href="http://maven.apache.org/">Maven</a></div></body>
</html>

