

#include "HomeServicesLicensesLinks.h"

using namespace Tiny;

HomeServicesLicensesLinks::HomeServicesLicensesLinks()
{
	386522 = std::string();
}

HomeServicesLicensesLinks::HomeServicesLicensesLinks(std::string jsonString)
{
	this->fromJson(jsonString);
}

HomeServicesLicensesLinks::~HomeServicesLicensesLinks()
{

}

void
HomeServicesLicensesLinks::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *386522Key = "386522";

    if(object.has_key(386522Key))
    {
        bourne::json value = object[386522Key];



        jsonToValue(&386522, value, "std::string");


    }


}

bourne::json
HomeServicesLicensesLinks::toJson()
{
    bourne::json object = bourne::json::object();





    object["386522"] = get386522();



    return object;

}

std::string
HomeServicesLicensesLinks::get386522()
{
	return 386522;
}

void
HomeServicesLicensesLinks::set386522(std::string 386522)
{
	this->386522 = 386522;
}



