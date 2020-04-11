<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>RawScanQueryMatcher (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="RawScanQueryMatcher (Apache HBase 1.4.13 API)";
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
<li><a href="../../../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/RawScanQueryMatcher.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/NormalUserScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanDeleteTracker.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/regionserver/querymatcher/RawScanQueryMatcher.html" target="_top">Frames</a></li>
<li><a href="RawScanQueryMatcher.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../../../allclasses-noframe.html">All Classes</a></li>
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
<li><a href="#nested_classes_inherited_from_class_org.apache.hadoop.hbase.regionserver.querymatcher.ScanQueryMatcher">Nested</a>&nbsp;|&nbsp;</li>
<li><a href="#fields_inherited_from_class_org.apache.hadoop.hbase.regionserver.querymatcher.UserScanQueryMatcher">Field</a>&nbsp;|&nbsp;</li>
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
<div class="subTitle">org.apache.hadoop.hbase.regionserver.querymatcher</div>
<h2 title="Class RawScanQueryMatcher" class="title">Class RawScanQueryMatcher</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">org.apache.hadoop.hbase.regionserver.querymatcher.ScanQueryMatcher</a></li>
<li>
<ul class="inheritance">
<li><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">org.apache.hadoop.hbase.regionserver.querymatcher.UserScanQueryMatcher</a></li>
<li>
<ul class="inheritance">
<li>org.apache.hadoop.hbase.regionserver.querymatcher.RawScanQueryMatcher</li>
</ul>
</li>
</ul>
</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<hr>
<br>
<pre><a href="../../../../../../org/apache/hadoop/hbase/classification/InterfaceAudience.Private.html" title="annotation in org.apache.hadoop.hbase.classification">@InterfaceAudience.Private</a>
public abstract class <span class="strong">RawScanQueryMatcher</span>
extends <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">UserScanQueryMatcher</a></pre>
<div class="block">Query matcher for raw scan.</div>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
<!-- ======== NESTED CLASS SUMMARY ======== -->
<ul class="blockList">
<li class="blockList"><a name="nested_class_summary">
<!--   -->
</a>
<h3>Nested Class Summary</h3>
<ul class="blockList">
<li class="blockList"><a name="nested_classes_inherited_from_class_org.apache.hadoop.hbase.regionserver.querymatcher.ScanQueryMatcher">
<!--   -->
</a>
<h3>Nested classes/interfaces inherited from class&nbsp;org.apache.hadoop.hbase.regionserver.querymatcher.<a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">ScanQueryMatcher</a></h3>
<code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.MatchCode.html" title="enum in org.apache.hadoop.hbase.regionserver.querymatcher">ScanQueryMatcher.MatchCode</a></code></li>
</ul>
</li>
</ul>
<!-- =========== FIELD SUMMARY =========== -->
<ul class="blockList">
<li class="blockList"><a name="field_summary">
<!--   -->
</a>
<h3>Field Summary</h3>
<ul class="blockList">
<li class="blockList"><a name="fields_inherited_from_class_org.apache.hadoop.hbase.regionserver.querymatcher.UserScanQueryMatcher">
<!--   -->
</a>
<h3>Fields inherited from class&nbsp;org.apache.hadoop.hbase.regionserver.querymatcher.<a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">UserScanQueryMatcher</a></h3>
<code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#filter">filter</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#hasNullColumn">hasNullColumn</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#stopRow">stopRow</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#tr">tr</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="fields_inherited_from_class_org.apache.hadoop.hbase.regionserver.querymatcher.ScanQueryMatcher">
<!--   -->
</a>
<h3>Fields inherited from class&nbsp;org.apache.hadoop.hbase.regionserver.querymatcher.<a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">ScanQueryMatcher</a></h3>
<code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#columns">columns</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#currentRow">currentRow</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#now">now</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#oldestUnexpiredTS">oldestUnexpiredTS</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#rowComparator">rowComparator</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#startKey">startKey</a></code></li>
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
<th class="colFirst" scope="col">Modifier</th>
<th class="colLast" scope="col">Constructor and Description</th>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected </code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/RawScanQueryMatcher.html#RawScanQueryMatcher(org.apache.hadoop.hbase.client.Scan,%20org.apache.hadoop.hbase.regionserver.ScanInfo,%20org.apache.hadoop.hbase.regionserver.querymatcher.ColumnTracker,%20boolean,%20long,%20long)">RawScanQueryMatcher</a></strong>(<a href="../../../../../../org/apache/hadoop/hbase/client/Scan.html" title="class in org.apache.hadoop.hbase.client">Scan</a>&nbsp;scan,
                   <a href="../../../../../../org/apache/hadoop/hbase/regionserver/ScanInfo.html" title="class in org.apache.hadoop.hbase.regionserver">ScanInfo</a>&nbsp;scanInfo,
                   <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ColumnTracker.html" title="interface in org.apache.hadoop.hbase.regionserver.querymatcher">ColumnTracker</a>&nbsp;columns,
                   boolean&nbsp;hasNullColumn,
                   long&nbsp;oldestUnexpiredTS,
                   long&nbsp;now)</code>&nbsp;</td>
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
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/RawScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">RawScanQueryMatcher</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/RawScanQueryMatcher.html#create(org.apache.hadoop.hbase.client.Scan,%20org.apache.hadoop.hbase.regionserver.ScanInfo,%20org.apache.hadoop.hbase.regionserver.querymatcher.ColumnTracker,%20boolean,%20long,%20long)">create</a></strong>(<a href="../../../../../../org/apache/hadoop/hbase/client/Scan.html" title="class in org.apache.hadoop.hbase.client">Scan</a>&nbsp;scan,
      <a href="../../../../../../org/apache/hadoop/hbase/regionserver/ScanInfo.html" title="class in org.apache.hadoop.hbase.regionserver">ScanInfo</a>&nbsp;scanInfo,
      <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ColumnTracker.html" title="interface in org.apache.hadoop.hbase.regionserver.querymatcher">ColumnTracker</a>&nbsp;columns,
      boolean&nbsp;hasNullColumn,
      long&nbsp;oldestUnexpiredTS,
      long&nbsp;now)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/RawScanQueryMatcher.html#isGet()">isGet</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.MatchCode.html" title="enum in org.apache.hadoop.hbase.regionserver.querymatcher">ScanQueryMatcher.MatchCode</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/RawScanQueryMatcher.html#match(org.apache.hadoop.hbase.Cell)">match</a></strong>(<a href="../../../../../../org/apache/hadoop/hbase/Cell.html" title="interface in org.apache.hadoop.hbase">Cell</a>&nbsp;cell)</code>
