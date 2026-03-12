#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailAlertsResponse_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailAlertsResponse_inner::MailAlertsResponse_inner()
{
	//__init();
}

MailAlertsResponse_inner::~MailAlertsResponse_inner()
{
	//__cleanup();
}

void
MailAlertsResponse_inner::__init()
{
	//alert_id = int(0);
	//alert_type = std::string();
	//alert_value = std::string();
	//alert_to = std::string();
	//alert_enabled = std::string();
}

void
MailAlertsResponse_inner::__cleanup()
{
	//if(alert_id != NULL) {
	//
	//delete alert_id;
	//alert_id = NULL;
	//}
	//if(alert_type != NULL) {
	//
	//delete alert_type;
	//alert_type = NULL;
	//}
	//if(alert_value != NULL) {
	//
	//delete alert_value;
	//alert_value = NULL;
	//}
	//if(alert_to != NULL) {
	//
	//delete alert_to;
	//alert_to = NULL;
	//}
	//if(alert_enabled != NULL) {
	//
	//delete alert_enabled;
	//alert_enabled = NULL;
	//}
	//
}

void
MailAlertsResponse_inner::fromJson(char* jsonStr)
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
	const gchar *alert_typeKey = "alert_type";
	node = json_object_get_member(pJsonObject, alert_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&alert_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *alert_valueKey = "alert_value";
	node = json_object_get_member(pJsonObject, alert_valueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&alert_value, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *alert_toKey = "alert_to";
	node = json_object_get_member(pJsonObject, alert_toKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&alert_to, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *alert_enabledKey = "alert_enabled";
	node = json_object_get_member(pJsonObject, alert_enabledKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&alert_enabled, node, "std::string", "");
		} else {
			
		}
	}
}

MailAlertsResponse_inner::MailAlertsResponse_inner(char* json)
{
	this->fromJson(json);
}

char*
MailAlertsResponse_inner::toJson()
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
		std::string obj = getAlertType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *alert_typeKey = "alert_type";
	json_object_set_member(pJsonObject, alert_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAlertValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *alert_valueKey = "alert_value";
	json_object_set_member(pJsonObject, alert_valueKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAlertTo();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *alert_toKey = "alert_to";
	json_object_set_member(pJsonObject, alert_toKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAlertEnabled();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *alert_enabledKey = "alert_enabled";
	json_object_set_member(pJsonObject, alert_enabledKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
MailAlertsResponse_inner::getAlertId()
{
	return alert_id;
}

void
MailAlertsResponse_inner::setAlertId(int  alert_id)
{
	this->alert_id = alert_id;
}

std::string
MailAlertsResponse_inner::getAlertType()
{
	return alert_type;
}

void
MailAlertsResponse_inner::setAlertType(std::string  alert_type)
{
	this->alert_type = alert_type;
}

std::string
MailAlertsResponse_inner::getAlertValue()
{
	return alert_value;
}

void
MailAlertsResponse_inner::setAlertValue(std::string  alert_value)
{
	this->alert_value = alert_value;
}

std::string
MailAlertsResponse_inner::getAlertTo()
{
	return alert_to;
}

void
MailAlertsResponse_inner::setAlertTo(std::string  alert_to)
{
	this->alert_to = alert_to;
}

std::string
MailAlertsResponse_inner::getAlertEnabled()
{
	return alert_enabled;
}

void
MailAlertsResponse_inner::setAlertEnabled(std::string  alert_enabled)
{
	this->alert_enabled = alert_enabled;
}


