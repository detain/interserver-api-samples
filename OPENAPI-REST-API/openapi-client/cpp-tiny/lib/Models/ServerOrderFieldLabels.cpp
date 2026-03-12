

#include "ServerOrderFieldLabels.h"

using namespace Tiny;

ServerOrderFieldLabels::ServerOrderFieldLabels()
{
	bandwidth = null;
	ips = null;
	os = null;
	cp = null;
	raid = null;
	memory = null;
	hd = null;
}

ServerOrderFieldLabels::ServerOrderFieldLabels(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderFieldLabels::~ServerOrderFieldLabels()
{

}

void
ServerOrderFieldLabels::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *bandwidthKey = "bandwidth";

    if(object.has_key(bandwidthKey))
    {
        bourne::json value = object[bandwidthKey];




        ServerOrderFieldLabel* obj = &bandwidth;
		obj->fromJson(value.dump());

    }

    const char *ipsKey = "ips";

    if(object.has_key(ipsKey))
    {
        bourne::json value = object[ipsKey];




        ServerOrderFieldLabel* obj = &ips;
		obj->fromJson(value.dump());

    }

    const char *osKey = "os";

    if(object.has_key(osKey))
    {
        bourne::json value = object[osKey];




        ServerOrderFieldLabel* obj = &os;
		obj->fromJson(value.dump());

    }

    const char *cpKey = "cp";

    if(object.has_key(cpKey))
    {
        bourne::json value = object[cpKey];




        ServerOrderFieldLabel* obj = &cp;
		obj->fromJson(value.dump());

    }

    const char *raidKey = "raid";

    if(object.has_key(raidKey))
    {
        bourne::json value = object[raidKey];




        ServerOrderFieldLabel* obj = &raid;
		obj->fromJson(value.dump());

    }

    const char *memoryKey = "memory";

    if(object.has_key(memoryKey))
    {
        bourne::json value = object[memoryKey];




        ServerOrderFieldLabel* obj = &memory;
		obj->fromJson(value.dump());

    }

    const char *hdKey = "hd";

    if(object.has_key(hdKey))
    {
        bourne::json value = object[hdKey];




        ServerOrderFieldLabel* obj = &hd;
		obj->fromJson(value.dump());

    }


}

bourne::json
ServerOrderFieldLabels::toJson()
{
    bourne::json object = bourne::json::object();






	object["bandwidth"] = getBandwidth().toJson();






	object["ips"] = getIps().toJson();






	object["os"] = getOs().toJson();






	object["cp"] = getCp().toJson();






	object["raid"] = getRaid().toJson();






	object["memory"] = getMemory().toJson();






	object["hd"] = getHd().toJson();


    return object;

}

ServerOrderFieldLabel
ServerOrderFieldLabels::getBandwidth()
{
	return bandwidth;
}

void
ServerOrderFieldLabels::setBandwidth(ServerOrderFieldLabel bandwidth)
{
	this->bandwidth = bandwidth;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getIps()
{
	return ips;
}

void
ServerOrderFieldLabels::setIps(ServerOrderFieldLabel ips)
{
	this->ips = ips;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getOs()
{
	return os;
}

void
ServerOrderFieldLabels::setOs(ServerOrderFieldLabel os)
{
	this->os = os;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getCp()
{
	return cp;
}

void
ServerOrderFieldLabels::setCp(ServerOrderFieldLabel cp)
{
	this->cp = cp;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getRaid()
{
	return raid;
}

void
ServerOrderFieldLabels::setRaid(ServerOrderFieldLabel raid)
{
	this->raid = raid;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getMemory()
{
	return memory;
}

void
ServerOrderFieldLabels::setMemory(ServerOrderFieldLabel memory)
{
	this->memory = memory;
}

ServerOrderFieldLabel
ServerOrderFieldLabels::getHd()
{
	return hd;
}

void
ServerOrderFieldLabels::setHd(ServerOrderFieldLabel hd)
{
	this->hd = hd;
}



