

#include "AssetServer.h"

using namespace Tiny;

AssetServer::AssetServer()
{
	id = int(0);
	region = std::string();
	price = std::string();
	cPU = std::list<AssetServer_CPU_inner>();
	memory = std::list<AssetServer_CPU_inner>();
	bandwidth = std::list<AssetServer_CPU_inner>();
	iPs = std::list<AssetServer_CPU_inner>();
	hD = null<std::string>();
}

AssetServer::AssetServer(std::string jsonString)
{
	this->fromJson(jsonString);
}

AssetServer::~AssetServer()
{

}

void
AssetServer::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *idKey = "id";

    if(object.has_key(idKey))
    {
        bourne::json value = object[idKey];



        jsonToValue(&id, value, "int");


    }

    const char *regionKey = "Region";

    if(object.has_key(regionKey))
    {
        bourne::json value = object[regionKey];



        jsonToValue(&region, value, "std::string");


    }

    const char *priceKey = "price";

    if(object.has_key(priceKey))
    {
        bourne::json value = object[priceKey];



        jsonToValue(&price, value, "std::string");


    }

    const char *cPUKey = "CPU";

    if(object.has_key(cPUKey))
    {
        bourne::json value = object[cPUKey];


        std::list<AssetServer_CPU_inner> cPU_list;
        AssetServer_CPU_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            cPU_list.push_back(element);
        }
        cPU = cPU_list;


    }

    const char *memoryKey = "Memory";

    if(object.has_key(memoryKey))
    {
        bourne::json value = object[memoryKey];


        std::list<AssetServer_CPU_inner> memory_list;
        AssetServer_CPU_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            memory_list.push_back(element);
        }
        memory = memory_list;


    }

    const char *bandwidthKey = "Bandwidth";

    if(object.has_key(bandwidthKey))
    {
        bourne::json value = object[bandwidthKey];


        std::list<AssetServer_CPU_inner> bandwidth_list;
        AssetServer_CPU_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            bandwidth_list.push_back(element);
        }
        bandwidth = bandwidth_list;


    }

    const char *iPsKey = "IPs";

    if(object.has_key(iPsKey))
    {
        bourne::json value = object[iPsKey];


        std::list<AssetServer_CPU_inner> iPs_list;
        AssetServer_CPU_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            iPs_list.push_back(element);
        }
        iPs = iPs_list;


    }

    const char *hDKey = "HD";

    if(object.has_key(hDKey))
    {
        bourne::json value = object[hDKey];


    }


}

bourne::json
AssetServer::toJson()
{
    bourne::json object = bourne::json::object();





    object["id"] = getId();






    object["region"] = getRegion();






    object["price"] = getPrice();





    std::list<AssetServer_CPU_inner> cPU_list = getCPU();
    bourne::json cPU_arr = bourne::json::array();

    for(auto& var : cPU_list)
    {
        AssetServer_CPU_inner obj = var;
        cPU_arr.append(obj.toJson());
    }
    object["cPU"] = cPU_arr;






    std::list<AssetServer_CPU_inner> memory_list = getMemory();
    bourne::json memory_arr = bourne::json::array();

    for(auto& var : memory_list)
    {
        AssetServer_CPU_inner obj = var;
        memory_arr.append(obj.toJson());
    }
    object["memory"] = memory_arr;






    std::list<AssetServer_CPU_inner> bandwidth_list = getBandwidth();
    bourne::json bandwidth_arr = bourne::json::array();

    for(auto& var : bandwidth_list)
    {
        AssetServer_CPU_inner obj = var;
        bandwidth_arr.append(obj.toJson());
    }
    object["bandwidth"] = bandwidth_arr;






    std::list<AssetServer_CPU_inner> iPs_list = getIPs();
    bourne::json iPs_arr = bourne::json::array();

    for(auto& var : iPs_list)
    {
        AssetServer_CPU_inner obj = var;
        iPs_arr.append(obj.toJson());
    }
    object["iPs"] = iPs_arr;







    return object;

}

int
AssetServer::getId()
{
	return id;
}

void
AssetServer::setId(int id)
{
	this->id = id;
}

std::string
AssetServer::getRegion()
{
	return region;
}

void
AssetServer::setRegion(std::string region)
{
	this->region = region;
}

std::string
AssetServer::getPrice()
{
	return price;
}

void
AssetServer::setPrice(std::string price)
{
	this->price = price;
}

std::list<AssetServer_CPU_inner>
AssetServer::getCPU()
{
	return cPU;
}

void
AssetServer::setCPU(std::list<AssetServer_CPU_inner> cPU)
{
	this->cPU = cPU;
}

std::list<AssetServer_CPU_inner>
AssetServer::getMemory()
{
	return memory;
}

void
AssetServer::setMemory(std::list<AssetServer_CPU_inner> memory)
{
	this->memory = memory;
}

std::list<AssetServer_CPU_inner>
AssetServer::getBandwidth()
{
	return bandwidth;
}

void
AssetServer::setBandwidth(std::list<AssetServer_CPU_inner> bandwidth)
{
	this->bandwidth = bandwidth;
}

std::list<AssetServer_CPU_inner>
AssetServer::getIPs()
{
	return iPs;
}

void
AssetServer::setIPs(std::list<AssetServer_CPU_inner> iPs)
{
	this->iPs = iPs;
}

std::map<std::string, std::string>
AssetServer::getHD()
{
	return hD;
}

void
AssetServer::setHD(std::map<std::string, std::string> hD)
{
	this->hD = hD;
}



