<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Uses of Class org.apache.hadoop.hbase.exceptions.DeserializationException (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="Uses of Class org.apache.hadoop.hbase.exceptions.DeserializationException (Apache HBase 1.4.13 API)";
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
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/exceptions/class-use/DeserializationException.html" target="_top">Frames</a></li>
<li><a href="DeserializationException.html" target="_top">No Frames</a></li>
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
<a name="skip-navbar_top">
<!--   -->
</a></div>
<!-- ========= END OF TOP NAVBAR ========= -->
<div class="header">
<h2 title="Uses of Class org.apache.hadoop.hbase.exceptions.DeserializationException" class="title">Uses of Class<br>org.apache.hadoop.hbase.exceptions.DeserializationException</h2>
</div>
<div class="classUseContainer">
<ul class="blockList">
<li class="blockList">
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing packages, and an explanation">
<caption><span>Packages that use <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Package</th>
<th class="colLast" scope="col">Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase">org.apache.hadoop.hbase</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.client">org.apache.hadoop.hbase.client</a></td>
<td class="colLast">
<div class="block">Provides HBase Client</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.filter">org.apache.hadoop.hbase.filter</a></td>
<td class="colLast">
<div class="block">Provides row-level filters applied to HRegion scan results during calls to
 <a href="../../../../../../org/apache/hadoop/hbase/client/ResultScanner.html#next()"><code>ResultScanner.next()</code></a>.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.migration">org.apache.hadoop.hbase.migration</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.protobuf">org.apache.hadoop.hbase.protobuf</a></td>
<td class="colLast">
<div class="block">Holds classes generated from <a href="https://developers.google.com/protocol-buffers/">protobuf</a>
<code>src/main/protobuf</code> definition files.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.replication">org.apache.hadoop.hbase.replication</a></td>
<td class="colLast">
<div class="block">Multi Cluster Replication</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.security.access">org.apache.hadoop.hbase.security.access</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.security.visibility">org.apache.hadoop.hbase.security.visibility</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.util">org.apache.hadoop.hbase.util</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.zookeeper">org.apache.hadoop.hbase.zookeeper</a></td>
<td class="colLast">&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList">
<ul class="blockList">
<li class="blockList"><a name="org.apache.hadoop.hbase">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/package-summary.html">org.apache.hadoop.hbase</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/package-summary.html">org.apache.hadoop.hbase</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/SplitLogTask.html" title="class in org.apache.hadoop.hbase">SplitLogTask</a></code></td>
<td class="colLast"><span class="strong">SplitLogTask.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/SplitLogTask.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;data)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/ClusterId.html" title="class in org.apache.hadoop.hbase">ClusterId</a></code></td>
<td class="colLast"><span class="strong">ClusterId.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/ClusterId.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;bytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/HColumnDescriptor.html" title="class in org.apache.hadoop.hbase">HColumnDescriptor</a></code></td>
<td class="colLast"><span class="strong">HColumnDescriptor.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/HColumnDescriptor.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;bytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/RegionTransition.html" title="class in org.apache.hadoop.hbase">RegionTransition</a></code></td>
<td class="colLast"><span class="strong">RegionTransition.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/RegionTransition.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;data)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a></code></td>
<td class="colLast"><span class="strong">HRegionInfo.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/HRegionInfo.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;bytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/ServerName.html" title="class in org.apache.hadoop.hbase">ServerName</a></code></td>
<td class="colLast"><span class="strong">ServerName.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/ServerName.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;data)</code>
<div class="block">Get a ServerName from the passed in data bytes.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/HTableDescriptor.html" title="class in org.apache.hadoop.hbase">HTableDescriptor</a></code></td>
<td class="colLast"><span class="strong">HTableDescriptor.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/HTableDescriptor.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;bytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a></code></td>
<td class="colLast"><span class="strong">HRegionInfo.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/HRegionInfo.html#parseFrom(byte[],%20int,%20int)">parseFrom</a></strong>(byte[]&nbsp;bytes,
         int&nbsp;offset,
         int&nbsp;len)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.client">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/client/package-summary.html">org.apache.hadoop.hbase.client</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/client/package-summary.html">org.apache.hadoop.hbase.client</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/hadoop/hbase/security/visibility/Authorizations.html" title="class in org.apache.hadoop.hbase.security.visibility">Authorizations</a></code></td>
