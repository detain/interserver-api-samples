

#include "QuickserverOrderServerDetails381.h"

using namespace Tiny;

QuickserverOrderServerDetails381::QuickserverOrderServerDetails381()
{
	cpu = std::string();
	ram = std::string();
	hd = std::string();
	cores = int(0);
	cost = std::string();
}

QuickserverOrderServerDetails381::QuickserverOrderServerDetails381(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverOrderServerDetails381::~QuickserverOrderServerDetails381()
{

}

void
QuickserverOrderServerDetails381::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *cpuKey = "cpu";

    if(object.has_key(cpuKey))
    {
        bourne::json value = object[cpuKey];



        jsonToValue(&cpu, value, "std::string");


    }

    const char *ramKey = "ram";

    if(object.has_key(ramKey))
    {
        bourne::json value = object[ramKey];



        jsonToValue(&ram, value, "std::string");


    }

    const char *hdKey = "hd";

    if(object.has_key(hdKey))
    {
        bourne::json value = object[hdKey];



        jsonToValue(&hd, value, "std::string");


    }

    const char *coresKey = "cores";

    if(object.has_key(coresKey))
    {
        bourne::json value = object[coresKey];



        jsonToValue(&cores, value, "int");


    }

    const char *costKey = "cost";

    if(object.has_key(costKey))
    {
        bourne::json value = object[costKey];



        jsonToValue(&cost, value, "std::string");


    }


}

bourne::json
QuickserverOrderServerDetails381::toJson()
{
    bourne::json object = bourne::json::object();





    object["cpu"] = getCpu();






    object["ram"] = getRam();






    object["hd"] = getHd();






    object["cores"] = getCores();






    object["cost"] = getCost();



    return object;

}

std::string
QuickserverOrderServerDetails381::getCpu()
{
	return cpu;
}

void
QuickserverOrderServerDetails381::setCpu(std::string cpu)
{
	this->cpu = cpu;
}

std::string
QuickserverOrderServerDetails381::getRam()
{
	return ram;
}

void
QuickserverOrderServerDetails381::setRam(std::string ram)
{
	this->ram = ram;
}

std::string
QuickserverOrderServerDetails381::getHd()
{
	return hd;
}

void
QuickserverOrderServerDetails381::setHd(std::string hd)
{
	this->hd = hd;
}

int
QuickserverOrderServerDetails381::getCores()
{
	return cores;
}

void
QuickserverOrderServerDetails381::setCores(int cores)
{
	this->cores = cores;
}

std::string
QuickserverOrderServerDetails381::getCost()
{
	return cost;
}

void
QuickserverOrderServerDetails381::setCost(std::string cost)
{
	this->cost = cost;
}



