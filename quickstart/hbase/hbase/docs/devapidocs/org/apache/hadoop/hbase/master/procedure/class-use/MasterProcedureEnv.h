<!DOCTYPE HTML PUBLIC "-//W3C//DTD HTML 4.01 Transitional//EN" "http://www.w3.org/TR/html4/loose.dtd">
<!-- NewPage -->
<html lang="en">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8">
<title>Uses of Class org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv (Apache HBase 1.4.13 API)</title>
<link rel="stylesheet" type="text/css" href="../../../../../../../stylesheet.css" title="Style">
</head>
<body>
<script type="text/javascript"><!--
    try {
        if (location.href.indexOf('is-external=true') == -1) {
            parent.document.title="Uses of Class org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv (Apache HBase 1.4.13 API)";
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
<li><a href="../../../../../../../overview-summary.html">Overview</a></li>
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../package-tree.html">Tree</a></li>
<li><a href="../../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../../../index.html?org/apache/hadoop/hbase/master/procedure/class-use/MasterProcedureEnv.html" target="_top">Frames</a></li>
<li><a href="MasterProcedureEnv.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_top">
<li><a href="../../../../../../../allclasses-noframe.html">All Classes</a></li>
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
<h2 title="Uses of Class org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv" class="title">Uses of Class<br>org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv</h2>
</div>
<div class="classUseContainer">
<ul class="blockList">
<li class="blockList">
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing packages, and an explanation">
<caption><span>Packages that use <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Package</th>
<th class="colLast" scope="col">Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.coprocessor">org.apache.hadoop.hbase.coprocessor</a></td>
<td class="colLast">
<div class="block">Table of Contents</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.master">org.apache.hadoop.hbase.master</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.master.procedure">org.apache.hadoop.hbase.master.procedure</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.rsgroup">org.apache.hadoop.hbase.rsgroup</a></td>
<td class="colLast">&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><a href="#org.apache.hadoop.hbase.security.access">org.apache.hadoop.hbase.security.access</a></td>
<td class="colLast">&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList">
<ul class="blockList">
<li class="blockList"><a name="org.apache.hadoop.hbase.coprocessor">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a> in <a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/package-summary.html">org.apache.hadoop.hbase.coprocessor</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Method parameters in <a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/package-summary.html">org.apache.hadoop.hbase.coprocessor</a> with type arguments of type <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">MasterObserver.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/MasterObserver.html#preAbortProcedure(org.apache.hadoop.hbase.coprocessor.ObserverContext,%20org.apache.hadoop.hbase.procedure2.ProcedureExecutor,%20long)">preAbortProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/ObserverContext.html" title="class in org.apache.hadoop.hbase.coprocessor">ObserverContext</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/MasterCoprocessorEnvironment.html" title="interface in org.apache.hadoop.hbase.coprocessor">MasterCoprocessorEnvironment</a>&gt;&nbsp;ctx,
                 <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;&nbsp;procEnv,
                 long&nbsp;procId)</code>
<div class="block">Called before a abortProcedure request has been processed.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">BaseMasterObserver.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/BaseMasterObserver.html#preAbortProcedure(org.apache.hadoop.hbase.coprocessor.ObserverContext,%20org.apache.hadoop.hbase.procedure2.ProcedureExecutor,%20long)">preAbortProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/ObserverContext.html" title="class in org.apache.hadoop.hbase.coprocessor">ObserverContext</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/MasterCoprocessorEnvironment.html" title="interface in org.apache.hadoop.hbase.coprocessor">MasterCoprocessorEnvironment</a>&gt;&nbsp;ctx,
                 <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;&nbsp;procEnv,
                 long&nbsp;procId)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">BaseMasterAndRegionObserver.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/BaseMasterAndRegionObserver.html#preAbortProcedure(org.apache.hadoop.hbase.coprocessor.ObserverContext,%20org.apache.hadoop.hbase.procedure2.ProcedureExecutor,%20long)">preAbortProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/ObserverContext.html" title="class in org.apache.hadoop.hbase.coprocessor">ObserverContext</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/MasterCoprocessorEnvironment.html" title="interface in org.apache.hadoop.hbase.coprocessor">MasterCoprocessorEnvironment</a>&gt;&nbsp;ctx,
                 <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;&nbsp;procEnv,
                 long&nbsp;procId)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.master">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a> in <a href="../../../../../../../org/apache/hadoop/hbase/master/package-summary.html">org.apache.hadoop.hbase.master</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../../org/apache/hadoop/hbase/master/package-summary.html">org.apache.hadoop.hbase.master</a> that return types with arguments of type <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code><a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;</code></td>
