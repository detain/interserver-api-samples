

#include "Quickserver_extraInfoTables.h"

using namespace Tiny;

Quickserver_extraInfoTables::Quickserver_extraInfoTables()
{
	ip_info = QuickserverIpInfo();
	addons = QuickserverAddons();
}

Quickserver_extraInfoTables::Quickserver_extraInfoTables(std::string jsonString)
{
	this->fromJson(jsonString);
}

Quickserver_extraInfoTables::~Quickserver_extraInfoTables()
{

}

void
Quickserver_extraInfoTables::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ip_infoKey = "ip_info";

    if(object.has_key(ip_infoKey))
    {
        bourne::json value = object[ip_infoKey];




        QuickserverIpInfo* obj = &ip_info;
		obj->fromJson(value.dump());

    }

    const char *addonsKey = "addons";

    if(object.has_key(addonsKey))
    {
        bourne::json value = object[addonsKey];




        QuickserverAddons* obj = &addons;
		obj->fromJson(value.dump());

    }


}

bourne::json
Quickserver_extraInfoTables::toJson()
{
    bourne::json object = bourne::json::object();






	object["ip_info"] = getIpInfo().toJson();






	object["addons"] = getAddons().toJson();


    return object;

}

QuickserverIpInfo
Quickserver_extraInfoTables::getIpInfo()
{
	return ip_info;
}

void
Quickserver_extraInfoTables::setIpInfo(QuickserverIpInfo ip_info)
{
	this->ip_info = ip_info;
}

QuickserverAddons
Quickserver_extraInfoTables::getAddons()
{
	return addons;
}

void
Quickserver_extraInfoTables::setAddons(QuickserverAddons addons)
{
	this->addons = addons;
}



