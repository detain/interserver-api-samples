

#include "PatchOauthTwoFactor_200_response.h"

using namespace Tiny;

PatchOauthTwoFactor_200_response::PatchOauthTwoFactor_200_response()
{
	login = bool(false);
}

PatchOauthTwoFactor_200_response::PatchOauthTwoFactor_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

PatchOauthTwoFactor_200_response::~PatchOauthTwoFactor_200_response()
{

}

void
PatchOauthTwoFactor_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *loginKey = "login";

    if(object.has_key(loginKey))
    {
        bourne::json value = object[loginKey];



        jsonToValue(&login, value, "bool");


    }


}

bourne::json
PatchOauthTwoFactor_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["login"] = isLogin();



    return object;

}

bool
PatchOauthTwoFactor_200_response::isLogin()
{
	return login;
}

void
PatchOauthTwoFactor_200_response::setLogin(bool login)
{
	this->login = login;
}



