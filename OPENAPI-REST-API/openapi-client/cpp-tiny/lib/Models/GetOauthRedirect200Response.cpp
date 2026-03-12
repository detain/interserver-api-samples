

#include "GetOauthRedirect_200_response.h"

using namespace Tiny;

GetOauthRedirect_200_response::GetOauthRedirect_200_response()
{
	redirect_url = std::string();
}

GetOauthRedirect_200_response::GetOauthRedirect_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetOauthRedirect_200_response::~GetOauthRedirect_200_response()
{

}

void
GetOauthRedirect_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *redirect_urlKey = "redirect_url";

    if(object.has_key(redirect_urlKey))
    {
        bourne::json value = object[redirect_urlKey];



        jsonToValue(&redirect_url, value, "std::string");


    }


}

bourne::json
GetOauthRedirect_200_response::toJson()
{
    bourne::json object = bourne::json::object();





    object["redirect_url"] = getRedirectUrl();



    return object;

}

std::string
GetOauthRedirect_200_response::getRedirectUrl()
{
	return redirect_url;
}

void
GetOauthRedirect_200_response::setRedirectUrl(std::string redirect_url)
{
	this->redirect_url = redirect_url;
}