<td class="colLast"><span class="strong">MasterServices.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/MasterServices.html#getMasterProcedureExecutor()">getMasterProcedureExecutor</a></strong>()</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;</code></td>
<td class="colLast"><span class="strong">HMaster.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/HMaster.html#getMasterProcedureExecutor()">getMasterProcedureExecutor</a></strong>()</code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Method parameters in <a href="../../../../../../../org/apache/hadoop/hbase/master/package-summary.html">org.apache.hadoop.hbase.master</a> with type arguments of type <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">MasterCoprocessorHost.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/MasterCoprocessorHost.html#preAbortProcedure(org.apache.hadoop.hbase.procedure2.ProcedureExecutor,%20long)">preAbortProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;&nbsp;procEnv,
                 long&nbsp;procId)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.master.procedure">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a> in <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/package-summary.html">org.apache.hadoop.hbase.master.procedure</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/package-summary.html">org.apache.hadoop.hbase.master.procedure</a> that return types with arguments of type <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;</code></td>
<td class="colLast"><span class="strong">MasterProcedureUtil.NonceProcedureRunnable.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureUtil.NonceProcedureRunnable.html#getProcedureExecutor()">getProcedureExecutor</a></strong>()</code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Methods in <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/package-summary.html">org.apache.hadoop.hbase.master.procedure</a> with parameters of type <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">TruncateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/TruncateTableProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">DeleteColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteColumnFamilyProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">ModifyColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyColumnFamilyProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">ModifyTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyTableProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">EnableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">ModifyNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyNamespaceProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">AddColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/AddColumnFamilyProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">ServerCrashProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ServerCrashProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>boolean</code></td>
<td class="colLast"><span class="strong">DeleteNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#abort(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">abort</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">TruncateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/TruncateTableProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">DeleteColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteColumnFamilyProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">ModifyColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyColumnFamilyProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">ModifyTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyTableProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">EnableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">ModifyNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyNamespaceProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">AddColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/AddColumnFamilyProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">ServerCrashProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ServerCrashProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">DeleteNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#acquireLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">acquireLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#addRegionsToMeta(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.HTableDescriptor,%20java.util.List)">addRegionsToMeta</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                <a href="../../../../../../../org/apache/hadoop/hbase/HTableDescriptor.html" title="class in org.apache.hadoop.hbase">HTableDescriptor</a>&nbsp;hTableDescriptor,
                <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;regionInfos)</code>
<div class="block">Add the specified set of regions to the hbase:meta table.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#addTableToMeta(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.HTableDescriptor,%20java.util.List)">addTableToMeta</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
              <a href="../../../../../../../org/apache/hadoop/hbase/HTableDescriptor.html" title="class in org.apache.hadoop.hbase">HTableDescriptor</a>&nbsp;hTableDescriptor,
              <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;regions)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#assignRegions(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20java.util.List)">assignRegions</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
             <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;regions)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static void</code></td>
<td class="colLast"><span class="strong">MasterDDLOperationHelper.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterDDLOperationHelper.html#checkTableModifiable(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">checkTableModifiable</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>
<div class="block">Check whether a table is modifiable - exists and either offline or online with config set</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#createDirectory(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.NamespaceDescriptor)">createDirectory</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
               <a href="../../../../../../../org/apache/hadoop/hbase/NamespaceDescriptor.html" title="class in org.apache.hadoop.hbase">NamespaceDescriptor</a>&nbsp;nsDescriptor)</code>
