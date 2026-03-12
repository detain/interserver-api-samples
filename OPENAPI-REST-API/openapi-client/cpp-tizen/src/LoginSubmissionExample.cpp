#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LoginSubmissionExample.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LoginSubmissionExample::LoginSubmissionExample()
{
	//__init();
}

LoginSubmissionExample::~LoginSubmissionExample()
{
	//__cleanup();
}

void
LoginSubmissionExample::__init()
{
	//login = std::string();
	//passwd = std::string();
	//remember = std::string();
	//grecaptcharesponse = new LoginSubmissionExample_g_recaptcha_response();
	//tfa = std::string();
}

void
LoginSubmissionExample::__cleanup()
{
	//if(login != NULL) {
	//
	//delete login;
	//login = NULL;
	//}
	//if(passwd != NULL) {
	//
	//delete passwd;
	//passwd = NULL;
	//}
	//if(remember != NULL) {
	//
	//delete remember;
	//remember = NULL;
	//}
	//if(grecaptcharesponse != NULL) {
	//
	//delete grecaptcharesponse;
	//grecaptcharesponse = NULL;
	//}
	//if(tfa != NULL) {
	//
	//delete tfa;
	//tfa = NULL;
	//}
	//
}

void
LoginSubmissionExample::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *loginKey = "login";
	node = json_object_get_member(pJsonObject, loginKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&login, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *passwdKey = "passwd";
	node = json_object_get_member(pJsonObject, passwdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&passwd, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rememberKey = "remember";
	node = json_object_get_member(pJsonObject, rememberKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&remember, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *grecaptcharesponseKey = "g-recaptcha-response";
	node = json_object_get_member(pJsonObject, grecaptcharesponseKey);
	if (node !=NULL) {
	

		if (isprimitive("LoginSubmissionExample_g_recaptcha_response")) {
			jsonToValue(&grecaptcharesponse, node, "LoginSubmissionExample_g_recaptcha_response", "LoginSubmissionExample_g_recaptcha_response");
		} else {
			
			LoginSubmissionExample_g_recaptcha_response* obj = static_cast<LoginSubmissionExample_g_recaptcha_response*> (&grecaptcharesponse);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *tfaKey = "tfa";
	node = json_object_get_member(pJsonObject, tfaKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&tfa, node, "std::string", "");
		} else {
			
		}
	}
}

LoginSubmissionExample::LoginSubmissionExample(char* json)
{
	this->fromJson(json);
}

char*
LoginSubmissionExample::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getLogin();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *loginKey = "login";
	json_object_set_member(pJsonObject, loginKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPasswd();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *passwdKey = "passwd";
	json_object_set_member(pJsonObject, passwdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRemember();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rememberKey = "remember";
	json_object_set_member(pJsonObject, rememberKey, node);
	if (isprimitive("LoginSubmissionExample_g_recaptcha_response")) {
		LoginSubmissionExample_g_recaptcha_response obj = getGrecaptcharesponse();
		node = converttoJson(&obj, "LoginSubmissionExample_g_recaptcha_response", "");
	}
	else {
		
		LoginSubmissionExample_g_recaptcha_response obj = static_cast<LoginSubmissionExample_g_recaptcha_response> (getGrecaptcharesponse());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *grecaptcharesponseKey = "g-recaptcha-response";
	json_object_set_member(pJsonObject, grecaptcharesponseKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTfa();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *tfaKey = "tfa";
	json_object_set_member(pJsonObject, tfaKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
LoginSubmissionExample::getLogin()
{
	return login;
}

void
LoginSubmissionExample::setLogin(std::string  login)
{
	this->login = login;
}

std::string
LoginSubmissionExample::getPasswd()
{
	return passwd;
}

void
LoginSubmissionExample::setPasswd(std::string  passwd)
{
	this->passwd = passwd;
}

std::string
LoginSubmissionExample::getRemember()
{
	return remember;
}

void
LoginSubmissionExample::setRemember(std::string  remember)
{
	this->remember = remember;
}

LoginSubmissionExample_g_recaptcha_response
LoginSubmissionExample::getGrecaptcharesponse()
{
	return grecaptcharesponse;
}

void
LoginSubmissionExample::setGrecaptcharesponse(LoginSubmissionExample_g_recaptcha_response  grecaptcharesponse)
{
	this->grecaptcharesponse = grecaptcharesponse;
}

std::string
LoginSubmissionExample::getTfa()
{
	return tfa;
}

void
LoginSubmissionExample::setTfa(std::string  tfa)
{
	this->tfa = tfa;
}


