

#include "GetOrderDetail_200_response_packageCosts.h"

using namespace Tiny;

GetOrderDetail_200_response_packageCosts::GetOrderDetail_200_response_packageCosts()
{
	package_id = float(0);
	package_cost = float(0);
	currency = std::string();
	currencySymbol = std::string();
}

GetOrderDetail_200_response_packageCosts::GetOrderDetail_200_response_packageCosts(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetOrderDetail_200_response_packageCosts::~GetOrderDetail_200_response_packageCosts()
{

}

void
GetOrderDetail_200_response_packageCosts::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *package_idKey = "package_id";

    if(object.has_key(package_idKey))
    {
        bourne::json value = object[package_idKey];



        jsonToValue(&package_id, value, "long");


    }

    const char *package_costKey = "package_cost";

    if(object.has_key(package_costKey))
    {
        bourne::json value = object[package_costKey];



        jsonToValue(&package_cost, value, "long");


    }

    const char *currencyKey = "currency";

    if(object.has_key(currencyKey))
    {
        bourne::json value = object[currencyKey];



        jsonToValue(&currency, value, "std::string");


    }

    const char *currencySymbolKey = "currencySymbol";

    if(object.has_key(currencySymbolKey))
    {
        bourne::json value = object[currencySymbolKey];



        jsonToValue(&currencySymbol, value, "std::string");


    }


}

bourne::json
GetOrderDetail_200_response_packageCosts::toJson()
{
    bourne::json object = bourne::json::object();





    object["package_id"] = getPackageId();






    object["package_cost"] = getPackageCost();






    object["currency"] = getCurrency();






    object["currencySymbol"] = getCurrencySymbol();



    return object;

}

long
GetOrderDetail_200_response_packageCosts::getPackageId()
{
	return package_id;
}

void
GetOrderDetail_200_response_packageCosts::setPackageId(long package_id)
{
	this->package_id = package_id;
}

long
GetOrderDetail_200_response_packageCosts::getPackageCost()
{
	return package_cost;
}

void
GetOrderDetail_200_response_packageCosts::setPackageCost(long package_cost)
{
	this->package_cost = package_cost;
}

std::string
GetOrderDetail_200_response_packageCosts::getCurrency()
{
	return currency;
}

void
GetOrderDetail_200_response_packageCosts::setCurrency(std::string currency)
{
	this->currency = currency;
}

std::string
GetOrderDetail_200_response_packageCosts::getCurrencySymbol()
{
	return currencySymbol;
}

void
GetOrderDetail_200_response_packageCosts::setCurrencySymbol(std::string currencySymbol)
{
	this->currencySymbol = currencySymbol;
}



