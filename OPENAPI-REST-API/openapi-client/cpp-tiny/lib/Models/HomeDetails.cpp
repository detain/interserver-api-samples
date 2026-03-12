

#include "Home_details.h"

using namespace Tiny;

Home_details::Home_details()
{
	modules = Home_details_modules();
}

Home_details::Home_details(std::string jsonString)
{
	this->fromJson(jsonString);
}

Home_details::~Home_details()
{

}

void
Home_details::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *modulesKey = "modules";

    if(object.has_key(modulesKey))
    {
        bourne::json value = object[modulesKey];




        Home_details_modules* obj = &modules;
		obj->fromJson(value.dump());

    }


}

bourne::json
Home_details::toJson()
{
    bourne::json object = bourne::json::object();






	object["modules"] = getModules().toJson();


    return object;

}

Home_details_modules
Home_details::getModules()
{
	return modules;
}

void
Home_details::setModules(Home_details_modules modules)
{
	this->modules = modules;
}



