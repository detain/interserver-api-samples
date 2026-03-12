

#include "License_extraInfoTables.h"

using namespace Tiny;

License_extraInfoTables::License_extraInfoTables()
{
	ip_info = LicenseIpInfo();
}

License_extraInfoTables::License_extraInfoTables(std::string jsonString)
{
	this->fromJson(jsonString);
}

License_extraInfoTables::~License_extraInfoTables()
{

}

void
License_extraInfoTables::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ip_infoKey = "ip_info";

    if(object.has_key(ip_infoKey))
    {
        bourne::json value = object[ip_infoKey];




        LicenseIpInfo* obj = &ip_info;
		obj->fromJson(value.dump());

    }


}

bourne::json
License_extraInfoTables::toJson()
{
    bourne::json object = bourne::json::object();






	object["ip_info"] = getIpInfo().toJson();


    return object;

}

LicenseIpInfo
License_extraInfoTables::getIpInfo()
{
	return ip_info;
}

void
License_extraInfoTables::setIpInfo(LicenseIpInfo ip_info)
{
	this->ip_info = ip_info;
}



