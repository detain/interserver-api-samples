

#include "LoginSuccessResponse.h"

using namespace Tiny;

LoginSuccessResponse::LoginSuccessResponse()
{
	sessionId = std::string();
	account_id = int(0);
	account_lid = std::string();
	ima = std::string();
	gravatar = std::string();
}

LoginSuccessResponse::LoginSuccessResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

LoginSuccessResponse::~LoginSuccessResponse()
{

}

void
LoginSuccessResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *sessionIdKey = "sessionId";

    if(object.has_key(sessionIdKey))
    {
        bourne::json value = object[sessionIdKey];



        jsonToValue(&sessionId, value, "std::string");


    }

    const char *account_idKey = "account_id";

    if(object.has_key(account_idKey))
    {
        bourne::json value = object[account_idKey];



        jsonToValue(&account_id, value, "int");


    }

    const char *account_lidKey = "account_lid";

    if(object.has_key(account_lidKey))
    {
        bourne::json value = object[account_lidKey];



        jsonToValue(&account_lid, value, "std::string");


    }

    const char *imaKey = "ima";

    if(object.has_key(imaKey))
    {
        bourne::json value = object[imaKey];



        jsonToValue(&ima, value, "std::string");


    }

    const char *gravatarKey = "gravatar";

    if(object.has_key(gravatarKey))
    {
        bourne::json value = object[gravatarKey];



        jsonToValue(&gravatar, value, "std::string");


    }


}

bourne::json
LoginSuccessResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["sessionId"] = getSessionId();






    object["account_id"] = getAccountId();






    object["account_lid"] = getAccountLid();






    object["ima"] = getIma();






    object["gravatar"] = getGravatar();



    return object;

}

std::string
LoginSuccessResponse::getSessionId()
{
	return sessionId;
}

void
LoginSuccessResponse::setSessionId(std::string sessionId)
{
	this->sessionId = sessionId;
}

int
LoginSuccessResponse::getAccountId()
{
	return account_id;
}

void
LoginSuccessResponse::setAccountId(int account_id)
{
	this->account_id = account_id;
}

std::string
LoginSuccessResponse::getAccountLid()
{
	return account_lid;
}

void
LoginSuccessResponse::setAccountLid(std::string account_lid)
{
	this->account_lid = account_lid;
}

std::string
LoginSuccessResponse::getIma()
{
	return ima;
}

void
LoginSuccessResponse::setIma(std::string ima)
{
	this->ima = ima;
}

std::string
LoginSuccessResponse::getGravatar()
{
	return gravatar;
}

void
LoginSuccessResponse::setGravatar(std::string gravatar)
{
	this->gravatar = gravatar;
}



