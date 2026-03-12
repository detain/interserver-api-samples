

#include "GetOrderDetail_200_response.h"

using namespace Tiny;

GetOrderDetail_200_response::GetOrderDetail_200_response()
{
	packageCosts = GetOrderDetail_200_response_packageCosts();
	serviceTypes = std::list<GetOrderDetail_200_response_serviceTypes_inner>();
	ips = std::list<GetOrderDetail_200_response_ips_inner>();
}

GetOrderDetail_200_response::GetOrderDetail_200_response(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetOrderDetail_200_response::~GetOrderDetail_200_response()
{

}

void
GetOrderDetail_200_response::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *packageCostsKey = "packageCosts";

    if(object.has_key(packageCostsKey))
    {
        bourne::json value = object[packageCostsKey];




        GetOrderDetail_200_response_packageCosts* obj = &packageCosts;
		obj->fromJson(value.dump());

    }

    const char *serviceTypesKey = "serviceTypes";

    if(object.has_key(serviceTypesKey))
    {
        bourne::json value = object[serviceTypesKey];


        std::list<GetOrderDetail_200_response_serviceTypes_inner> serviceTypes_list;
        GetOrderDetail_200_response_serviceTypes_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            serviceTypes_list.push_back(element);
        }
        serviceTypes = serviceTypes_list;


    }

    const char *ipsKey = "ips";

    if(object.has_key(ipsKey))
    {
        bourne::json value = object[ipsKey];


        std::list<GetOrderDetail_200_response_ips_inner> ips_list;
        GetOrderDetail_200_response_ips_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            ips_list.push_back(element);
        }
        ips = ips_list;


    }


}

bourne::json
GetOrderDetail_200_response::toJson()
{
    bourne::json object = bourne::json::object();






	object["packageCosts"] = getPackageCosts().toJson();




    std::list<GetOrderDetail_200_response_serviceTypes_inner> serviceTypes_list = getServiceTypes();
    bourne::json serviceTypes_arr = bourne::json::array();

    for(auto& var : serviceTypes_list)
    {
        GetOrderDetail_200_response_serviceTypes_inner obj = var;
        serviceTypes_arr.append(obj.toJson());
    }
    object["serviceTypes"] = serviceTypes_arr;






    std::list<GetOrderDetail_200_response_ips_inner> ips_list = getIps();
    bourne::json ips_arr = bourne::json::array();

    for(auto& var : ips_list)
    {
        GetOrderDetail_200_response_ips_inner obj = var;
        ips_arr.append(obj.toJson());
    }
    object["ips"] = ips_arr;




    return object;

}

GetOrderDetail_200_response_packageCosts
GetOrderDetail_200_response::getPackageCosts()
{
	return packageCosts;
}

void
GetOrderDetail_200_response::setPackageCosts(GetOrderDetail_200_response_packageCosts packageCosts)
{
	this->packageCosts = packageCosts;
}

std::list<GetOrderDetail_200_response_serviceTypes_inner>
GetOrderDetail_200_response::getServiceTypes()
{
	return serviceTypes;
}

void
GetOrderDetail_200_response::setServiceTypes(std::list<GetOrderDetail_200_response_serviceTypes_inner> serviceTypes)
{
	this->serviceTypes = serviceTypes;
}

std::list<GetOrderDetail_200_response_ips_inner>
GetOrderDetail_200_response::getIps()
{
	return ips;
}

void
GetOrderDetail_200_response::setIps(std::list<GetOrderDetail_200_response_ips_inner> ips)
{
	this->ips = ips;
}



