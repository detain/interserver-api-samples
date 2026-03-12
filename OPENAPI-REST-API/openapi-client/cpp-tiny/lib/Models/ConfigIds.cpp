

#include "ConfigIds.h"

using namespace Tiny;

ConfigIds::ConfigIds()
{
	memory = int(0);
	hd = int(0);
	bandwidth = int(0);
	ips = int(0);
	os = int(0);
	cp = int(0);
	raid = int(0);
}

ConfigIds::ConfigIds(std::string jsonString)
{
	this->fromJson(jsonString);
}

ConfigIds::~ConfigIds()
{

}

void
ConfigIds::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *memoryKey = "memory";

    if(object.has_key(memoryKey))
    {
        bourne::json value = object[memoryKey];



        jsonToValue(&memory, value, "int");


    }

    const char *hdKey = "hd";

    if(object.has_key(hdKey))
    {
        bourne::json value = object[hdKey];



        jsonToValue(&hd, value, "int");


    }

    const char *bandwidthKey = "bandwidth";

    if(object.has_key(bandwidthKey))
    {
        bourne::json value = object[bandwidthKey];



        jsonToValue(&bandwidth, value, "int");


    }

    const char *ipsKey = "ips";

    if(object.has_key(ipsKey))
    {
        bourne::json value = object[ipsKey];



        jsonToValue(&ips, value, "int");


    }

    const char *osKey = "os";

    if(object.has_key(osKey))
    {
        bourne::json value = object[osKey];



        jsonToValue(&os, value, "int");


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



        jsonToValue(&raid, value, "int");


    }


}

bourne::json
ConfigIds::toJson()
{
    bourne::json object = bourne::json::object();





    object["memory"] = getMemory();






    object["hd"] = getHd();






    object["bandwidth"] = getBandwidth();






    object["ips"] = getIps();






    object["os"] = getOs();






    object["cp"] = getCp();






    object["raid"] = getRaid();



    return object;

}

int
ConfigIds::getMemory()
{
	return memory;
}

void
ConfigIds::setMemory(int memory)
{
	this->memory = memory;
}

int
ConfigIds::getHd()
{
	return hd;
}

void
ConfigIds::setHd(int hd)
{
	this->hd = hd;
}

int
ConfigIds::getBandwidth()
{
	return bandwidth;
}

void
ConfigIds::setBandwidth(int bandwidth)
{
	this->bandwidth = bandwidth;
}

int
ConfigIds::getIps()
{
	return ips;
}

void
ConfigIds::setIps(int ips)
{
	this->ips = ips;
}

int
ConfigIds::getOs()
{
	return os;
}

void
ConfigIds::setOs(int os)
{
	this->os = os;
}

int
ConfigIds::getCp()
{
	return cp;
}

void
ConfigIds::setCp(int cp)
{
	this->cp = cp;
}

int
ConfigIds::getRaid()
{
	return raid;
}

void
ConfigIds::setRaid(int raid)
{
	this->raid = raid;
}



