

#include "LoginSubmissionExample.h"

using namespace Tiny;

LoginSubmissionExample::LoginSubmissionExample()
{
	login = std::string();
	passwd = std::string();
	remember = std::string();
	grecaptcharesponse = LoginSubmissionExample_g_recaptcha_response();
	tfa = std::string();
}

LoginSubmissionExample::LoginSubmissionExample(std::string jsonString)
{
	this->fromJson(jsonString);
}

LoginSubmissionExample::~LoginSubmissionExample()
{

}

void
LoginSubmissionExample::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *loginKey = "login";

    if(object.has_key(loginKey))
    {
        bourne::json value = object[loginKey];



        jsonToValue(&login, value, "std::string");


    }

    const char *passwdKey = "passwd";

    if(object.has_key(passwdKey))
    {
        bourne::json value = object[passwdKey];



        jsonToValue(&passwd, value, "std::string");


    }

    const char *rememberKey = "remember";

    if(object.has_key(rememberKey))
    {
        bourne::json value = object[rememberKey];



        jsonToValue(&remember, value, "std::string");


    }

    const char *grecaptcharesponseKey = "g-recaptcha-response";

    if(object.has_key(grecaptcharesponseKey))
    {
        bourne::json value = object[grecaptcharesponseKey];




        LoginSubmissionExample_g_recaptcha_response* obj = &grecaptcharesponse;
		obj->fromJson(value.dump());

    }

    const char *tfaKey = "tfa";

    if(object.has_key(tfaKey))
    {
        bourne::json value = object[tfaKey];



        jsonToValue(&tfa, value, "std::string");


    }


}

bourne::json
LoginSubmissionExample::toJson()
{
    bourne::json object = bourne::json::object();





    object["login"] = getLogin();






    object["passwd"] = getPasswd();






    object["remember"] = getRemember();







	object["grecaptcharesponse"] = getGrecaptcharesponse().toJson();





    object["tfa"] = getTfa();



    return object;

}

std::string
LoginSubmissionExample::getLogin()
{
	return login;
}

void
LoginSubmissionExample::setLogin(std::string login)
{
	this->login = login;
}

std::string
LoginSubmissionExample::getPasswd()
{
	return passwd;
}

void
LoginSubmissionExample::setPasswd(std::string passwd)
{
	this->passwd = passwd;
}

std::string
LoginSubmissionExample::getRemember()
{
	return remember;
}

void
LoginSubmissionExample::setRemember(std::string remember)
{
	this->remember = remember;
}

LoginSubmissionExample_g_recaptcha_response
LoginSubmissionExample::getGrecaptcharesponse()
{
	return grecaptcharesponse;
}

void
LoginSubmissionExample::setGrecaptcharesponse(LoginSubmissionExample_g_recaptcha_response grecaptcharesponse)
{
	this->grecaptcharesponse = grecaptcharesponse;
}

std::string
LoginSubmissionExample::getTfa()
{
	return tfa;
}

void
LoginSubmissionExample::setTfa(std::string tfa)
{
	this->tfa = tfa;
}



