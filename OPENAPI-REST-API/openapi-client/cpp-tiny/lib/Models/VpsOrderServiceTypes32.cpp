

#include "VpsOrder_serviceTypes_32.h"

using namespace Tiny;

VpsOrder_serviceTypes_32::VpsOrder_serviceTypes_32()
{
	services_id = std::string();
	services_name = std::string();
	services_cost = std::string();
	services_category = std::string();
	services_buyable = std::string();
	services_type = std::string();
	services_field1 = std::string();
	services_field2 = std::string();
	services_module = std::string();
}

VpsOrder_serviceTypes_32::VpsOrder_serviceTypes_32(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsOrder_serviceTypes_32::~VpsOrder_serviceTypes_32()
{

}

void
VpsOrder_serviceTypes_32::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *services_idKey = "services_id";

    if(object.has_key(services_idKey))
    {
        bourne::json value = object[services_idKey];



        jsonToValue(&services_id, value, "std::string");


    }

    const char *services_nameKey = "services_name";

    if(object.has_key(services_nameKey))
    {
        bourne::json value = object[services_nameKey];



        jsonToValue(&services_name, value, "std::string");


    }

    const char *services_costKey = "services_cost";

    if(object.has_key(services_costKey))
    {
        bourne::json value = object[services_costKey];



        jsonToValue(&services_cost, value, "std::string");


    }

    const char *services_categoryKey = "services_category";

    if(object.has_key(services_categoryKey))
    {
        bourne::json value = object[services_categoryKey];



        jsonToValue(&services_category, value, "std::string");


    }

    const char *services_buyableKey = "services_buyable";

    if(object.has_key(services_buyableKey))
    {
        bourne::json value = object[services_buyableKey];



        jsonToValue(&services_buyable, value, "std::string");


    }

    const char *services_typeKey = "services_type";

    if(object.has_key(services_typeKey))
    {
        bourne::json value = object[services_typeKey];



        jsonToValue(&services_type, value, "std::string");


    }

    const char *services_field1Key = "services_field1";

    if(object.has_key(services_field1Key))
    {
        bourne::json value = object[services_field1Key];



        jsonToValue(&services_field1, value, "std::string");


    }

    const char *services_field2Key = "services_field2";

    if(object.has_key(services_field2Key))
    {
        bourne::json value = object[services_field2Key];



        jsonToValue(&services_field2, value, "std::string");


    }

    const char *services_moduleKey = "services_module";

    if(object.has_key(services_moduleKey))
    {
        bourne::json value = object[services_moduleKey];



        jsonToValue(&services_module, value, "std::string");


    }


}

bourne::json
VpsOrder_serviceTypes_32::toJson()
{
    bourne::json object = bourne::json::object();





    object["services_id"] = getServicesId();






    object["services_name"] = getServicesName();






    object["services_cost"] = getServicesCost();






    object["services_category"] = getServicesCategory();






    object["services_buyable"] = getServicesBuyable();






    object["services_type"] = getServicesType();






    object["services_field1"] = getServicesField1();






    object["services_field2"] = getServicesField2();






    object["services_module"] = getServicesModule();



    return object;

}

std::string
VpsOrder_serviceTypes_32::getServicesId()
{
	return services_id;
}

void
VpsOrder_serviceTypes_32::setServicesId(std::string services_id)
{
	this->services_id = services_id;
}

std::string
VpsOrder_serviceTypes_32::getServicesName()
{
	return services_name;
}

void
VpsOrder_serviceTypes_32::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}

std::string
VpsOrder_serviceTypes_32::getServicesCost()
{
	return services_cost;
}

void
VpsOrder_serviceTypes_32::setServicesCost(std::string services_cost)
{
	this->services_cost = services_cost;
}

std::string
VpsOrder_serviceTypes_32::getServicesCategory()
{
	return services_category;
}

void
VpsOrder_serviceTypes_32::setServicesCategory(std::string services_category)
{
	this->services_category = services_category;
}

std::string
VpsOrder_serviceTypes_32::getServicesBuyable()
{
	return services_buyable;
}

void
VpsOrder_serviceTypes_32::setServicesBuyable(std::string services_buyable)
{
	this->services_buyable = services_buyable;
}

std::string
VpsOrder_serviceTypes_32::getServicesType()
{
	return services_type;
}

void
VpsOrder_serviceTypes_32::setServicesType(std::string services_type)
{
	this->services_type = services_type;
}

std::string
VpsOrder_serviceTypes_32::getServicesField1()
{
	return services_field1;
}

void
VpsOrder_serviceTypes_32::setServicesField1(std::string services_field1)
{
	this->services_field1 = services_field1;
}

std::string
VpsOrder_serviceTypes_32::getServicesField2()
{
	return services_field2;
}

void
VpsOrder_serviceTypes_32::setServicesField2(std::string services_field2)
{
	this->services_field2 = services_field2;
}

std::string
VpsOrder_serviceTypes_32::getServicesModule()
{
	return services_module;
}

void
VpsOrder_serviceTypes_32::setServicesModule(std::string services_module)
{
	this->services_module = services_module;
}



