#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LoginInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LoginInfo::LoginInfo()
{
	//__init();
}

LoginInfo::~LoginInfo()
{
	//__cleanup();
}

void
LoginInfo::__init()
{
	//captcha = std::string();
	//counts = new LoginServiceCounts();
	//logo = std::string();
	//language = std::string();
}

void
LoginInfo::__cleanup()
{
	//if(captcha != NULL) {
	//
	//delete captcha;
	//captcha = NULL;
	//}
	//if(counts != NULL) {
	//
	//delete counts;
	//counts = NULL;
	//}
	//if(logo != NULL) {
	//
	//delete logo;
	//logo = NULL;
	//}
	//if(language != NULL) {
	//
	//delete language;
	//language = NULL;
	//}
	//
}

void
LoginInfo::fromJson(char* jsonStr)
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
	const gchar *countsKey = "counts";
	node = json_object_get_member(pJsonObject, countsKey);
	if (node !=NULL) {
	

		if (isprimitive("LoginServiceCounts")) {
			jsonToValue(&counts, node, "LoginServiceCounts", "LoginServiceCounts");
		} else {
			
			LoginServiceCounts* obj = static_cast<LoginServiceCounts*> (&counts);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *logoKey = "logo";
	node = json_object_get_member(pJsonObject, logoKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&logo, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *languageKey = "language";
	node = json_object_get_member(pJsonObject, languageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&language, node, "std::string", "");
		} else {
			
		}
	}
}

LoginInfo::LoginInfo(char* json)
{
	this->fromJson(json);
}

char*
LoginInfo::toJson()
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
	if (isprimitive("LoginServiceCounts")) {
		LoginServiceCounts obj = getCounts();
		node = converttoJson(&obj, "LoginServiceCounts", "");
	}
	else {
		
		LoginServiceCounts obj = static_cast<LoginServiceCounts> (getCounts());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *countsKey = "counts";
	json_object_set_member(pJsonObject, countsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLogo();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *logoKey = "logo";
	json_object_set_member(pJsonObject, logoKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLanguage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *languageKey = "language";
	json_object_set_member(pJsonObject, languageKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
LoginInfo::getCaptcha()
{
	return captcha;
}

void
LoginInfo::setCaptcha(std::string  captcha)
{
	this->captcha = captcha;
}

LoginServiceCounts
LoginInfo::getCounts()
{
	return counts;
}

void
LoginInfo::setCounts(LoginServiceCounts  counts)
{
	this->counts = counts;
}

std::string
LoginInfo::getLogo()
{
	return logo;
}

void
LoginInfo::setLogo(std::string  logo)
{
	this->logo = logo;
}

std::string
LoginInfo::getLanguage()
{
	return language;
}

void
LoginInfo::setLanguage(std::string  language)
{
	this->language = language;
}


