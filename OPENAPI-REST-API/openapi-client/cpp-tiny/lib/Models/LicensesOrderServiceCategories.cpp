

#include "LicensesOrder_serviceCategories.h"

using namespace Tiny;

LicensesOrder_serviceCategories::LicensesOrder_serviceCategories()
{
	licensesOrderServiceCategories509 = LicensesOrderServiceCategories509();
}

LicensesOrder_serviceCategories::LicensesOrder_serviceCategories(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicensesOrder_serviceCategories::~LicensesOrder_serviceCategories()
{

}

void
LicensesOrder_serviceCategories::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *licensesOrderServiceCategories509Key = "LicensesOrderServiceCategories509";

    if(object.has_key(licensesOrderServiceCategories509Key))
    {
        bourne::json value = object[licensesOrderServiceCategories509Key];




        LicensesOrderServiceCategories509* obj = &licensesOrderServiceCategories509;
		obj->fromJson(value.dump());

    }


}

bourne::json
LicensesOrder_serviceCategories::toJson()
{
    bourne::json object = bourne::json::object();






	object["licensesOrderServiceCategories509"] = getLicensesOrderServiceCategories509().toJson();


    return object;

}

LicensesOrderServiceCategories509
LicensesOrder_serviceCategories::getLicensesOrderServiceCategories509()
{
	return licensesOrderServiceCategories509;
}

void
LicensesOrder_serviceCategories::setLicensesOrderServiceCategories509(LicensesOrderServiceCategories509 licensesOrderServiceCategories509)
{
	this->licensesOrderServiceCategories509 = licensesOrderServiceCategories509;
}