<div class="block">Create the namespace directory</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#createFsLayout(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.HTableDescriptor,%20java.util.List)">createFsLayout</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
              <a href="../../../../../../../org/apache/hadoop/hbase/HTableDescriptor.html" title="class in org.apache.hadoop.hbase">HTableDescriptor</a>&nbsp;hTableDescriptor,
              <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;newRegions)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#createFsLayout(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.HTableDescriptor,%20java.util.List,%20org.apache.hadoop.hbase.master.procedure.CreateTableProcedure.CreateHdfsRegions)">createFsLayout</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
              <a href="../../../../../../../org/apache/hadoop/hbase/HTableDescriptor.html" title="class in org.apache.hadoop.hbase">HTableDescriptor</a>&nbsp;hTableDescriptor,
              <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;newRegions,
              <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.CreateHdfsRegions.html" title="interface in org.apache.hadoop.hbase.master.procedure">CreateTableProcedure.CreateHdfsRegions</a>&nbsp;hdfsRegionHandler)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code><a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.CreateHdfsRegions.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.CreateHdfsRegions.html#createHdfsRegions(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.fs.Path,%20org.apache.hadoop.hbase.TableName,%20java.util.List)">createHdfsRegions</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                 org.apache.hadoop.fs.Path&nbsp;tableRootDir,
                 <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                 <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;newRegions)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#deleteAssignmentState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">deleteAssignmentState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                     <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static void</code></td>
<td class="colLast"><span class="strong">MasterDDLOperationHelper.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterDDLOperationHelper.html#deleteColumnFamilyFromFileSystem(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20java.util.List,%20byte[])">deleteColumnFamilyFromFileSystem</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                                <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                                <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;regionInfoList,
                                byte[]&nbsp;familyName)</code>
<div class="block">Remove the column family from the file system</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DeleteNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#deleteDirectory(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20java.lang.String)">deleteDirectory</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
               <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;namespaceName)</code>
<div class="block">Delete the namespace directories from the file system</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#deleteFromFs(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20java.util.List,%20boolean)">deleteFromFs</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
            <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
            <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;regions,
            boolean&nbsp;archive)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#deleteFromMeta(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20java.util.List)">deleteFromMeta</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
              <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
              <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;regions)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DeleteNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#deleteFromNSTable(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20java.lang.String)">deleteFromNSTable</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                 <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;namespaceName)</code>
<div class="block">delete the row from namespace table</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#deleteTableDescriptorCache(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">deleteTableDescriptorCache</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                          <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#deleteTableStates(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">deleteTableStates</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                 <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">AddColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/AddColumnFamilyProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.AddColumnFamilyState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.AddColumnFamilyState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.CreateNamespaceState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.CreateNamespaceState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.CreateTableState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.CreateTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">DeleteColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteColumnFamilyProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteColumnFamilyState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteColumnFamilyState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">DeleteNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteNamespaceState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteNamespaceState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteTableState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DisableTableState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DisableTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">EnableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.EnableTableState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.EnableTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">ModifyColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyColumnFamilyProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyColumnFamilyState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyColumnFamilyState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">ModifyNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyNamespaceProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyNamespaceState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyNamespaceState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">ModifyTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyTableProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyTableState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">ServerCrashProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ServerCrashProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ServerCrashState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ServerCrashState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/StateMachineProcedure.Flow.html" title="enum in org.apache.hadoop.hbase.procedure2">StateMachineProcedure.Flow</a></code></td>
<td class="colLast"><span class="strong">TruncateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/TruncateTableProcedure.html#executeFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.TruncateTableState)">executeFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.TruncateTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static <a href="../../../../../../../org/apache/hadoop/hbase/quotas/MasterQuotaManager.html" title="class in org.apache.hadoop.hbase.quotas">MasterQuotaManager</a></code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#getMasterQuotaManager(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">getMasterQuotaManager</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;</code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#getRegionsFromMeta(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">getRegionsFromMeta</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                  <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;</code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#getRegionsFromMeta(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20boolean,%20boolean)">getRegionsFromMeta</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                  <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                  boolean&nbsp;excludeOfflinedSplitParents,
                  boolean&nbsp;excludeReplicaRegions)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#insertIntoNSTable(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.NamespaceDescriptor)">insertIntoNSTable</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                 <a href="../../../../../../../org/apache/hadoop/hbase/NamespaceDescriptor.html" title="class in org.apache.hadoop.hbase">NamespaceDescriptor</a>&nbsp;nsDescriptor)</code>
<div class="block">Insert the row into ns table</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static boolean</code></td>
<td class="colLast"><span class="strong">MasterDDLOperationHelper.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterDDLOperationHelper.html#isOnlineSchemaChangeAllowed(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">isOnlineSchemaChangeAllowed</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>
<div class="block">Check whether online schema change is allowed from config</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">ServerCrashProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ServerCrashProcedure.html#isYieldBeforeExecuteFromState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ServerCrashState)">isYieldBeforeExecuteFromState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ServerCrashState&nbsp;state)</code>
<div class="block">For this procedure, yield at end of each successful flow step so that all crashed servers
 can make progress rather than do the default which has each procedure running to completion
 before we move to the next.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static org.apache.hadoop.hbase.master.procedure.DisableTableProcedure.MarkRegionOfflineOpResult</code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#markRegionsOffline(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20java.lang.Boolean)">markRegionsOffline</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                  <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                  <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Boolean.html?is-external=true" title="class or interface in java.lang">Boolean</a>&nbsp;retryRequired)</code>
