#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverRow::QuickserverRow()
{
	//__init();
}

QuickserverRow::~QuickserverRow()
{
	//__cleanup();
}

void
QuickserverRow::__init()
{
	//qs_id = std::string();
	//qs_name = std::string();
	//cost = std::string();
	//qs_hostname = std::string();
	//qs_status = std::string();
	//qs_comment = std::string();
}

void
QuickserverRow::__cleanup()
{
	//if(qs_id != NULL) {
	//
	//delete qs_id;
	//qs_id = NULL;
	//}
	//if(qs_name != NULL) {
	//
	//delete qs_name;
	//qs_name = NULL;
	//}
	//if(cost != NULL) {
	//
	//delete cost;
	//cost = NULL;
	//}
	//if(qs_hostname != NULL) {
	//
	//delete qs_hostname;
	//qs_hostname = NULL;
	//}
	//if(qs_status != NULL) {
	//
	//delete qs_status;
	//qs_status = NULL;
	//}
	//if(qs_comment != NULL) {
	//
	//delete qs_comment;
	//qs_comment = NULL;
	//}
	//
}

void
QuickserverRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *qs_idKey = "qs_id";
	node = json_object_get_member(pJsonObject, qs_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_nameKey = "qs_name";
	node = json_object_get_member(pJsonObject, qs_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *costKey = "cost";
	node = json_object_get_member(pJsonObject, costKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_hostnameKey = "qs_hostname";
	node = json_object_get_member(pJsonObject, qs_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_statusKey = "qs_status";
	node = json_object_get_member(pJsonObject, qs_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *qs_commentKey = "qs_comment";
	node = json_object_get_member(pJsonObject, qs_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qs_comment, node, "std::string", "");
		} else {
			
		}
	}
}

QuickserverRow::QuickserverRow(char* json)
{
	this->fromJson(json);
}

char*
QuickserverRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getQsId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_idKey = "qs_id";
	json_object_set_member(pJsonObject, qs_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_nameKey = "qs_name";
	json_object_set_member(pJsonObject, qs_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *costKey = "cost";
	json_object_set_member(pJsonObject, costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_hostnameKey = "qs_hostname";
	json_object_set_member(pJsonObject, qs_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_statusKey = "qs_status";
	json_object_set_member(pJsonObject, qs_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQsComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qs_commentKey = "qs_comment";
	json_object_set_member(pJsonObject, qs_commentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
QuickserverRow::getQsId()
{
	return qs_id;
}

void
QuickserverRow::setQsId(std::string  qs_id)
{
	this->qs_id = qs_id;
}

std::string
QuickserverRow::getQsName()
{
	return qs_name;
}

void
QuickserverRow::setQsName(std::string  qs_name)
{
	this->qs_name = qs_name;
}

std::string
QuickserverRow::getCost()
{
	return cost;
}

void
QuickserverRow::setCost(std::string  cost)
{
	this->cost = cost;
}

std::string
QuickserverRow::getQsHostname()
{
	return qs_hostname;
}

void
QuickserverRow::setQsHostname(std::string  qs_hostname)
{
	this->qs_hostname = qs_hostname;
}

std::string
QuickserverRow::getQsStatus()
{
	return qs_status;
}

void
QuickserverRow::setQsStatus(std::string  qs_status)
{
	this->qs_status = qs_status;
}

std::string
QuickserverRow::getQsComment()
{
	return qs_comment;
}

void
QuickserverRow::setQsComment(std::string  qs_comment)
{
	this->qs_comment = qs_comment;
}


