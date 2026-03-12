

#include "ServerOrderFormValues.h"

using namespace Tiny;

ServerOrderFormValues::ServerOrderFormValues()
{
	memory = int(0);
	bandwidth = std::string();
	ips = std::string();
	os = std::string();
	cp = int(0);
	raid = std::string();
	hd = std::string();
}

ServerOrderFormValues::ServerOrderFormValues(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrderFormValues::~ServerOrderFormValues()
{

}

void
ServerOrderFormValues::fromJson(std::string jsonObj)
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
ServerOrderFormValues::toJson()
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
ServerOrderFormValues::getMemory()
{
	return memory;
}

void
ServerOrderFormValues::setMemory(int memory)
{
	this->memory = memory;
}

std::string
ServerOrderFormValues::getBandwidth()
{
	return bandwidth;
}

void
ServerOrderFormValues::setBandwidth(std::string bandwidth)
{
	this->bandwidth = bandwidth;
}

std::string
ServerOrderFormValues::getIps()
{
	return ips;
}

void
ServerOrderFormValues::setIps(std::string ips)
{
	this->ips = ips;
}

std::string
ServerOrderFormValues::getOs()
{
	return os;
}

void
ServerOrderFormValues::setOs(std::string os)
{
	this->os = os;
}

int
ServerOrderFormValues::getCp()
{
	return cp;
}

void
ServerOrderFormValues::setCp(int cp)
{
	this->cp = cp;
}

std::string
ServerOrderFormValues::getRaid()
{
	return raid;
}

void
ServerOrderFormValues::setRaid(std::string raid)
{
	this->raid = raid;
}

std::string
ServerOrderFormValues::getHd()
{
	return hd;
}

void
ServerOrderFormValues::setHd(std::string hd)
{
	this->hd = hd;
}