<div class="block">Mark regions of the table offline with retries</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">EnableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#markRegionsOnline(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20java.lang.Boolean)">markRegionsOnline</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                 <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                 <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/Boolean.html?is-external=true" title="class or interface in java.lang">Boolean</a>&nbsp;retryRequired)</code>
<div class="block">Mark offline regions of the table online with retry</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#postDisable(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DisableTableState)">postDisable</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
           org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DisableTableState&nbsp;state)</code>
<div class="block">Action after disabling table.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#preDisable(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DisableTableState)">preDisable</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
          org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DisableTableState&nbsp;state)</code>
<div class="block">Action before disabling table.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">TruncateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/TruncateTableProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DeleteColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteColumnFamilyProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">ModifyColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyColumnFamilyProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">ModifyTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyTableProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">EnableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">ModifyNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyNamespaceProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">AddColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/AddColumnFamilyProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">ServerCrashProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ServerCrashProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DeleteNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#releaseLock(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">releaseLock</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DeleteNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#removeFromZKNamespaceManager(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20java.lang.String)">removeFromZKNamespaceManager</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                            <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;namespaceName)</code>
<div class="block">remove from Zookeeper.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DeleteNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#removeNamespaceQuota(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20java.lang.String)">removeNamespaceQuota</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;namespaceName)</code>
<div class="block">remove quota for the namespace</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static boolean</code></td>
<td class="colLast"><span class="strong">MasterDDLOperationHelper.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterDDLOperationHelper.html#reOpenAllRegions(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20java.util.List)">reOpenAllRegions</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;regionInfoList)</code>
<div class="block">Reopen all regions from a table after a schema change operation.</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">AddColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/AddColumnFamilyProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.AddColumnFamilyState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.AddColumnFamilyState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.CreateNamespaceState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.CreateNamespaceState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.CreateTableState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.CreateTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DeleteColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteColumnFamilyProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteColumnFamilyState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteColumnFamilyState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DeleteNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteNamespaceState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteNamespaceState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DeleteTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteTableState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DeleteTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DisableTableState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.DisableTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">EnableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.EnableTableState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.EnableTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">ModifyColumnFamilyProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyColumnFamilyProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyColumnFamilyState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyColumnFamilyState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">ModifyNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyNamespaceProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyNamespaceState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyNamespaceState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">ModifyTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyTableProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyTableState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ModifyTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">ServerCrashProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ServerCrashProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ServerCrashState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.ServerCrashState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected void</code></td>
<td class="colLast"><span class="strong">TruncateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/TruncateTableProcedure.html#rollbackState(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.TruncateTableState)">rollbackState</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
             org.apache.hadoop.hbase.protobuf.generated.MasterProcedureProtos.TruncateTableState&nbsp;state)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#setNamespaceQuota(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.NamespaceDescriptor)">setNamespaceQuota</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                 <a href="../../../../../../../org/apache/hadoop/hbase/NamespaceDescriptor.html" title="class in org.apache.hadoop.hbase">NamespaceDescriptor</a>&nbsp;nsDescriptor)</code>
