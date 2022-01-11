function CodeMetrics() {
	 this.metricsArray = {};
	 this.metricsArray.var = new Array();
	 this.metricsArray.fcn = new Array();
	 this.metricsArray.fcn["SmartTrackerFilter.cpp:rate_scheduler"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::AllpassMinMult_stepMinMultCasca"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SmartTrackerFilterModelClass"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SystemCore_delete"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SystemCore_delete_b"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SystemCore_delete_bg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SystemCore_release"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SystemCore_release_b"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SystemCore_release_bg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SystemProp_matlabCodegenSetA_bg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SystemProp_matlabCodegenSetAn_b"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::SystemProp_matlabCodegenSetAnyP"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::getRTM"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::initialize"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::matlabCodegenHandle_matlabCo_bg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::matlabCodegenHandle_matlabCod_b"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::matlabCodegenHandle_matlabCodeg"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::step"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 77,
	stackTotal: 77};
	 this.metricsArray.fcn["SmartTrackerFilterModelClass::~SmartTrackerFilterModelClass"] = {file: "/Users/thierry/Documents/MATLAB/smarttracker/SmartTrackerFilter_ert_rtw/SmartTrackerFilter.cpp",
	stack: 0,
	stackTotal: 0};
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
	 this.codeMetricsSummary = '<a href="SmartTrackerFilter_metrics.html">Global Memory: 0(bytes) Maximum Stack: 77(bytes)</a>';
	}
CodeMetrics.instance = new CodeMetrics();
