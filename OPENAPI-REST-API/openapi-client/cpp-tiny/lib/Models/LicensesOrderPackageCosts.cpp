

#include "LicensesOrder_packageCosts.h"

using namespace Tiny;

LicensesOrder_packageCosts::LicensesOrder_packageCosts()
{
	licensesOrderPackageCosts11468 = float(0);
}

LicensesOrder_packageCosts::LicensesOrder_packageCosts(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicensesOrder_packageCosts::~LicensesOrder_packageCosts()
{

}

void
LicensesOrder_packageCosts::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *licensesOrderPackageCosts11468Key = "LicensesOrderPackageCosts11468";

    if(object.has_key(licensesOrderPackageCosts11468Key))
    {
        bourne::json value = object[licensesOrderPackageCosts11468Key];



        jsonToValue(&licensesOrderPackageCosts11468, value, "long");


    }


}

bourne::json
LicensesOrder_packageCosts::toJson()
{
    bourne::json object = bourne::json::object();





    object["licensesOrderPackageCosts11468"] = getLicensesOrderPackageCosts11468();



    return object;

}

long
LicensesOrder_packageCosts::getLicensesOrderPackageCosts11468()
{
	return licensesOrderPackageCosts11468;
}

void
LicensesOrder_packageCosts::setLicensesOrderPackageCosts11468(long licensesOrderPackageCosts11468)
{
	this->licensesOrderPackageCosts11468 = licensesOrderPackageCosts11468;
}



