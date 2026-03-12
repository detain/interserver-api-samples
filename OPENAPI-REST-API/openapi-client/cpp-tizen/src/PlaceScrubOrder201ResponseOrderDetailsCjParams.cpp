#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PlaceScrubOrder_201_response_order_details_cj_params.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PlaceScrubOrder_201_response_order_details_cj_params::PlaceScrubOrder_201_response_order_details_cj_params()
{
	//__init();
}

PlaceScrubOrder_201_response_order_details_cj_params::~PlaceScrubOrder_201_response_order_details_cj_params()
{
	//__cleanup();
}

void
PlaceScrubOrder_201_response_order_details_cj_params::__init()
{
	//containerTagId = int(0);
	//cID = int(0);
	//oID = std::string();
	//tYPE = int(0);
	//iTEM1 = std::string();
	//aMT1 = int(0);
	//qTY1 = int(0);
	//cURRENCY = std::string();
}

void
PlaceScrubOrder_201_response_order_details_cj_params::__cleanup()
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
PlaceScrubOrder_201_response_order_details_cj_params::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *containerTagIdKey = "containerTagId";
	node = json_object_get_member(pJsonObject, containerTagIdKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&containerTagId, node, "int", "");
		} else {
			
		}
	}
	const gchar *cIDKey = "CID";
	node = json_object_get_member(pJsonObject, cIDKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cID, node, "int", "");
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
	

		if (isprimitive("int")) {
			jsonToValue(&tYPE, node, "int", "");
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
	

		if (isprimitive("int")) {
			jsonToValue(&aMT1, node, "int", "");
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

PlaceScrubOrder_201_response_order_details_cj_params::PlaceScrubOrder_201_response_order_details_cj_params(char* json)
{
	this->fromJson(json);
}

char*
PlaceScrubOrder_201_response_order_details_cj_params::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getContainerTagId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *containerTagIdKey = "containerTagId";
	json_object_set_member(pJsonObject, containerTagIdKey, node);
	if (isprimitive("int")) {
		int obj = getCID();
		node = converttoJson(&obj, "int", "");
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
	if (isprimitive("int")) {
		int obj = getTYPE();
		node = converttoJson(&obj, "int", "");
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
	if (isprimitive("int")) {
		int obj = getAMT1();
		node = converttoJson(&obj, "int", "");
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

int
PlaceScrubOrder_201_response_order_details_cj_params::getContainerTagId()
{
	return containerTagId;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setContainerTagId(int  containerTagId)
{
	this->containerTagId = containerTagId;
}

int
PlaceScrubOrder_201_response_order_details_cj_params::getCID()
{
	return cID;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setCID(int  cID)
{
	this->cID = cID;
}

std::string
PlaceScrubOrder_201_response_order_details_cj_params::getOID()
{
	return oID;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setOID(std::string  oID)
{
	this->oID = oID;
}

int
PlaceScrubOrder_201_response_order_details_cj_params::getTYPE()
{
	return tYPE;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setTYPE(int  tYPE)
{
	this->tYPE = tYPE;
}

std::string
PlaceScrubOrder_201_response_order_details_cj_params::getITEM1()
{
	return iTEM1;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setITEM1(std::string  iTEM1)
{
	this->iTEM1 = iTEM1;
}

int
PlaceScrubOrder_201_response_order_details_cj_params::getAMT1()
{
	return aMT1;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setAMT1(int  aMT1)
{
	this->aMT1 = aMT1;
}

int
PlaceScrubOrder_201_response_order_details_cj_params::getQTY1()
{
	return qTY1;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setQTY1(int  qTY1)
{
	this->qTY1 = qTY1;
}

std::string
PlaceScrubOrder_201_response_order_details_cj_params::getCURRENCY()
{
	return cURRENCY;
}

void
PlaceScrubOrder_201_response_order_details_cj_params::setCURRENCY(std::string  cURRENCY)
{
	this->cURRENCY = cURRENCY;
}


