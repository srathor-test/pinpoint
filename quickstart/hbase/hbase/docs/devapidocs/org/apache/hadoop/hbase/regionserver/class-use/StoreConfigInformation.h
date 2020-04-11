<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Uses of Interface org.apache.hadoop.hbase.regionserver.StoreConfigInformation (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="Uses of Interface org.apache.hadoop.hbase.regionserver.StoreConfigInformation (Apache HBase 1.4.13 API)";
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
<li><a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">Class</a></li>
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
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/regionserver/class-use/StoreConfigInformation.html" target="_top">Frames</a></li>
<li><a href="StoreConfigInformation.html" target="_top">No Frames</a></li>
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
<h2 title="Uses of Interface org.apache.hadoop.hbase.regionserver.StoreConfigInformation" class="title">Uses of Interface<br>org.apache.hadoop.hbase.regionserver.StoreConfigInformation</h2>
</div>
<div class="classUseContainer">
<ul class="blockList">
<li class="blockList">
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing packages, and an explanation">
<caption><span>Packages that use <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Package</th>
<th class="colLast" scope="col">Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.regionserver">org.apache.hadoop.hbase.regionserver</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.regionserver.compactions">org.apache.hadoop.hbase.regionserver.compactions</a></td>
<td class="colLast">&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList">
<ul class="blockList">
<li class="blockList"><a name="org.apache.hadoop.hbase.regionserver">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a> in <a href="../../../../../../org/apache/hadoop/hbase/regionserver/package-summary.html">org.apache.hadoop.hbase.regionserver</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing subinterfaces, and an explanation">
<caption><span>Subinterfaces of <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a> in <a href="../../../../../../org/apache/hadoop/hbase/regionserver/package-summary.html">org.apache.hadoop.hbase.regionserver</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Interface and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>interface&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/Store.html" title="interface in org.apache.hadoop.hbase.regionserver">Store</a></strong></code>
<div class="block">Interface for objects that hold a column family in a Region.</div>
</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing classes, and an explanation">
<caption><span>Classes in <a href="../../../../../../org/apache/hadoop/hbase/regionserver/package-summary.html">org.apache.hadoop.hbase.regionserver</a> that implement <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Class and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>class&nbsp;</code></td>
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/HStore.html" title="class in org.apache.hadoop.hbase.regionserver">HStore</a></strong></code>
<div class="block">A Store holds a column family in a Region.</div>
</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing constructors, and an explanation">
<caption><span>Constructors in <a href="../../../../../../org/apache/hadoop/hbase/regionserver/package-summary.html">org.apache.hadoop.hbase.regionserver</a> with parameters of type <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/StripeStoreConfig.html#StripeStoreConfig(org.apache.hadoop.conf.Configuration,%20org.apache.hadoop.hbase.regionserver.StoreConfigInformation)">StripeStoreConfig</a></strong>(org.apache.hadoop.conf.Configuration&nbsp;config,
                 <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a>&nbsp;sci)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.regionserver.compactions">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a> in <a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/package-summary.html">org.apache.hadoop.hbase.regionserver.compactions</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing fields, and an explanation">
<caption><span>Fields in <a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/package-summary.html">org.apache.hadoop.hbase.regionserver.compactions</a> declared as <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Field and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a></code></td>
<td class="colLast"><span class="strong">CompactionPolicy.</span><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/CompactionPolicy.html#storeConfigInfo">storeConfigInfo</a></strong></code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing constructors, and an explanation">
<caption><span>Constructors in <a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/package-summary.html">org.apache.hadoop.hbase.regionserver.compactions</a> with parameters of type <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/CompactionPolicy.html#CompactionPolicy(org.apache.hadoop.conf.Configuration,%20org.apache.hadoop.hbase.regionserver.StoreConfigInformation)">CompactionPolicy</a></strong>(org.apache.hadoop.conf.Configuration&nbsp;conf,
                <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a>&nbsp;storeConfigInfo)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/DateTieredCompactionPolicy.html#DateTieredCompactionPolicy(org.apache.hadoop.conf.Configuration,%20org.apache.hadoop.hbase.regionserver.StoreConfigInformation)">DateTieredCompactionPolicy</a></strong>(org.apache.hadoop.conf.Configuration&nbsp;conf,
                          <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a>&nbsp;storeConfigInfo)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/ExploringCompactionPolicy.html#ExploringCompactionPolicy(org.apache.hadoop.conf.Configuration,%20org.apache.hadoop.hbase.regionserver.StoreConfigInformation)">ExploringCompactionPolicy</a></strong>(org.apache.hadoop.conf.Configuration&nbsp;conf,
                         <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a>&nbsp;storeConfigInfo)</code>
<div class="block">Constructor for ExploringCompactionPolicy.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/FIFOCompactionPolicy.html#FIFOCompactionPolicy(org.apache.hadoop.conf.Configuration,%20org.apache.hadoop.hbase.regionserver.StoreConfigInformation)">FIFOCompactionPolicy</a></strong>(org.apache.hadoop.conf.Configuration&nbsp;conf,
                    <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a>&nbsp;storeConfigInfo)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/RatioBasedCompactionPolicy.html#RatioBasedCompactionPolicy(org.apache.hadoop.conf.Configuration,%20org.apache.hadoop.hbase.regionserver.StoreConfigInformation)">RatioBasedCompactionPolicy</a></strong>(org.apache.hadoop.conf.Configuration&nbsp;conf,
                          <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a>&nbsp;storeConfigInfo)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/SortedCompactionPolicy.html#SortedCompactionPolicy(org.apache.hadoop.conf.Configuration,%20org.apache.hadoop.hbase.regionserver.StoreConfigInformation)">SortedCompactionPolicy</a></strong>(org.apache.hadoop.conf.Configuration&nbsp;conf,
                      <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a>&nbsp;storeConfigInfo)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../org/apache/hadoop/hbase/regionserver/compactions/StripeCompactionPolicy.html#StripeCompactionPolicy(org.apache.hadoop.conf.Configuration,%20org.apache.hadoop.hbase.regionserver.StoreConfigInformation,%20org.apache.hadoop.hbase.regionserver.StripeStoreConfig)">StripeCompactionPolicy</a></strong>(org.apache.hadoop.conf.Configuration&nbsp;conf,
                      <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">StoreConfigInformation</a>&nbsp;storeConfigInfo,
                      <a href="../../../../../../org/apache/hadoop/hbase/regionserver/StripeStoreConfig.html" title="class in org.apache.hadoop.hbase.regionserver">StripeStoreConfig</a>&nbsp;config)</code>&nbsp;</td>
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
<li><a href="../../../../../../org/apache/hadoop/hbase/regionserver/StoreConfigInformation.html" title="interface in org.apache.hadoop.hbase.regionserver">Class</a></li>
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
<li><a href="../../../../../../index.html?org/apache/hadoop/hbase/regionserver/class-use/StoreConfigInformation.html" target="_top">Frames</a></li>
<li><a href="StoreConfigInformation.html" target="_top">No Frames</a></li>
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
