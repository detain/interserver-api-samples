#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupOrderPostResponse_cj_params.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupOrderPostResponse_cj_params::BackupOrderPostResponse_cj_params()
{
	//__init();
}

BackupOrderPostResponse_cj_params::~BackupOrderPostResponse_cj_params()
{
	//__cleanup();
}

void
BackupOrderPostResponse_cj_params::__init()
{
	//containerTagId = std::string();
	//cID = std::string();
	//oID = std::string();
	//tYPE = std::string();
	//iTEM1 = std::string();
	//aMT1 = std::string();
	//qTY1 = int(0);
	//cURRENCY = std::string();
}

void
BackupOrderPostResponse_cj_params::__cleanup()
{
	//if(containerTagId != NULL) {
	//
	//delete containerTagId;
	//containerTagId = NULL;
	//}
	//if(cID != NULL) {
	//
	//delete cID;
	//cID = NULL;
	//}
	//if(oID != NULL) {
	//
	//delete oID;
	//oID = NULL;
	//}
	//if(tYPE != NULL) {
	//
	//delete tYPE;
	//tYPE = NULL;
	//}
	//if(iTEM1 != NULL) {
	//
	//delete iTEM1;
	//iTEM1 = NULL;
	//}
	//if(aMT1 != NULL) {
	//
	//delete aMT1;
	//aMT1 = NULL;
	//}
	//if(qTY1 != NULL) {
	//
	//delete qTY1;
	//qTY1 = NULL;
	//}
	//if(cURRENCY != NULL) {
	//
	//delete cURRENCY;
	//cURRENCY = NULL;
	//}
	//
}

void
BackupOrderPostResponse_cj_params::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *containerTagIdKey = "containerTagId";
	node = json_object_get_member(pJsonObject, containerTagIdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&containerTagId, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cIDKey = "CID";
	node = json_object_get_member(pJsonObject, cIDKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cID, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *oIDKey = "OID";
	node = json_object_get_member(pJsonObject, oIDKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&oID, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *tYPEKey = "TYPE";
	node = json_object_get_member(pJsonObject, tYPEKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tYPE, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *iTEM1Key = "ITEM1";
	node = json_object_get_member(pJsonObject, iTEM1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&iTEM1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *aMT1Key = "AMT1";
	node = json_object_get_member(pJsonObject, aMT1Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&aMT1, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qTY1Key = "QTY1";
	node = json_object_get_member(pJsonObject, qTY1Key);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&qTY1, node, "int", "");
		} else {
			
		}
	}
	const gchar *cURRENCYKey = "CURRENCY";
	node = json_object_get_member(pJsonObject, cURRENCYKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cURRENCY, node, "std::string", "");
		} else {
			
		}
	}
}

BackupOrderPostResponse_cj_params::BackupOrderPostResponse_cj_params(char* json)
{
	this->fromJson(json);
}

char*
BackupOrderPostResponse_cj_params::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getContainerTagId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *containerTagIdKey = "containerTagId";
	json_object_set_member(pJsonObject, containerTagIdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCID();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cIDKey = "CID";
	json_object_set_member(pJsonObject, cIDKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOID();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *oIDKey = "OID";
	json_object_set_member(pJsonObject, oIDKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTYPE();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tYPEKey = "TYPE";
	json_object_set_member(pJsonObject, tYPEKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getITEM1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *iTEM1Key = "ITEM1";
	json_object_set_member(pJsonObject, iTEM1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getAMT1();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *aMT1Key = "AMT1";
	json_object_set_member(pJsonObject, aMT1Key, node);
	if (isprimitive("int")) {
		int obj = getQTY1();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *qTY1Key = "QTY1";
	json_object_set_member(pJsonObject, qTY1Key, node);
	if (isprimitive("std::string")) {
		std::string obj = getCURRENCY();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cURRENCYKey = "CURRENCY";
	json_object_set_member(pJsonObject, cURRENCYKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BackupOrderPostResponse_cj_params::getContainerTagId()
{
	return containerTagId;
}

void
BackupOrderPostResponse_cj_params::setContainerTagId(std::string  containerTagId)
{
	this->containerTagId = containerTagId;
}

std::string
BackupOrderPostResponse_cj_params::getCID()
{
	return cID;
}

void
BackupOrderPostResponse_cj_params::setCID(std::string  cID)
{
	this->cID = cID;
}

std::string
BackupOrderPostResponse_cj_params::getOID()
{
	return oID;
}

void
BackupOrderPostResponse_cj_params::setOID(std::string  oID)
{
	this->oID = oID;
}

std::string
BackupOrderPostResponse_cj_params::getTYPE()
{
	return tYPE;
}

void
BackupOrderPostResponse_cj_params::setTYPE(std::string  tYPE)
{
	this->tYPE = tYPE;
}

std::string
BackupOrderPostResponse_cj_params::getITEM1()
{
	return iTEM1;
}

void
BackupOrderPostResponse_cj_params::setITEM1(std::string  iTEM1)
{
	this->iTEM1 = iTEM1;
}

std::string
BackupOrderPostResponse_cj_params::getAMT1()
{
	return aMT1;
}

void
BackupOrderPostResponse_cj_params::setAMT1(std::string  aMT1)
{
	this->aMT1 = aMT1;
}

int
BackupOrderPostResponse_cj_params::getQTY1()
{
	return qTY1;
}

void
BackupOrderPostResponse_cj_params::setQTY1(int  qTY1)
{
	this->qTY1 = qTY1;
}

std::string
BackupOrderPostResponse_cj_params::getCURRENCY()
{
	return cURRENCY;
}

void
BackupOrderPostResponse_cj_params::setCURRENCY(std::string  cURRENCY)
{
	this->cURRENCY = cURRENCY;
}


