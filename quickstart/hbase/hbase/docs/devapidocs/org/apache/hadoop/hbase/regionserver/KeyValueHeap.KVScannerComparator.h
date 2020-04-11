<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>KeyValueHeap.KVScannerComparator (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="KeyValueHeap.KVScannerComparator (Apache HBase 1.4.13 API)";
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
<li><a href="class-use/KeyValueHeap.KVScannerComparator.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueHeap.html" title="class in org.apache.hadoop.hbase.regionserver"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueScanner.html" title="interface in org.apache.hadoop.hbase.regionserver"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/hadoop/hbase/regionserver/KeyValueHeap.KVScannerComparator.html" target="_top">Frames</a></li>
<li><a href="KeyValueHeap.KVScannerComparator.html" target="_top">No Frames</a></li>
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
<li><a href="#field_summary">Field</a>&nbsp;|&nbsp;</li>
<li><a href="#constructor_summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li><a href="#field_detail">Field</a>&nbsp;|&nbsp;</li>
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
<h2 title="Class KeyValueHeap.KVScannerComparator" class="title">Class KeyValueHeap.KVScannerComparator</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li>org.apache.hadoop.hbase.regionserver.KeyValueHeap.KVScannerComparator</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<dl>
<dt>All Implemented Interfaces:</dt>
<dd><a href="http://docs.oracle.com/javase/7/docs/api/java/util/Comparator.html?is-external=true" title="class or interface in java.util">Comparator</a>&lt;<a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueScanner.html" title="interface in org.apache.hadoop.hbase.regionserver">KeyValueScanner</a>&gt;</dd>
</dl>
<dl>
<dt>Enclosing class:</dt>
<dd><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueHeap.html" title="class in org.apache.hadoop.hbase.regionserver">KeyValueHeap</a></dd>
</dl>
<hr>
<br>
<pre>protected static class <span class="strong">KeyValueHeap.KVScannerComparator</span>
extends <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a>
implements <a href="http://docs.oracle.com/javase/7/docs/api/java/util/Comparator.html?is-external=true" title="class or interface in java.util">Comparator</a>&lt;<a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueScanner.html" title="interface in org.apache.hadoop.hbase.regionserver">KeyValueScanner</a>&gt;</pre>
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
<table class="overviewSummary" border="0" cellpadding="3" cellspacing="0" summary="Field Summary table, listing fields, and an explanation">
<caption><span>Fields</span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Field and Description</th>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../org/apache/hadoop/hbase/KeyValue.KVComparator.html" title="class in org.apache.hadoop.hbase">KeyValue.KVComparator</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueHeap.KVScannerComparator.html#kvComparator">kvComparator</a></strong></code>&nbsp;</td>
</tr>
</table>
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
<td class="colOne"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueHeap.KVScannerComparator.html#KeyValueHeap.KVScannerComparator(org.apache.hadoop.hbase.KeyValue.KVComparator)">KeyValueHeap.KVScannerComparator</a></strong>(<a href="../../../../../org/apache/hadoop/hbase/KeyValue.KVComparator.html" title="class in org.apache.hadoop.hbase">KeyValue.KVComparator</a>&nbsp;kvComparator)</code>
<div class="block">Constructor</div>
</td>
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
<td class="colFirst"><code>int</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueHeap.KVScannerComparator.html#compare(org.apache.hadoop.hbase.Cell,%20org.apache.hadoop.hbase.Cell)">compare</a></strong>(<a href="../../../../../org/apache/hadoop/hbase/Cell.html" title="interface in org.apache.hadoop.hbase">Cell</a>&nbsp;left,
       <a href="../../../../../org/apache/hadoop/hbase/Cell.html" title="interface in org.apache.hadoop.hbase">Cell</a>&nbsp;right)</code>
<div class="block">Compares two KeyValue</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>int</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueHeap.KVScannerComparator.html#compare(org.apache.hadoop.hbase.regionserver.KeyValueScanner,%20org.apache.hadoop.hbase.regionserver.KeyValueScanner)">compare</a></strong>(<a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueScanner.html" title="interface in org.apache.hadoop.hbase.regionserver">KeyValueScanner</a>&nbsp;left,
       <a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueScanner.html" title="interface in org.apache.hadoop.hbase.regionserver">KeyValueScanner</a>&nbsp;right)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../org/apache/hadoop/hbase/KeyValue.KVComparator.html" title="class in org.apache.hadoop.hbase">KeyValue.KVComparator</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueHeap.KVScannerComparator.html#getComparator()">getComparator</a></strong>()</code>&nbsp;</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_java.lang.Object">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></h3>
