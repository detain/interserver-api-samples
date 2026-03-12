#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailAlertUpdateRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailAlertUpdateRequest::MailAlertUpdateRequest()
{
	//__init();
}

MailAlertUpdateRequest::~MailAlertUpdateRequest()
{
	//__cleanup();
}

void
MailAlertUpdateRequest::__init()
{
	//alert_id = int(0);
	//type = std::string();
	//value = std::string();
	//to = std::string();
	//enabled = std::string();
}

void
MailAlertUpdateRequest::__cleanup()
{
	//if(alert_id != NULL) {
	//
	//delete alert_id;
	//alert_id = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//if(to != NULL) {
	//
	//delete to;
	//to = NULL;
	//}
	//if(enabled != NULL) {
	//
	//delete enabled;
	//enabled = NULL;
	//}
	//
}

void
MailAlertUpdateRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *alert_idKey = "alert_id";
	node = json_object_get_member(pJsonObject, alert_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&alert_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *toKey = "to";
	node = json_object_get_member(pJsonObject, toKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&to, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *enabledKey = "enabled";
	node = json_object_get_member(pJsonObject, enabledKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&enabled, node, "std::string", "");
		} else {
			
		}
	}
}

MailAlertUpdateRequest::MailAlertUpdateRequest(char* json)
{
	this->fromJson(json);
}

char*
MailAlertUpdateRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getAlertId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *alert_idKey = "alert_id";
	json_object_set_member(pJsonObject, alert_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTo();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *toKey = "to";
	json_object_set_member(pJsonObject, toKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEnabled();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *enabledKey = "enabled";
	json_object_set_member(pJsonObject, enabledKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
MailAlertUpdateRequest::getAlertId()
{
	return alert_id;
}

void
MailAlertUpdateRequest::setAlertId(int  alert_id)
{
	this->alert_id = alert_id;
}

std::string
MailAlertUpdateRequest::getType()
{
	return type;
}

void
MailAlertUpdateRequest::setType(std::string  type)
{
	this->type = type;
}

std::string
MailAlertUpdateRequest::getValue()
{
	return value;
}

void
MailAlertUpdateRequest::setValue(std::string  value)
{
	this->value = value;
}

std::string
MailAlertUpdateRequest::getTo()
{
	return to;
}

void
MailAlertUpdateRequest::setTo(std::string  to)
{
	this->to = to;
}

std::string
MailAlertUpdateRequest::getEnabled()
{
	return enabled;
}

void
MailAlertUpdateRequest::setEnabled(std::string  enabled)
{
	this->enabled = enabled;
}


