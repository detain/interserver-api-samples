

#include "ServerOrderConfigIds.h"

using namespace Tiny;

ServerOrderConfigIds::ServerOrderConfigIds()
{
	memory = int(0);
	bandwidth = std::string();
	ips = std::string();
	os = std::string();
	cp = int(0);
	raid = std::string();
	hd = std::string();
}

ServerOrderConfigIds::ServerOrderConfigIds(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderConfigIds::~ServerOrderConfigIds()
{

}

void
ServerOrderConfigIds::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *memoryKey = "memory";

    if(object.has_key(memoryKey))
    {
        bourne::json value = object[memoryKey];



        jsonToValue(&memory, value, "int");


    }

    const char *bandwidthKey = "bandwidth";

    if(object.has_key(bandwidthKey))
    {
        bourne::json value = object[bandwidthKey];



        jsonToValue(&bandwidth, value, "std::string");


    }

    const char *ipsKey = "ips";

    if(object.has_key(ipsKey))
    {
        bourne::json value = object[ipsKey];



        jsonToValue(&ips, value, "std::string");


    }

    const char *osKey = "os";

    if(object.has_key(osKey))
    {
        bourne::json value = object[osKey];



        jsonToValue(&os, value, "std::string");


    }

    const char *cpKey = "cp";

    if(object.has_key(cpKey))
    {
        bourne::json value = object[cpKey];



        jsonToValue(&cp, value, "int");


    }

    const char *raidKey = "raid";

    if(object.has_key(raidKey))
    {
        bourne::json value = object[raidKey];



        jsonToValue(&raid, value, "std::string");


    }

    const char *hdKey = "hd";

    if(object.has_key(hdKey))
    {
        bourne::json value = object[hdKey];



        jsonToValue(&hd, value, "std::string");


    }


}

bourne::json
ServerOrderConfigIds::toJson()
{
    bourne::json object = bourne::json::object();





    object["memory"] = getMemory();






    object["bandwidth"] = getBandwidth();






    object["ips"] = getIps();






    object["os"] = getOs();






    object["cp"] = getCp();






    object["raid"] = getRaid();






    object["hd"] = getHd();



    return object;

}

int
ServerOrderConfigIds::getMemory()
{
	return memory;
}

void
ServerOrderConfigIds::setMemory(int memory)
{
	this->memory = memory;
}

std::string
ServerOrderConfigIds::getBandwidth()
{
	return bandwidth;
}

void
ServerOrderConfigIds::setBandwidth(std::string bandwidth)
{
	this->bandwidth = bandwidth;
}

std::string
ServerOrderConfigIds::getIps()
{
	return ips;
}

void
ServerOrderConfigIds::setIps(std::string ips)
{
	this->ips = ips;
}

std::string
ServerOrderConfigIds::getOs()
{
	return os;
}

void
ServerOrderConfigIds::setOs(std::string os)
{
	this->os = os;
}

int
ServerOrderConfigIds::getCp()
{
	return cp;
}

void
ServerOrderConfigIds::setCp(int cp)
{
	this->cp = cp;
}

std::string
ServerOrderConfigIds::getRaid()
{
	return raid;
}

void
ServerOrderConfigIds::setRaid(std::string raid)
{
	this->raid = raid;
}

std::string
ServerOrderConfigIds::getHd()
{
	return hd;
}

void
ServerOrderConfigIds::setHd(std::string hd)
{
	this->hd = hd;
}



