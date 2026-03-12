

#include "ServiceType.h"

using namespace Tiny;

ServiceType::ServiceType()
{
	st_id = int(0);
	st_name = std::string();
	st_category = int(0);
	st_module = std::string();
}

ServiceType::ServiceType(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServiceType::~ServiceType()
{

}

void
ServiceType::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *st_idKey = "st_id";

    if(object.has_key(st_idKey))
    {
        bourne::json value = object[st_idKey];



        jsonToValue(&st_id, value, "int");


    }

    const char *st_nameKey = "st_name";

    if(object.has_key(st_nameKey))
    {
        bourne::json value = object[st_nameKey];



        jsonToValue(&st_name, value, "std::string");


    }

    const char *st_categoryKey = "st_category";

    if(object.has_key(st_categoryKey))
    {
        bourne::json value = object[st_categoryKey];



        jsonToValue(&st_category, value, "int");


    }

    const char *st_moduleKey = "st_module";

    if(object.has_key(st_moduleKey))
    {
        bourne::json value = object[st_moduleKey];



        jsonToValue(&st_module, value, "std::string");


    }


}

bourne::json
ServiceType::toJson()
{
    bourne::json object = bourne::json::object();





    object["st_id"] = getStId();






    object["st_name"] = getStName();






    object["st_category"] = getStCategory();






    object["st_module"] = getStModule();



    return object;

}

int
ServiceType::getStId()
{
	return st_id;
}

void
ServiceType::setStId(int st_id)
{
	this->st_id = st_id;
}

std::string
ServiceType::getStName()
{
	return st_name;
}

void
ServiceType::setStName(std::string st_name)
{
	this->st_name = st_name;
}

int
ServiceType::getStCategory()
{
	return st_category;
}

void
ServiceType::setStCategory(int st_category)
{
	this->st_category = st_category;
}

std::string
ServiceType::getStModule()
{
	return st_module;
}

void
ServiceType::setStModule(std::string st_module)
{
	this->st_module = st_module;
}



