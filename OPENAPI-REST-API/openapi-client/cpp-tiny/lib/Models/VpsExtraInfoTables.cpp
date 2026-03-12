

#include "VpsExtraInfoTables.h"

using namespace Tiny;

VpsExtraInfoTables::VpsExtraInfoTables()
{
	ip_info = VpsIPInfo();
}

VpsExtraInfoTables::VpsExtraInfoTables(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsExtraInfoTables::~VpsExtraInfoTables()
{

}

void
VpsExtraInfoTables::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ip_infoKey = "ip_info";

    if(object.has_key(ip_infoKey))
    {
        bourne::json value = object[ip_infoKey];




        VpsIPInfo* obj = &ip_info;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsExtraInfoTables::toJson()
{
    bourne::json object = bourne::json::object();






	object["ip_info"] = getIpInfo().toJson();


    return object;

}

VpsIPInfo
VpsExtraInfoTables::getIpInfo()
{
	return ip_info;
}

void
VpsExtraInfoTables::setIpInfo(VpsIPInfo ip_info)
{
	this->ip_info = ip_info;
}



