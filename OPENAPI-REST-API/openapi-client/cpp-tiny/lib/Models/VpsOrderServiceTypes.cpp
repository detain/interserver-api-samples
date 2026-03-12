

#include "VpsOrder_serviceTypes.h"

using namespace Tiny;

VpsOrder_serviceTypes::VpsOrder_serviceTypes()
{
	32 = VpsOrder_serviceTypes_32();
}

VpsOrder_serviceTypes::VpsOrder_serviceTypes(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_serviceTypes::~VpsOrder_serviceTypes()
{

}

void
VpsOrder_serviceTypes::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *32Key = "32";

    if(object.has_key(32Key))
    {
        bourne::json value = object[32Key];




        VpsOrder_serviceTypes_32* obj = &32;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsOrder_serviceTypes::toJson()
{
    bourne::json object = bourne::json::object();






	object["32"] = get32().toJson();


    return object;

}

VpsOrder_serviceTypes_32
VpsOrder_serviceTypes::get32()
{
	return 32;
}

void
VpsOrder_serviceTypes::set32(VpsOrder_serviceTypes_32 32)
{
	this->32 = 32;
}



