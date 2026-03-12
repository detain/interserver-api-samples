#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetOauthRedirect_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetOauthRedirect_200_response::GetOauthRedirect_200_response()
{
	//__init();
}

GetOauthRedirect_200_response::~GetOauthRedirect_200_response()
{
	//__cleanup();
}

void
GetOauthRedirect_200_response::__init()
{
	//redirect_url = std::string();
}

void
GetOauthRedirect_200_response::__cleanup()
{
	//if(redirect_url != NULL) {
	//
	//delete redirect_url;
	//redirect_url = NULL;
	//}
	//
}

void
GetOauthRedirect_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *redirect_urlKey = "redirect_url";
	node = json_object_get_member(pJsonObject, redirect_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&redirect_url, node, "std::string", "");
		} else {
			
		}
	}
}

GetOauthRedirect_200_response::GetOauthRedirect_200_response(char* json)
{
	this->fromJson(json);
}

char*
GetOauthRedirect_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getRedirectUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *redirect_urlKey = "redirect_url";
	json_object_set_member(pJsonObject, redirect_urlKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
GetOauthRedirect_200_response::getRedirectUrl()
{
	return redirect_url;
}

void
GetOauthRedirect_200_response::setRedirectUrl(std::string  redirect_url)
{
	this->redirect_url = redirect_url;
}


