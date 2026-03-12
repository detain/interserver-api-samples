#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "UpdateAccountTfa_request.h"

using namespace std;
using namespace Tizen::ArtikCloud;

UpdateAccountTfa_request::UpdateAccountTfa_request()
{
	//__init();
}

UpdateAccountTfa_request::~UpdateAccountTfa_request()
{
	//__cleanup();
}

void
UpdateAccountTfa_request::__init()
{
	//2fa_google_code = std::string();
}

void
UpdateAccountTfa_request::__cleanup()
{
	//if(2fa_google_code != NULL) {
	//
	//delete 2fa_google_code;
	//2fa_google_code = NULL;
	//}
	//
}

void
UpdateAccountTfa_request::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *2fa_google_codeKey = "2fa_google_code";
	node = json_object_get_member(pJsonObject, 2fa_google_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&2fa_google_code, node, "std::string", "");
		} else {
			
		}
	}
}

UpdateAccountTfa_request::UpdateAccountTfa_request(char* json)
{
	this->fromJson(json);
}

char*
UpdateAccountTfa_request::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get2faGoogleCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *2fa_google_codeKey = "2fa_google_code";
	json_object_set_member(pJsonObject, 2fa_google_codeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
UpdateAccountTfa_request::get2faGoogleCode()
{
	return 2fa_google_code;
}

void
UpdateAccountTfa_request::set2faGoogleCode(std::string  2fa_google_code)
{
	this->2fa_google_code = 2fa_google_code;
}