<code><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#clone()" title="class or interface in java.lang">clone</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#equals(java.lang.Object)" title="class or interface in java.lang">equals</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#finalize()" title="class or interface in java.lang">finalize</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#getClass()" title="class or interface in java.lang">getClass</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#hashCode()" title="class or interface in java.lang">hashCode</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#notify()" title="class or interface in java.lang">notify</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#notifyAll()" title="class or interface in java.lang">notifyAll</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#toString()" title="class or interface in java.lang">toString</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait()" title="class or interface in java.lang">wait</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait(long)" title="class or interface in java.lang">wait</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait(long,%20int)" title="class or interface in java.lang">wait</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_java.util.Comparator">
<!--   -->
</a>
<h3>Methods inherited from interface&nbsp;java.util.<a href="http://docs.oracle.com/javase/7/docs/api/java/util/Comparator.html?is-external=true" title="class or interface in java.util">Comparator</a></h3>
<code><a href="http://docs.oracle.com/javase/7/docs/api/java/util/Comparator.html?is-external=true#equals(java.lang.Object)" title="class or interface in java.util">equals</a></code></li>
</ul>
</li>
</ul>
</li>
</ul>
</div>
<div class="details">
<ul class="blockList">
<li class="blockList">
<!-- ============ FIELD DETAIL =========== -->
<ul class="blockList">
<li class="blockList"><a name="field_detail">
<!--   -->
</a>
<h3>Field Detail</h3>
<a name="kvComparator">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>kvComparator</h4>
<pre>protected&nbsp;<a href="../../../../../org/apache/hadoop/hbase/KeyValue.KVComparator.html" title="class in org.apache.hadoop.hbase">KeyValue.KVComparator</a> kvComparator</pre>
</li>
</ul>
</li>
</ul>
<!-- ========= CONSTRUCTOR DETAIL ======== -->
<ul class="blockList">
<li class="blockList"><a name="constructor_detail">
<!--   -->
</a>
<h3>Constructor Detail</h3>
<a name="KeyValueHeap.KVScannerComparator(org.apache.hadoop.hbase.KeyValue.KVComparator)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>KeyValueHeap.KVScannerComparator</h4>
<pre>public&nbsp;KeyValueHeap.KVScannerComparator(<a href="../../../../../org/apache/hadoop/hbase/KeyValue.KVComparator.html" title="class in org.apache.hadoop.hbase">KeyValue.KVComparator</a>&nbsp;kvComparator)</pre>
<div class="block">Constructor</div>
<dl><dt><span class="strong">Parameters:</span></dt><dd><code>kvComparator</code> - </dd></dl>
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
<a name="compare(org.apache.hadoop.hbase.regionserver.KeyValueScanner, org.apache.hadoop.hbase.regionserver.KeyValueScanner)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>compare</h4>
<pre>public&nbsp;int&nbsp;compare(<a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueScanner.html" title="interface in org.apache.hadoop.hbase.regionserver">KeyValueScanner</a>&nbsp;left,
          <a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueScanner.html" title="interface in org.apache.hadoop.hbase.regionserver">KeyValueScanner</a>&nbsp;right)</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code><a href="http://docs.oracle.com/javase/7/docs/api/java/util/Comparator.html?is-external=true#compare(T,%20T)" title="class or interface in java.util">compare</a></code>&nbsp;in interface&nbsp;<code><a href="http://docs.oracle.com/javase/7/docs/api/java/util/Comparator.html?is-external=true" title="class or interface in java.util">Comparator</a>&lt;<a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueScanner.html" title="interface in org.apache.hadoop.hbase.regionserver">KeyValueScanner</a>&gt;</code></dd>
</dl>
</li>
</ul>
<a name="compare(org.apache.hadoop.hbase.Cell, org.apache.hadoop.hbase.Cell)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>compare</h4>
<pre>public&nbsp;int&nbsp;compare(<a href="../../../../../org/apache/hadoop/hbase/Cell.html" title="interface in org.apache.hadoop.hbase">Cell</a>&nbsp;left,
          <a href="../../../../../org/apache/hadoop/hbase/Cell.html" title="interface in org.apache.hadoop.hbase">Cell</a>&nbsp;right)</pre>
<div class="block">Compares two KeyValue</div>
<dl><dt><span class="strong">Parameters:</span></dt><dd><code>left</code> - </dd><dd><code>right</code> - </dd>
<dt><span class="strong">Returns:</span></dt><dd>less than 0 if left is smaller, 0 if equal etc..</dd></dl>
</li>
</ul>
<a name="getComparator()">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>getComparator</h4>
<pre>public&nbsp;<a href="../../../../../org/apache/hadoop/hbase/KeyValue.KVComparator.html" title="class in org.apache.hadoop.hbase">KeyValue.KVComparator</a>&nbsp;getComparator()</pre>
<dl><dt><span class="strong">Returns:</span></dt><dd>KVComparator</dd></dl>
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
<li><a href="class-use/KeyValueHeap.KVScannerComparator.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueHeap.html" title="class in org.apache.hadoop.hbase.regionserver"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../org/apache/hadoop/hbase/regionserver/KeyValueScanner.html" title="interface in org.apache.hadoop.hbase.regionserver"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/hadoop/hbase/regionserver/KeyValueHeap.KVScannerComparator.html" target="_top">Frames</a></li>
<li><a href="KeyValueHeap.KVScannerComparator.html" target="_top">No Frames</a></li>
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
<li><a href="#field_summary">Field</a>&nbsp;|&nbsp;</li>
<li><a href="#constructor_summary">Constr</a>&nbsp;|&nbsp;</li>
<li><a href="#method_summary">Method</a></li>
</ul>
<ul class="subNavList">
<li>Detail:&nbsp;</li>
<li><a href="#field_detail">Field</a>&nbsp;|&nbsp;</li>
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
