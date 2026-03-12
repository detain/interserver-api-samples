#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "EmailAddress.h"

using namespace std;
using namespace Tizen::ArtikCloud;

EmailAddress::EmailAddress()
{
	//__init();
}

EmailAddress::~EmailAddress()
{
	//__cleanup();
}

void
EmailAddress::__init()
{
	//email = std::string();
}

void
EmailAddress::__cleanup()
{
	//if(email != NULL) {
	//
	//delete email;
	//email = NULL;
	//}
	//
}

void
EmailAddress::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *emailKey = "email";
	node = json_object_get_member(pJsonObject, emailKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&email, node, "std::string", "");
		} else {
			
		}
	}
}

EmailAddress::EmailAddress(char* json)
{
	this->fromJson(json);
}

char*
EmailAddress::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getEmail();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *emailKey = "email";
	json_object_set_member(pJsonObject, emailKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
EmailAddress::getEmail()
{
	return email;
}

void
EmailAddress::setEmail(std::string  email)
{
	this->email = email;
}


