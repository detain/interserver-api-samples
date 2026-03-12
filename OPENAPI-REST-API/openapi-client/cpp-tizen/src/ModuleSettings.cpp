#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ModuleSettings.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ModuleSettings::ModuleSettings()
{
	//__init();
}

ModuleSettings::~ModuleSettings()
{
	//__cleanup();
}

void
ModuleSettings::__init()
{
	//sERVICE_ID_OFFSET = int(0);
	//uSE_REPEAT_INVOICE = bool(false);
	//uSE_PACKAGES = bool(false);
	//bILLING_DAYS_OFFSET = int(0);
	//iMGNAME = std::string();
	//rEPEAT_BILLING_METHOD = int(0);
	//dELETE_PENDING_DAYS = int(0);
	//sUSPEND_DAYS = int(0);
	//sUSPEND_WARNING_DAYS = int(0);
	//tITLE = std::string();
	//mENUNAME = std::string();
	//eMAIL_FROM = std::string();
	//tBLNAME = std::string();
	//tABLE = std::string();
	//tITLE_FIELD = std::string();
	//pREFIX = std::string();
	//tITLE_FIELD2 = std::string();
	//tITLE_FIELD3 = std::string();
}

void
ModuleSettings::__cleanup()
{
	//if(sERVICE_ID_OFFSET != NULL) {
	//
	//delete sERVICE_ID_OFFSET;
	//sERVICE_ID_OFFSET = NULL;
	//}
	//if(uSE_REPEAT_INVOICE != NULL) {
	//
	//delete uSE_REPEAT_INVOICE;
	//uSE_REPEAT_INVOICE = NULL;
	//}
	//if(uSE_PACKAGES != NULL) {
	//
	//delete uSE_PACKAGES;
	//uSE_PACKAGES = NULL;
	//}
	//if(bILLING_DAYS_OFFSET != NULL) {
	//
	//delete bILLING_DAYS_OFFSET;
	//bILLING_DAYS_OFFSET = NULL;
	//}
	//if(iMGNAME != NULL) {
	//
	//delete iMGNAME;
	//iMGNAME = NULL;
	//}
	//if(rEPEAT_BILLING_METHOD != NULL) {
	//
	//delete rEPEAT_BILLING_METHOD;
	//rEPEAT_BILLING_METHOD = NULL;
	//}
	//if(dELETE_PENDING_DAYS != NULL) {
	//
	//delete dELETE_PENDING_DAYS;
	//dELETE_PENDING_DAYS = NULL;
	//}
	//if(sUSPEND_DAYS != NULL) {
	//
	//delete sUSPEND_DAYS;
	//sUSPEND_DAYS = NULL;
	//}
	//if(sUSPEND_WARNING_DAYS != NULL) {
	//
	//delete sUSPEND_WARNING_DAYS;
	//sUSPEND_WARNING_DAYS = NULL;
	//}
	//if(tITLE != NULL) {
	//
	//delete tITLE;
	//tITLE = NULL;
	//}
	//if(mENUNAME != NULL) {
	//
	//delete mENUNAME;
	//mENUNAME = NULL;
	//}
	//if(eMAIL_FROM != NULL) {
	//
	//delete eMAIL_FROM;
	//eMAIL_FROM = NULL;
	//}
	//if(tBLNAME != NULL) {
	//
	//delete tBLNAME;
	//tBLNAME = NULL;
	//}
	//if(tABLE != NULL) {
	//
	//delete tABLE;
	//tABLE = NULL;
	//}
	//if(tITLE_FIELD != NULL) {
	//
	//delete tITLE_FIELD;
	//tITLE_FIELD = NULL;
	//}
	//if(pREFIX != NULL) {
	//
	//delete pREFIX;
	//pREFIX = NULL;
	//}
	//if(tITLE_FIELD2 != NULL) {
	//
	//delete tITLE_FIELD2;
	//tITLE_FIELD2 = NULL;
	//}
	//if(tITLE_FIELD3 != NULL) {
	//
	//delete tITLE_FIELD3;
	//tITLE_FIELD3 = NULL;
	//}
	//
}

