

#include "BackupsOrder.h"

using namespace Tiny;

BackupsOrder::BackupsOrder()
{
	packageCosts = BackupsOrderPackageCosts();
	serviceTypes = BackupsOrder_serviceTypes();
}

BackupsOrder::BackupsOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupsOrder::~BackupsOrder()
{

}

void
BackupsOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *packageCostsKey = "packageCosts";

    if(object.has_key(packageCostsKey))
    {
        bourne::json value = object[packageCostsKey];




        BackupsOrderPackageCosts* obj = &packageCosts;
		obj->fromJson(value.dump());

    }

    const char *serviceTypesKey = "serviceTypes";

    if(object.has_key(serviceTypesKey))
    {
        bourne::json value = object[serviceTypesKey];




        BackupsOrder_serviceTypes* obj = &serviceTypes;
		obj->fromJson(value.dump());

    }


}

bourne::json
BackupsOrder::toJson()
{
    bourne::json object = bourne::json::object();






	object["packageCosts"] = getPackageCosts().toJson();






	object["serviceTypes"] = getServiceTypes().toJson();


    return object;

}

BackupsOrderPackageCosts
BackupsOrder::getPackageCosts()
{
	return packageCosts;
}

void
BackupsOrder::setPackageCosts(BackupsOrderPackageCosts packageCosts)
{
	this->packageCosts = packageCosts;
}

BackupsOrder_serviceTypes
BackupsOrder::getServiceTypes()
{
	return serviceTypes;
}

void
BackupsOrder::setServiceTypes(BackupsOrder_serviceTypes serviceTypes)
{
	this->serviceTypes = serviceTypes;
}



