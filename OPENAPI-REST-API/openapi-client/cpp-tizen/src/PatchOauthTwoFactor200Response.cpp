#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PatchOauthTwoFactor_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PatchOauthTwoFactor_200_response::PatchOauthTwoFactor_200_response()
{
	//__init();
}

PatchOauthTwoFactor_200_response::~PatchOauthTwoFactor_200_response()
{
	//__cleanup();
}

void
PatchOauthTwoFactor_200_response::__init()
{
	//login = bool(false);
}

void
PatchOauthTwoFactor_200_response::__cleanup()
{
	//if(login != NULL) {
	//
	//delete login;
	//login = NULL;
	//}
	//
}

void
PatchOauthTwoFactor_200_response::fromJson(char* jsonStr)
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
}

PatchOauthTwoFactor_200_response::PatchOauthTwoFactor_200_response(char* json)
{
	this->fromJson(json);
}

char*
PatchOauthTwoFactor_200_response::toJson()
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
PatchOauthTwoFactor_200_response::getLogin()
{
	return login;
}

void
PatchOauthTwoFactor_200_response::setLogin(bool  login)
{
	this->login = login;
}


