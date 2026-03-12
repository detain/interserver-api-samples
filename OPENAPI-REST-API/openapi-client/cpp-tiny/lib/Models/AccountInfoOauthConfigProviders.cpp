

#include "AccountInfoOauthConfigProviders.h"

using namespace Tiny;

AccountInfoOauthConfigProviders::AccountInfoOauthConfigProviders()
{
}

AccountInfoOauthConfigProviders::AccountInfoOauthConfigProviders(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoOauthConfigProviders::~AccountInfoOauthConfigProviders()
{

}

void
AccountInfoOauthConfigProviders::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
AccountInfoOauthConfigProviders::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



