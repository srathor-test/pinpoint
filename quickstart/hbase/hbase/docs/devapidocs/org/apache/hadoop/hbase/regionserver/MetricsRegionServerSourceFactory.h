<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>MetricsRegionServerSourceFactory (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="MetricsRegionServerSourceFactory (Apache HBase 1.4.13 API)";
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
<li><a href="class-use/MetricsRegionServerSourceFactory.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSource.html" title="interface in org.apache.hadoop.hbase.regionserver"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactoryImpl.html" title="class in org.apache.hadoop.hbase.regionserver"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactory.html" target="_top">Frames</a></li>
<li><a href="MetricsRegionServerSourceFactory.html" target="_top">No Frames</a></li>
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
<li>Field&nbsp;|&nbsp;</li>
<li>Constr&nbsp;|&nbsp;</li>
<li><a href="#method_summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li>Constr&nbsp;|&nbsp;</li>
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
<h2 title="Interface MetricsRegionServerSourceFactory" class="title">Interface MetricsRegionServerSourceFactory</h2>
</div>
<div class="contentContainer">
<div class="description">
<ul class="blockList">
<li class="blockList">
<dl>
<dt>All Known Implementing Classes:</dt>
<dd><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactoryImpl.html" title="class in org.apache.hadoop.hbase.regionserver">MetricsRegionServerSourceFactoryImpl</a></dd>
</dl>
<hr>
<br>
<pre>public interface <span class="strong">MetricsRegionServerSourceFactory</span></pre>
<div class="block">Interface of a factory to create Metrics Sources used inside of regionservers.</div>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
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
<td class="colFirst"><code><a href="../../../../../org/apache/hadoop/hbase/io/MetricsIOSource.html" title="interface in org.apache.hadoop.hbase.io">MetricsIOSource</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactory.html#createIO(org.apache.hadoop.hbase.io.MetricsIOWrapper)">createIO</a></strong>(<a href="../../../../../org/apache/hadoop/hbase/io/MetricsIOWrapper.html" title="interface in org.apache.hadoop.hbase.io">MetricsIOWrapper</a>&nbsp;wrapper)</code>
<div class="block">Create a MetricsIOSource from a MetricsIOWrapper.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionSource</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactory.html#createRegion(org.apache.hadoop.hbase.regionserver.MetricsRegionWrapper)">createRegion</a></strong>(<a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionWrapper.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionWrapper</a>&nbsp;wrapper)</code>
<div class="block">Create a MetricsRegionSource from a MetricsRegionWrapper.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionServerSource</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactory.html#createServer(org.apache.hadoop.hbase.regionserver.MetricsRegionServerWrapper)">createServer</a></strong>(<a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerWrapper.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionServerWrapper</a>&nbsp;regionServerWrapper)</code>
<div class="block">Given a wrapper create a MetricsRegionServerSource.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsTableSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsTableSource</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactory.html#createTable(java.lang.String,%20org.apache.hadoop.hbase.regionserver.MetricsTableWrapperAggregate)">createTable</a></strong>(<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;table,
           <a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsTableWrapperAggregate.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsTableWrapperAggregate</a>&nbsp;wrapper)</code>
<div class="block">Create a MetricsTableSource from a MetricsTableWrapper.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsTableAggregateSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsTableAggregateSource</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactory.html#getTableAggregate()">getTableAggregate</a></strong>()</code>
<div class="block">Get a MetricsTableAggregateSource</div>
</td>
</tr>
</table>
</li>
</ul>
</li>
</ul>
</div>
<div class="details">
<ul class="blockList">
<li class="blockList">
<!-- ============ METHOD DETAIL ========== -->
<ul class="blockList">
<li class="blockList"><a name="method_detail">
<!--   -->
</a>
<h3>Method Detail</h3>
<a name="createServer(org.apache.hadoop.hbase.regionserver.MetricsRegionServerWrapper)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>createServer</h4>
<pre><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionServerSource</a>&nbsp;createServer(<a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerWrapper.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionServerWrapper</a>&nbsp;regionServerWrapper)</pre>
<div class="block">Given a wrapper create a MetricsRegionServerSource.</div>
<dl><dt><span class="strong">Parameters:</span></dt><dd><code>regionServerWrapper</code> - The wrapped region server</dd>
<dt><span class="strong">Returns:</span></dt><dd>a Metrics Source.</dd></dl>
</li>
</ul>
<a name="createRegion(org.apache.hadoop.hbase.regionserver.MetricsRegionWrapper)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>createRegion</h4>
<pre><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionSource</a>&nbsp;createRegion(<a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionWrapper.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsRegionWrapper</a>&nbsp;wrapper)</pre>
<div class="block">Create a MetricsRegionSource from a MetricsRegionWrapper.</div>
<dl><dt><span class="strong">Parameters:</span></dt><dd><code>wrapper</code> - The wrapped region</dd>
<dt><span class="strong">Returns:</span></dt><dd>A metrics region source</dd></dl>
</li>
</ul>
<a name="createTable(java.lang.String, org.apache.hadoop.hbase.regionserver.MetricsTableWrapperAggregate)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>createTable</h4>
<pre><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsTableSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsTableSource</a>&nbsp;createTable(<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;table,
                             <a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsTableWrapperAggregate.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsTableWrapperAggregate</a>&nbsp;wrapper)</pre>
<div class="block">Create a MetricsTableSource from a MetricsTableWrapper.</div>
<dl><dt><span class="strong">Parameters:</span></dt><dd><code>table</code> - The table name</dd><dd><code>wrapper</code> - The wrapped table aggregate</dd>
<dt><span class="strong">Returns:</span></dt><dd>A metrics table source</dd></dl>
</li>
</ul>
<a name="getTableAggregate()">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getTableAggregate</h4>
<pre><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsTableAggregateSource.html" title="interface in org.apache.hadoop.hbase.regionserver">MetricsTableAggregateSource</a>&nbsp;getTableAggregate()</pre>
<div class="block">Get a MetricsTableAggregateSource</div>
<dl><dt><span class="strong">Returns:</span></dt><dd>A metrics table aggregate source</dd></dl>
</li>
</ul>
<a name="createIO(org.apache.hadoop.hbase.io.MetricsIOWrapper)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>createIO</h4>
<pre><a href="../../../../../org/apache/hadoop/hbase/io/MetricsIOSource.html" title="interface in org.apache.hadoop.hbase.io">MetricsIOSource</a>&nbsp;createIO(<a href="../../../../../org/apache/hadoop/hbase/io/MetricsIOWrapper.html" title="interface in org.apache.hadoop.hbase.io">MetricsIOWrapper</a>&nbsp;wrapper)</pre>
<div class="block">Create a MetricsIOSource from a MetricsIOWrapper.</div>
<dl><dt><span class="strong">Returns:</span></dt><dd>A metrics IO source</dd></dl>
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
<li><a href="class-use/MetricsRegionServerSourceFactory.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSource.html" title="interface in org.apache.hadoop.hbase.regionserver"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactoryImpl.html" title="class in org.apache.hadoop.hbase.regionserver"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/hadoop/hbase/regionserver/MetricsRegionServerSourceFactory.html" target="_top">Frames</a></li>
<li><a href="MetricsRegionServerSourceFactory.html" target="_top">No Frames</a></li>
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
<li>Field&nbsp;|&nbsp;</li>
<li>Constr&nbsp;|&nbsp;</li>
<li><a href="#method_summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
<li>Constr&nbsp;|&nbsp;</li>
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