<div class="block">Set quota for the namespace</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#setTableStateToDisabled(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">setTableStateToDisabled</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                       <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>
<div class="block">Mark table state to Disabled</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">DisableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#setTableStateToDisabling(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">setTableStateToDisabling</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                        <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>
<div class="block">Mark table state to Disabling</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">EnableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#setTableStateToEnabled(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">setTableStateToEnabled</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                      <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>
<div class="block">Mark table state to Enabled</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">EnableTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#setTableStateToEnabling(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">setTableStateToEnabling</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                       <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>
<div class="block">Mark table state to Enabling</div>
</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#shouldWaitClientAck(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">shouldWaitClientAck</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#shouldWaitClientAck(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">shouldWaitClientAck</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected boolean</code></td>
<td class="colLast"><span class="strong">ServerCrashProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ServerCrashProcedure.html#shouldWaitClientAck(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">shouldWaitClientAck</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">CreateTableProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#updateTableDescCache(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">updateTableDescCache</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">CreateNamespaceProcedure.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#updateZKNamespaceManager(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.NamespaceDescriptor)">updateZKNamespaceManager</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                        <a href="../../../../../../../org/apache/hadoop/hbase/NamespaceDescriptor.html" title="class in org.apache.hadoop.hbase">NamespaceDescriptor</a>&nbsp;nsDescriptor)</code>
<div class="block">Update Zookeeper.</div>
</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>static &lt;T&gt;&nbsp;T</code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#waitFor(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20long,%20long,%20java.lang.String,%20org.apache.hadoop.hbase.master.procedure.ProcedureSyncWait.Predicate)">waitFor</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
       long&nbsp;waitTime,
       long&nbsp;waitingTimeForEvents,
       <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;purpose,
       <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.Predicate.html" title="interface in org.apache.hadoop.hbase.master.procedure">ProcedureSyncWait.Predicate</a>&lt;T&gt;&nbsp;predicate)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static &lt;T&gt;&nbsp;T</code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#waitFor(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20java.lang.String,%20org.apache.hadoop.hbase.master.procedure.ProcedureSyncWait.Predicate)">waitFor</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
       <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;purpose,
       <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.Predicate.html" title="interface in org.apache.hadoop.hbase.master.procedure">ProcedureSyncWait.Predicate</a>&lt;T&gt;&nbsp;predicate)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#waitMetaRegions(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">waitMetaRegions</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#waitRegionInTransition(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20java.util.List)">waitRegionInTransition</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                      <a href="http://docs.oracle.com/javase/7/docs/api/java/util/List.html?is-external=true" title="class or interface in java.util">List</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>&gt;&nbsp;regions)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colFirst"><code>protected static void</code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#waitRegionServers(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv)">waitRegionServers</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env)</code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Method parameters in <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/package-summary.html">org.apache.hadoop.hbase.master.procedure</a> with type arguments of type <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>static byte[]</code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#submitAndWaitProcedure(org.apache.hadoop.hbase.procedure2.ProcedureExecutor,%20org.apache.hadoop.hbase.procedure2.Procedure)">submitAndWaitProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;&nbsp;procExec,
                      <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/Procedure.html" title="class in org.apache.hadoop.hbase.procedure2">Procedure</a>&nbsp;proc)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colFirst"><code>static byte[]</code></td>
<td class="colLast"><span class="strong">ProcedureSyncWait.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedureSyncWait.html#waitForProcedureToComplete(org.apache.hadoop.hbase.procedure2.ProcedureExecutor,%20long)">waitForProcedureToComplete</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;&nbsp;procExec,
                          long&nbsp;procId)</code>&nbsp;</td>
</tr>
</tbody>
</table>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing constructors, and an explanation">
<caption><span>Constructors in <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/package-summary.html">org.apache.hadoop.hbase.master.procedure</a> with parameters of type <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colOne" scope="col">Constructor and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/AddColumnFamilyProcedure.html#AddColumnFamilyProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20org.apache.hadoop.hbase.HColumnDescriptor)">AddColumnFamilyProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                        <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                        <a href="../../../../../../../org/apache/hadoop/hbase/HColumnDescriptor.html" title="class in org.apache.hadoop.hbase">HColumnDescriptor</a>&nbsp;cfDescriptor)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateNamespaceProcedure.html#CreateNamespaceProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.NamespaceDescriptor)">CreateNamespaceProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                        <a href="../../../../../../../org/apache/hadoop/hbase/NamespaceDescriptor.html" title="class in org.apache.hadoop.hbase">NamespaceDescriptor</a>&nbsp;nsDescriptor)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#CreateTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.HTableDescriptor,%20org.apache.hadoop.hbase.HRegionInfo[])">CreateTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/HTableDescriptor.html" title="class in org.apache.hadoop.hbase">HTableDescriptor</a>&nbsp;hTableDescriptor,
                    <a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>[]&nbsp;newRegions)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/CreateTableProcedure.html#CreateTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.HTableDescriptor,%20org.apache.hadoop.hbase.HRegionInfo[],%20org.apache.hadoop.hbase.master.procedure.ProcedurePrepareLatch)">CreateTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/HTableDescriptor.html" title="class in org.apache.hadoop.hbase">HTableDescriptor</a>&nbsp;hTableDescriptor,
                    <a href="../../../../../../../org/apache/hadoop/hbase/HRegionInfo.html" title="class in org.apache.hadoop.hbase">HRegionInfo</a>[]&nbsp;newRegions,
                    <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedurePrepareLatch.html" title="class in org.apache.hadoop.hbase.master.procedure">ProcedurePrepareLatch</a>&nbsp;syncLatch)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteColumnFamilyProcedure.html#DeleteColumnFamilyProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20byte[])">DeleteColumnFamilyProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                           <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                           byte[]&nbsp;familyName)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteNamespaceProcedure.html#DeleteNamespaceProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20java.lang.String)">DeleteNamespaceProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                        <a href="http://docs.oracle.com/javase/7/docs/api/java/lang/String.html?is-external=true" title="class or interface in java.lang">String</a>&nbsp;namespaceName)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#DeleteTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName)">DeleteTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DeleteTableProcedure.html#DeleteTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20org.apache.hadoop.hbase.master.procedure.ProcedurePrepareLatch)">DeleteTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                    <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedurePrepareLatch.html" title="class in org.apache.hadoop.hbase.master.procedure">ProcedurePrepareLatch</a>&nbsp;syncLatch)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#DisableTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20boolean)">DisableTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                     <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                     boolean&nbsp;skipTableStateCheck)</code>
