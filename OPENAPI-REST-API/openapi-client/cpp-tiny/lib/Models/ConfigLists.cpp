

#include "ConfigLists.h"

using namespace Tiny;

ConfigLists::ConfigLists()
{
	cpu_li = null<Cpu>();
	memory_li = null<std::map>();
	hd_li = null<std::map>();
	bandwidth_li = null<Bandwidth>();
	ips_li = null<IpBlock>();
	os_li = null<OperatingSystem>();
	cp_li = null<ControlPanel>();
	raid_li = std::list<RaidOption>();
}

ConfigLists::ConfigLists(std::string jsonString)
{
	this->fromJson(jsonString);
}

ConfigLists::~ConfigLists()
{

}

void
ConfigLists::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *cpu_liKey = "cpu_li";

    if(object.has_key(cpu_liKey))
    {
        bourne::json value = object[cpu_liKey];


    }

    const char *memory_liKey = "memory_li";

    if(object.has_key(memory_liKey))
    {
        bourne::json value = object[memory_liKey];


    }

    const char *hd_liKey = "hd_li";

    if(object.has_key(hd_liKey))
    {
        bourne::json value = object[hd_liKey];


    }

    const char *bandwidth_liKey = "bandwidth_li";

    if(object.has_key(bandwidth_liKey))
    {
        bourne::json value = object[bandwidth_liKey];


    }

    const char *ips_liKey = "ips_li";

    if(object.has_key(ips_liKey))
    {
        bourne::json value = object[ips_liKey];


    }

    const char *os_liKey = "os_li";

    if(object.has_key(os_liKey))
    {
        bourne::json value = object[os_liKey];


    }

    const char *cp_liKey = "cp_li";

    if(object.has_key(cp_liKey))
    {
        bourne::json value = object[cp_liKey];


    }

    const char *raid_liKey = "raid_li";

    if(object.has_key(raid_liKey))
    {
        bourne::json value = object[raid_liKey];


        std::list<RaidOption> raid_li_list;
        RaidOption element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            raid_li_list.push_back(element);
        }
        raid_li = raid_li_list;


    }


}

bourne::json
ConfigLists::toJson()
{
    bourne::json object = bourne::json::object();

























    std::list<RaidOption> raid_li_list = getRaidLi();
    bourne::json raid_li_arr = bourne::json::array();

    for(auto& var : raid_li_list)
    {
        RaidOption obj = var;
        raid_li_arr.append(obj.toJson());
    }
    object["raid_li"] = raid_li_arr;




    return object;

}

std::map<std::string, Cpu>
ConfigLists::getCpuLi()
{
	return cpu_li;
}

void
ConfigLists::setCpuLi(std::map<std::string, Cpu> cpu_li)
{
	this->cpu_li = cpu_li;
}

std::map<std::string, std::map<std::string, MemoryOption>>
ConfigLists::getMemoryLi()
{
	return memory_li;
}

void
ConfigLists::setMemoryLi(std::map<std::string, std::map<std::string, MemoryOption>> memory_li)
{
	this->memory_li = memory_li;
}

std::map<std::string, std::map<std::string, HardDrive>>
ConfigLists::getHdLi()
{
	return hd_li;
}

void
ConfigLists::setHdLi(std::map<std::string, std::map<std::string, HardDrive>> hd_li)
{
	this->hd_li = hd_li;
}

std::map<std::string, Bandwidth>
ConfigLists::getBandwidthLi()
{
	return bandwidth_li;
}

void
ConfigLists::setBandwidthLi(std::map<std::string, Bandwidth> bandwidth_li)
{
	this->bandwidth_li = bandwidth_li;
}

std::map<std::string, IpBlock>
ConfigLists::getIpsLi()
{
	return ips_li;
}

void
ConfigLists::setIpsLi(std::map<std::string, IpBlock> ips_li)
{
	this->ips_li = ips_li;
}

std::map<std::string, OperatingSystem>
ConfigLists::getOsLi()
{
	return os_li;
}

void
ConfigLists::setOsLi(std::map<std::string, OperatingSystem> os_li)
{
	this->os_li = os_li;
}

std::map<std::string, ControlPanel>
ConfigLists::getCpLi()
{
	return cp_li;
}

void
ConfigLists::setCpLi(std::map<std::string, ControlPanel> cp_li)
{
	this->cp_li = cp_li;
}

std::list<RaidOption>
ConfigLists::getRaidLi()
{
	return raid_li;
}

void
ConfigLists::setRaidLi(std::list<RaidOption> raid_li)
{
	this->raid_li = raid_li;
}



