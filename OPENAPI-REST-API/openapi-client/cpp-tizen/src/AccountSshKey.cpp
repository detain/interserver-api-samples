#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountSshKey.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountSshKey::AccountSshKey()
{
	//__init();
}

AccountSshKey::~AccountSshKey()
{
	//__cleanup();
}

void
AccountSshKey::__init()
{
	//ssh_key = std::string();
}

void
AccountSshKey::__cleanup()
{
	//if(ssh_key != NULL) {
	//
	//delete ssh_key;
	//ssh_key = NULL;
	//}
	//
}

void
AccountSshKey::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ssh_keyKey = "ssh_key";
	node = json_object_get_member(pJsonObject, ssh_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ssh_key, node, "std::string", "");
		} else {
			
		}
	}
}

AccountSshKey::AccountSshKey(char* json)
{
	this->fromJson(json);
}

char*
AccountSshKey::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getSshKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ssh_keyKey = "ssh_key";
	json_object_set_member(pJsonObject, ssh_keyKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AccountSshKey::getSshKey()
{
	return ssh_key;
}

void
AccountSshKey::setSshKey(std::string  ssh_key)
{
	this->ssh_key = ssh_key;
}


