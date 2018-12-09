function CodeDefine() { 
this.def = new Array();
this.def["IsrOverrun"] = {file: "ert_main_c.html",line:19,type:"var"};
this.def["isRateRunning"] = {file: "ert_main_c.html",line:20,type:"var"};
this.def["need2runFlags"] = {file: "ert_main_c.html",line:22,type:"var"};
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:24,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:107,type:"fcn"};
this.def["Ali1_B"] = {file: "Ali1_c.html",line:20,type:"var"};
this.def["Ali1_DW"] = {file: "Ali1_c.html",line:23,type:"var"};
this.def["Ali1_M_"] = {file: "Ali1_c.html",line:26,type:"var"};
this.def["Ali1_M"] = {file: "Ali1_c.html",line:27,type:"var"};
this.def["Ali1_SetEventsForThisBaseStep"] = {file: "Ali1_c.html",line:36,type:"fcn"};
this.def["rate_monotonic_scheduler"] = {file: "Ali1_c.html",line:50,type:"fcn"};
this.def["Ali1_step0"] = {file: "Ali1_c.html",line:63,type:"fcn"};
this.def["Ali1_step1"] = {file: "Ali1_c.html",line:105,type:"fcn"};
this.def["Ali1_step"] = {file: "Ali1_c.html",line:120,type:"fcn"};
this.def["Ali1_initialize"] = {file: "Ali1_c.html",line:137,type:"fcn"};
this.def["Ali1_terminate"] = {file: "Ali1_c.html",line:167,type:"fcn"};
this.def["B_Ali1_T"] = {file: "Ali1_h.html",line:52,type:"type"};
this.def["DW_Ali1_T"] = {file: "Ali1_h.html",line:58,type:"type"};
this.def["P_Ali1_T"] = {file: "Ali1_types_h.html",line:21,type:"type"};
this.def["RT_MODEL_Ali1_T"] = {file: "Ali1_types_h.html",line:24,type:"type"};
this.def["Ali1_P"] = {file: "Ali1_data_c.html",line:20,type:"var"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Ali1_c.html"] = "../Ali1.c";
	this.html2Root["Ali1_c.html"] = "Ali1_c.html";
	this.html2SrcPath["Ali1_h.html"] = "../Ali1.h";
	this.html2Root["Ali1_h.html"] = "Ali1_h.html";
	this.html2SrcPath["Ali1_private_h.html"] = "../Ali1_private.h";
	this.html2Root["Ali1_private_h.html"] = "Ali1_private_h.html";
	this.html2SrcPath["Ali1_types_h.html"] = "../Ali1_types.h";
	this.html2Root["Ali1_types_h.html"] = "Ali1_types_h.html";
	this.html2SrcPath["Ali1_data_c.html"] = "../Ali1_data.c";
	this.html2Root["Ali1_data_c.html"] = "Ali1_data_c.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.html2SrcPath["rtmodel_h.html"] = "../rtmodel.h";
	this.html2Root["rtmodel_h.html"] = "rtmodel_h.html";
	this.html2SrcPath["MW_target_hardware_resources_h.html"] = "../MW_target_hardware_resources.h";
	this.html2Root["MW_target_hardware_resources_h.html"] = "MW_target_hardware_resources_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","Ali1_c.html","Ali1_h.html","Ali1_private_h.html","Ali1_types_h.html","Ali1_data_c.html","rtwtypes_h.html","rtmodel_h.html","MW_target_hardware_resources_h.html"];
