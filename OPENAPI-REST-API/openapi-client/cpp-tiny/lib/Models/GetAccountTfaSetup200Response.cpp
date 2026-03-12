

#include "GetAccountTfaSetup_200_response.h"

using namespace Tiny;

GetAccountTfaSetup_200_response::GetAccountTfaSetup_200_response()
{
	2fa_google_key = std::string();
	2fa_google_split = std::string();
}

GetAccountTfaSetup_200_response::GetAccountTfaSetup_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetAccountTfaSetup_200_response::~GetAccountTfaSetup_200_response()
{

}

void
GetAccountTfaSetup_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *2fa_google_keyKey = "2fa_google_key";

    if(object.has_key(2fa_google_keyKey))
    {
        bourne::json value = object[2fa_google_keyKey];



        jsonToValue(&2fa_google_key, value, "std::string");


    }

    const char *2fa_google_splitKey = "2fa_google_split";

    if(object.has_key(2fa_google_splitKey))
    {
        bourne::json value = object[2fa_google_splitKey];



        jsonToValue(&2fa_google_split, value, "std::string");


    }


}

bourne::json
GetAccountTfaSetup_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["2fa_google_key"] = get2faGoogleKey();






    object["2fa_google_split"] = get2faGoogleSplit();



    return object;

}

std::string
GetAccountTfaSetup_200_response::get2faGoogleKey()
{
	return 2fa_google_key;
}

void
GetAccountTfaSetup_200_response::set2faGoogleKey(std::string 2fa_google_key)
{
	this->2fa_google_key = 2fa_google_key;
}

std::string
GetAccountTfaSetup_200_response::get2faGoogleSplit()
{
	return 2fa_google_split;
}

void
GetAccountTfaSetup_200_response::set2faGoogleSplit(std::string 2fa_google_split)
{
	this->2fa_google_split = 2fa_google_split;
}