<div class="block">Determines if the caller should do one of several things:
 
 seek/skip to the next row (MatchCode.SEEK_NEXT_ROW)
 seek/skip to the next column (MatchCode.SEEK_NEXT_COL)
 include the current KeyValue (MatchCode.INCLUDE)
 ignore the current KeyValue (MatchCode.SKIP)
 got to the next row (MatchCode.DONE)
 </div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/RawScanQueryMatcher.html#reset()">reset</a></strong>()</code>&nbsp;</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_org.apache.hadoop.hbase.regionserver.querymatcher.UserScanQueryMatcher">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;org.apache.hadoop.hbase.regionserver.querymatcher.<a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">UserScanQueryMatcher</a></h3>
<code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#create(org.apache.hadoop.hbase.client.Scan,%20org.apache.hadoop.hbase.regionserver.ScanInfo,%20java.util.NavigableSet,%20long,%20long,%20org.apache.hadoop.hbase.regionserver.RegionCoprocessorHost)">create</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#getFilter()">getFilter</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#getNextKeyHint(org.apache.hadoop.hbase.Cell)">getNextKeyHint</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#hasNullColumnInQuery()">hasNullColumnInQuery</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#isUserScan()">isUserScan</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#matchColumn(org.apache.hadoop.hbase.Cell,%20long,%20byte)">matchColumn</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#moreRowsMayExistAfter(org.apache.hadoop.hbase.Cell)">moreRowsMayExistAfter</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#moreRowsMayExistsAfter(int)">moreRowsMayExistsAfter</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_org.apache.hadoop.hbase.regionserver.querymatcher.ScanQueryMatcher">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;org.apache.hadoop.hbase.regionserver.querymatcher.<a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">ScanQueryMatcher</a></h3>
<code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#checkDeleted(org.apache.hadoop.hbase.regionserver.DeleteTracker,%20org.apache.hadoop.hbase.Cell)">checkDeleted</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#clearCurrentRow()">clearCurrentRow</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#compareKeyForNextColumn(org.apache.hadoop.hbase.Cell,%20org.apache.hadoop.hbase.Cell)">compareKeyForNextColumn</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#compareKeyForNextRow(org.apache.hadoop.hbase.Cell,%20org.apache.hadoop.hbase.Cell)">compareKeyForNextRow</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#createStartKeyFromRow(byte[],%20org.apache.hadoop.hbase.regionserver.ScanInfo)">createStartKeyFromRow</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#currentRow()">currentRow</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#getKeyForNextColumn(org.apache.hadoop.hbase.Cell)">getKeyForNextColumn</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#getStartKey()">getStartKey</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#instantiateDeleteTracker(org.apache.hadoop.hbase.regionserver.RegionCoprocessorHost)">instantiateDeleteTracker</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#preCheck(org.apache.hadoop.hbase.Cell)">preCheck</a>, <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#setToNewRow(org.apache.hadoop.hbase.Cell)">setToNewRow</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_java.lang.Object">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></h3>
<code><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#clone()" title="class or interface in java.lang">clone</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#equals(java.lang.Object)" title="class or interface in java.lang">equals</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#finalize()" title="class or interface in java.lang">finalize</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#getClass()" title="class or interface in java.lang">getClass</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#hashCode()" title="class or interface in java.lang">hashCode</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#notify()" title="class or interface in java.lang">notify</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#notifyAll()" title="class or interface in java.lang">notifyAll</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#toString()" title="class or interface in java.lang">toString</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait()" title="class or interface in java.lang">wait</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait(long)" title="class or interface in java.lang">wait</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait(long,%20int)" title="class or interface in java.lang">wait</a></code></li>
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
<a name="RawScanQueryMatcher(org.apache.hadoop.hbase.client.Scan, org.apache.hadoop.hbase.regionserver.ScanInfo, org.apache.hadoop.hbase.regionserver.querymatcher.ColumnTracker, boolean, long, long)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>RawScanQueryMatcher</h4>
<pre>protected&nbsp;RawScanQueryMatcher(<a href="../../../../../../org/apache/hadoop/hbase/client/Scan.html" title="class in org.apache.hadoop.hbase.client">Scan</a>&nbsp;scan,
                   <a href="../../../../../../org/apache/hadoop/hbase/regionserver/ScanInfo.html" title="class in org.apache.hadoop.hbase.regionserver">ScanInfo</a>&nbsp;scanInfo,
                   <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ColumnTracker.html" title="interface in org.apache.hadoop.hbase.regionserver.querymatcher">ColumnTracker</a>&nbsp;columns,
                   boolean&nbsp;hasNullColumn,
                   long&nbsp;oldestUnexpiredTS,
                   long&nbsp;now)</pre>
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
<a name="match(org.apache.hadoop.hbase.Cell)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>match</h4>
<pre>public&nbsp;<a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.MatchCode.html" title="enum in org.apache.hadoop.hbase.regionserver.querymatcher">ScanQueryMatcher.MatchCode</a>&nbsp;match(<a href="../../../../../../org/apache/hadoop/hbase/Cell.html" title="interface in org.apache.hadoop.hbase">Cell</a>&nbsp;cell)
                                 throws <a href="http://docs.oracle.com/javase/7/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></pre>
