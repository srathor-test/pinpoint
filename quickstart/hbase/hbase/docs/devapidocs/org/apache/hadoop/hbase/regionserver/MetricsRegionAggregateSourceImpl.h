<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>MetricsRegionAggregateSourceImpl (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="MetricsRegionAggregateSourceImpl (Apache HBase 1.4.13 API)";
        }
    }
    catch(err) {
    }
//-->
</script>
<noscript>
<div>JavaScript is disabled on your browser.</div>
</noscript>
<!-- ========= START OF TOP NAVBAR ======= -->
<div class="topNav"><a name="navbar_top">
<!--   -->
</a><a href="#skip-navbar_top" title="Skip navigation links"></a><a name="navbar_top_firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/MetricsRegionAggregateSourceImpl.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html" title="interface in org.apache.hadoop.hbase.regionserver"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServer.html" title="class in org.apache.hadoop.hbase.regionserver"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSourceImpl.html" target="_top">Frames</a></li>
<li><a href="MetricsRegionAggregateSourceImpl.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../../allclasses-noframe.html">All Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_top");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li>Nested&nbsp;|&nbsp;</li>
<li><a href="#fields_inherited_from_class_org.apache.hadoop.hbase.metrics.BaseSourceImpl">Field</a>&nbsp;|&nbsp;</li>
<li><a href="#constructor_summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor_detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_detail">Method</a></li>
</ul>
</div>
<a name="skip-navbar_top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<!-- ======== START OF CLASS DATA ======== -->
<div class="header">
<div class="subTitle">org.apache.hadoop.hbase.regionserver</div>
<h2 title="Class MetricsRegionAggregateSourceImpl" class="title">Class MetricsRegionAggregateSourceImpl</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li><a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html" title="class in org.apache.hadoop.hbase.metrics">org.apache.hadoop.hbase.metrics.BaseSourceImpl</a></li>
<li>
<ul class="inheritance">
<li>org.apache.hadoop.hbase.regionserver.MetricsRegionAggregateSourceImpl</li>
</ul>
</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<dl>
<dt>All Implemented Interfaces:</dt>
<dd><a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html" title="interface in org.apache.hadoop.hbase.metrics">BaseSource</a>, <a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionAggregateSource</a>, org.apache.hadoop.metrics2.MetricsSource</dd>
</dl>
<hr>
<br>
<pre><a href="../../../../../org/apache/hadoop/hbase/classification/InterfaceAudience.Private.html" title="annotation in org.apache.hadoop.hbase.classification">@InterfaceAudience.Private</a>
public class <span class="strong">MetricsRegionAggregateSourceImpl</span>
extends <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html" title="class in org.apache.hadoop.hbase.metrics">BaseSourceImpl</a>
implements <a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionAggregateSource</a></pre>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
<!-- =========== FIELD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="field_summary">
<!--   -->
</a>
<h3>Field Summary</h3>
<ul class="blockList">
<li class="blockList"><a name="fields_inherited_from_class_org.apache.hadoop.hbase.metrics.BaseSourceImpl">
<!--   -->
</a>
<h3>Fields inherited from class&nbsp;org.apache.hadoop.hbase.metrics.<a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html" title="class in org.apache.hadoop.hbase.metrics">BaseSourceImpl</a></h3>
<code><a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#metricsAdapter">metricsAdapter</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#metricsContext">metricsContext</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#metricsDescription">metricsDescription</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#metricsJmxContext">metricsJmxContext</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#metricsName">metricsName</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#metricsRegistry">metricsRegistry</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#registry">registry</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="fields_inherited_from_class_org.apache.hadoop.hbase.regionserver.MetricsRegionAggregateSource">
<!--   -->
</a>
<h3>Fields inherited from interface&nbsp;org.apache.hadoop.hbase.regionserver.<a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionAggregateSource</a></h3>
<code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#METRICS_CONTEXT">METRICS_CONTEXT</a>, <a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#METRICS_DESCRIPTION">METRICS_DESCRIPTION</a>, <a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#METRICS_JMX_CONTEXT">METRICS_JMX_CONTEXT</a>, <a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#METRICS_NAME">METRICS_NAME</a>, <a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#NUM_REGIONS">NUM_REGIONS</a>, <a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#NUMBER_OF_REGIONS_DESC">NUMBER_OF_REGIONS_DESC</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="fields_inherited_from_class_org.apache.hadoop.hbase.metrics.BaseSource">
<!--   -->
</a>
<h3>Fields inherited from interface&nbsp;org.apache.hadoop.hbase.metrics.<a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html" title="interface in org.apache.hadoop.hbase.metrics">BaseSource</a></h3>
<code><a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#HBASE_METRICS_SYSTEM_NAME">HBASE_METRICS_SYSTEM_NAME</a></code></li>
</ul>
</li>
</ul>
<!-- ======== CONSTRUCTOR SUMMARY ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor_summary">
<!--   -->
</a>
<h3>Constructor Summary</h3>
<table class="overviewSummary" border="0" cellpadding="3" cellspacing="0" summary="Constructor Summary table, listing constructors, and an explanation">
<caption><span>Constructors</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tr class="altColor">
<td class="colOne"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSourceImpl.html#MetricsRegionAggregateSourceImpl()">MetricsRegionAggregateSourceImpl</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colOne"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSourceImpl.html#MetricsRegionAggregateSourceImpl(java.lang.String,%20java.lang.String,%20java.lang.String,%20java.lang.String)">MetricsRegionAggregateSourceImpl</a></strong>(<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;metricsName,
                                <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;metricsDescription,
                                <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;metricsContext,
                                <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;metricsJmxContext)</code>&nbsp;</td>
