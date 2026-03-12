#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfoOauthConfigProviders_value.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfoOauthConfigProviders_value::AccountInfoOauthConfigProviders_value()
{
	//__init();
}

AccountInfoOauthConfigProviders_value::~AccountInfoOauthConfigProviders_value()
{
	//__cleanup();
}

void
AccountInfoOauthConfigProviders_value::__init()
{
	//enabled = bool(false);
	//linked = bool(false);
	//account = std::string();
	//url = std::string();
}

void
AccountInfoOauthConfigProviders_value::__cleanup()
{
	//if(enabled != NULL) {
	//
	//delete enabled;
	//enabled = NULL;
	//}
	//if(linked != NULL) {
	//
	//delete linked;
	//linked = NULL;
	//}
	//if(account != NULL) {
	//
	//delete account;
	//account = NULL;
	//}
	//if(url != NULL) {
	//
	//delete url;
	//url = NULL;
	//}
	//
}

void
AccountInfoOauthConfigProviders_value::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *enabledKey = "enabled";
	node = json_object_get_member(pJsonObject, enabledKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&enabled, node, "bool", "");
		} else {
			
		}
	}
	const gchar *linkedKey = "linked";
	node = json_object_get_member(pJsonObject, linkedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&linked, node, "bool", "");
		} else {
			
		}
	}
	const gchar *accountKey = "account";
	node = json_object_get_member(pJsonObject, accountKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&account, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *urlKey = "url";
	node = json_object_get_member(pJsonObject, urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&url, node, "std::string", "");
		} else {
			
		}
	}
}

AccountInfoOauthConfigProviders_value::AccountInfoOauthConfigProviders_value(char* json)
{
	this->fromJson(json);
}

char*
AccountInfoOauthConfigProviders_value::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getEnabled();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *enabledKey = "enabled";
	json_object_set_member(pJsonObject, enabledKey, node);
	if (isprimitive("bool")) {
		bool obj = getLinked();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *linkedKey = "linked";
	json_object_set_member(pJsonObject, linkedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAccount();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *accountKey = "account";
	json_object_set_member(pJsonObject, accountKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *urlKey = "url";
	json_object_set_member(pJsonObject, urlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
AccountInfoOauthConfigProviders_value::getEnabled()
{
	return enabled;
}

void
AccountInfoOauthConfigProviders_value::setEnabled(bool  enabled)
{
	this->enabled = enabled;
}

bool
AccountInfoOauthConfigProviders_value::getLinked()
{
	return linked;
}

void
AccountInfoOauthConfigProviders_value::setLinked(bool  linked)
{
	this->linked = linked;
}

std::string
AccountInfoOauthConfigProviders_value::getAccount()
{
	return account;
}

void
AccountInfoOauthConfigProviders_value::setAccount(std::string  account)
{
	this->account = account;
}

std::string
AccountInfoOauthConfigProviders_value::getUrl()
{
	return url;
}

void
AccountInfoOauthConfigProviders_value::setUrl(std::string  url)
{
	this->url = url;
}


