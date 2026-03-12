

#include "QuickserverOrderTemplatesUbuntu64.h"

using namespace Tiny;

QuickserverOrderTemplatesUbuntu64::QuickserverOrderTemplatesUbuntu64()
{
}

QuickserverOrderTemplatesUbuntu64::QuickserverOrderTemplatesUbuntu64(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverOrderTemplatesUbuntu64::~QuickserverOrderTemplatesUbuntu64()
{

}

void
QuickserverOrderTemplatesUbuntu64::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
QuickserverOrderTemplatesUbuntu64::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



