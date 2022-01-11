function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.fcn["SmartTrackerFilter.c:AllpassMinMult_stepMinMultCasca"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:SystemCore_delete"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:SystemCore_delete_b"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:SystemCore_delete_bg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:SystemCore_release"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:SystemCore_release_b"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:SystemCore_release_bg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:SystemProp_matlabCodegenSetA_bg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:SystemProp_matlabCodegenSetAn_b"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:SystemProp_matlabCodegenSetAnyP"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:matlabCodegenHandle_matlabCo_bg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:matlabCodegenHandle_matlabCod_b"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:matlabCodegenHandle_matlabCodeg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter.c:rate_scheduler"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilter_initialize"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 8,
	stackTotal: 8};
	 this.metricsArray.fcn["SmartTrackerFilter_step"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.c",
	stack: 85,
	stackTotal: 85};
	 this.getMetrics = function(token) { 
		 var data;
		 data = this.metricsArray.var[token];
		 if (!data) {
			 data = this.metricsArray.fcn[token];
			 if (data) data.type = "fcn";
		 } else { 
			 data.type = "var";
		 }
	 return data; }; 
	 this.codeMetricsSummary = '<a href="SmartTrackerFilter_metrics.html">Global Memory: 0(bytes) Maximum Stack: 85(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
