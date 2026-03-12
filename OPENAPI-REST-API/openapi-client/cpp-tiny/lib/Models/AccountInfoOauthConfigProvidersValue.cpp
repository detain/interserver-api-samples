

#include "AccountInfoOauthConfigProviders_value.h"

using namespace Tiny;

AccountInfoOauthConfigProviders_value::AccountInfoOauthConfigProviders_value()
{
	enabled = bool(false);
	linked = bool(false);
	account = std::string();
	url = std::string();
}

AccountInfoOauthConfigProviders_value::AccountInfoOauthConfigProviders_value(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoOauthConfigProviders_value::~AccountInfoOauthConfigProviders_value()
{

}

void
AccountInfoOauthConfigProviders_value::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *enabledKey = "enabled";

    if(object.has_key(enabledKey))
    {
        bourne::json value = object[enabledKey];



        jsonToValue(&enabled, value, "bool");


    }

    const char *linkedKey = "linked";

    if(object.has_key(linkedKey))
    {
        bourne::json value = object[linkedKey];



        jsonToValue(&linked, value, "bool");


    }

    const char *accountKey = "account";

    if(object.has_key(accountKey))
    {
        bourne::json value = object[accountKey];



        jsonToValue(&account, value, "std::string");


    }

    const char *urlKey = "url";

    if(object.has_key(urlKey))
    {
        bourne::json value = object[urlKey];



        jsonToValue(&url, value, "std::string");


    }


}

bourne::json
AccountInfoOauthConfigProviders_value::toJson()
{
    bourne::json object = bourne::json::object();





    object["enabled"] = isEnabled();






    object["linked"] = isLinked();






    object["account"] = getAccount();






    object["url"] = getUrl();



    return object;

}

bool
AccountInfoOauthConfigProviders_value::isEnabled()
{
	return enabled;
}

void
AccountInfoOauthConfigProviders_value::setEnabled(bool enabled)
{
	this->enabled = enabled;
}

bool
AccountInfoOauthConfigProviders_value::isLinked()
{
	return linked;
}

void
AccountInfoOauthConfigProviders_value::setLinked(bool linked)
{
	this->linked = linked;
}

std::string
AccountInfoOauthConfigProviders_value::getAccount()
{
	return account;
}

void
AccountInfoOauthConfigProviders_value::setAccount(std::string account)
{
	this->account = account;
}

std::string
AccountInfoOauthConfigProviders_value::getUrl()
{
	return url;
}

void
AccountInfoOauthConfigProviders_value::setUrl(std::string url)
{
	this->url = url;
}



