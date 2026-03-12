

#include "BackupExtraInfoTables.h"

using namespace Tiny;

BackupExtraInfoTables::BackupExtraInfoTables()
{
	ip_info = BackupIPInfo();
}

BackupExtraInfoTables::BackupExtraInfoTables(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupExtraInfoTables::~BackupExtraInfoTables()
{

}

void
BackupExtraInfoTables::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *ip_infoKey = "ip_info";

    if(object.has_key(ip_infoKey))
    {
        bourne::json value = object[ip_infoKey];




        BackupIPInfo* obj = &ip_info;
		obj->fromJson(value.dump());

    }


}

bourne::json
BackupExtraInfoTables::toJson()
{
    bourne::json object = bourne::json::object();






	object["ip_info"] = getIpInfo().toJson();


    return object;

}

BackupIPInfo
BackupExtraInfoTables::getIpInfo()
{
	return ip_info;
}

void
BackupExtraInfoTables::setIpInfo(BackupIPInfo ip_info)
{
	this->ip_info = ip_info;
}



