<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>ReplicationThrottler (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="ReplicationThrottler (Apache HBase 1.4.13 API)";
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
<li><a href="class-use/ReplicationThrottler.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/ReplicationSyncUp.html" title="class in org.apache.hadoop.hbase.replication.regionserver"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/SourceFSConfigurationProvider.html" title="interface in org.apache.hadoop.hbase.replication.regionserver"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/replication/regionserver/ReplicationThrottler.html" target="_top">Frames</a></li>
<li><a href="ReplicationThrottler.html" target="_top">No Frames</a></li>
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
<div class="subTitle">org.apache.hadoop.hbase.replication.regionserver</div>
<h2 title="Class ReplicationThrottler" class="title">Class ReplicationThrottler</h2>
</div>
<div class="contentContainer">
<ul class="inheritance">
<li><a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">java.lang.Object</a></li>
<li>
<ul class="inheritance">
<li>org.apache.hadoop.hbase.replication.regionserver.ReplicationThrottler</li>
</ul>
</li>
</ul>
<div class="description">
<ul class="blockList">
<li class="blockList">
<hr>
<br>
<pre><a href="../../../../../../org/apache/hadoop/hbase/classification/InterfaceAudience.Private.html" title="annotation in org.apache.hadoop.hbase.classification">@InterfaceAudience.Private</a>
public class <span class="strong">ReplicationThrottler</span>
extends <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Object.html?is-external=true" title="class or interface in java.lang">Object</a></pre>
<div class="block">Per-peer per-node throttling controller for replication: enabled if
 bandwidth &gt; 0, a cycle = 100ms, by throttling we guarantee data pushed
 to peer within each cycle won't exceed 'bandwidth' bytes</div>
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
<td class="colOne"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/ReplicationThrottler.html#ReplicationThrottler(double)">ReplicationThrottler</a></strong>(double&nbsp;bandwidth)</code>
<div class="block">ReplicationThrottler constructor
 If bandwidth less than 1, throttling is disabled</div>
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
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/ReplicationThrottler.html#addPushSize(int)">addPushSize</a></strong>(int&nbsp;size)</code>
<div class="block">Add current size to the current cycle's total push size</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>long</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/ReplicationThrottler.html#getNextSleepInterval(int)">getNextSleepInterval</a></strong>(int&nbsp;size)</code>
<div class="block">Get how long the caller should sleep according to the current size and
 current cycle's total push size and start tick, return the sleep interval
 for throttling control.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/ReplicationThrottler.html#isEnabled()">isEnabled</a></strong>()</code>
<div class="block">If throttling is enabled</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/ReplicationThrottler.html#resetStartTick()">resetStartTick</a></strong>()</code>
<div class="block">Reset the cycle start tick to NOW</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/ReplicationThrottler.html#setBandwidth(double)">setBandwidth</a></strong>(double&nbsp;bandwidth)</code>&nbsp;</td>
</tr>
</table>
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
<a name="ReplicationThrottler(double)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>ReplicationThrottler</h4>
<pre>public&nbsp;ReplicationThrottler(double&nbsp;bandwidth)</pre>
<div class="block">ReplicationThrottler constructor
 If bandwidth less than 1, throttling is disabled</div>
<dl><dt><span class="strong">Parameters:</span></dt><dd><code>bandwidth</code> - per cycle(100ms)</dd></dl>
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
<a name="isEnabled()">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>isEnabled</h4>
<pre>public&nbsp;boolean&nbsp;isEnabled()</pre>
<div class="block">If throttling is enabled</div>
<dl><dt><span class="strong">Returns:</span></dt><dd>true if throttling is enabled</dd></dl>
</li>
</ul>
<a name="getNextSleepInterval(int)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>getNextSleepInterval</h4>
<pre>public&nbsp;long&nbsp;getNextSleepInterval(int&nbsp;size)</pre>
<div class="block">Get how long the caller should sleep according to the current size and
 current cycle's total push size and start tick, return the sleep interval
 for throttling control.</div>
<dl><dt><span class="strong">Parameters:</span></dt><dd><code>size</code> - is the size of edits to be pushed</dd>
<dt><span class="strong">Returns:</span></dt><dd>sleep interval for throttling control</dd></dl>
</li>
</ul>
<a name="addPushSize(int)">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>addPushSize</h4>
<pre>public&nbsp;void&nbsp;addPushSize(int&nbsp;size)</pre>
<div class="block">Add current size to the current cycle's total push size</div>
<dl><dt><span class="strong">Parameters:</span></dt><dd><code>size</code> - is the current size added to the current cycle's
 total push size</dd></dl>
</li>
</ul>
<a name="resetStartTick()">
<!--   -->
</a>
<ul class="blockList">
<li class="blockList">
<h4>resetStartTick</h4>
<pre>public&nbsp;void&nbsp;resetStartTick()</pre>
<div class="block">Reset the cycle start tick to NOW</div>
</li>
</ul>
<a name="setBandwidth(double)">
<!--   -->
</a>
<ul class="blockListLast">
<li class="blockList">
<h4>setBandwidth</h4>
<pre>public&nbsp;void&nbsp;setBandwidth(double&nbsp;bandwidth)</pre>
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
<li><a href="class-use/ReplicationThrottler.html">Use</a></li>
<li><a href="package-tree.html">Tree</a></li>
<li><a href="../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/ReplicationSyncUp.html" title="class in org.apache.hadoop.hbase.replication.regionserver"><span class="strong">Prev Class</span></a></li>
<li><a href="../../../../../../org/apache/hadoop/hbase/replication/regionserver/SourceFSConfigurationProvider.html" title="interface in org.apache.hadoop.hbase.replication.regionserver"><span class="strong">Next Class</span></a></li>
</ul>
<ul class="navList">
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/replication/regionserver/ReplicationThrottler.html" target="_top">Frames</a></li>
<li><a href="ReplicationThrottler.html" target="_top">No Frames</a></li>
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
