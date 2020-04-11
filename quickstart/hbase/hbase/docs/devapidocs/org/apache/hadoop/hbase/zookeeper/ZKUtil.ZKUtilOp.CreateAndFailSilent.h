<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>ZKUtil.ZKUtilOp.CreateAndFailSilent (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="ZKUtil.ZKUtilOp.CreateAndFailSilent (Apache HBase 1.4.13 API)";
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
<li><a href="class-use/ZKUtil.ZKUtilOp.CreateAndFailSilent.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html" title="class in org.apache.hadoop.hbase.zookeeper"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.DeleteNodeFailSilent.html" title="class in org.apache.hadoop.hbase.zookeeper"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.CreateAndFailSilent.html" target="_top">Frames</a></li>
<li><a href="ZKUtil.ZKUtilOp.CreateAndFailSilent.html" target="_top">No Frames</a></li>
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
<li><a href="#nested_classes_inherited_from_class_org.apache.hadoop.hbase.zookeeper.ZKUtil.ZKUtilOp">Nested</a>&nbsp;|&nbsp;</li>
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
<div class="subTitle">org.apache.hadoop.hbase.zookeeper</div>
<h2 title="Class ZKUtil.ZKUtilOp.CreateAndFailSilent" class="title">Class ZKUtil.ZKUtilOp.CreateAndFailSilent</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html" title="class in org.apache.hadoop.hbase.zookeeper">org.apache.hadoop.hbase.zookeeper.ZKUtil.ZKUtilOp</a></li>
<li>
<ul class="inheritance">
<li>org.apache.hadoop.hbase.zookeeper.ZKUtil.ZKUtilOp.CreateAndFailSilent</li>
</ul>
</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<dl>
<dt>Enclosing class:</dt>
<dd><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html" title="class in org.apache.hadoop.hbase.zookeeper">ZKUtil.ZKUtilOp</a></dd>
</dl>
<hr>
<br>
<pre>public static class <span class="strong">ZKUtil.ZKUtilOp.CreateAndFailSilent</span>
extends <a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html" title="class in org.apache.hadoop.hbase.zookeeper">ZKUtil.ZKUtilOp</a></pre>
<div class="block">ZKUtilOp representing createAndFailSilent in ZooKeeper
 (attempt to create node, ignore error if already exists)</div>
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
<li class="blockList"><a name="nested_classes_inherited_from_class_org.apache.hadoop.hbase.zookeeper.ZKUtil.ZKUtilOp">
<!--   -->
</a>
<h3>Nested classes/interfaces inherited from class&nbsp;org.apache.hadoop.hbase.zookeeper.<a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html" title="class in org.apache.hadoop.hbase.zookeeper">ZKUtil.ZKUtilOp</a></h3>
<code><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.CreateAndFailSilent.html" title="class in org.apache.hadoop.hbase.zookeeper">ZKUtil.ZKUtilOp.CreateAndFailSilent</a>, <a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.DeleteNodeFailSilent.html" title="class in org.apache.hadoop.hbase.zookeeper">ZKUtil.ZKUtilOp.DeleteNodeFailSilent</a>, <a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.SetData.html" title="class in org.apache.hadoop.hbase.zookeeper">ZKUtil.ZKUtilOp.SetData</a></code></li>
</ul>
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
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.CreateAndFailSilent.html#equals(java.lang.Object)">equals</a></strong>(<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a>&nbsp;o)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>byte[]</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.CreateAndFailSilent.html#getData()">getData</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>int</code></td>
<td class="colLast"><code><strong><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.CreateAndFailSilent.html#hashCode()">hashCode</a></strong>()</code>&nbsp;</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_org.apache.hadoop.hbase.zookeeper.ZKUtil.ZKUtilOp">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;org.apache.hadoop.hbase.zookeeper.<a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html" title="class in org.apache.hadoop.hbase.zookeeper">ZKUtil.ZKUtilOp</a></h3>
<code><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html#createAndFailSilent(java.lang.String,%20byte[])">createAndFailSilent</a>, <a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html#deleteNodeFailSilent(java.lang.String)">deleteNodeFailSilent</a>, <a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html#getPath()">getPath</a>, <a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html#setData(java.lang.String,%20byte[])">setData</a></code></li>
</ul>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_java.lang.Object">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;java.lang.<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></h3>
<code><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#clone()" title="class or interface in java.lang">clone</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#finalize()" title="class or interface in java.lang">finalize</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#getClass()" title="class or interface in java.lang">getClass</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#notify()" title="class or interface in java.lang">notify</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#notifyAll()" title="class or interface in java.lang">notifyAll</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#toString()" title="class or interface in java.lang">toString</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait()" title="class or interface in java.lang">wait</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait(long)" title="class or interface in java.lang">wait</a>, <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#wait(long,%20int)" title="class or interface in java.lang">wait</a></code></li>
</ul>
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
<a name="getData()">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getData</h4>
<pre>public&nbsp;byte[]&nbsp;getData()</pre>
</li>
</ul>
<a name="equals(java.lang.Object)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>equals</h4>
<pre>public&nbsp;boolean&nbsp;equals(<a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a>&nbsp;o)</pre>
<dl>
<dt><strong>Overrides:</strong></dt>
<dd><code><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#equals(java.lang.Object)" title="class or interface in java.lang">equals</a></code>&nbsp;in class&nbsp;<code><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></code></dd>
</dl>
</li>
</ul>
<a name="hashCode()">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>hashCode</h4>
<pre>public&nbsp;int&nbsp;hashCode()</pre>
<dl>
<dt><strong>Overrides:</strong></dt>
<dd><code><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true#hashCode()" title="class or interface in java.lang">hashCode</a></code>&nbsp;in class&nbsp;<code><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></code></dd>
</dl>
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
<li><a href="class-use/ZKUtil.ZKUtilOp.CreateAndFailSilent.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.html" title="class in org.apache.hadoop.hbase.zookeeper"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.DeleteNodeFailSilent.html" title="class in org.apache.hadoop.hbase.zookeeper"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../index.html?org/apache/hadoop/hbase/zookeeper/ZKUtil.ZKUtilOp.CreateAndFailSilent.html" target="_top">Frames</a></li>
<li><a href="ZKUtil.ZKUtilOp.CreateAndFailSilent.html" target="_top">No Frames</a></li>
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
<li><a href="#nested_classes_inherited_from_class_org.apache.hadoop.hbase.zookeeper.ZKUtil.ZKUtilOp">Nested</a>&nbsp;|&nbsp;</li>
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
