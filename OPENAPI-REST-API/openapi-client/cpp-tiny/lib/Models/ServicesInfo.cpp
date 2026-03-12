

#include "ServicesInfo.h"

using namespace Tiny;

ServicesInfo::ServicesInfo()
{
	modules = Modules();
	services = Services();
	serviceTypes = ServiceTypes();
	serviceCategories = ServiceCategories();
}

ServicesInfo::ServicesInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServicesInfo::~ServicesInfo()
{

}

void
ServicesInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *modulesKey = "modules";

    if(object.has_key(modulesKey))
    {
        bourne::json value = object[modulesKey];




        Modules* obj = &modules;
		obj->fromJson(value.dump());

    }

    const char *servicesKey = "services";

    if(object.has_key(servicesKey))
    {
        bourne::json value = object[servicesKey];




        Services* obj = &services;
		obj->fromJson(value.dump());

    }

    const char *serviceTypesKey = "serviceTypes";

    if(object.has_key(serviceTypesKey))
    {
        bourne::json value = object[serviceTypesKey];




        ServiceTypes* obj = &serviceTypes;
		obj->fromJson(value.dump());

    }

    const char *serviceCategoriesKey = "serviceCategories";

    if(object.has_key(serviceCategoriesKey))
    {
        bourne::json value = object[serviceCategoriesKey];




        ServiceCategories* obj = &serviceCategories;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServicesInfo::toJson()
{
    bourne::json object = bourne::json::object();






	object["modules"] = getModules().toJson();






	object["services"] = getServices().toJson();






	object["serviceTypes"] = getServiceTypes().toJson();






	object["serviceCategories"] = getServiceCategories().toJson();


    return object;

}

Modules&lt;std::string, ModuleSettings&gt;
ServicesInfo::getModules()
{
	return modules;
}

void
ServicesInfo::setModules(Modules&lt;std::string, ModuleSettings&gt; modules)
{
	this->modules = modules;
}

Services&lt;std::string, Service&gt;
ServicesInfo::getServices()
{
	return services;
}

void
ServicesInfo::setServices(Services&lt;std::string, Service&gt; services)
{
	this->services = services;
}

ServiceTypes&lt;std::string, ServiceType&gt;
ServicesInfo::getServiceTypes()
{
	return serviceTypes;
}

void
ServicesInfo::setServiceTypes(ServiceTypes&lt;std::string, ServiceType&gt; serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

ServiceCategories&lt;std::string, ServiceCategory&gt;
ServicesInfo::getServiceCategories()
{
	return serviceCategories;
}

void
ServicesInfo::setServiceCategories(ServiceCategories&lt;std::string, ServiceCategory&gt; serviceCategories)
{
	this->serviceCategories = serviceCategories;
}



