function RTW_Sid2UrlHash() {
	this.urlHashMap = new Array();
	/* <Root>/Analog Input */
	this.urlHashMap["Ali1:7"] = "Ali1.c:72,96,153&Ali1.h:96&Ali1_data.c:55";
	/* <Root>/Logical
Operator */
	this.urlHashMap["Ali1:26"] = "Ali1.c:91";
	/* <Root>/Scope */
	this.urlHashMap["Ali1:27"] = "msg=rtwMsg_SimulationReducedBlock&block=Ali1:27";
	/* <S1>/Logical
Operator */
	this.urlHashMap["Ali1:14"] = "Ali1.c:92";
	/* <S1>/Pulse
Generator */
	this.urlHashMap["Ali1:13"] = "Ali1.c:107,116,156&Ali1.h:51,56,72,75,78,81&Ali1_data.c:31,34,37,40";
	/* <S2>/Logical
Operator */
	this.urlHashMap["Ali1:22"] = "Ali1.c:93";
	/* <S2>/Pulse
Generator */
	this.urlHashMap["Ali1:23"] = "Ali1.c:75,85,159&Ali1.h:57,84,87,90,93&Ali1_data.c:43,46,49,52";
	/* <S3>/Data Type Conversion */
	this.urlHashMap["Ali1:21:114"] = "Ali1.c:90";
	/* <S3>/Digital Output */
	this.urlHashMap["Ali1:21:214"] = "Ali1.c:87,162&Ali1.h:63&Ali1_data.c:22";
	/* <S4>/Compare */
	this.urlHashMap["Ali1:8:2"] = "Ali1.c:94";
	/* <S4>/Constant */
	this.urlHashMap["Ali1:8:3"] = "Ali1.c:88&Ali1.h:66&Ali1_data.c:25";
	/* <S5>/Compare */
	this.urlHashMap["Ali1:20:2"] = "Ali1.c:95";
	/* <S5>/Constant */
	this.urlHashMap["Ali1:20:3"] = "Ali1.c:89&Ali1.h:69&Ali1_data.c:28";
	this.getUrlHash = function(sid) { return this.urlHashMap[sid];}
}
RTW_Sid2UrlHash.instance = new RTW_Sid2UrlHash();
function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Ali1"};
	this.sidHashMap["Ali1"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Ali1:16"};
	this.sidHashMap["Ali1:16"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<S2>"] = {sid: "Ali1:18"};
	this.sidHashMap["Ali1:18"] = {rtwname: "<S2>"};
	this.rtwnameHashMap["<S3>"] = {sid: "Ali1:21"};
	this.sidHashMap["Ali1:21"] = {rtwname: "<S3>"};
	this.rtwnameHashMap["<S4>"] = {sid: "Ali1:8"};
	this.sidHashMap["Ali1:8"] = {rtwname: "<S4>"};
	this.rtwnameHashMap["<S5>"] = {sid: "Ali1:20"};
	this.sidHashMap["Ali1:20"] = {rtwname: "<S5>"};
	this.rtwnameHashMap["<Root>/<=500"] = {sid: "Ali1:16"};
	this.sidHashMap["Ali1:16"] = {rtwname: "<Root>/<=500"};
	this.rtwnameHashMap["<Root>/>500"] = {sid: "Ali1:18"};
	this.sidHashMap["Ali1:18"] = {rtwname: "<Root>/>500"};
	this.rtwnameHashMap["<Root>/Analog Input"] = {sid: "Ali1:7"};
	this.sidHashMap["Ali1:7"] = {rtwname: "<Root>/Analog Input"};
	this.rtwnameHashMap["<Root>/Digital Output"] = {sid: "Ali1:21"};
	this.sidHashMap["Ali1:21"] = {rtwname: "<Root>/Digital Output"};
	this.rtwnameHashMap["<Root>/Logical Operator"] = {sid: "Ali1:26"};
	this.sidHashMap["Ali1:26"] = {rtwname: "<Root>/Logical Operator"};
	this.rtwnameHashMap["<Root>/Scope"] = {sid: "Ali1:27"};
	this.sidHashMap["Ali1:27"] = {rtwname: "<Root>/Scope"};
	this.rtwnameHashMap["<S1>/In1"] = {sid: "Ali1:17"};
	this.sidHashMap["Ali1:17"] = {rtwname: "<S1>/In1"};
	this.rtwnameHashMap["<S1>/Compare To Constant"] = {sid: "Ali1:8"};
	this.sidHashMap["Ali1:8"] = {rtwname: "<S1>/Compare To Constant"};
	this.rtwnameHashMap["<S1>/Logical Operator"] = {sid: "Ali1:14"};
	this.sidHashMap["Ali1:14"] = {rtwname: "<S1>/Logical Operator"};
	this.rtwnameHashMap["<S1>/Pulse Generator"] = {sid: "Ali1:13"};
	this.sidHashMap["Ali1:13"] = {rtwname: "<S1>/Pulse Generator"};
	this.rtwnameHashMap["<S1>/Out1"] = {sid: "Ali1:25"};
	this.sidHashMap["Ali1:25"] = {rtwname: "<S1>/Out1"};
	this.rtwnameHashMap["<S2>/In1"] = {sid: "Ali1:19"};
	this.sidHashMap["Ali1:19"] = {rtwname: "<S2>/In1"};
	this.rtwnameHashMap["<S2>/Compare To Constant"] = {sid: "Ali1:20"};
	this.sidHashMap["Ali1:20"] = {rtwname: "<S2>/Compare To Constant"};
	this.rtwnameHashMap["<S2>/Logical Operator"] = {sid: "Ali1:22"};
	this.sidHashMap["Ali1:22"] = {rtwname: "<S2>/Logical Operator"};
	this.rtwnameHashMap["<S2>/Pulse Generator"] = {sid: "Ali1:23"};
	this.sidHashMap["Ali1:23"] = {rtwname: "<S2>/Pulse Generator"};
	this.rtwnameHashMap["<S2>/Out1"] = {sid: "Ali1:24"};
	this.sidHashMap["Ali1:24"] = {rtwname: "<S2>/Out1"};
	this.rtwnameHashMap["<S3>/In1"] = {sid: "Ali1:21:116"};
	this.sidHashMap["Ali1:21:116"] = {rtwname: "<S3>/In1"};
	this.rtwnameHashMap["<S3>/Data Type Conversion"] = {sid: "Ali1:21:114"};
	this.sidHashMap["Ali1:21:114"] = {rtwname: "<S3>/Data Type Conversion"};
	this.rtwnameHashMap["<S3>/Digital Output"] = {sid: "Ali1:21:214"};
	this.sidHashMap["Ali1:21:214"] = {rtwname: "<S3>/Digital Output"};
	this.rtwnameHashMap["<S4>/u"] = {sid: "Ali1:8:1"};
	this.sidHashMap["Ali1:8:1"] = {rtwname: "<S4>/u"};
	this.rtwnameHashMap["<S4>/Compare"] = {sid: "Ali1:8:2"};
	this.sidHashMap["Ali1:8:2"] = {rtwname: "<S4>/Compare"};
	this.rtwnameHashMap["<S4>/Constant"] = {sid: "Ali1:8:3"};
	this.sidHashMap["Ali1:8:3"] = {rtwname: "<S4>/Constant"};
	this.rtwnameHashMap["<S4>/y"] = {sid: "Ali1:8:4"};
	this.sidHashMap["Ali1:8:4"] = {rtwname: "<S4>/y"};
	this.rtwnameHashMap["<S5>/u"] = {sid: "Ali1:20:1"};
	this.sidHashMap["Ali1:20:1"] = {rtwname: "<S5>/u"};
	this.rtwnameHashMap["<S5>/Compare"] = {sid: "Ali1:20:2"};
	this.sidHashMap["Ali1:20:2"] = {rtwname: "<S5>/Compare"};
	this.rtwnameHashMap["<S5>/Constant"] = {sid: "Ali1:20:3"};
	this.sidHashMap["Ali1:20:3"] = {rtwname: "<S5>/Constant"};
	this.rtwnameHashMap["<S5>/y"] = {sid: "Ali1:20:4"};
	this.sidHashMap["Ali1:20:4"] = {rtwname: "<S5>/y"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
