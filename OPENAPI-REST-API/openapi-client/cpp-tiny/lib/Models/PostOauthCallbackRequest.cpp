

#include "PostOauthCallback_request.h"

using namespace Tiny;

PostOauthCallback_request::PostOauthCallback_request()
{
	provider = std::string();
}

PostOauthCallback_request::PostOauthCallback_request(std::string jsonString)
{
	this->fromJson(jsonString);
}

PostOauthCallback_request::~PostOauthCallback_request()
{

}

void
PostOauthCallback_request::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *providerKey = "provider";

    if(object.has_key(providerKey))
    {
        bourne::json value = object[providerKey];



        jsonToValue(&provider, value, "std::string");


    }


}

bourne::json
PostOauthCallback_request::toJson()
{
    bourne::json object = bourne::json::object();





    object["provider"] = getProvider();



    return object;

}

std::string
PostOauthCallback_request::getProvider()
{
	return provider;
}

void
PostOauthCallback_request::setProvider(std::string provider)
{
	this->provider = provider;
}