<td class="colLast"><span class="strong">Query.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/client/Query.html#getAuthorizations()">getAuthorizations</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/hadoop/hbase/security/visibility/CellVisibility.html" title="class in org.apache.hadoop.hbase.security.visibility">CellVisibility</a></code></td>
<td class="colLast"><span class="strong">Mutation.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/client/Mutation.html#getCellVisibility()">getCellVisibility</a></strong>()</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.filter">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/filter/package-summary.html">org.apache.hadoop.hbase.filter</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/filter/package-summary.html">org.apache.hadoop.hbase.filter</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/LongComparator.html" title="class in org.apache.hadoop.hbase.filter">LongComparator</a></code></td>
<td class="colLast"><span class="strong">LongComparator.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/LongComparator.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/FirstKeyOnlyFilter.html" title="class in org.apache.hadoop.hbase.filter">FirstKeyOnlyFilter</a></code></td>
<td class="colLast"><span class="strong">FirstKeyOnlyFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/FirstKeyOnlyFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/SkipFilter.html" title="class in org.apache.hadoop.hbase.filter">SkipFilter</a></code></td>
<td class="colLast"><span class="strong">SkipFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/SkipFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/ColumnCountGetFilter.html" title="class in org.apache.hadoop.hbase.filter">ColumnCountGetFilter</a></code></td>
<td class="colLast"><span class="strong">ColumnCountGetFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/ColumnCountGetFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/WhileMatchFilter.html" title="class in org.apache.hadoop.hbase.filter">WhileMatchFilter</a></code></td>
<td class="colLast"><span class="strong">WhileMatchFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/WhileMatchFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/ColumnPaginationFilter.html" title="class in org.apache.hadoop.hbase.filter">ColumnPaginationFilter</a></code></td>
<td class="colLast"><span class="strong">ColumnPaginationFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/ColumnPaginationFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/BitComparator.html" title="class in org.apache.hadoop.hbase.filter">BitComparator</a></code></td>
<td class="colLast"><span class="strong">BitComparator.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/BitComparator.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/ColumnRangeFilter.html" title="class in org.apache.hadoop.hbase.filter">ColumnRangeFilter</a></code></td>
<td class="colLast"><span class="strong">ColumnRangeFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/ColumnRangeFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/FilterList.html" title="class in org.apache.hadoop.hbase.filter">FilterList</a></code></td>
<td class="colLast"><span class="strong">FilterList.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/FilterList.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/FuzzyRowFilter.html" title="class in org.apache.hadoop.hbase.filter">FuzzyRowFilter</a></code></td>
<td class="colLast"><span class="strong">FuzzyRowFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/FuzzyRowFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/Filter.html" title="class in org.apache.hadoop.hbase.filter">Filter</a></code></td>
<td class="colLast"><span class="strong">Filter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/Filter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>
<div class="block">Concrete implementers can signal a failure condition in their code by throwing an
 <a href="http://docs.oracle.com/javase/7/docs/api/java/io/IOException.html?is-external=true" title="class or interface in java.io"><code>IOException</code></a>.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/DependentColumnFilter.html" title="class in org.apache.hadoop.hbase.filter">DependentColumnFilter</a></code></td>
