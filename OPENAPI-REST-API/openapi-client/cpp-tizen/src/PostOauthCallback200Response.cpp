#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PostOauthCallback_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PostOauthCallback_200_response::PostOauthCallback_200_response()
{
	//__init();
}

PostOauthCallback_200_response::~PostOauthCallback_200_response()
{
	//__cleanup();
}

void
PostOauthCallback_200_response::__init()
{
	//login = bool(false);
	//signup = bool(false);
	//linked = bool(false);
	//account_id = int(0);
	//error_code = std::string();
}

void
PostOauthCallback_200_response::__cleanup()
{
	//if(login != NULL) {
	//
	//delete login;
	//login = NULL;
	//}
	//if(signup != NULL) {
	//
	//delete signup;
	//signup = NULL;
	//}
	//if(linked != NULL) {
	//
	//delete linked;
	//linked = NULL;
	//}
	//if(account_id != NULL) {
	//
	//delete account_id;
	//account_id = NULL;
	//}
	//if(error_code != NULL) {
	//
	//delete error_code;
	//error_code = NULL;
	//}
	//
}

void
PostOauthCallback_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *loginKey = "login";
	node = json_object_get_member(pJsonObject, loginKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&login, node, "bool", "");
		} else {
			
		}
	}
	const gchar *signupKey = "signup";
	node = json_object_get_member(pJsonObject, signupKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&signup, node, "bool", "");
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
	const gchar *account_idKey = "account_id";
	node = json_object_get_member(pJsonObject, account_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&account_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *error_codeKey = "error_code";
	node = json_object_get_member(pJsonObject, error_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&error_code, node, "std::string", "");
		} else {
			
		}
	}
}

PostOauthCallback_200_response::PostOauthCallback_200_response(char* json)
{
	this->fromJson(json);
}

char*
PostOauthCallback_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getLogin();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *loginKey = "login";
	json_object_set_member(pJsonObject, loginKey, node);
	if (isprimitive("bool")) {
		bool obj = getSignup();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *signupKey = "signup";
	json_object_set_member(pJsonObject, signupKey, node);
	if (isprimitive("bool")) {
		bool obj = getLinked();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *linkedKey = "linked";
	json_object_set_member(pJsonObject, linkedKey, node);
	if (isprimitive("int")) {
		int obj = getAccountId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *account_idKey = "account_id";
	json_object_set_member(pJsonObject, account_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getErrorCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *error_codeKey = "error_code";
	json_object_set_member(pJsonObject, error_codeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
PostOauthCallback_200_response::getLogin()
{
	return login;
}

void
PostOauthCallback_200_response::setLogin(bool  login)
{
	this->login = login;
}

bool
PostOauthCallback_200_response::getSignup()
{
	return signup;
}

void
PostOauthCallback_200_response::setSignup(bool  signup)
{
	this->signup = signup;
}

bool
PostOauthCallback_200_response::getLinked()
{
	return linked;
}

void
PostOauthCallback_200_response::setLinked(bool  linked)
{
	this->linked = linked;
}

int
PostOauthCallback_200_response::getAccountId()
{
	return account_id;
}

void
PostOauthCallback_200_response::setAccountId(int  account_id)
{
	this->account_id = account_id;
}

std::string
PostOauthCallback_200_response::getErrorCode()
{
	return error_code;
}

void
PostOauthCallback_200_response::setErrorCode(std::string  error_code)
{
	this->error_code = error_code;
}


