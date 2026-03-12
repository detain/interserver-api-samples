

#include "GetOrderDetail_200_response_serviceTypes_inner.h"

using namespace Tiny;

GetOrderDetail_200_response_serviceTypes_inner::GetOrderDetail_200_response_serviceTypes_inner()
{
	services_id = int(0);
	services_name = std::string();
	services_cost = int(0);
	services_field1 = std::string();
	services_field2 = std::string();
	services_module = std::string();
}

GetOrderDetail_200_response_serviceTypes_inner::GetOrderDetail_200_response_serviceTypes_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetOrderDetail_200_response_serviceTypes_inner::~GetOrderDetail_200_response_serviceTypes_inner()
{

}

void
GetOrderDetail_200_response_serviceTypes_inner::fromJson(std::string jsonObj)
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



        jsonToValue(&services_cost, value, "int");


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
GetOrderDetail_200_response_serviceTypes_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["services_id"] = getServicesId();






    object["services_name"] = getServicesName();






    object["services_cost"] = getServicesCost();






    object["services_field1"] = getServicesField1();






    object["services_field2"] = getServicesField2();






    object["services_module"] = getServicesModule();



    return object;

}

int
GetOrderDetail_200_response_serviceTypes_inner::getServicesId()
{
	return services_id;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesId(int services_id)
{
	this->services_id = services_id;
}

std::string
GetOrderDetail_200_response_serviceTypes_inner::getServicesName()
{
	return services_name;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}

int
GetOrderDetail_200_response_serviceTypes_inner::getServicesCost()
{
	return services_cost;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesCost(int services_cost)
{
	this->services_cost = services_cost;
}

std::string
GetOrderDetail_200_response_serviceTypes_inner::getServicesField1()
{
	return services_field1;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesField1(std::string services_field1)
{
	this->services_field1 = services_field1;
}

std::string
GetOrderDetail_200_response_serviceTypes_inner::getServicesField2()
{
	return services_field2;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesField2(std::string services_field2)
{
	this->services_field2 = services_field2;
}

std::string
GetOrderDetail_200_response_serviceTypes_inner::getServicesModule()
{
	return services_module;
}

void
GetOrderDetail_200_response_serviceTypes_inner::setServicesModule(std::string services_module)
{
	this->services_module = services_module;
}



