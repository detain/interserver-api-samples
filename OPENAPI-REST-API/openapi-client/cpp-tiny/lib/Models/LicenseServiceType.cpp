

#include "LicenseServiceType.h"

using namespace Tiny;

LicenseServiceType::LicenseServiceType()
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

LicenseServiceType::LicenseServiceType(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicenseServiceType::~LicenseServiceType()
{

}

void
LicenseServiceType::fromJson(std::string jsonObj)
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
LicenseServiceType::toJson()
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
LicenseServiceType::getServicesId()
{
	return services_id;
}

void
LicenseServiceType::setServicesId(std::string services_id)
{
	this->services_id = services_id;
}

std::string
LicenseServiceType::getServicesName()
{
	return services_name;
}

void
LicenseServiceType::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}

std::string
LicenseServiceType::getServicesCost()
{
	return services_cost;
}

void
LicenseServiceType::setServicesCost(std::string services_cost)
{
	this->services_cost = services_cost;
}

std::string
LicenseServiceType::getServicesCategory()
{
	return services_category;
}

void
LicenseServiceType::setServicesCategory(std::string services_category)
{
	this->services_category = services_category;
}

std::string
LicenseServiceType::getServicesBuyable()
{
	return services_buyable;
}

void
LicenseServiceType::setServicesBuyable(std::string services_buyable)
{
	this->services_buyable = services_buyable;
}

std::string
LicenseServiceType::getServicesType()
{
	return services_type;
}

void
LicenseServiceType::setServicesType(std::string services_type)
{
	this->services_type = services_type;
}

std::string
LicenseServiceType::getServicesField1()
{
	return services_field1;
}

void
LicenseServiceType::setServicesField1(std::string services_field1)
{
	this->services_field1 = services_field1;
}

std::string
LicenseServiceType::getServicesField2()
{
	return services_field2;
}

void
LicenseServiceType::setServicesField2(std::string services_field2)
{
	this->services_field2 = services_field2;
}

std::string
LicenseServiceType::getServicesModule()
{
	return services_module;
}

void
LicenseServiceType::setServicesModule(std::string services_module)
{
	this->services_module = services_module;
}



