#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "RestoreRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

RestoreRequest::RestoreRequest()
{
	//__init();
}

RestoreRequest::~RestoreRequest()
{
	//__cleanup();
}

void
RestoreRequest::__init()
{
	//backup = std::string();
	//password = std::string();
}

void
RestoreRequest::__cleanup()
{
	//if(backup != NULL) {
	//
	//delete backup;
	//backup = NULL;
	//}
	//if(password != NULL) {
	//
	//delete password;
	//password = NULL;
	//}
	//
}

void
RestoreRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *backupKey = "backup";
	node = json_object_get_member(pJsonObject, backupKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup, node, "std::string", "");
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

RestoreRequest::RestoreRequest(char* json)
{
	this->fromJson(json);
}

char*
RestoreRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getBackup();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backupKey = "backup";
	json_object_set_member(pJsonObject, backupKey, node);
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
RestoreRequest::getBackup()
{
	return backup;
}

void
RestoreRequest::setBackup(std::string  backup)
{
	this->backup = backup;
}

std::string
RestoreRequest::getPassword()
{
	return password;
}

void
RestoreRequest::setPassword(std::string  password)
{
	this->password = password;
}