<td class="colLast"><span class="strong">DependentColumnFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/DependentColumnFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/ColumnPrefixFilter.html" title="class in org.apache.hadoop.hbase.filter">ColumnPrefixFilter</a></code></td>
<td class="colLast"><span class="strong">ColumnPrefixFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/ColumnPrefixFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/ByteArrayComparable.html" title="class in org.apache.hadoop.hbase.filter">ByteArrayComparable</a></code></td>
<td class="colLast"><span class="strong">ByteArrayComparable.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/ByteArrayComparable.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/BinaryComparator.html" title="class in org.apache.hadoop.hbase.filter">BinaryComparator</a></code></td>
<td class="colLast"><span class="strong">BinaryComparator.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/BinaryComparator.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/MultiRowRangeFilter.html" title="class in org.apache.hadoop.hbase.filter">MultiRowRangeFilter</a></code></td>
<td class="colLast"><span class="strong">MultiRowRangeFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/MultiRowRangeFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/RandomRowFilter.html" title="class in org.apache.hadoop.hbase.filter">RandomRowFilter</a></code></td>
<td class="colLast"><span class="strong">RandomRowFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/RandomRowFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/FirstKeyValueMatchingQualifiersFilter.html" title="class in org.apache.hadoop.hbase.filter">FirstKeyValueMatchingQualifiersFilter</a></code></td>
<td class="colLast"><span class="strong">FirstKeyValueMatchingQualifiersFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/FirstKeyValueMatchingQualifiersFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/FilterWrapper.html" title="class in org.apache.hadoop.hbase.filter">FilterWrapper</a></code></td>
<td class="colLast"><span class="strong">FilterWrapper.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/FilterWrapper.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/ValueFilter.html" title="class in org.apache.hadoop.hbase.filter">ValueFilter</a></code></td>
<td class="colLast"><span class="strong">ValueFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/ValueFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/SingleColumnValueFilter.html" title="class in org.apache.hadoop.hbase.filter">SingleColumnValueFilter</a></code></td>
<td class="colLast"><span class="strong">SingleColumnValueFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/SingleColumnValueFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/InclusiveStopFilter.html" title="class in org.apache.hadoop.hbase.filter">InclusiveStopFilter</a></code></td>
<td class="colLast"><span class="strong">InclusiveStopFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/InclusiveStopFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/QualifierFilter.html" title="class in org.apache.hadoop.hbase.filter">QualifierFilter</a></code></td>
<td class="colLast"><span class="strong">QualifierFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/QualifierFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/TimestampsFilter.html" title="class in org.apache.hadoop.hbase.filter">TimestampsFilter</a></code></td>
<td class="colLast"><span class="strong">TimestampsFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/TimestampsFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/NullComparator.html" title="class in org.apache.hadoop.hbase.filter">NullComparator</a></code></td>
<td class="colLast"><span class="strong">NullComparator.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/NullComparator.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/BinaryPrefixComparator.html" title="class in org.apache.hadoop.hbase.filter">BinaryPrefixComparator</a></code></td>
<td class="colLast"><span class="strong">BinaryPrefixComparator.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/BinaryPrefixComparator.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/PageFilter.html" title="class in org.apache.hadoop.hbase.filter">PageFilter</a></code></td>
<td class="colLast"><span class="strong">PageFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/PageFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/PrefixFilter.html" title="class in org.apache.hadoop.hbase.filter">PrefixFilter</a></code></td>
<td class="colLast"><span class="strong">PrefixFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/PrefixFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/FamilyFilter.html" title="class in org.apache.hadoop.hbase.filter">FamilyFilter</a></code></td>
<td class="colLast"><span class="strong">FamilyFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/FamilyFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/KeyOnlyFilter.html" title="class in org.apache.hadoop.hbase.filter">KeyOnlyFilter</a></code></td>
<td class="colLast"><span class="strong">KeyOnlyFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/KeyOnlyFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/SubstringComparator.html" title="class in org.apache.hadoop.hbase.filter">SubstringComparator</a></code></td>
<td class="colLast"><span class="strong">SubstringComparator.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/SubstringComparator.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/RowFilter.html" title="class in org.apache.hadoop.hbase.filter">RowFilter</a></code></td>
<td class="colLast"><span class="strong">RowFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/RowFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/MultipleColumnPrefixFilter.html" title="class in org.apache.hadoop.hbase.filter">MultipleColumnPrefixFilter</a></code></td>
<td class="colLast"><span class="strong">MultipleColumnPrefixFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/MultipleColumnPrefixFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/RegexStringComparator.html" title="class in org.apache.hadoop.hbase.filter">RegexStringComparator</a></code></td>
<td class="colLast"><span class="strong">RegexStringComparator.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/RegexStringComparator.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/filter/SingleColumnValueExcludeFilter.html" title="class in org.apache.hadoop.hbase.filter">SingleColumnValueExcludeFilter</a></code></td>
<td class="colLast"><span class="strong">SingleColumnValueExcludeFilter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/filter/SingleColumnValueExcludeFilter.html#parseFrom(byte[])">parseFrom</a></strong>(byte[]&nbsp;pbBytes)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.migration">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/migration/package-summary.html">org.apache.hadoop.hbase.migration</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/migration/package-summary.html">org.apache.hadoop.hbase.migration</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">NamespaceUpgrade.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/migration/NamespaceUpgrade.html#upgradeTableDirs()">upgradeTableDirs</a></strong>()</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.protobuf">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/protobuf/package-summary.html">org.apache.hadoop.hbase.protobuf</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/protobuf/package-summary.html">org.apache.hadoop.hbase.protobuf</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static org.apache.hadoop.hbase.protobuf.generated.MasterProtos.DispatchMergingRegionsRequest</code></td>
<td class="colLast"><span class="strong">RequestConverter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/protobuf/RequestConverter.html#buildDispatchMergingRegionsRequest(byte[],%20byte[],%20boolean)">buildDispatchMergingRegionsRequest</a></strong>(byte[]&nbsp;encodedNameOfRegionA,
                                  byte[]&nbsp;encodedNameOfRegionB,
                                  boolean&nbsp;forcible)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static org.apache.hadoop.hbase.protobuf.generated.MasterProtos.MoveRegionRequest</code></td>
