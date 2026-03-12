

#include "UpdateAccountTfa_request.h"

using namespace Tiny;

UpdateAccountTfa_request::UpdateAccountTfa_request()
{
	2fa_google_code = std::string();
}

UpdateAccountTfa_request::UpdateAccountTfa_request(std::string jsonString)
{
	this->fromJson(jsonString);
}

UpdateAccountTfa_request::~UpdateAccountTfa_request()
{

}

void
UpdateAccountTfa_request::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *2fa_google_codeKey = "2fa_google_code";

    if(object.has_key(2fa_google_codeKey))
    {
        bourne::json value = object[2fa_google_codeKey];



        jsonToValue(&2fa_google_code, value, "std::string");


    }


}

bourne::json
UpdateAccountTfa_request::toJson()
{
    bourne::json object = bourne::json::object();





    object["2fa_google_code"] = get2faGoogleCode();



    return object;

}

std::string
UpdateAccountTfa_request::get2faGoogleCode()
{
	return 2fa_google_code;
}

void
UpdateAccountTfa_request::set2faGoogleCode(std::string 2fa_google_code)
{
	this->2fa_google_code = 2fa_google_code;
}



