<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Hbase.AsyncProcessor.getRows (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="Hbase.AsyncProcessor.getRows (Apache HBase 1.4.13 API)";
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
<li><a href="class-use/Hbase.AsyncProcessor.getRows.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRowOrBefore.html" title="class in org.apache.hadoop.hbase.thrift.generated"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRowsTs.html" title="class in org.apache.hadoop.hbase.thrift.generated"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html" target="_top">Frames</a></li>
<li><a href="Hbase.AsyncProcessor.getRows.html" target="_top">No Frames</a></li>
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
<li>Nested&nbsp;|&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
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
<div class="subTitle">org.apache.hadoop.hbase.thrift.generated</div>
<h2 title="Class Hbase.AsyncProcessor.getRows" class="title">Class Hbase.AsyncProcessor.getRows&lt;I extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncIface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.AsyncIface</a>&gt;</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li>org.apache.thrift.AsyncProcessFunction&lt;I,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a>,<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;</li>
<li>
<ul class="inheritance">
<li>org.apache.hadoop.hbase.thrift.generated.Hbase.AsyncProcessor.getRows&lt;I&gt;</li>
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
<dd><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.AsyncProcessor</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.html" title="type parameter in Hbase.AsyncProcessor">I</a> extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncIface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.AsyncIface</a>&gt;</dd>
</dl>
<hr>
<br>
<pre>public static class <span class="strong">Hbase.AsyncProcessor.getRows&lt;I extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncIface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.AsyncIface</a>&gt;</span>
extends org.apache.thrift.AsyncProcessFunction&lt;I,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a>,<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;</pre>
</li>
</ul>
</div>
<div class="summary">
<ul class="blockList">
<li class="blockList">
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
<td class="colOne"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html#Hbase.AsyncProcessor.getRows()">Hbase.AsyncProcessor.getRows</a></strong>()</code>&nbsp;</td>
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
<td class="colFirst"><code><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html#getEmptyArgsInstance()">getEmptyArgsInstance</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>org.apache.thrift.async.AsyncMethodCallback&lt;<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html#getResultHandler(org.apache.thrift.server.AbstractNonblockingServer.AsyncFrameBuffer,%20int)">getResultHandler</a></strong>(org.apache.thrift.server.AbstractNonblockingServer.AsyncFrameBuffer&nbsp;fb,
                int&nbsp;seqid)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html#isOneway()">isOneway</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html#start(I,%20org.apache.hadoop.hbase.thrift.generated.Hbase.getRows_args,%20org.apache.thrift.async.AsyncMethodCallback)">start</a></strong>(<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html" title="type parameter in Hbase.AsyncProcessor.getRows">I</a>&nbsp;iface,
     <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a>&nbsp;args,
     org.apache.thrift.async.AsyncMethodCallback&lt;<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;&nbsp;resultHandler)</code>&nbsp;</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_org.apache.thrift.AsyncProcessFunction">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;org.apache.thrift.AsyncProcessFunction</h3>
<code>getMethodName, sendResponse</code></li>
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
<a name="Hbase.AsyncProcessor.getRows()">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>Hbase.AsyncProcessor.getRows</h4>
<pre>public&nbsp;Hbase.AsyncProcessor.getRows()</pre>
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
<a name="getEmptyArgsInstance()">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getEmptyArgsInstance</h4>
<pre>public&nbsp;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a>&nbsp;getEmptyArgsInstance()</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code>getEmptyArgsInstance</code>&nbsp;in class&nbsp;<code>org.apache.thrift.AsyncProcessFunction&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html" title="type parameter in Hbase.AsyncProcessor.getRows">I</a> extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncIface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.AsyncIface</a>,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a>,<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;</code></dd>
</dl>
</li>
</ul>
<a name="getResultHandler(org.apache.thrift.server.AbstractNonblockingServer.AsyncFrameBuffer, int)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getResultHandler</h4>
<pre>public&nbsp;org.apache.thrift.async.AsyncMethodCallback&lt;<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;&nbsp;getResultHandler(org.apache.thrift.server.AbstractNonblockingServer.AsyncFrameBuffer&nbsp;fb,
                                                                             int&nbsp;seqid)</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code>getResultHandler</code>&nbsp;in class&nbsp;<code>org.apache.thrift.AsyncProcessFunction&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html" title="type parameter in Hbase.AsyncProcessor.getRows">I</a> extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncIface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.AsyncIface</a>,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a>,<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;</code></dd>
</dl>
</li>
</ul>
<a name="isOneway()">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>isOneway</h4>
<pre>protected&nbsp;boolean&nbsp;isOneway()</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code>isOneway</code>&nbsp;in class&nbsp;<code>org.apache.thrift.AsyncProcessFunction&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html" title="type parameter in Hbase.AsyncProcessor.getRows">I</a> extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncIface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.AsyncIface</a>,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a>,<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;</code></dd>
</dl>
</li>
</ul>
<a name="start(org.apache.hadoop.hbase.thrift.generated.Hbase.AsyncIface,org.apache.hadoop.hbase.thrift.generated.Hbase.getRows_args,org.apache.thrift.async.AsyncMethodCallback)">
<!--   -->
</a><a name="start(I, org.apache.hadoop.hbase.thrift.generated.Hbase.getRows_args, org.apache.thrift.async.AsyncMethodCallback)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>start</h4>
<pre>public&nbsp;void&nbsp;start(<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html" title="type parameter in Hbase.AsyncProcessor.getRows">I</a>&nbsp;iface,
         <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a>&nbsp;args,
         org.apache.thrift.async.AsyncMethodCallback&lt;<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;&nbsp;resultHandler)
           throws org.apache.thrift.TException</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code>start</code>&nbsp;in class&nbsp;<code>org.apache.thrift.AsyncProcessFunction&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html" title="type parameter in Hbase.AsyncProcessor.getRows">I</a> extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncIface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.AsyncIface</a>,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.getRows_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.getRows_args</a>,<a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/TRowResult.html" title="class in org.apache.hadoop.hbase.thrift.generated">TRowResult</a>&gt;&gt;</code></dd>
<dt><span class="strong">Throws:</span></dt>
<dd><code>org.apache.thrift.TException</code></dd></dl>
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
<li><a href="class-use/Hbase.AsyncProcessor.getRows.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRowOrBefore.html" title="class in org.apache.hadoop.hbase.thrift.generated"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRowsTs.html" title="class in org.apache.hadoop.hbase.thrift.generated"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/thrift/generated/Hbase.AsyncProcessor.getRows.html" target="_top">Frames</a></li>
<li><a href="Hbase.AsyncProcessor.getRows.html" target="_top">No Frames</a></li>
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
<li>Nested&nbsp;|&nbsp;</li>
<li>Field&nbsp;|&nbsp;</li>
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