<td class="colLast"><span class="strong">RequestConverter.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/protobuf/RequestConverter.html#buildMoveRegionRequest(byte[],%20byte[])">buildMoveRegionRequest</a></strong>(byte[]&nbsp;encodedRegionName,
                      byte[]&nbsp;destServerName)</code>
<div class="block">Create a protocol buffer MoveRegionRequest</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static void</code></td>
<td class="colLast"><span class="strong">ProtobufUtil.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/protobuf/ProtobufUtil.html#expectPBMagicPrefix(byte[])">expectPBMagicPrefix</a></strong>(byte[]&nbsp;bytes)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/security/visibility/Authorizations.html" title="class in org.apache.hadoop.hbase.security.visibility">Authorizations</a></code></td>
<td class="colLast"><span class="strong">ProtobufUtil.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/protobuf/ProtobufUtil.html#toAuthorizations(byte[])">toAuthorizations</a></strong>(byte[]&nbsp;protoBytes)</code>
<div class="block">Convert a protocol buffer Authorizations bytes to a client Authorizations</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/security/visibility/CellVisibility.html" title="class in org.apache.hadoop.hbase.security.visibility">CellVisibility</a></code></td>
<td class="colLast"><span class="strong">ProtobufUtil.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/protobuf/ProtobufUtil.html#toCellVisibility(byte[])">toCellVisibility</a></strong>(byte[]&nbsp;protoBytes)</code>
<div class="block">Convert a protocol buffer CellVisibility bytes to a client CellVisibility</div>
</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.replication">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/replication/package-summary.html">org.apache.hadoop.hbase.replication</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/replication/package-summary.html">org.apache.hadoop.hbase.replication</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static boolean</code></td>
<td class="colLast"><span class="strong">ReplicationPeerZKImpl.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/replication/ReplicationPeerZKImpl.html#isStateEnabled(byte[])">isStateEnabled</a></strong>(byte[]&nbsp;bytes)</code>
<div class="block">Parse the raw data from ZK to get a peer's state</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static <a href="../../../../../../org/apache/hadoop/hbase/replication/ReplicationPeerConfig.html" title="class in org.apache.hadoop.hbase.replication">ReplicationPeerConfig</a></code></td>
<td class="colLast"><span class="strong">ReplicationSerDeHelper.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/replication/ReplicationSerDeHelper.html#parsePeerFrom(byte[])">parsePeerFrom</a></strong>(byte[]&nbsp;bytes)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.security.access">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/security/access/package-summary.html">org.apache.hadoop.hbase.security.access</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/security/access/package-summary.html">org.apache.hadoop.hbase.security.access</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static com.google.common.collect.ListMultimap&lt;<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>,<a href="../../../../../../org/apache/hadoop/hbase/security/access/TablePermission.html" title="class in org.apache.hadoop.hbase.security.access">TablePermission</a>&gt;</code></td>
<td class="colLast"><span class="strong">AccessControlLists.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/security/access/AccessControlLists.html#readPermissions(byte[],%20org.apache.hadoop.conf.Configuration)">readPermissions</a></strong>(byte[]&nbsp;data,
               org.apache.hadoop.conf.Configuration&nbsp;conf)</code>
<div class="block">Reads a set of permissions as <code>Writable</code> instances
 from the input stream.</div>
</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.security.visibility">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/security/visibility/package-summary.html">org.apache.hadoop.hbase.security.visibility</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/security/visibility/package-summary.html">org.apache.hadoop.hbase.security.visibility</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;org.apache.hadoop.hbase.protobuf.generated.VisibilityLabelsProtos.VisibilityLabel&gt;</code></td>
<td class="colLast"><span class="strong">VisibilityUtils.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/security/visibility/VisibilityUtils.html#readLabelsFromZKData(byte[])">readLabelsFromZKData</a></strong>(byte[]&nbsp;data)</code>
<div class="block">Reads back from the zookeeper.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static org.apache.hadoop.hbase.protobuf.generated.VisibilityLabelsProtos.MultiUserAuthorizations</code></td>
<td class="colLast"><span class="strong">VisibilityUtils.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/security/visibility/VisibilityUtils.html#readUserAuthsFromZKData(byte[])">readUserAuthsFromZKData</a></strong>(byte[]&nbsp;data)</code>
<div class="block">Reads back User auth data written to zookeeper.</div>
</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.util">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/util/package-summary.html">org.apache.hadoop.hbase.util</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/util/package-summary.html">org.apache.hadoop.hbase.util</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static void</code></td>
<td class="colLast"><span class="strong">FSUtils.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/util/FSUtils.html#checkVersion(org.apache.hadoop.fs.FileSystem,%20org.apache.hadoop.fs.Path,%20boolean)">checkVersion</a></strong>(org.apache.hadoop.fs.FileSystem&nbsp;fs,
            org.apache.hadoop.fs.Path&nbsp;rootdir,
            boolean&nbsp;message)</code>
