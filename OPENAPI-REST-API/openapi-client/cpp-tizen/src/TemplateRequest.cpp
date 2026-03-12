#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TemplateRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TemplateRequest::TemplateRequest()
{
	//__init();
}

TemplateRequest::~TemplateRequest()
{
	//__cleanup();
}

void
TemplateRequest::__init()
{
	//r_template = std::string();
	//localPassword = std::string();
	//password = std::string();
}

void
TemplateRequest::__cleanup()
{
	//if(r_template != NULL) {
	//
	//delete r_template;
	//r_template = NULL;
	//}
	//if(localPassword != NULL) {
	//
	//delete localPassword;
	//localPassword = NULL;
	//}
	//if(password != NULL) {
	//
	//delete password;
	//password = NULL;
	//}
	//
}

void
TemplateRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *r_templateKey = "template";
	node = json_object_get_member(pJsonObject, r_templateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&r_template, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *localPasswordKey = "localPassword";
	node = json_object_get_member(pJsonObject, localPasswordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&localPassword, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *passwordKey = "password";
	node = json_object_get_member(pJsonObject, passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&password, node, "std::string", "");
		} else {
			
		}
	}
}

TemplateRequest::TemplateRequest(char* json)
{
	this->fromJson(json);
}

char*
TemplateRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getRTemplate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *r_templateKey = "template";
	json_object_set_member(pJsonObject, r_templateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocalPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *localPasswordKey = "localPassword";
	json_object_set_member(pJsonObject, localPasswordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *passwordKey = "password";
	json_object_set_member(pJsonObject, passwordKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TemplateRequest::getRTemplate()
{
	return r_template;
}

void
TemplateRequest::setRTemplate(std::string  r_template)
{
	this->r_template = r_template;
}

std::string
TemplateRequest::getLocalPassword()
{
	return localPassword;
}

void
TemplateRequest::setLocalPassword(std::string  localPassword)
{
	this->localPassword = localPassword;
}

std::string
TemplateRequest::getPassword()
{
	return password;
}

void
TemplateRequest::setPassword(std::string  password)
{
	this->password = password;
}


