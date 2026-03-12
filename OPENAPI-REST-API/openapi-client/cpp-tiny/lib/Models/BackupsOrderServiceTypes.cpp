

#include "BackupsOrder_serviceTypes.h"

using namespace Tiny;

BackupsOrder_serviceTypes::BackupsOrder_serviceTypes()
{
	11006 = BackupsOrderServiceTypes();
}

BackupsOrder_serviceTypes::BackupsOrder_serviceTypes(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupsOrder_serviceTypes::~BackupsOrder_serviceTypes()
{

}

void
BackupsOrder_serviceTypes::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *11006Key = "11006";

    if(object.has_key(11006Key))
    {
        bourne::json value = object[11006Key];




        BackupsOrderServiceTypes* obj = &11006;
		obj->fromJson(value.dump());

    }


}

bourne::json
BackupsOrder_serviceTypes::toJson()
{
    bourne::json object = bourne::json::object();






	object["11006"] = get11006().toJson();


    return object;

}

BackupsOrderServiceTypes
BackupsOrder_serviceTypes::get11006()
{
	return 11006;
}

void
BackupsOrder_serviceTypes::set11006(BackupsOrderServiceTypes 11006)
{
	this->11006 = 11006;
}



