

#include "PostOauthCallback_200_response.h"

using namespace Tiny;

PostOauthCallback_200_response::PostOauthCallback_200_response()
{
	login = bool(false);
	signup = bool(false);
	linked = bool(false);
	account_id = int(0);
	error_code = std::string();
}

PostOauthCallback_200_response::PostOauthCallback_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

PostOauthCallback_200_response::~PostOauthCallback_200_response()
{

}

void
PostOauthCallback_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *loginKey = "login";

    if(object.has_key(loginKey))
    {
        bourne::json value = object[loginKey];



        jsonToValue(&login, value, "bool");


    }

    const char *signupKey = "signup";

    if(object.has_key(signupKey))
    {
        bourne::json value = object[signupKey];



        jsonToValue(&signup, value, "bool");


    }

    const char *linkedKey = "linked";

    if(object.has_key(linkedKey))
    {
        bourne::json value = object[linkedKey];



        jsonToValue(&linked, value, "bool");


    }

    const char *account_idKey = "account_id";

    if(object.has_key(account_idKey))
    {
        bourne::json value = object[account_idKey];



        jsonToValue(&account_id, value, "int");


    }

    const char *error_codeKey = "error_code";

    if(object.has_key(error_codeKey))
    {
        bourne::json value = object[error_codeKey];



        jsonToValue(&error_code, value, "std::string");


    }


}

bourne::json
PostOauthCallback_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["login"] = isLogin();






    object["signup"] = isSignup();






    object["linked"] = isLinked();






    object["account_id"] = getAccountId();






    object["error_code"] = getErrorCode();



    return object;

}

bool
PostOauthCallback_200_response::isLogin()
{
	return login;
}

void
PostOauthCallback_200_response::setLogin(bool login)
{
	this->login = login;
}

bool
PostOauthCallback_200_response::isSignup()
{
	return signup;
}

void
PostOauthCallback_200_response::setSignup(bool signup)
{
	this->signup = signup;
}

bool
PostOauthCallback_200_response::isLinked()
{
	return linked;
}

void
PostOauthCallback_200_response::setLinked(bool linked)
{
	this->linked = linked;
}

int
PostOauthCallback_200_response::getAccountId()
{
	return account_id;
}

void
PostOauthCallback_200_response::setAccountId(int account_id)
{
	this->account_id = account_id;
}

std::string
PostOauthCallback_200_response::getErrorCode()
{
	return error_code;
}

void
PostOauthCallback_200_response::setErrorCode(std::string error_code)
{
	this->error_code = error_code;
}



