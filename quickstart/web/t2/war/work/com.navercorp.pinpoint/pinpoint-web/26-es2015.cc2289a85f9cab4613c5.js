(window.webpackJsonp=window.webpackJsonp||[]).push([[26],{"+TFa":function(l,n,e){"use strict";e.d(n,"a",(function(){return i}));var t=e("XNiG");class i{constructor(){this.outSelectApplication=new t.b,this.onSelectApplication$=this.outSelectApplication.asObservable()}setSelectedApplication(l){this.outSelectApplication.next(l)}}},FTGN:function(l,n,e){"use strict";e.d(n,"a",(function(){return t}));class t{}},aK9m:function(l,n,e){"use strict";e.r(n);var t=e("8Y7J");class i{}var a=e("pMnS"),s=e("SVse"),o=e("w1KT"),u=e("xcNo"),c=e("W33f"),r=e("/yY+");e("ZF+8");class p{constructor(l,n,e,t){this.urlRouteManagerService=l,this.systemConfigurationDataService=n,this.applicationListDataService=e,this.serverTimeDataService=t,this.stateList=["serverTime","configuration","applicationList"],this.state={serverTime:{url:"serverTime.pinpoint",loading:!0,success:!1,message:""},configuration:{url:"configuration.pinpoint",loading:!0,success:!1,message:""},applicationList:{url:"applicationList.pinpoint",loading:!0,success:!1,message:""}}}ngOnInit(){this.checkServerTime(this.stateList[0]),this.checkSystemConfiguration(this.stateList[1]),this.checkApplicationList(this.stateList[2])}setState(l,n,e,t=""){this.state[l].success=n,this.state[l].loading=e,this.state[l].message=t}checkServerTime(l){this.serverTimeDataService.getServerTime().subscribe(n=>{this.setState(l,!0,!1)},n=>{this.setState(l,!1,!1,n.exception.message)})}checkSystemConfiguration(l){this.systemConfigurationDataService.getConfiguration().subscribe(n=>{this.setState(l,!0,!1)},n=>{this.setState(l,!1,!1,n.exception.message)})}checkApplicationList(l){this.applicationListDataService.getApplicationList().subscribe(n=>{this.setState(l,!0,!1)},n=>{this.setState(l,!1,!1,n.exception.message)})}getErrorMessage(l){return this.state[l].message}showErrorMessage(l){return!(!1===this.state[l].loading&&this.state[l].success)}getStateClass(l){const n=this.state[l];return n.loading?"fas fa-spinner fa-spin":n.success?"far fa-check-square l-success":"far fa-times-circle l-fail"}getUrl(l){return this.state[l].url}onMoveBack(){this.urlRouteManagerService.back()}onReload(){this.urlRouteManagerService.reload()}hasError(){return this.stateList.reduce((l,n)=>l&&!1===this.state[n].loading&&!this.state[n].success,!0)}}var d=e("D5ZC"),g=e("fTWN"),f=e("z/t1"),m=e("cu3E"),h=[[".l-title[_ngcontent-%COMP%]{display:-webkit-box;display:flex;-webkit-box-flex:1;flex:1;color:#fff;font-size:20px;-webkit-box-align:center;align-items:center;padding-left:20px}.l-api-check[_ngcontent-%COMP%]{width:100%;height:calc(100% - 50px);padding-top:5%;display:-webkit-box;display:flex;position:absolute;-webkit-box-align:center;align-items:center;-webkit-box-orient:vertical;-webkit-box-direction:normal;flex-direction:column;align-items:center}.l-api-check[_ngcontent-%COMP%]   .l-apis[_ngcontent-%COMP%]{width:700px;display:-webkit-box;display:flex;font-size:30px;-webkit-box-orient:vertical;-webkit-box-direction:normal;flex-direction:column}.l-api-check[_ngcontent-%COMP%]   .l-api[_ngcontent-%COMP%]{display:-webkit-box;display:flex;padding:0 20px;-webkit-box-align:center;align-items:center;-webkit-box-orient:horizontal;-webkit-box-direction:normal;flex-direction:row}.l-api-check[_ngcontent-%COMP%]   .l-api[_ngcontent-%COMP%]   i[_ngcontent-%COMP%]{margin:10px 10px 0 0}.l-api-check[_ngcontent-%COMP%]   button[_ngcontent-%COMP%]{width:100px;height:100px;margin:20px 0;font-size:40px;border-radius:50px}.l-success[_ngcontent-%COMP%]{color:#03a203}.l-fail[_ngcontent-%COMP%]{color:#c10404}.l-error[_ngcontent-%COMP%]{padding:20px;font-size:14px}"]],b=t["\u0275crt"]({encapsulation:0,styles:h,data:{}});function v(l){return t["\u0275vid"](0,[(l()(),t["\u0275eld"](0,0,null,null,1,"button",[["class","btn btn-sm btn-blue"]],null,[[null,"click"]],(function(l,n,e){var t=!0,i=l.component;"click"===n&&(t=!1!==i.onReload()&&t);return t}),null,null)),(l()(),t["\u0275eld"](1,0,null,null,0,"i",[["class","fas fa-redo"]],null,null,null,null,null))],null,null)}function x(l){return t["\u0275vid"](0,[(l()(),t["\u0275eld"](0,0,null,null,1,"button",[["class","btn btn-sm btn-blue"]],null,[[null,"click"]],(function(l,n,e){var t=!0,i=l.component;"click"===n&&(t=!1!==i.onMoveBack()&&t);return t}),null,null)),(l()(),t["\u0275eld"](1,0,null,null,0,"i",[["class","fas fa-chevron-left"]],null,null,null,null,null))],null,null)}function k(l){return t["\u0275vid"](0,[(l()(),t["\u0275eld"](0,0,null,null,1,"div",[["class","l-error"]],null,null,null,null,null)),(l()(),t["\u0275ted"](1,null,["",""]))],null,(function(l,n){l(n,1,0,n.component.getErrorMessage(n.parent.context.$implicit))}))}function C(l){return t["\u0275vid"](0,[(l()(),t["\u0275eld"](0,0,null,null,7,"div",[["class","l-apis"]],null,null,null,null,null)),(l()(),t["\u0275eld"](1,0,null,null,4,"div",[["class","l-api"]],null,null,null,null,null)),(l()(),t["\u0275eld"](2,0,null,null,2,"i",[],null,null,null,null,null)),t["\u0275prd"](512,null,s["\u0275NgClassImpl"],s["\u0275NgClassR2Impl"],[t.IterableDiffers,t.KeyValueDiffers,t.ElementRef,t.Renderer2]),t["\u0275did"](4,278528,null,0,s.NgClass,[s["\u0275NgClassImpl"]],{ngClass:[0,"ngClass"]},null),(l()(),t["\u0275ted"](5,null,[" "," "])),(l()(),t["\u0275and"](16777216,null,null,1,null,k)),t["\u0275did"](7,16384,null,0,s.NgIf,[t.ViewContainerRef,t.TemplateRef],{ngIf:[0,"ngIf"]},null)],(function(l,n){var e=n.component;l(n,4,0,e.getStateClass(n.context.$implicit)),l(n,7,0,e.showErrorMessage(n.context.$implicit))}),(function(l,n){l(n,5,0,n.component.getUrl(n.context.$implicit))}))}function _(l){return t["\u0275vid"](0,[(l()(),t["\u0275eld"](0,0,null,null,4,"header",[["class","flex-container flex-row"]],null,null,null,null,null)),(l()(),t["\u0275eld"](1,0,null,null,1,"pp-header-logo",[],null,null,null,o.b,o.a)),t["\u0275did"](2,114688,null,0,u.a,[c.a,r.a],null,null),(l()(),t["\u0275eld"](3,0,null,null,1,"div",[["class","l-title"]],null,null,null,null,null)),(l()(),t["\u0275ted"](-1,null,["API Check"])),(l()(),t["\u0275eld"](5,0,null,null,7,"section",[],null,null,null,null,null)),(l()(),t["\u0275eld"](6,0,null,null,6,"div",[["class","l-api-check"]],null,null,null,null,null)),(l()(),t["\u0275and"](16777216,null,null,1,null,v)),t["\u0275did"](8,16384,null,0,s.NgIf,[t.ViewContainerRef,t.TemplateRef],{ngIf:[0,"ngIf"]},null),(l()(),t["\u0275and"](16777216,null,null,1,null,x)),t["\u0275did"](10,16384,null,0,s.NgIf,[t.ViewContainerRef,t.TemplateRef],{ngIf:[0,"ngIf"]},null),(l()(),t["\u0275and"](16777216,null,null,1,null,C)),t["\u0275did"](12,278528,null,0,s.NgForOf,[t.ViewContainerRef,t.TemplateRef,t.IterableDiffers],{ngForOf:[0,"ngForOf"]},null)],(function(l,n){var e=n.component;l(n,2,0),l(n,8,0,e.hasError()),l(n,10,0,!e.hasError()),l(n,12,0,e.stateList)}),null)}var w=t["\u0275ccf"]("ng-component",p,(function(l){return t["\u0275vid"](0,[(l()(),t["\u0275eld"](0,0,null,null,1,"ng-component",[],null,null,null,_,b)),t["\u0275did"](1,114688,null,0,p,[d.a,g.a,f.a,m.a],null,null)],(function(l,n){l(n,1,0)}),null)}),{},{},[]),M=e("s7LF"),S=e("+TFa"),O=e("iInd"),I=e("22Na"),L=e("IbkX"),R=e("M0ag");class y{}var N=e("IP0z"),T=e("/HVE"),P=e("hOhj"),F=e("FTGN");e.d(n,"ErrorPageModuleNgFactory",(function(){return E}));var E=t["\u0275cmf"](i,[],(function(l){return t["\u0275mod"]([t["\u0275mpd"](512,t.ComponentFactoryResolver,t["\u0275CodegenComponentFactoryResolver"],[[8,[a.a,w]],[3,t.ComponentFactoryResolver],t.NgModuleRef]),t["\u0275mpd"](4608,s.NgLocalization,s.NgLocaleLocalization,[t.LOCALE_ID,[2,s["\u0275angular_packages_common_common_a"]]]),t["\u0275mpd"](4608,M["\u0275angular_packages_forms_forms_o"],M["\u0275angular_packages_forms_forms_o"],[]),t["\u0275mpd"](4608,S.a,S.a,[]),t["\u0275mpd"](1073742336,s.CommonModule,s.CommonModule,[]),t["\u0275mpd"](1073742336,O.q,O.q,[[2,O.v],[2,O.m]]),t["\u0275mpd"](1073742336,I.ClickOutsideModule,I.ClickOutsideModule,[]),t["\u0275mpd"](1073742336,M["\u0275angular_packages_forms_forms_d"],M["\u0275angular_packages_forms_forms_d"],[]),t["\u0275mpd"](1073742336,M.FormsModule,M.FormsModule,[]),t["\u0275mpd"](1073742336,L.b,L.b,[]),t["\u0275mpd"](1073742336,R.a,R.a,[]),t["\u0275mpd"](1073742336,y,y,[]),t["\u0275mpd"](1073742336,N.a,N.a,[]),t["\u0275mpd"](1073742336,T.b,T.b,[]),t["\u0275mpd"](1073742336,P.g,P.g,[]),t["\u0275mpd"](1073742336,F.a,F.a,[]),t["\u0275mpd"](1073742336,i,i,[]),t["\u0275mpd"](1024,O.k,(function(){return[[{path:"",component:p}]]}),[])])}))}}]);