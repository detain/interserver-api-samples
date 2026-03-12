#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PasswordRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PasswordRequest::PasswordRequest()
{
	//__init();
}

PasswordRequest::~PasswordRequest()
{
	//__cleanup();
}

void
PasswordRequest::__init()
{
	//password = std::string();
}

void
PasswordRequest::__cleanup()
{
	//if(password != NULL) {
	//
	//delete password;
	//password = NULL;
	//}
	//
}

void
PasswordRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *passwordKey = "password";
	node = json_object_get_member(pJsonObject, passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&password, node, "std::string", "");
		} else {
			
		}
	}
}

PasswordRequest::PasswordRequest(char* json)
{
	this->fromJson(json);
}

char*
PasswordRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
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
PasswordRequest::getPassword()
{
	return password;
}

void
PasswordRequest::setPassword(std::string  password)
{
	this->password = password;
}


