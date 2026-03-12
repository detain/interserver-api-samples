

#include "BuyItNowRow.h"

using namespace Tiny;

BuyItNowRow::BuyItNowRow()
{
	server_id = std::string();
	cpu = std::list<BuyItNowRow_cpu_inner>();
	memory = std::string();
	disk = null<std::string>();
	bandwidth = std::string();
	ips = std::string();
	location = std::string();
	price = int(0);
}

BuyItNowRow::BuyItNowRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

BuyItNowRow::~BuyItNowRow()
{

}

void
BuyItNowRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *server_idKey = "server_id";

    if(object.has_key(server_idKey))
    {
        bourne::json value = object[server_idKey];



        jsonToValue(&server_id, value, "std::string");


    }

    const char *cpuKey = "cpu";

    if(object.has_key(cpuKey))
    {
        bourne::json value = object[cpuKey];


        std::list<BuyItNowRow_cpu_inner> cpu_list;
        BuyItNowRow_cpu_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            cpu_list.push_back(element);
        }
        cpu = cpu_list;


    }

    const char *memoryKey = "memory";

    if(object.has_key(memoryKey))
    {
        bourne::json value = object[memoryKey];



        jsonToValue(&memory, value, "std::string");


    }

    const char *diskKey = "disk";

    if(object.has_key(diskKey))
    {
        bourne::json value = object[diskKey];


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

    const char *locationKey = "location";

    if(object.has_key(locationKey))
    {
        bourne::json value = object[locationKey];



        jsonToValue(&location, value, "std::string");


    }

    const char *priceKey = "price";

    if(object.has_key(priceKey))
    {
        bourne::json value = object[priceKey];



        jsonToValue(&price, value, "int");


    }


}

bourne::json
BuyItNowRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["server_id"] = getServerId();





    std::list<BuyItNowRow_cpu_inner> cpu_list = getCpu();
    bourne::json cpu_arr = bourne::json::array();

    for(auto& var : cpu_list)
    {
        BuyItNowRow_cpu_inner obj = var;
        cpu_arr.append(obj.toJson());
    }
    object["cpu"] = cpu_arr;







    object["memory"] = getMemory();









    object["bandwidth"] = getBandwidth();






    object["ips"] = getIps();






    object["location"] = getLocation();






    object["price"] = getPrice();



    return object;

}

std::string
BuyItNowRow::getServerId()
{
	return server_id;
}

void
BuyItNowRow::setServerId(std::string server_id)
{
	this->server_id = server_id;
}

std::list<BuyItNowRow_cpu_inner>
BuyItNowRow::getCpu()
{
	return cpu;
}

void
BuyItNowRow::setCpu(std::list<BuyItNowRow_cpu_inner> cpu)
{
	this->cpu = cpu;
}

std::string
BuyItNowRow::getMemory()
{
	return memory;
}

void
BuyItNowRow::setMemory(std::string memory)
{
	this->memory = memory;
}

std::map<std::string, std::string>
BuyItNowRow::getDisk()
{
	return disk;
}

void
BuyItNowRow::setDisk(std::map<std::string, std::string> disk)
{
	this->disk = disk;
}

std::string
BuyItNowRow::getBandwidth()
{
	return bandwidth;
}

void
BuyItNowRow::setBandwidth(std::string bandwidth)
{
	this->bandwidth = bandwidth;
}

std::string
BuyItNowRow::getIps()
{
	return ips;
}

void
BuyItNowRow::setIps(std::string ips)
{
	this->ips = ips;
}

std::string
BuyItNowRow::getLocation()
{
	return location;
}

void
BuyItNowRow::setLocation(std::string location)
{
	this->location = location;
}

int
BuyItNowRow::getPrice()
{
	return price;
}

void
BuyItNowRow::setPrice(int price)
{
	this->price = price;
}