<div class="block"><strong>Description copied from class:&nbsp;<code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#match(org.apache.hadoop.hbase.Cell)">ScanQueryMatcher</a></code></strong></div>
<div class="block">Determines if the caller should do one of several things:
 <ul>
 <li>seek/skip to the next row (MatchCode.SEEK_NEXT_ROW)</li>
 <li>seek/skip to the next column (MatchCode.SEEK_NEXT_COL)</li>
 <li>include the current KeyValue (MatchCode.INCLUDE)</li>
 <li>ignore the current KeyValue (MatchCode.SKIP)</li>
 <li>got to the next row (MatchCode.DONE)</li>
 </ul></div>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#match(org.apache.hadoop.hbase.Cell)">match</a></code>&nbsp;in class&nbsp;<code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">ScanQueryMatcher</a></code></dd>
<dt><span class="strong">Parameters:</span></dt><dd><code>cell</code> - KeyValue to check</dd>
<dt><span class="strong">Returns:</span></dt><dd>The match code instance.</dd>
<dt><span class="strong">Throws:</span></dt>
<dd><code><a href="http://docs.oracle.com/javase/7/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io">IOException</a></code> - in case there is an internal consistency problem caused by a data
           corruption.</dd></dl>
</li>
</ul>
<a name="reset()">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>reset</h4>
<pre>protected&nbsp;void&nbsp;reset()</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html#reset()">reset</a></code>&nbsp;in class&nbsp;<code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">ScanQueryMatcher</a></code></dd>
</dl>
</li>
</ul>
<a name="isGet()">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>isGet</h4>
<pre>protected&nbsp;boolean&nbsp;isGet()</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html#isGet()">isGet</a></code>&nbsp;in class&nbsp;<code><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/UserScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">UserScanQueryMatcher</a></code></dd>
</dl>
</li>
</ul>
<a name="create(org.apache.hadoop.hbase.client.Scan, org.apache.hadoop.hbase.regionserver.ScanInfo, org.apache.hadoop.hbase.regionserver.querymatcher.ColumnTracker, boolean, long, long)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>create</h4>
<pre>public static&nbsp;<a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/RawScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher">RawScanQueryMatcher</a>&nbsp;create(<a href="../../../../../../org/apache/hadoop/hbase/client/Scan.html" title="class in org.apache.hadoop.hbase.client">Scan</a>&nbsp;scan,
                         <a href="../../../../../../org/apache/hadoop/hbase/regionserver/ScanInfo.html" title="class in org.apache.hadoop.hbase.regionserver">ScanInfo</a>&nbsp;scanInfo,
                         <a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ColumnTracker.html" title="interface in org.apache.hadoop.hbase.regionserver.querymatcher">ColumnTracker</a>&nbsp;columns,
                         boolean&nbsp;hasNullColumn,
                         long&nbsp;oldestUnexpiredTS,
                         long&nbsp;now)</pre>
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
<li><a href="../../../../../../overview-summary.html">Overview</a></li>
<li><a href="package-summary.html">Package</a></li>
<li class="navBarCell1Rev">Class</li>
<li><a href="class-use/RawScanQueryMatcher.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/NormalUserScanQueryMatcher.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/regionserver/querymatcher/ScanDeleteTracker.html" title="class in org.apache.hadoop.hbase.regionserver.querymatcher"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/regionserver/querymatcher/RawScanQueryMatcher.html" target="_top">Frames</a></li>
<li><a href="RawScanQueryMatcher.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../../../allclasses-noframe.html">All Classes</a></li>
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
<li><a href="#nested_classes_inherited_from_class_org.apache.hadoop.hbase.regionserver.querymatcher.ScanQueryMatcher">Nested</a>&nbsp;|&nbsp;</li>
<li><a href="#fields_inherited_from_class_org.apache.hadoop.hbase.regionserver.querymatcher.UserScanQueryMatcher">Field</a>&nbsp;|&nbsp;</li>
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
