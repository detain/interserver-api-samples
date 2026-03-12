

#include "Service.h"

using namespace Tiny;

Service::Service()
{
	services_id = int(0);
	services_name = std::string();
	services_cost = float(0);
	services_currency = std::string();
	services_category = int(0);
	services_buyable = bool(false);
	services_type = int(0);
	services_field1 = std::string();
	services_field2 = std::string();
	services_module = std::string();
}

Service::Service(std::string jsonString)
{
	this->fromJson(jsonString);
}

Service::~Service()
{

}

void
Service::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *services_idKey = "services_id";

    if(object.has_key(services_idKey))
    {
        bourne::json value = object[services_idKey];



        jsonToValue(&services_id, value, "int");


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



        jsonToValue(&services_cost, value, "long");


    }

    const char *services_currencyKey = "services_currency";

    if(object.has_key(services_currencyKey))
    {
        bourne::json value = object[services_currencyKey];



        jsonToValue(&services_currency, value, "std::string");


    }

    const char *services_categoryKey = "services_category";

    if(object.has_key(services_categoryKey))
    {
        bourne::json value = object[services_categoryKey];



        jsonToValue(&services_category, value, "int");


    }

    const char *services_buyableKey = "services_buyable";

    if(object.has_key(services_buyableKey))
    {
        bourne::json value = object[services_buyableKey];



        jsonToValue(&services_buyable, value, "bool");


    }

    const char *services_typeKey = "services_type";

    if(object.has_key(services_typeKey))
    {
        bourne::json value = object[services_typeKey];



        jsonToValue(&services_type, value, "int");


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
Service::toJson()
{
    bourne::json object = bourne::json::object();





    object["services_id"] = getServicesId();






    object["services_name"] = getServicesName();






    object["services_cost"] = getServicesCost();






    object["services_currency"] = getServicesCurrency();






    object["services_category"] = getServicesCategory();






    object["services_buyable"] = isServicesBuyable();






    object["services_type"] = getServicesType();






    object["services_field1"] = getServicesField1();






    object["services_field2"] = getServicesField2();






    object["services_module"] = getServicesModule();



    return object;

}

int
Service::getServicesId()
{
	return services_id;
}

void
Service::setServicesId(int services_id)
{
	this->services_id = services_id;
}

std::string
Service::getServicesName()
{
	return services_name;
}

void
Service::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}

long
Service::getServicesCost()
{
	return services_cost;
}

void
Service::setServicesCost(long services_cost)
{
	this->services_cost = services_cost;
}

std::string
Service::getServicesCurrency()
{
	return services_currency;
}

void
Service::setServicesCurrency(std::string services_currency)
{
	this->services_currency = services_currency;
}

int
Service::getServicesCategory()
{
	return services_category;
}

void
Service::setServicesCategory(int services_category)
{
	this->services_category = services_category;
}

bool
Service::isServicesBuyable()
{
	return services_buyable;
}

void
Service::setServicesBuyable(bool services_buyable)
{
	this->services_buyable = services_buyable;
}

int
Service::getServicesType()
{
	return services_type;
}

void
Service::setServicesType(int services_type)
{
	this->services_type = services_type;
}

std::string
Service::getServicesField1()
{
	return services_field1;
}

void
Service::setServicesField1(std::string services_field1)
{
	this->services_field1 = services_field1;
}

std::string
Service::getServicesField2()
{
	return services_field2;
}

void
Service::setServicesField2(std::string services_field2)
{
	this->services_field2 = services_field2;
}

std::string
Service::getServicesModule()
{
	return services_module;
}

void
Service::setServicesModule(std::string services_module)
{
	this->services_module = services_module;
}



