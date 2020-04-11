<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml" xml:lang="en" lang="en">
<head>
<meta http-equiv="content-type" content="text/html; charset=UTF-8" />
<title>PlainTextMessageBodyProducer xref</title>
<link type="text/css" rel="stylesheet" href="../../../../../../../stylesheet.css" />
</head>
<body>
<div id="overview"><a href="../../../../../../../../apidocs/org/apache/hadoop/hbase/rest/provider/producer/PlainTextMessageBodyProducer.html">View Javadoc</a></div><pre>

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
<a class="jxr_linenumber" name="19" href="#19">19</a>  
<a class="jxr_linenumber" name="20" href="#20">20</a>  <strong class="jxr_keyword">package</strong> org.apache.hadoop.hbase.<strong class="jxr_keyword">rest</strong>.provider.producer;
<a class="jxr_linenumber" name="21" href="#21">21</a>  
<a class="jxr_linenumber" name="22" href="#22">22</a>  <strong class="jxr_keyword">import</strong> java.io.IOException;
<a class="jxr_linenumber" name="23" href="#23">23</a>  <strong class="jxr_keyword">import</strong> java.io.OutputStream;
<a class="jxr_linenumber" name="24" href="#24">24</a>  <strong class="jxr_keyword">import</strong> java.lang.annotation.Annotation;
<a class="jxr_linenumber" name="25" href="#25">25</a>  <strong class="jxr_keyword">import</strong> java.lang.reflect.Type;
<a class="jxr_linenumber" name="26" href="#26">26</a>  
<a class="jxr_linenumber" name="27" href="#27">27</a>  <strong class="jxr_keyword">import</strong> javax.ws.rs.Produces;
<a class="jxr_linenumber" name="28" href="#28">28</a>  <strong class="jxr_keyword">import</strong> javax.ws.rs.WebApplicationException;
<a class="jxr_linenumber" name="29" href="#29">29</a>  <strong class="jxr_keyword">import</strong> javax.ws.rs.core.MediaType;
<a class="jxr_linenumber" name="30" href="#30">30</a>  <strong class="jxr_keyword">import</strong> javax.ws.rs.core.MultivaluedMap;
<a class="jxr_linenumber" name="31" href="#31">31</a>  <strong class="jxr_keyword">import</strong> javax.ws.rs.ext.MessageBodyWriter;
<a class="jxr_linenumber" name="32" href="#32">32</a>  <strong class="jxr_keyword">import</strong> javax.ws.rs.ext.Provider;
<a class="jxr_linenumber" name="33" href="#33">33</a>  
<a class="jxr_linenumber" name="34" href="#34">34</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.classification.InterfaceAudience;
<a class="jxr_linenumber" name="35" href="#35">35</a>  <strong class="jxr_keyword">import</strong> org.apache.hadoop.hbase.<strong class="jxr_keyword">rest</strong>.Constants;
<a class="jxr_linenumber" name="36" href="#36">36</a>  
<a class="jxr_linenumber" name="37" href="#37">37</a>  <em class="jxr_javadoccomment">/**</em>
<a class="jxr_linenumber" name="38" href="#38">38</a>  <em class="jxr_javadoccomment"> * An adapter between Jersey and Object.toString(). Hooks up plain text output</em>
<a class="jxr_linenumber" name="39" href="#39">39</a>  <em class="jxr_javadoccomment"> * to the Jersey content handling framework. </em>
<a class="jxr_linenumber" name="40" href="#40">40</a>  <em class="jxr_javadoccomment"> * Jersey will first call getSize() to learn the number of bytes that will be</em>
<a class="jxr_linenumber" name="41" href="#41">41</a>  <em class="jxr_javadoccomment"> * sent, then writeTo to perform the actual I/O.</em>
<a class="jxr_linenumber" name="42" href="#42">42</a>  <em class="jxr_javadoccomment"> */</em>
<a class="jxr_linenumber" name="43" href="#43">43</a>  @Provider
<a class="jxr_linenumber" name="44" href="#44">44</a>  @Produces(Constants.MIMETYPE_TEXT)
<a class="jxr_linenumber" name="45" href="#45">45</a>  @InterfaceAudience.Private
<a class="jxr_linenumber" name="46" href="#46">46</a>  <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">class</strong> <a href="../../../../../../../org/apache/hadoop/hbase/rest/provider/producer/PlainTextMessageBodyProducer.html">PlainTextMessageBodyProducer</a> 
<a class="jxr_linenumber" name="47" href="#47">47</a>    <strong class="jxr_keyword">implements</strong> MessageBodyWriter&lt;Object&gt; {
<a class="jxr_linenumber" name="48" href="#48">48</a>  
<a class="jxr_linenumber" name="49" href="#49">49</a>    <strong class="jxr_keyword">private</strong> ThreadLocal&lt;byte[]&gt; buffer = <strong class="jxr_keyword">new</strong> ThreadLocal&lt;byte[]&gt;();
<a class="jxr_linenumber" name="50" href="#50">50</a>  
<a class="jxr_linenumber" name="51" href="#51">51</a>    @Override
<a class="jxr_linenumber" name="52" href="#52">52</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">boolean</strong> isWriteable(Class&lt;?&gt; arg0, Type arg1, Annotation[] arg2,
<a class="jxr_linenumber" name="53" href="#53">53</a>        MediaType arg3) {
<a class="jxr_linenumber" name="54" href="#54">54</a>      <strong class="jxr_keyword">return</strong> <strong class="jxr_keyword">true</strong>;
<a class="jxr_linenumber" name="55" href="#55">55</a>    }
<a class="jxr_linenumber" name="56" href="#56">56</a>  
<a class="jxr_linenumber" name="57" href="#57">57</a>    @Override
<a class="jxr_linenumber" name="58" href="#58">58</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">long</strong> getSize(Object object, Class&lt;?&gt; type, Type genericType,
<a class="jxr_linenumber" name="59" href="#59">59</a>        Annotation[] annotations, MediaType mediaType) {
<a class="jxr_linenumber" name="60" href="#60">60</a>      byte[] bytes = object.toString().getBytes(); 
<a class="jxr_linenumber" name="61" href="#61">61</a>      buffer.set(bytes);
<a class="jxr_linenumber" name="62" href="#62">62</a>      <strong class="jxr_keyword">return</strong> bytes.length;
<a class="jxr_linenumber" name="63" href="#63">63</a>    }
<a class="jxr_linenumber" name="64" href="#64">64</a>  
<a class="jxr_linenumber" name="65" href="#65">65</a>    @Override
<a class="jxr_linenumber" name="66" href="#66">66</a>    <strong class="jxr_keyword">public</strong> <strong class="jxr_keyword">void</strong> writeTo(Object object, Class&lt;?&gt; type, Type genericType,
<a class="jxr_linenumber" name="67" href="#67">67</a>        Annotation[] annotations, MediaType mediaType,
<a class="jxr_linenumber" name="68" href="#68">68</a>        MultivaluedMap&lt;String, Object&gt; httpHeaders, OutputStream outStream)
<a class="jxr_linenumber" name="69" href="#69">69</a>        <strong class="jxr_keyword">throws</strong> IOException, WebApplicationException {
<a class="jxr_linenumber" name="70" href="#70">70</a>      byte[] bytes = buffer.get();
<a class="jxr_linenumber" name="71" href="#71">71</a>      outStream.write(bytes);
<a class="jxr_linenumber" name="72" href="#72">72</a>      buffer.remove();
<a class="jxr_linenumber" name="73" href="#73">73</a>    }	
<a class="jxr_linenumber" name="74" href="#74">74</a>  }
</pre>
<hr/><div id="footer">This page was automatically generated by <a href="http://maven.apache.org/">Maven</a></div></body>
</html>

