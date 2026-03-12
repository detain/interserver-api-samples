#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PatchOauthTwoFactor_request.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PatchOauthTwoFactor_request::PatchOauthTwoFactor_request()
{
	//__init();
}

PatchOauthTwoFactor_request::~PatchOauthTwoFactor_request()
{
	//__cleanup();
}

void
PatchOauthTwoFactor_request::__init()
{
	//account_id = int(0);
	//code = std::string();
}

void
PatchOauthTwoFactor_request::__cleanup()
{
	//if(account_id != NULL) {
	//
	//delete account_id;
	//account_id = NULL;
	//}
	//if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//
}

void
PatchOauthTwoFactor_request::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *account_idKey = "account_id";
	node = json_object_get_member(pJsonObject, account_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&account_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *codeKey = "code";
	node = json_object_get_member(pJsonObject, codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&code, node, "std::string", "");
		} else {
			
		}
	}
}

PatchOauthTwoFactor_request::PatchOauthTwoFactor_request(char* json)
{
	this->fromJson(json);
}

char*
PatchOauthTwoFactor_request::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getAccountId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *account_idKey = "account_id";
	json_object_set_member(pJsonObject, account_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *codeKey = "code";
	json_object_set_member(pJsonObject, codeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
PatchOauthTwoFactor_request::getAccountId()
{
	return account_id;
}

void
PatchOauthTwoFactor_request::setAccountId(int  account_id)
{
	this->account_id = account_id;
}

std::string
PatchOauthTwoFactor_request::getCode()
{
	return code;
}

void
PatchOauthTwoFactor_request::setCode(std::string  code)
{
	this->code = code;
}


