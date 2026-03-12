

#include "PatchOauthTwoFactor_request.h"

using namespace Tiny;

PatchOauthTwoFactor_request::PatchOauthTwoFactor_request()
{
	account_id = int(0);
	code = std::string();
}

PatchOauthTwoFactor_request::PatchOauthTwoFactor_request(std::string jsonString)
{
	this->fromJson(jsonString);
}

PatchOauthTwoFactor_request::~PatchOauthTwoFactor_request()
{

}

void
PatchOauthTwoFactor_request::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *account_idKey = "account_id";

    if(object.has_key(account_idKey))
    {
        bourne::json value = object[account_idKey];



        jsonToValue(&account_id, value, "int");


    }

    const char *codeKey = "code";

    if(object.has_key(codeKey))
    {
        bourne::json value = object[codeKey];



        jsonToValue(&code, value, "std::string");


    }


}

bourne::json
PatchOauthTwoFactor_request::toJson()
{
    bourne::json object = bourne::json::object();





    object["account_id"] = getAccountId();






    object["code"] = getCode();



    return object;

}

int
PatchOauthTwoFactor_request::getAccountId()
{
	return account_id;
}

void
PatchOauthTwoFactor_request::setAccountId(int account_id)
{
	this->account_id = account_id;
}

std::string
PatchOauthTwoFactor_request::getCode()
{
	return code;
}

void
PatchOauthTwoFactor_request::setCode(std::string code)
{
	this->code = code;
}



