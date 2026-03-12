

#include "ServiceTypes.h"

using namespace Tiny;

ServiceTypes::ServiceTypes()
{
}

ServiceTypes::ServiceTypes(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServiceTypes::~ServiceTypes()
{

}

void
ServiceTypes::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
ServiceTypes::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



