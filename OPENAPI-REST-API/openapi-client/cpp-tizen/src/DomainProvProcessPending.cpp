#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainProvProcessPending.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainProvProcessPending::DomainProvProcessPending()
{
	//__init();
}

DomainProvProcessPending::~DomainProvProcessPending()
{
	//__cleanup();
}

void
DomainProvProcessPending::__init()
{
	//_OPS_version = std::string();
	//response_text = std::string();
	//protocol = std::string();
	//response_code = std::string();
	//action = std::string();
	//object = std::string();
	//is_success = std::string();
	//attributes = new DomainProvProcessPending_attributes();
}

void
DomainProvProcessPending::__cleanup()
{
	//if(_OPS_version != NULL) {
	//
	//delete _OPS_version;
	//_OPS_version = NULL;
	//}
	//if(response_text != NULL) {
	//
	//delete response_text;
	//response_text = NULL;
	//}
	//if(protocol != NULL) {
	//
	//delete protocol;
	//protocol = NULL;
	//}
	//if(response_code != NULL) {
	//
	//delete response_code;
	//response_code = NULL;
	//}
	//if(action != NULL) {
	//
	//delete action;
	//action = NULL;
	//}
	//if(object != NULL) {
	//
	//delete object;
	//object = NULL;
	//}
	//if(is_success != NULL) {
	//
	//delete is_success;
	//is_success = NULL;
	//}
	//if(attributes != NULL) {
	//
	//delete attributes;
	//attributes = NULL;
	//}
	//
}

void
DomainProvProcessPending::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *_OPS_versionKey = "_OPS_version";
	node = json_object_get_member(pJsonObject, _OPS_versionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&_OPS_version, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *response_textKey = "response_text";
	node = json_object_get_member(pJsonObject, response_textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&response_text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *protocolKey = "protocol";
	node = json_object_get_member(pJsonObject, protocolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&protocol, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *response_codeKey = "response_code";
	node = json_object_get_member(pJsonObject, response_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&response_code, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *actionKey = "action";
	node = json_object_get_member(pJsonObject, actionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&action, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *objectKey = "object";
	node = json_object_get_member(pJsonObject, objectKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&object, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *is_successKey = "is_success";
	node = json_object_get_member(pJsonObject, is_successKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&is_success, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *attributesKey = "attributes";
	node = json_object_get_member(pJsonObject, attributesKey);
	if (node !=NULL) {
	

		if (isprimitive("DomainProvProcessPending_attributes")) {
			jsonToValue(&attributes, node, "DomainProvProcessPending_attributes", "DomainProvProcessPending_attributes");
		} else {
			
			DomainProvProcessPending_attributes* obj = static_cast<DomainProvProcessPending_attributes*> (&attributes);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

DomainProvProcessPending::DomainProvProcessPending(char* json)
{
	this->fromJson(json);
}

char*
DomainProvProcessPending::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getOPSVersion();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *_OPS_versionKey = "_OPS_version";
	json_object_set_member(pJsonObject, _OPS_versionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getResponseText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *response_textKey = "response_text";
	json_object_set_member(pJsonObject, response_textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getProtocol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *protocolKey = "protocol";
	json_object_set_member(pJsonObject, protocolKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getResponseCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *response_codeKey = "response_code";
	json_object_set_member(pJsonObject, response_codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAction();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *actionKey = "action";
	json_object_set_member(pJsonObject, actionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getObject();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *objectKey = "object";
	json_object_set_member(pJsonObject, objectKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIsSuccess();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *is_successKey = "is_success";
	json_object_set_member(pJsonObject, is_successKey, node);
	if (isprimitive("DomainProvProcessPending_attributes")) {
		DomainProvProcessPending_attributes obj = getAttributes();
		node = converttoJson(&obj, "DomainProvProcessPending_attributes", "");
	}
	else {
		
		DomainProvProcessPending_attributes obj = static_cast<DomainProvProcessPending_attributes> (getAttributes());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *attributesKey = "attributes";
	json_object_set_member(pJsonObject, attributesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainProvProcessPending::getOPSVersion()
{
	return _OPS_version;
}

void
DomainProvProcessPending::setOPSVersion(std::string  _OPS_version)
{
	this->_OPS_version = _OPS_version;
}

std::string
DomainProvProcessPending::getResponseText()
{
	return response_text;
}

void
DomainProvProcessPending::setResponseText(std::string  response_text)
{
	this->response_text = response_text;
}

std::string
DomainProvProcessPending::getProtocol()
{
	return protocol;
}

void
DomainProvProcessPending::setProtocol(std::string  protocol)
{
	this->protocol = protocol;
}

std::string
DomainProvProcessPending::getResponseCode()
{
	return response_code;
}

void
DomainProvProcessPending::setResponseCode(std::string  response_code)
{
	this->response_code = response_code;
}

std::string
DomainProvProcessPending::getAction()
{
	return action;
}

void
DomainProvProcessPending::setAction(std::string  action)
{
	this->action = action;
}

std::string
DomainProvProcessPending::getObject()
{
	return object;
}

void
DomainProvProcessPending::setObject(std::string  object)
{
	this->object = object;
}

std::string
DomainProvProcessPending::getIsSuccess()
{
	return is_success;
}

void
DomainProvProcessPending::setIsSuccess(std::string  is_success)
{
	this->is_success = is_success;
}

DomainProvProcessPending_attributes
DomainProvProcessPending::getAttributes()
{
	return attributes;
}

void
DomainProvProcessPending::setAttributes(DomainProvProcessPending_attributes  attributes)
{
	this->attributes = attributes;
}


