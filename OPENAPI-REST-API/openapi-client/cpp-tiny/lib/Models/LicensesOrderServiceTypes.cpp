

#include "LicensesOrder_serviceTypes.h"

using namespace Tiny;

LicensesOrder_serviceTypes::LicensesOrder_serviceTypes()
{
	licensesOrderServiceTypes11482 = LicensesOrderServiceTypes11482();
}

LicensesOrder_serviceTypes::LicensesOrder_serviceTypes(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicensesOrder_serviceTypes::~LicensesOrder_serviceTypes()
{

}

void
LicensesOrder_serviceTypes::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *licensesOrderServiceTypes11482Key = "LicensesOrderServiceTypes11482";

    if(object.has_key(licensesOrderServiceTypes11482Key))
    {
        bourne::json value = object[licensesOrderServiceTypes11482Key];




        LicensesOrderServiceTypes11482* obj = &licensesOrderServiceTypes11482;
		obj->fromJson(value.dump());

    }


}

bourne::json
LicensesOrder_serviceTypes::toJson()
{
    bourne::json object = bourne::json::object();






	object["licensesOrderServiceTypes11482"] = getLicensesOrderServiceTypes11482().toJson();


    return object;

}

LicensesOrderServiceTypes11482
LicensesOrder_serviceTypes::getLicensesOrderServiceTypes11482()
{
	return licensesOrderServiceTypes11482;
}

void
LicensesOrder_serviceTypes::setLicensesOrderServiceTypes11482(LicensesOrderServiceTypes11482 licensesOrderServiceTypes11482)
{
	this->licensesOrderServiceTypes11482 = licensesOrderServiceTypes11482;
}



