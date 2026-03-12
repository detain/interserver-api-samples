#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CaptchaResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CaptchaResponse::CaptchaResponse()
{
	//__init();
}

CaptchaResponse::~CaptchaResponse()
{
	//__cleanup();
}

void
CaptchaResponse::__init()
{
	//captcha = std::string();
}

void
CaptchaResponse::__cleanup()
{
	//if(captcha != NULL) {
	//
	//delete captcha;
	//captcha = NULL;
	//}
	//
}

void
CaptchaResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *captchaKey = "captcha";
	node = json_object_get_member(pJsonObject, captchaKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&captcha, node, "std::string", "");
		} else {
			
		}
	}
}

CaptchaResponse::CaptchaResponse(char* json)
{
	this->fromJson(json);
}

char*
CaptchaResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCaptcha();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *captchaKey = "captcha";
	json_object_set_member(pJsonObject, captchaKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CaptchaResponse::getCaptcha()
{
	return captcha;
}

void
CaptchaResponse::setCaptcha(std::string  captcha)
{
	this->captcha = captcha;
}


