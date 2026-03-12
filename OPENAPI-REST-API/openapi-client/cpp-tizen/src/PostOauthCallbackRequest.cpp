#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PostOauthCallback_request.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PostOauthCallback_request::PostOauthCallback_request()
{
	//__init();
}

PostOauthCallback_request::~PostOauthCallback_request()
{
	//__cleanup();
}

void
PostOauthCallback_request::__init()
{
	//provider = std::string();
}

void
PostOauthCallback_request::__cleanup()
{
	//if(provider != NULL) {
	//
	//delete provider;
	//provider = NULL;
	//}
	//
}

void
PostOauthCallback_request::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *providerKey = "provider";
	node = json_object_get_member(pJsonObject, providerKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&provider, node, "std::string", "");
		} else {
			
		}
	}
}

PostOauthCallback_request::PostOauthCallback_request(char* json)
{
	this->fromJson(json);
}

char*
PostOauthCallback_request::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getProvider();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *providerKey = "provider";
	json_object_set_member(pJsonObject, providerKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
PostOauthCallback_request::getProvider()
{
	return provider;
}

void
PostOauthCallback_request::setProvider(std::string  provider)
{
	this->provider = provider;
}


