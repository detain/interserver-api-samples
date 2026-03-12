

#include "AccountInfo_oauthproviders.h"

using namespace Tiny;

AccountInfo_oauthproviders::AccountInfo_oauthproviders()
{
}

AccountInfo_oauthproviders::AccountInfo_oauthproviders(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfo_oauthproviders::~AccountInfo_oauthproviders()
{

}

void
AccountInfo_oauthproviders::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
AccountInfo_oauthproviders::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



