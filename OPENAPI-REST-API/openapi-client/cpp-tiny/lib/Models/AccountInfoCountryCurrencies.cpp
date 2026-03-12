

#include "AccountInfoCountryCurrencies.h"

using namespace Tiny;

AccountInfoCountryCurrencies::AccountInfoCountryCurrencies()
{
}

AccountInfoCountryCurrencies::AccountInfoCountryCurrencies(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoCountryCurrencies::~AccountInfoCountryCurrencies()
{

}

void
AccountInfoCountryCurrencies::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
AccountInfoCountryCurrencies::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



