

#include "Services.h"

using namespace Tiny;

Services::Services()
{
}

Services::Services(std::string jsonString)
{
	this->fromJson(jsonString);
}

Services::~Services()
{

}

void
Services::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
Services::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