<div class="block">Constructor</div>
</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/DisableTableProcedure.html#DisableTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20boolean,%20org.apache.hadoop.hbase.master.procedure.ProcedurePrepareLatch)">DisableTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                     <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                     boolean&nbsp;skipTableStateCheck,
                     <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedurePrepareLatch.html" title="class in org.apache.hadoop.hbase.master.procedure">ProcedurePrepareLatch</a>&nbsp;syncLatch)</code>
<div class="block">Constructor</div>
</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#EnableTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20boolean)">EnableTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                    boolean&nbsp;skipTableStateCheck)</code>
<div class="block">Constructor</div>
</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/EnableTableProcedure.html#EnableTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20boolean,%20org.apache.hadoop.hbase.master.procedure.ProcedurePrepareLatch)">EnableTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                    boolean&nbsp;skipTableStateCheck,
                    <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ProcedurePrepareLatch.html" title="class in org.apache.hadoop.hbase.master.procedure">ProcedurePrepareLatch</a>&nbsp;syncLatch)</code>
<div class="block">Constructor</div>
</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyColumnFamilyProcedure.html#ModifyColumnFamilyProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20org.apache.hadoop.hbase.HColumnDescriptor)">ModifyColumnFamilyProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                           <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                           <a href="../../../../../../../org/apache/hadoop/hbase/HColumnDescriptor.html" title="class in org.apache.hadoop.hbase">HColumnDescriptor</a>&nbsp;cfDescriptor)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyNamespaceProcedure.html#ModifyNamespaceProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.NamespaceDescriptor)">ModifyNamespaceProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                        <a href="../../../../../../../org/apache/hadoop/hbase/NamespaceDescriptor.html" title="class in org.apache.hadoop.hbase">NamespaceDescriptor</a>&nbsp;newNsDescriptor)</code>&nbsp;</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ModifyTableProcedure.html#ModifyTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.HTableDescriptor)">ModifyTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/HTableDescriptor.html" title="class in org.apache.hadoop.hbase">HTableDescriptor</a>&nbsp;htd)</code>&nbsp;</td>
</tr>
<tr class="rowColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/ServerCrashProcedure.html#ServerCrashProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.ServerName,%20boolean,%20boolean)">ServerCrashProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                    <a href="../../../../../../../org/apache/hadoop/hbase/ServerName.html" title="class in org.apache.hadoop.hbase">ServerName</a>&nbsp;serverName,
                    boolean&nbsp;shouldSplitWal,
                    boolean&nbsp;carryingMeta)</code>