<div class="block">Verifies current version of file system</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static void</code></td>
<td class="colLast"><span class="strong">FSUtils.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/util/FSUtils.html#checkVersion(org.apache.hadoop.fs.FileSystem,%20org.apache.hadoop.fs.Path,%20boolean,%20int,%20int)">checkVersion</a></strong>(org.apache.hadoop.fs.FileSystem&nbsp;fs,
            org.apache.hadoop.fs.Path&nbsp;rootdir,
            boolean&nbsp;message,
            int&nbsp;wait,
            int&nbsp;retries)</code>
<div class="block">Verifies current version of file system</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a></code></td>
<td class="colLast"><span class="strong">FSUtils.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/util/FSUtils.html#getVersion(org.apache.hadoop.fs.FileSystem,%20org.apache.hadoop.fs.Path)">getVersion</a></strong>(org.apache.hadoop.fs.FileSystem&nbsp;fs,
          org.apache.hadoop.fs.Path&nbsp;rootdir)</code>
<div class="block">Verifies current version of file system</div>
</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.zookeeper">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a> in <a href="../../../../../../org/apache/hadoop/hbase/zookeeper/package-summary.html">org.apache.hadoop.hbase.zookeeper</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/zookeeper/package-summary.html">org.apache.hadoop.hbase.zookeeper</a> with parameters of type <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static org.apache.zookeeper.KeeperException</code></td>
<td class="colLast"><span class="strong">ZKUtil.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.html#convert(org.apache.hadoop.hbase.exceptions.DeserializationException)">convert</a></strong>(<a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a>&nbsp;e)</code>
<div class="block">Convert a <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions"><code>DeserializationException</code></a> to a more palatable <code>KeeperException</code>.</div>
</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../org/apache/hadoop/hbase/zookeeper/package-summary.html">org.apache.hadoop.hbase.zookeeper</a> that throw <a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">DeserializationException</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static org.apache.hadoop.hbase.protobuf.generated.ZooKeeperProtos.Master</code></td>
<td class="colLast"><span class="strong">MasterAddressTracker.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/zookeeper/MasterAddressTracker.html#parse(byte[])">parse</a></strong>(byte[]&nbsp;data)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static org.apache.hadoop.hbase.protobuf.generated.ClusterStatusProtos.RegionStoreSequenceIds</code></td>
<td class="colLast"><span class="strong">ZKUtil.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.html#parseRegionStoreSequenceIds(byte[])">parseRegionStoreSequenceIds</a></strong>(byte[]&nbsp;bytes)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static long</code></td>
<td class="colLast"><span class="strong">ZKUtil.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.html#parseWALPositionFrom(byte[])">parseWALPositionFrom</a></strong>(byte[]&nbsp;bytes)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
</ul>
</li>
</ul>
</div>
<!-- ======= START OF BOTTOM NAVBAR ====== -->
<div class="bottomNav"><a name="navbar_bottom">
<!--   -->
</a><a href="#skip-navbar_bottom" title="Skip navigation links"></a><a name="navbar_bottom_firstrow">
<!--   -->
</a>
<ul class="navList" title="Navigation">
<li><a href="../../../../../../overview-summary.html">Overview</a></li>
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/exceptions/DeserializationException.html" title="class in org.apache.hadoop.hbase.exceptions">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/exceptions/class-use/DeserializationException.html" target="_top">Frames</a></li>
<li><a href="DeserializationException.html" target="_top">No Frames</a></li>
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
<a name="skip-navbar_bottom">
<!--   -->
</a></div>
<!-- ======== END OF BOTTOM NAVBAR ======= -->
<p class="legalCopy"><small>Copyright &#169; 2007&#x2013;2020 <a href="https://www.apache.org/">The Apache Software Foundation</a>. All rights reserved.</small></p>
</body>
</html>
