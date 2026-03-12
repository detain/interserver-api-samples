

#include "DomainServiceType.h"

using namespace Tiny;

DomainServiceType::DomainServiceType()
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

DomainServiceType::DomainServiceType(std::string jsonString)
{
	this->fromJson(jsonString);
}

DomainServiceType::~DomainServiceType()
{

}

void
DomainServiceType::fromJson(std::string jsonObj)
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
DomainServiceType::toJson()
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
DomainServiceType::getServicesId()
{
	return services_id;
}

void
DomainServiceType::setServicesId(std::string services_id)
{
	this->services_id = services_id;
}

std::string
DomainServiceType::getServicesName()
{
	return services_name;
}

void
DomainServiceType::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}

std::string
DomainServiceType::getServicesCost()
{
	return services_cost;
}

void
DomainServiceType::setServicesCost(std::string services_cost)
{
	this->services_cost = services_cost;
}

std::string
DomainServiceType::getServicesCategory()
{
	return services_category;
}

void
DomainServiceType::setServicesCategory(std::string services_category)
{
	this->services_category = services_category;
}

std::string
DomainServiceType::getServicesBuyable()
{
	return services_buyable;
}

void
DomainServiceType::setServicesBuyable(std::string services_buyable)
{
	this->services_buyable = services_buyable;
}

std::string
DomainServiceType::getServicesType()
{
	return services_type;
}

void
DomainServiceType::setServicesType(std::string services_type)
{
	this->services_type = services_type;
}

std::string
DomainServiceType::getServicesField1()
{
	return services_field1;
}

void
DomainServiceType::setServicesField1(std::string services_field1)
{
	this->services_field1 = services_field1;
}

std::string
DomainServiceType::getServicesField2()
{
	return services_field2;
}

void
DomainServiceType::setServicesField2(std::string services_field2)
{
	this->services_field2 = services_field2;
}

std::string
DomainServiceType::getServicesModule()
{
	return services_module;
}

void
DomainServiceType::setServicesModule(std::string services_module)
{
	this->services_module = services_module;
}



