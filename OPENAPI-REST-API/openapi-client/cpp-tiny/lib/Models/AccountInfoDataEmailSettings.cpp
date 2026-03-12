

#include "AccountInfoData_email_settings.h"

using namespace Tiny;

AccountInfoData_email_settings::AccountInfoData_email_settings()
{
	admincc_bad_response = std::string();
	adminmass_communicationstpl = std::string();
}

AccountInfoData_email_settings::AccountInfoData_email_settings(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoData_email_settings::~AccountInfoData_email_settings()
{

}

void
AccountInfoData_email_settings::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *admincc_bad_responseKey = "admin/cc_bad_response";

    if(object.has_key(admincc_bad_responseKey))
    {
        bourne::json value = object[admincc_bad_responseKey];



        jsonToValue(&admincc_bad_response, value, "std::string");


    }

    const char *adminmass_communicationstplKey = "admin/mass_communications.tpl";

    if(object.has_key(adminmass_communicationstplKey))
    {
        bourne::json value = object[adminmass_communicationstplKey];



        jsonToValue(&adminmass_communicationstpl, value, "std::string");


    }


}

bourne::json
AccountInfoData_email_settings::toJson()
{
    bourne::json object = bourne::json::object();





    object["admincc_bad_response"] = getAdminccBadResponse();






    object["adminmass_communicationstpl"] = getAdminmassCommunicationstpl();



    return object;

}

std::string
AccountInfoData_email_settings::getAdminccBadResponse()
{
	return admincc_bad_response;
}

void
AccountInfoData_email_settings::setAdminccBadResponse(std::string admincc_bad_response)
{
	this->admincc_bad_response = admincc_bad_response;
}

std::string
AccountInfoData_email_settings::getAdminmassCommunicationstpl()
{
	return adminmass_communicationstpl;
}

void
AccountInfoData_email_settings::setAdminmassCommunicationstpl(std::string adminmass_communicationstpl)
{
	this->adminmass_communicationstpl = adminmass_communicationstpl;
}



