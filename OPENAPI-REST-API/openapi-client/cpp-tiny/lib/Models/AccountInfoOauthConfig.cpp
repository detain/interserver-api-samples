

#include "AccountInfoOauthConfig.h"

using namespace Tiny;

AccountInfoOauthConfig::AccountInfoOauthConfig()
{
	callback = std::string();
	providers = AccountInfoOauthConfigProviders();
}

AccountInfoOauthConfig::AccountInfoOauthConfig(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoOauthConfig::~AccountInfoOauthConfig()
{

}

void
AccountInfoOauthConfig::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *callbackKey = "callback";

    if(object.has_key(callbackKey))
    {
        bourne::json value = object[callbackKey];



        jsonToValue(&callback, value, "std::string");


    }

    const char *providersKey = "providers";

    if(object.has_key(providersKey))
    {
        bourne::json value = object[providersKey];




        AccountInfoOauthConfigProviders* obj = &providers;
		obj->fromJson(value.dump());

    }


}

bourne::json
AccountInfoOauthConfig::toJson()
{
    bourne::json object = bourne::json::object();





    object["callback"] = getCallback();







	object["providers"] = getProviders().toJson();


    return object;

}

std::string
AccountInfoOauthConfig::getCallback()
{
	return callback;
}

void
AccountInfoOauthConfig::setCallback(std::string callback)
{
	this->callback = callback;
}

AccountInfoOauthConfigProviders&lt;std::string, AccountInfoOauthConfigProviders_value&gt;
AccountInfoOauthConfig::getProviders()
{
	return providers;
}

void
AccountInfoOauthConfig::setProviders(AccountInfoOauthConfigProviders&lt;std::string, AccountInfoOauthConfigProviders_value&gt; providers)
{
	this->providers = providers;
}



