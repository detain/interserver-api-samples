

#include "FormValues.h"

using namespace Tiny;

FormValues::FormValues()
{
	memory = int(0);
	bandwidth = int(0);
	ips = int(0);
	os = int(0);
	cp = int(0);
	raid = int(0);
	hd = int(0);
	region = int(0);
}

FormValues::FormValues(std::string jsonString)
{
	this->fromJson(jsonString);
}

FormValues::~FormValues()
{

}

void
FormValues::fromJson(std::string jsonObj)
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

    const char *hdKey = "hd";

    if(object.has_key(hdKey))
    {
        bourne::json value = object[hdKey];



        jsonToValue(&hd, value, "int");


    }

    const char *regionKey = "region";

    if(object.has_key(regionKey))
    {
        bourne::json value = object[regionKey];



        jsonToValue(&region, value, "int");


    }


}

bourne::json
FormValues::toJson()
{
    bourne::json object = bourne::json::object();





    object["memory"] = getMemory();






    object["bandwidth"] = getBandwidth();






    object["ips"] = getIps();






    object["os"] = getOs();






    object["cp"] = getCp();






    object["raid"] = getRaid();






    object["hd"] = getHd();






    object["region"] = getRegion();



    return object;

}

int
FormValues::getMemory()
{
	return memory;
}

void
FormValues::setMemory(int memory)
{
	this->memory = memory;
}

int
FormValues::getBandwidth()
{
	return bandwidth;
}

void
FormValues::setBandwidth(int bandwidth)
{
	this->bandwidth = bandwidth;
}

int
FormValues::getIps()
{
	return ips;
}

void
FormValues::setIps(int ips)
{
	this->ips = ips;
}

int
FormValues::getOs()
{
	return os;
}

void
FormValues::setOs(int os)
{
	this->os = os;
}

int
FormValues::getCp()
{
	return cp;
}

void
FormValues::setCp(int cp)
{
	this->cp = cp;
}

int
FormValues::getRaid()
{
	return raid;
}

void
FormValues::setRaid(int raid)
{
	this->raid = raid;
}

int
FormValues::getHd()
{
	return hd;
}

void
FormValues::setHd(int hd)
{
	this->hd = hd;
}

int
FormValues::getRegion()
{
	return region;
}

void
FormValues::setRegion(int region)
{
	this->region = region;
}



