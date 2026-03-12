

#include "AccountInfoDataCcs.h"

using namespace Tiny;

AccountInfoDataCcs::AccountInfoDataCcs()
{
}

AccountInfoDataCcs::AccountInfoDataCcs(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoDataCcs::~AccountInfoDataCcs()
{

}

void
AccountInfoDataCcs::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
AccountInfoDataCcs::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



