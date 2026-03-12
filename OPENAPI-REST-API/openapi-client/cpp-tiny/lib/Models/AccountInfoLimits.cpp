

#include "AccountInfoLimits.h"

using namespace Tiny;

AccountInfoLimits::AccountInfoLimits()
{
}

AccountInfoLimits::AccountInfoLimits(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoLimits::~AccountInfoLimits()
{

}

void
AccountInfoLimits::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
AccountInfoLimits::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



