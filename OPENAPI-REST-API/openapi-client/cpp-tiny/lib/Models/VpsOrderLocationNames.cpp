

#include "VpsOrder_locationNames.h"

using namespace Tiny;

VpsOrder_locationNames::VpsOrder_locationNames()
{
	3 = std::string();
}

VpsOrder_locationNames::VpsOrder_locationNames(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_locationNames::~VpsOrder_locationNames()
{

}

void
VpsOrder_locationNames::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *3Key = "3";

    if(object.has_key(3Key))
    {
        bourne::json value = object[3Key];



        jsonToValue(&3, value, "std::string");


    }


}

bourne::json
VpsOrder_locationNames::toJson()
{
    bourne::json object = bourne::json::object();





    object["3"] = get3();



    return object;

}

std::string
VpsOrder_locationNames::get3()
{
	return 3;
}

void
VpsOrder_locationNames::set3(std::string 3)
{
	this->3 = 3;
}



