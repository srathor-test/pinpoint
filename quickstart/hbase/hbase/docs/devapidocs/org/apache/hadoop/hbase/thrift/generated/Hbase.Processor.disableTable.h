<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Hbase.Processor.disableTable (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="Hbase.Processor.disableTable (Apache HBase 1.4.13 API)";
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
<li><a href="class-use/Hbase.Processor.disableTable.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.deleteTable.html" title="class in org.apache.hadoop.hbase.thrift.generated"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.enableTable.html" title="class in org.apache.hadoop.hbase.thrift.generated"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html" target="_top">Frames</a></li>
<li><a href="Hbase.Processor.disableTable.html" target="_top">No Frames</a></li>
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
<h2 title="Class Hbase.Processor.disableTable" class="title">Class Hbase.Processor.disableTable&lt;I extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Iface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.Iface</a>&gt;</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li>org.apache.thrift.ProcessFunction&lt;I,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_args</a>&gt;</li>
<li>
<ul class="inheritance">
<li>org.apache.hadoop.hbase.thrift.generated.Hbase.Processor.disableTable&lt;I&gt;</li>
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
<dd><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.Processor</a>&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.html" title="type parameter in Hbase.Processor">I</a> extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Iface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.Iface</a>&gt;</dd>
</dl>
<hr>
<br>
<pre>public static class <span class="strong">Hbase.Processor.disableTable&lt;I extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Iface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.Iface</a>&gt;</span>
extends org.apache.thrift.ProcessFunction&lt;I,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_args</a>&gt;</pre>
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
<td class="colOne"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html#Hbase.Processor.disableTable()">Hbase.Processor.disableTable</a></strong>()</code>&nbsp;</td>
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
<td class="colFirst"><code><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_args</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html#getEmptyArgsInstance()">getEmptyArgsInstance</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_result.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_result</a></code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html#getResult(I,%20org.apache.hadoop.hbase.thrift.generated.Hbase.disableTable_args)">getResult</a></strong>(<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html" title="type parameter in Hbase.Processor.disableTable">I</a>&nbsp;iface,
         <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_args</a>&nbsp;args)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html#isOneway()">isOneway</a></strong>()</code>&nbsp;</td>
</tr>
</table>
<ul class="blockList">
<li class="blockList"><a name="methods_inherited_from_class_org.apache.thrift.ProcessFunction">
<!--   -->
</a>
<h3>Methods inherited from class&nbsp;org.apache.thrift.ProcessFunction</h3>
<code>getMethodName, process</code></li>
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
<a name="Hbase.Processor.disableTable()">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>Hbase.Processor.disableTable</h4>
<pre>public&nbsp;Hbase.Processor.disableTable()</pre>
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
<pre>public&nbsp;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_args</a>&nbsp;getEmptyArgsInstance()</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code>getEmptyArgsInstance</code>&nbsp;in class&nbsp;<code>org.apache.thrift.ProcessFunction&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html" title="type parameter in Hbase.Processor.disableTable">I</a> extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Iface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.Iface</a>,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_args</a>&gt;</code></dd>
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
<dd><code>isOneway</code>&nbsp;in class&nbsp;<code>org.apache.thrift.ProcessFunction&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html" title="type parameter in Hbase.Processor.disableTable">I</a> extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Iface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.Iface</a>,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_args</a>&gt;</code></dd>
</dl>
</li>
</ul>
<a name="getResult(org.apache.hadoop.hbase.thrift.generated.Hbase.Iface,org.apache.hadoop.hbase.thrift.generated.Hbase.disableTable_args)">
<!--   -->
</a><a name="getResult(I, org.apache.hadoop.hbase.thrift.generated.Hbase.disableTable_args)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>getResult</h4>
<pre>public&nbsp;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_result.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_result</a>&nbsp;getResult(<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html" title="type parameter in Hbase.Processor.disableTable">I</a>&nbsp;iface,
                                  <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_args</a>&nbsp;args)
                                    throws org.apache.thrift.TException</pre>
<dl>
<dt><strong>Specified by:</strong></dt>
<dd><code>getResult</code>&nbsp;in class&nbsp;<code>org.apache.thrift.ProcessFunction&lt;<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html" title="type parameter in Hbase.Processor.disableTable">I</a> extends <a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Iface.html" title="interface in org.apache.hadoop.hbase.thrift.generated">Hbase.Iface</a>,<a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.disableTable_args.html" title="class in org.apache.hadoop.hbase.thrift.generated">Hbase.disableTable_args</a>&gt;</code></dd>
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
<li><a href="class-use/Hbase.Processor.disableTable.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.deleteTable.html" title="class in org.apache.hadoop.hbase.thrift.generated"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.enableTable.html" title="class in org.apache.hadoop.hbase.thrift.generated"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/thrift/generated/Hbase.Processor.disableTable.html" target="_top">Frames</a></li>
<li><a href="Hbase.Processor.disableTable.html" target="_top">No Frames</a></li>
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
