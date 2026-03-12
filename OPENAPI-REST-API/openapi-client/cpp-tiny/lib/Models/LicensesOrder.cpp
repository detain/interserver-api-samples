

#include "LicensesOrder.h"

using namespace Tiny;

LicensesOrder::LicensesOrder()
{
	serviceCategories = LicensesOrder_serviceCategories();
	packageCosts = LicensesOrder_packageCosts();
	serviceTypes = LicensesOrder_serviceTypes();
}

LicensesOrder::LicensesOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicensesOrder::~LicensesOrder()
{

}

void
LicensesOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *serviceCategoriesKey = "serviceCategories";

    if(object.has_key(serviceCategoriesKey))
    {
        bourne::json value = object[serviceCategoriesKey];




        LicensesOrder_serviceCategories* obj = &serviceCategories;
		obj->fromJson(value.dump());

    }

    const char *packageCostsKey = "packageCosts";

    if(object.has_key(packageCostsKey))
    {
        bourne::json value = object[packageCostsKey];




        LicensesOrder_packageCosts* obj = &packageCosts;
		obj->fromJson(value.dump());

    }

    const char *serviceTypesKey = "serviceTypes";

    if(object.has_key(serviceTypesKey))
    {
        bourne::json value = object[serviceTypesKey];




        LicensesOrder_serviceTypes* obj = &serviceTypes;
		obj->fromJson(value.dump());

    }


}

bourne::json
LicensesOrder::toJson()
{
    bourne::json object = bourne::json::object();






	object["serviceCategories"] = getServiceCategories().toJson();






	object["packageCosts"] = getPackageCosts().toJson();






	object["serviceTypes"] = getServiceTypes().toJson();


    return object;

}

LicensesOrder_serviceCategories
LicensesOrder::getServiceCategories()
{
	return serviceCategories;
}

void
LicensesOrder::setServiceCategories(LicensesOrder_serviceCategories serviceCategories)
{
	this->serviceCategories = serviceCategories;
}

LicensesOrder_packageCosts
LicensesOrder::getPackageCosts()
{
	return packageCosts;
}

void
LicensesOrder::setPackageCosts(LicensesOrder_packageCosts packageCosts)
{
	this->packageCosts = packageCosts;
}

LicensesOrder_serviceTypes
LicensesOrder::getServiceTypes()
{
	return serviceTypes;
}

void
LicensesOrder::setServiceTypes(LicensesOrder_serviceTypes serviceTypes)
{
	this->serviceTypes = serviceTypes;
}



