

#include "ServiceCategories.h"

using namespace Tiny;

ServiceCategories::ServiceCategories()
{
}

ServiceCategories::ServiceCategories(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServiceCategories::~ServiceCategories()
{

}

void
ServiceCategories::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
ServiceCategories::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



