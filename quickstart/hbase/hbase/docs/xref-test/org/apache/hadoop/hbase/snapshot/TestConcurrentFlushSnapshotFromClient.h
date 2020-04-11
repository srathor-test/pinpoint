<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8" />
<title>TestConcurrentFlushSnapshotFromClient xref</title>
<link type="text/css" rel="stylesheet" href="../../../../../stylesheet.css" />
</head>
<body>
<div id="overview"><a href="../../../../../../testapidocs/org/apache/hadoop/hbase/snapshot/TestConcurrentFlushSnapshotFromClient.html">View Javadoc</a></div><pre>

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
<a class="jxr_linenumber" name="18" href="#18">18</a>  <strong class="jxr_keyword">package</strong> org.apache.hadoop.hbase.snapshot;
<a class="jxr_linenumber" name="19" href="#19">19</a>  
<a class="jxr_linenumber" name="20" href="#20">20</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.conf.Configuration;
<a class="jxr_linenumber" name="21" href="#21">21</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.master.snapshot.SnapshotManager;
<a class="jxr_linenumber" name="22" href="#22">22</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.testclassification.ClientTests;
<a class="jxr_linenumber" name="23" href="#23">23</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.testclassification.LargeTests;
<a class="jxr_linenumber" name="24" href="#24">24</a>  <strong class="jxr_keyword">import</strong> org.junit.BeforeClass;
<a class="jxr_linenumber" name="25" href="#25">25</a>  <strong class="jxr_keyword">import</strong> org.junit.experimental.categories.Category;
<a class="jxr_linenumber" name="26" href="#26">26</a>  <strong class="jxr_keyword">import</strong> org.slf4j.Logger;
<a class="jxr_linenumber" name="27" href="#27">27</a>  <strong class="jxr_keyword">import</strong> org.slf4j.LoggerFactory;
<a class="jxr_linenumber" name="28" href="#28">28</a>  
<a class="jxr_linenumber" name="29" href="#29">29</a>  @Category({ ClientTests.<strong class="jxr_keyword">class</strong>, LargeTests.<strong class="jxr_keyword">class</strong> })
<a class="jxr_linenumber" name="30" href="#30">30</a>  <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">class</strong> <a href="../../../../../org/apache/hadoop/hbase/snapshot/TestConcurrentFlushSnapshotFromClient.html">TestConcurrentFlushSnapshotFromClient</a> <strong class="jxr_keyword">extends</strong> <a href="../../../../../org/apache/hadoop/hbase/snapshot/TestFlushSnapshotFromClient.html">TestFlushSnapshotFromClient</a> {
<a class="jxr_linenumber" name="31" href="#31">31</a>    <strong class="jxr_keyword">private</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">final</strong> Logger LOG = LoggerFactory.getLogger(TestFlushSnapshotFromClient.<strong class="jxr_keyword">class</strong>);
<a class="jxr_linenumber" name="32" href="#32">32</a>  
<a class="jxr_linenumber" name="33" href="#33">33</a>    @BeforeClass
<a class="jxr_linenumber" name="34" href="#34">34</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> setupCluster() <strong class="jxr_keyword">throws</strong> Exception {
<a class="jxr_linenumber" name="35" href="#35">35</a>      setupConf(UTIL.getConfiguration());
<a class="jxr_linenumber" name="36" href="#36">36</a>      UTIL.startMiniCluster(3);
<a class="jxr_linenumber" name="37" href="#37">37</a>    }
<a class="jxr_linenumber" name="38" href="#38">38</a>  
<a class="jxr_linenumber" name="39" href="#39">39</a>    <strong class="jxr_keyword">protected</strong> <strong class="jxr_keyword">static</strong> <strong class="jxr_keyword">void</strong> setupConf(Configuration conf) {
<a class="jxr_linenumber" name="40" href="#40">40</a>      TestFlushSnapshotFromClient.setupConf(conf);
<a class="jxr_linenumber" name="41" href="#41">41</a>      UTIL.getConfiguration().setInt(SnapshotManager.SNAPSHOT_POOL_THREADS_KEY, 3);
<a class="jxr_linenumber" name="42" href="#42">42</a>      LOG.info(<span class="jxr_string">"Config the {} to be 3"</span>, SnapshotManager.SNAPSHOT_POOL_THREADS_KEY);
<a class="jxr_linenumber" name="43" href="#43">43</a>    }
<a class="jxr_linenumber" name="44" href="#44">44</a>  }
</pre>
<hr/><div id="footer">This page was automatically generated by <a href="http://maven.apache.org/">Maven</a></div></body>
</html>