<div class="block">Call this constructor queuing up a Procedure.</div>
</td>
</tr>
<tr class="altColor">
<td class="colLast"><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/TruncateTableProcedure.html#TruncateTableProcedure(org.apache.hadoop.hbase.master.procedure.MasterProcedureEnv,%20org.apache.hadoop.hbase.TableName,%20boolean)">TruncateTableProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&nbsp;env,
                      <a href="../../../../../../../org/apache/hadoop/hbase/TableName.html" title="class in org.apache.hadoop.hbase">TableName</a>&nbsp;tableName,
                      boolean&nbsp;preserveSplits)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.rsgroup">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a> in <a href="../../../../../../../org/apache/hadoop/hbase/rsgroup/package-summary.html">org.apache.hadoop.hbase.rsgroup</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Method parameters in <a href="../../../../../../../org/apache/hadoop/hbase/rsgroup/package-summary.html">org.apache.hadoop.hbase.rsgroup</a> with type arguments of type <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">RSGroupAdminEndpoint.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/rsgroup/RSGroupAdminEndpoint.html#preAbortProcedure(org.apache.hadoop.hbase.coprocessor.ObserverContext,%20org.apache.hadoop.hbase.procedure2.ProcedureExecutor,%20long)">preAbortProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/ObserverContext.html" title="class in org.apache.hadoop.hbase.coprocessor">ObserverContext</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/MasterCoprocessorEnvironment.html" title="interface in org.apache.hadoop.hbase.coprocessor">MasterCoprocessorEnvironment</a>&gt;&nbsp;ctx,
                 <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;&nbsp;procEnv,
                 long&nbsp;procId)</code>&nbsp;</td>
</tr>
</tbody>
</table>
</li>
<li class="blockList"><a name="org.apache.hadoop.hbase.security.access">
<!--   -->
</a>
<h3>Uses of <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a> in <a href="../../../../../../../org/apache/hadoop/hbase/security/access/package-summary.html">org.apache.hadoop.hbase.security.access</a></h3>
<table border="0" cellpadding="3" cellspacing="0" summary="Use table, listing methods, and an explanation">
<caption><span>Method parameters in <a href="../../../../../../../org/apache/hadoop/hbase/security/access/package-summary.html">org.apache.hadoop.hbase.security.access</a> with type arguments of type <a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a></span><span class="tabEnd">&nbsp;</span></caption>
<tr>
<th class="colFirst" scope="col">Modifier and Type</th>
<th class="colLast" scope="col">Method and Description</th>
</tr>
<tbody>
<tr class="altColor">
<td class="colFirst"><code>void</code></td>
<td class="colLast"><span class="strong">AccessController.</span><code><strong><a href="../../../../../../../org/apache/hadoop/hbase/security/access/AccessController.html#preAbortProcedure(org.apache.hadoop.hbase.coprocessor.ObserverContext,%20org.apache.hadoop.hbase.procedure2.ProcedureExecutor,%20long)">preAbortProcedure</a></strong>(<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/ObserverContext.html" title="class in org.apache.hadoop.hbase.coprocessor">ObserverContext</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/coprocessor/MasterCoprocessorEnvironment.html" title="interface in org.apache.hadoop.hbase.coprocessor">MasterCoprocessorEnvironment</a>&gt;&nbsp;ctx,
                 <a href="../../../../../../../org/apache/hadoop/hbase/procedure2/ProcedureExecutor.html" title="class in org.apache.hadoop.hbase.procedure2">ProcedureExecutor</a>&lt;<a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">MasterProcedureEnv</a>&gt;&nbsp;procEnv,
                 long&nbsp;procId)</code>&nbsp;</td>
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
<li><a href="../../../../../../../overview-summary.html">Overview</a></li>
<li><a href="../package-summary.html">Package</a></li>
<li><a href="../../../../../../../org/apache/hadoop/hbase/master/procedure/MasterProcedureEnv.html" title="class in org.apache.hadoop.hbase.master.procedure">Class</a></li>
<li class="navBarCell1Rev">Use</li>
<li><a href="../package-tree.html">Tree</a></li>
<li><a href="../../../../../../../deprecated-list.html">Deprecated</a></li>
<li><a href="../../../../../../../index-all.html">Index</a></li>
<li><a href="../../../../../../../help-doc.html">Help</a></li>
</ul>
</div>
<div class="subNav">
<ul class="navList">
<li>Prev</li>
<li>Next</li>
</ul>
<ul class="navList">
<li><a href="../../../../../../../index.html?org/apache/hadoop/hbase/master/procedure/class-use/MasterProcedureEnv.html" target="_top">Frames</a></li>
<li><a href="MasterProcedureEnv.html" target="_top">No Frames</a></li>
</ul>
<ul class="navList" id="allclasses_navbar_bottom">
<li><a href="../../../../../../../allclasses-noframe.html">All Classes</a></li>
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
