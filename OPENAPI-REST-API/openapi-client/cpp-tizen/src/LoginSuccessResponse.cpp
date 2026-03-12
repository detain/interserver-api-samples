#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LoginSuccessResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LoginSuccessResponse::LoginSuccessResponse()
{
	//__init();
}

LoginSuccessResponse::~LoginSuccessResponse()
{
	//__cleanup();
}

void
LoginSuccessResponse::__init()
{
	//sessionId = std::string();
	//account_id = int(0);
	//account_lid = std::string();
	//ima = std::string();
	//gravatar = std::string();
}

void
LoginSuccessResponse::__cleanup()
{
	//if(sessionId != NULL) {
	//
	//delete sessionId;
	//sessionId = NULL;
	//}
	//if(account_id != NULL) {
	//
	//delete account_id;
	//account_id = NULL;
	//}
	//if(account_lid != NULL) {
	//
	//delete account_lid;
	//account_lid = NULL;
	//}
	//if(ima != NULL) {
	//
	//delete ima;
	//ima = NULL;
	//}
	//if(gravatar != NULL) {
	//
	//delete gravatar;
	//gravatar = NULL;
	//}
	//
}

void
LoginSuccessResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *sessionIdKey = "sessionId";
	node = json_object_get_member(pJsonObject, sessionIdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sessionId, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *account_idKey = "account_id";
	node = json_object_get_member(pJsonObject, account_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&account_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *account_lidKey = "account_lid";
	node = json_object_get_member(pJsonObject, account_lidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&account_lid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *imaKey = "ima";
	node = json_object_get_member(pJsonObject, imaKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ima, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *gravatarKey = "gravatar";
	node = json_object_get_member(pJsonObject, gravatarKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&gravatar, node, "std::string", "");
		} else {
			
		}
	}
}

LoginSuccessResponse::LoginSuccessResponse(char* json)
{
	this->fromJson(json);
}

char*
LoginSuccessResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getSessionId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sessionIdKey = "sessionId";
	json_object_set_member(pJsonObject, sessionIdKey, node);
	if (isprimitive("int")) {
		int obj = getAccountId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *account_idKey = "account_id";
	json_object_set_member(pJsonObject, account_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAccountLid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *account_lidKey = "account_lid";
	json_object_set_member(pJsonObject, account_lidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIma();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *imaKey = "ima";
	json_object_set_member(pJsonObject, imaKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGravatar();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *gravatarKey = "gravatar";
	json_object_set_member(pJsonObject, gravatarKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
LoginSuccessResponse::getSessionId()
{
	return sessionId;
}

void
LoginSuccessResponse::setSessionId(std::string  sessionId)
{
	this->sessionId = sessionId;
}

int
LoginSuccessResponse::getAccountId()
{
	return account_id;
}

void
LoginSuccessResponse::setAccountId(int  account_id)
{
	this->account_id = account_id;
}

std::string
LoginSuccessResponse::getAccountLid()
{
	return account_lid;
}

void
LoginSuccessResponse::setAccountLid(std::string  account_lid)
{
	this->account_lid = account_lid;
}

std::string
LoginSuccessResponse::getIma()
{
	return ima;
}

void
LoginSuccessResponse::setIma(std::string  ima)
{
	this->ima = ima;
}

std::string
LoginSuccessResponse::getGravatar()
{
	return gravatar;
}

void
LoginSuccessResponse::setGravatar(std::string  gravatar)
{
	this->gravatar = gravatar;
}