</tr>
</table>
</li>
</ul>
<!-- ========== METHOD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="method_summary">
<!--   -->
</a>
<h3>Method Summary</h3>
<table class="overviewSummary" border="0" cellpadding="3" cellspacing="0" summary="Method Summary table, listing methods, and an explanation">
<caption><span>Methods</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSourceImpl.html#deregister(org.apache.hadoop.hbase.regionserver.MetricsRegionSource)">deregister</a></strong>(<a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionSource</a>&nbsp;toRemove)</code>
<div class="block">Remove a region's source.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSourceImpl.html#getMetrics(org.apache.hadoop.metrics2.MetricsCollector,%20boolean)">getMetrics</a></strong>(org.apache.hadoop.metrics2.MetricsCollector&nbsp;collector,
          boolean&nbsp;all)</code>
<div class="block">Yes this is a get function that doesn't return anything.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSourceImpl.html#register(org.apache.hadoop.hbase.regionserver.MetricsRegionSource)">register</a></strong>(<a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionSource</a>&nbsp;source)</code>
<div class="block">Register a MetricsRegionSource as being open.</div>
</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_org.apache.hadoop.hbase.metrics.BaseSourceImpl">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;org.apache.hadoop.hbase.metrics.<a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html" title="class in org.apache.hadoop.hbase.metrics">BaseSourceImpl</a></h3>
<code><a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#decGauge(java.lang.String,%20long)">decGauge</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#getMetricRegistryInfo()">getMetricRegistryInfo</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#getMetricsContext()">getMetricsContext</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#getMetricsDescription()">getMetricsDescription</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#getMetricsJmxContext()">getMetricsJmxContext</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#getMetricsName()">getMetricsName</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#getMetricsRegistry()">getMetricsRegistry</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#incCounters(java.lang.String,%20long)">incCounters</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#incGauge(java.lang.String,%20long)">incGauge</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#init()">init</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#removeMetric(java.lang.String)">removeMetric</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#setGauge(java.lang.String,%20long)">setGauge</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#updateHistogram(java.lang.String,%20long)">updateHistogram</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_java.lang.Object">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></h3>
<code><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#clone()" title="class or interface in java.lang">clone</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#equals(java.lang.Object)" title="class or interface in java.lang">equals</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#finalize()" title="class or interface in java.lang">finalize</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#getClass()" title="class or interface in java.lang">getClass</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#hashCode()" title="class or interface in java.lang">hashCode</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#notify()" title="class or interface in java.lang">notify</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#notifyAll()" title="class or interface in java.lang">notifyAll</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#toString()" title="class or interface in java.lang">toString</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait()" title="class or interface in java.lang">wait</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait(long)" title="class or interface in java.lang">wait</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait(long,%20int)" title="class or interface in java.lang">wait</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_org.apache.hadoop.hbase.metrics.BaseSource">
<!--   -->
</a>
<h3>Methods inherited from interface&nbsp;org.apache.hadoop.hbase.metrics.<a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html" title="interface in org.apache.hadoop.hbase.metrics">BaseSource</a></h3>
<code><a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#decGauge(java.lang.String,%20long)">decGauge</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#getMetricRegistryInfo()">getMetricRegistryInfo</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#getMetricsContext()">getMetricsContext</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#getMetricsDescription()">getMetricsDescription</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#getMetricsJmxContext()">getMetricsJmxContext</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#getMetricsName()">getMetricsName</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#incCounters(java.lang.String,%20long)">incCounters</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#incGauge(java.lang.String,%20long)">incGauge</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#init()">init</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#removeMetric(java.lang.String)">removeMetric</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#setGauge(java.lang.String,%20long)">setGauge</a>, <a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSource.html#updateHistogram(java.lang.String,%20long)">updateHistogram</a></code></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
<div class="details">
<ul class="blockList">
<li class="blockList">
<!-- ========= CONSTRUCTOR DETAIL ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor_detail">
<!--   -->
</a>
<h3>Constructor Detail</h3>
<a name="MetricsRegionAggregateSourceImpl()">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>MetricsRegionAggregateSourceImpl</h4>
<pre>public&nbsp;MetricsRegionAggregateSourceImpl()</pre>
</li>
</ul>
<a name="MetricsRegionAggregateSourceImpl(java.lang.String, java.lang.String, java.lang.String, java.lang.String)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>MetricsRegionAggregateSourceImpl</h4>
<pre>public&nbsp;MetricsRegionAggregateSourceImpl(<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;metricsName,
                                <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;metricsDescription,
                                <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;metricsContext,
                                <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;metricsJmxContext)</pre>
