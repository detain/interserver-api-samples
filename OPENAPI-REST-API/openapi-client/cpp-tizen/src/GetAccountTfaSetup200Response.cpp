#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetAccountTfaSetup_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetAccountTfaSetup_200_response::GetAccountTfaSetup_200_response()
{
	//__init();
}

GetAccountTfaSetup_200_response::~GetAccountTfaSetup_200_response()
{
	//__cleanup();
}

void
GetAccountTfaSetup_200_response::__init()
{
	//2fa_google_key = std::string();
	//2fa_google_split = std::string();
}

void
GetAccountTfaSetup_200_response::__cleanup()
{
	//if(2fa_google_key != NULL) {
	//
	//delete 2fa_google_key;
	//2fa_google_key = NULL;
	//}
	//if(2fa_google_split != NULL) {
	//
	//delete 2fa_google_split;
	//2fa_google_split = NULL;
	//}
	//
}

void
GetAccountTfaSetup_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *2fa_google_keyKey = "2fa_google_key";
	node = json_object_get_member(pJsonObject, 2fa_google_keyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&2fa_google_key, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *2fa_google_splitKey = "2fa_google_split";
	node = json_object_get_member(pJsonObject, 2fa_google_splitKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&2fa_google_split, node, "std::string", "");
		} else {
			
		}
	}
}

GetAccountTfaSetup_200_response::GetAccountTfaSetup_200_response(char* json)
{
	this->fromJson(json);
}

char*
GetAccountTfaSetup_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get2faGoogleKey();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *2fa_google_keyKey = "2fa_google_key";
	json_object_set_member(pJsonObject, 2fa_google_keyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = get2faGoogleSplit();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *2fa_google_splitKey = "2fa_google_split";
	json_object_set_member(pJsonObject, 2fa_google_splitKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
GetAccountTfaSetup_200_response::get2faGoogleKey()
{
	return 2fa_google_key;
}

void
GetAccountTfaSetup_200_response::set2faGoogleKey(std::string  2fa_google_key)
{
	this->2fa_google_key = 2fa_google_key;
}

std::string
GetAccountTfaSetup_200_response::get2faGoogleSplit()
{
	return 2fa_google_split;
}

void
GetAccountTfaSetup_200_response::set2faGoogleSplit(std::string  2fa_google_split)
{
	this->2fa_google_split = 2fa_google_split;
}


