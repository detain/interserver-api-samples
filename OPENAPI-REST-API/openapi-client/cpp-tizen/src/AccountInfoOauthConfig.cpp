#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfoOauthConfig.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfoOauthConfig::AccountInfoOauthConfig()
{
	//__init();
}

AccountInfoOauthConfig::~AccountInfoOauthConfig()
{
	//__cleanup();
}

void
AccountInfoOauthConfig::__init()
{
	//callback = std::string();
	//providers = new AccountInfoOauthConfigProviders();
}

void
AccountInfoOauthConfig::__cleanup()
{
	//if(callback != NULL) {
	//
	//delete callback;
	//callback = NULL;
	//}
	//if(providers != NULL) {
	//
	//delete providers;
	//providers = NULL;
	//}
	//
}

void
AccountInfoOauthConfig::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *callbackKey = "callback";
	node = json_object_get_member(pJsonObject, callbackKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&callback, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *providersKey = "providers";
	node = json_object_get_member(pJsonObject, providersKey);
	if (node !=NULL) {
	

		if (isprimitive("AccountInfoOauthConfigProviders")) {
			jsonToValue(&providers, node, "AccountInfoOauthConfigProviders", "AccountInfoOauthConfigProviders");
		} else {
			
			AccountInfoOauthConfigProviders* obj = static_cast<AccountInfoOauthConfigProviders*> (&providers);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

AccountInfoOauthConfig::AccountInfoOauthConfig(char* json)
{
	this->fromJson(json);
}

char*
AccountInfoOauthConfig::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCallback();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *callbackKey = "callback";
	json_object_set_member(pJsonObject, callbackKey, node);
	if (isprimitive("AccountInfoOauthConfigProviders")) {
		AccountInfoOauthConfigProviders obj = getProviders();
		node = converttoJson(&obj, "AccountInfoOauthConfigProviders", "");
	}
	else {
		
		AccountInfoOauthConfigProviders obj = static_cast<AccountInfoOauthConfigProviders> (getProviders());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *providersKey = "providers";
	json_object_set_member(pJsonObject, providersKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AccountInfoOauthConfig::getCallback()
{
	return callback;
}

void
AccountInfoOauthConfig::setCallback(std::string  callback)
{
	this->callback = callback;
}

AccountInfoOauthConfigProviders
AccountInfoOauthConfig::getProviders()
{
	return providers;
}

void
AccountInfoOauthConfig::setProviders(AccountInfoOauthConfigProviders  providers)
{
	this->providers = providers;
}