void
ModuleSettings::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *sERVICE_ID_OFFSETKey = "SERVICE_ID_OFFSET";
	node = json_object_get_member(pJsonObject, sERVICE_ID_OFFSETKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sERVICE_ID_OFFSET, node, "int", "");
		} else {
			
		}
	}
	const gchar *uSE_REPEAT_INVOICEKey = "USE_REPEAT_INVOICE";
	node = json_object_get_member(pJsonObject, uSE_REPEAT_INVOICEKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&uSE_REPEAT_INVOICE, node, "bool", "");
		} else {
			
		}
	}
	const gchar *uSE_PACKAGESKey = "USE_PACKAGES";
	node = json_object_get_member(pJsonObject, uSE_PACKAGESKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&uSE_PACKAGES, node, "bool", "");
		} else {
			
		}
	}
	const gchar *bILLING_DAYS_OFFSETKey = "BILLING_DAYS_OFFSET";
	node = json_object_get_member(pJsonObject, bILLING_DAYS_OFFSETKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&bILLING_DAYS_OFFSET, node, "int", "");
		} else {
			
		}
	}
	const gchar *iMGNAMEKey = "IMGNAME";
	node = json_object_get_member(pJsonObject, iMGNAMEKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&iMGNAME, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rEPEAT_BILLING_METHODKey = "REPEAT_BILLING_METHOD";
	node = json_object_get_member(pJsonObject, rEPEAT_BILLING_METHODKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&rEPEAT_BILLING_METHOD, node, "int", "");
		} else {
			
		}
	}
	const gchar *dELETE_PENDING_DAYSKey = "DELETE_PENDING_DAYS";
	node = json_object_get_member(pJsonObject, dELETE_PENDING_DAYSKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&dELETE_PENDING_DAYS, node, "int", "");
		} else {
			
		}
	}
	const gchar *sUSPEND_DAYSKey = "SUSPEND_DAYS";
	node = json_object_get_member(pJsonObject, sUSPEND_DAYSKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sUSPEND_DAYS, node, "int", "");
		} else {
			
		}
	}
	const gchar *sUSPEND_WARNING_DAYSKey = "SUSPEND_WARNING_DAYS";
	node = json_object_get_member(pJsonObject, sUSPEND_WARNING_DAYSKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sUSPEND_WARNING_DAYS, node, "int", "");
		} else {
			
		}
	}
	const gchar *tITLEKey = "TITLE";
	node = json_object_get_member(pJsonObject, tITLEKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tITLE, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mENUNAMEKey = "MENUNAME";
	node = json_object_get_member(pJsonObject, mENUNAMEKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mENUNAME, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *eMAIL_FROMKey = "EMAIL_FROM";
	node = json_object_get_member(pJsonObject, eMAIL_FROMKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&eMAIL_FROM, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tBLNAMEKey = "TBLNAME";
	node = json_object_get_member(pJsonObject, tBLNAMEKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tBLNAME, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tABLEKey = "TABLE";
	node = json_object_get_member(pJsonObject, tABLEKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tABLE, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tITLE_FIELDKey = "TITLE_FIELD";
	node = json_object_get_member(pJsonObject, tITLE_FIELDKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tITLE_FIELD, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *pREFIXKey = "PREFIX";
	node = json_object_get_member(pJsonObject, pREFIXKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&pREFIX, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tITLE_FIELD2Key = "TITLE_FIELD2";
	node = json_object_get_member(pJsonObject, tITLE_FIELD2Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tITLE_FIELD2, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tITLE_FIELD3Key = "TITLE_FIELD3";
	node = json_object_get_member(pJsonObject, tITLE_FIELD3Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tITLE_FIELD3, node, "std::string", "");
		} else {
			
		}
	}
}

ModuleSettings::ModuleSettings(char* json)
{
	this->fromJson(json);
}

char*
ModuleSettings::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getSERVICEIDOFFSET();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sERVICE_ID_OFFSETKey = "SERVICE_ID_OFFSET";
	json_object_set_member(pJsonObject, sERVICE_ID_OFFSETKey, node);
	if (isprimitive("bool")) {
		bool obj = getUSEREPEATINVOICE();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *uSE_REPEAT_INVOICEKey = "USE_REPEAT_INVOICE";
	json_object_set_member(pJsonObject, uSE_REPEAT_INVOICEKey, node);
	if (isprimitive("bool")) {
		bool obj = getUSEPACKAGES();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *uSE_PACKAGESKey = "USE_PACKAGES";
	json_object_set_member(pJsonObject, uSE_PACKAGESKey, node);
	if (isprimitive("int")) {
		int obj = getBILLINGDAYSOFFSET();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *bILLING_DAYS_OFFSETKey = "BILLING_DAYS_OFFSET";
	json_object_set_member(pJsonObject, bILLING_DAYS_OFFSETKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIMGNAME();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *iMGNAMEKey = "IMGNAME";
	json_object_set_member(pJsonObject, iMGNAMEKey, node);
	if (isprimitive("int")) {
		int obj = getREPEATBILLINGMETHOD();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *rEPEAT_BILLING_METHODKey = "REPEAT_BILLING_METHOD";
	json_object_set_member(pJsonObject, rEPEAT_BILLING_METHODKey, node);
	if (isprimitive("int")) {
		int obj = getDELETEPENDINGDAYS();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *dELETE_PENDING_DAYSKey = "DELETE_PENDING_DAYS";
	json_object_set_member(pJsonObject, dELETE_PENDING_DAYSKey, node);
	if (isprimitive("int")) {
		int obj = getSUSPENDDAYS();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sUSPEND_DAYSKey = "SUSPEND_DAYS";
	json_object_set_member(pJsonObject, sUSPEND_DAYSKey, node);
	if (isprimitive("int")) {
		int obj = getSUSPENDWARNINGDAYS();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sUSPEND_WARNING_DAYSKey = "SUSPEND_WARNING_DAYS";
	json_object_set_member(pJsonObject, sUSPEND_WARNING_DAYSKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTITLE();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tITLEKey = "TITLE";
	json_object_set_member(pJsonObject, tITLEKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMENUNAME();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mENUNAMEKey = "MENUNAME";
	json_object_set_member(pJsonObject, mENUNAMEKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEMAILFROM();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *eMAIL_FROMKey = "EMAIL_FROM";
	json_object_set_member(pJsonObject, eMAIL_FROMKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTBLNAME();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tBLNAMEKey = "TBLNAME";
	json_object_set_member(pJsonObject, tBLNAMEKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTABLE();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tABLEKey = "TABLE";
	json_object_set_member(pJsonObject, tABLEKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTITLEFIELD();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tITLE_FIELDKey = "TITLE_FIELD";
	json_object_set_member(pJsonObject, tITLE_FIELDKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPREFIX();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *pREFIXKey = "PREFIX";
	json_object_set_member(pJsonObject, pREFIXKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTITLEFIELD2();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tITLE_FIELD2Key = "TITLE_FIELD2";
	json_object_set_member(pJsonObject, tITLE_FIELD2Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getTITLEFIELD3();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tITLE_FIELD3Key = "TITLE_FIELD3";
	json_object_set_member(pJsonObject, tITLE_FIELD3Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ModuleSettings::getSERVICEIDOFFSET()
{
	return sERVICE_ID_OFFSET;
}

void
ModuleSettings::setSERVICEIDOFFSET(int  sERVICE_ID_OFFSET)
{
	this->sERVICE_ID_OFFSET = sERVICE_ID_OFFSET;
}

bool
ModuleSettings::getUSEREPEATINVOICE()
{
	return uSE_REPEAT_INVOICE;
}

void
ModuleSettings::setUSEREPEATINVOICE(bool  uSE_REPEAT_INVOICE)
{
	this->uSE_REPEAT_INVOICE = uSE_REPEAT_INVOICE;
}

bool
ModuleSettings::getUSEPACKAGES()
{
	return uSE_PACKAGES;
}

void
ModuleSettings::setUSEPACKAGES(bool  uSE_PACKAGES)
{
	this->uSE_PACKAGES = uSE_PACKAGES;
}

int
ModuleSettings::getBILLINGDAYSOFFSET()
{
	return bILLING_DAYS_OFFSET;
}

void
ModuleSettings::setBILLINGDAYSOFFSET(int  bILLING_DAYS_OFFSET)
{
	this->bILLING_DAYS_OFFSET = bILLING_DAYS_OFFSET;
}

std::string
ModuleSettings::getIMGNAME()
{
	return iMGNAME;
}

void
ModuleSettings::setIMGNAME(std::string  iMGNAME)
{
	this->iMGNAME = iMGNAME;
}

int
ModuleSettings::getREPEATBILLINGMETHOD()
{
	return rEPEAT_BILLING_METHOD;
}

void
ModuleSettings::setREPEATBILLINGMETHOD(int  rEPEAT_BILLING_METHOD)
{
	this->rEPEAT_BILLING_METHOD = rEPEAT_BILLING_METHOD;
}

int
ModuleSettings::getDELETEPENDINGDAYS()
{
	return dELETE_PENDING_DAYS;
}

void
ModuleSettings::setDELETEPENDINGDAYS(int  dELETE_PENDING_DAYS)
{
	this->dELETE_PENDING_DAYS = dELETE_PENDING_DAYS;
}

int
ModuleSettings::getSUSPENDDAYS()
{
	return sUSPEND_DAYS;
}

void
ModuleSettings::setSUSPENDDAYS(int  sUSPEND_DAYS)
{
	this->sUSPEND_DAYS = sUSPEND_DAYS;
}

int
ModuleSettings::getSUSPENDWARNINGDAYS()
{
	return sUSPEND_WARNING_DAYS;
}

void
ModuleSettings::setSUSPENDWARNINGDAYS(int  sUSPEND_WARNING_DAYS)
{
	this->sUSPEND_WARNING_DAYS = sUSPEND_WARNING_DAYS;
}

std::string
ModuleSettings::getTITLE()
{
	return tITLE;
}

void
ModuleSettings::setTITLE(std::string  tITLE)
{
	this->tITLE = tITLE;
}

std::string
ModuleSettings::getMENUNAME()
{
	return mENUNAME;
}

void
ModuleSettings::setMENUNAME(std::string  mENUNAME)
{
	this->mENUNAME = mENUNAME;
}

std::string
ModuleSettings::getEMAILFROM()
{
	return eMAIL_FROM;
}

void
ModuleSettings::setEMAILFROM(std::string  eMAIL_FROM)
{
	this->eMAIL_FROM = eMAIL_FROM;
}

std::string
ModuleSettings::getTBLNAME()
{
	return tBLNAME;
}

void
ModuleSettings::setTBLNAME(std::string  tBLNAME)
{
	this->tBLNAME = tBLNAME;
}

std::string
ModuleSettings::getTABLE()
{
	return tABLE;
}

void
ModuleSettings::setTABLE(std::string  tABLE)
{
	this->tABLE = tABLE;
}

std::string
ModuleSettings::getTITLEFIELD()
{
	return tITLE_FIELD;
}

void
ModuleSettings::setTITLEFIELD(std::string  tITLE_FIELD)
{
	this->tITLE_FIELD = tITLE_FIELD;
}

std::string
ModuleSettings::getPREFIX()
{
	return pREFIX;
}

void
ModuleSettings::setPREFIX(std::string  pREFIX)
{
	this->pREFIX = pREFIX;
}

std::string
ModuleSettings::getTITLEFIELD2()
{
	return tITLE_FIELD2;
}

void
ModuleSettings::setTITLEFIELD2(std::string  tITLE_FIELD2)
{
	this->tITLE_FIELD2 = tITLE_FIELD2;
}

std::string
ModuleSettings::getTITLEFIELD3()
{
	return tITLE_FIELD3;
}

void
ModuleSettings::setTITLEFIELD3(std::string  tITLE_FIELD3)
{
	this->tITLE_FIELD3 = tITLE_FIELD3;
}