</li>
</ul>
</li>
</ul>
<!-- ============ METHOD DETAIL ========== -->
<ul class="blockList">
<li class="blockList"><a name="method_detail">
<!--   -->
</a>
<h3>Method Detail</h3>
<a name="register(org.apache.hadoop.hbase.regionserver.MetricsRegionSource)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>register</h4>
<pre>public&nbsp;void&nbsp;register(<a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionSource</a>&nbsp;source)</pre>
<div class="block"><strong>Description copied from interface:&nbsp;<code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#register(org.apache.hadoop.hbase.regionserver.MetricsRegionSource)">MetricsRegionAggregateSource</a></code></strong></div>
<div class="block">Register a MetricsRegionSource as being open.</div>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#register(org.apache.hadoop.hbase.regionserver.MetricsRegionSource)">register</a></code>&nbsp;in interface&nbsp;<code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionAggregateSource</a></code></dd>
<dt><span class="strong">Parameters:</span></dt><dd><code>source</code> - the source for the region being opened.</dd></dl>
</li>
</ul>
<a name="deregister(org.apache.hadoop.hbase.regionserver.MetricsRegionSource)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>deregister</h4>
<pre>public&nbsp;void&nbsp;deregister(<a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionSource</a>&nbsp;toRemove)</pre>
<div class="block"><strong>Description copied from interface:&nbsp;<code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#deregister(org.apache.hadoop.hbase.regionserver.MetricsRegionSource)">MetricsRegionAggregateSource</a></code></strong></div>
<div class="block">Remove a region's source. This is called when a region is closed.</div>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html#deregister(org.apache.hadoop.hbase.regionserver.MetricsRegionSource)">deregister</a></code>&nbsp;in interface&nbsp;<code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionAggregateSource</a></code></dd>
<dt><span class="strong">Parameters:</span></dt><dd><code>toRemove</code> - The region to remove.</dd></dl>
</li>
</ul>
<a name="getMetrics(org.apache.hadoop.metrics2.MetricsCollector, boolean)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>getMetrics</h4>
<pre>public&nbsp;void&nbsp;getMetrics(org.apache.hadoop.metrics2.MetricsCollector&nbsp;collector,
              boolean&nbsp;all)</pre>
<div class="block">Yes this is a get function that doesn't return anything.  Thanks Hadoop for breaking all
 expectations of java programmers.  Instead of returning anything Hadoop metrics expects
 getMetrics to push the metrics into the collector.</div>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code>getMetrics</code>&nbsp;in interface&nbsp;<code>org.apache.hadoop.metrics2.MetricsSource</code></dd>
<dt><strong>Overrides:</strong></dt>
<dd><code><a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html#getMetrics(org.apache.hadoop.metrics2.MetricsCollector,%20boolean)">getMetrics</a></code>&nbsp;in class&nbsp;<code><a href="../../../../../org/apache/hadoop/hbase/metrics/BaseSourceImpl.html" title="class in org.apache.hadoop.hbase.metrics">BaseSourceImpl</a></code></dd>
<dt><span class="strong">Parameters:</span></dt><dd><code>collector</code> - the collector</dd><dd><code>all</code> - get all the metrics regardless of when they last changed.</dd></dl>
</li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
</div>
<!-- ========= END OF CLASS DATA ========= -->
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar_bottom">
<!--   -->
</a><a href="#skip-navbar_bottom" title="Skip navigation links"></a><a name="navbar_bottom_firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/MetricsRegionAggregateSourceImpl.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSource.html" title="interface in org.apache.hadoop.hbase.regionserver"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServer.html" title="class in org.apache.hadoop.hbase.regionserver"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/hadoop/hbase/regionserver/MetricsRegionAggregateSourceImpl.html" target="_top">Frames</a></li>
<li><a href="MetricsRegionAggregateSourceImpl.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../../allclasses-noframe.html">All Classes</a></li>
</ul>
<div>
<script type="text/javascript"><!--
  allClassesLink = document.getElementById("allclasses_navbar_bottom");
  if(window==top) {
    allClassesLink.style.display = "block";
  }
  else {
    allClassesLink.style.display = "none";
  }
  //-->
</script>
</div>
<div>
<ul class="subNavList">
<li>Summary:&nbsp;</li>
<li>Nested&nbsp;|&nbsp;</li>
<li><a href="#fields_inherited_from_class_org.apache.hadoop.hbase.metrics.BaseSourceImpl">Field</a>&nbsp;|&nbsp;</li>
<li><a href="#constructor_summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li><a href="#constructor_detail">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_detail">Method</a></li>
</ul>
</div>
<a name="skip-navbar_bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small>Copyright &#169; 2007&#x2013;2020 <a href="https://www.apache.org/">The Apache Software Foundation</a>. All rights reserved.</small></p>
</body>
</html>
