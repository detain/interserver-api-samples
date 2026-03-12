

#include "ServerOrder.h"

using namespace Tiny;

ServerOrder::ServerOrder()
{
	form_values = ServerOrderFormValues();
	config_ids = ServerOrderConfigIds();
	cpu = int(0);
	field_label = ServerOrderFieldLabels();
	cpu_li = ServerOrder_cpu_li();
	memory_li = ServerOrder_memory_li();
	bandwidth_li = ServerOrder_bandwidth_li();
	ips_li = ServerOrder_ips_li();
	os_li = ServerOrder_os_li();
	cp_li = ServerOrder_cp_li();
	raid_li = std::list<ServerOrderRAID>();
}

ServerOrder::ServerOrder(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerOrder::~ServerOrder()
{

}

void
ServerOrder::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *form_valuesKey = "form_values";

    if(object.has_key(form_valuesKey))
    {
        bourne::json value = object[form_valuesKey];




        ServerOrderFormValues* obj = &form_values;
		obj->fromJson(value.dump());

    }

    const char *config_idsKey = "config_ids";

    if(object.has_key(config_idsKey))
    {
        bourne::json value = object[config_idsKey];




        ServerOrderConfigIds* obj = &config_ids;
		obj->fromJson(value.dump());

    }

    const char *cpuKey = "cpu";

    if(object.has_key(cpuKey))
    {
        bourne::json value = object[cpuKey];



        jsonToValue(&cpu, value, "int");


    }

    const char *field_labelKey = "field_label";

    if(object.has_key(field_labelKey))
    {
        bourne::json value = object[field_labelKey];




        ServerOrderFieldLabels* obj = &field_label;
		obj->fromJson(value.dump());

    }

    const char *cpu_liKey = "cpu_li";

    if(object.has_key(cpu_liKey))
    {
        bourne::json value = object[cpu_liKey];




        ServerOrder_cpu_li* obj = &cpu_li;
		obj->fromJson(value.dump());

    }

    const char *memory_liKey = "memory_li";

    if(object.has_key(memory_liKey))
    {
        bourne::json value = object[memory_liKey];




        ServerOrder_memory_li* obj = &memory_li;
		obj->fromJson(value.dump());

    }

    const char *bandwidth_liKey = "bandwidth_li";

    if(object.has_key(bandwidth_liKey))
    {
        bourne::json value = object[bandwidth_liKey];




        ServerOrder_bandwidth_li* obj = &bandwidth_li;
		obj->fromJson(value.dump());

    }

    const char *ips_liKey = "ips_li";

    if(object.has_key(ips_liKey))
    {
        bourne::json value = object[ips_liKey];




        ServerOrder_ips_li* obj = &ips_li;
		obj->fromJson(value.dump());

    }

    const char *os_liKey = "os_li";

    if(object.has_key(os_liKey))
    {
        bourne::json value = object[os_liKey];




        ServerOrder_os_li* obj = &os_li;
		obj->fromJson(value.dump());

    }

    const char *cp_liKey = "cp_li";

    if(object.has_key(cp_liKey))
    {
        bourne::json value = object[cp_liKey];




        ServerOrder_cp_li* obj = &cp_li;
		obj->fromJson(value.dump());

    }

    const char *raid_liKey = "raid_li";

    if(object.has_key(raid_liKey))
    {
        bourne::json value = object[raid_liKey];


        std::list<ServerOrderRAID> raid_li_list;
        ServerOrderRAID element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            raid_li_list.push_back(element);
        }
        raid_li = raid_li_list;


    }


}

bourne::json
ServerOrder::toJson()
{
    bourne::json object = bourne::json::object();






	object["form_values"] = getFormValues().toJson();






	object["config_ids"] = getConfigIds().toJson();





    object["cpu"] = getCpu();







	object["field_label"] = getFieldLabel().toJson();






	object["cpu_li"] = getCpuLi().toJson();






	object["memory_li"] = getMemoryLi().toJson();






	object["bandwidth_li"] = getBandwidthLi().toJson();






	object["ips_li"] = getIpsLi().toJson();






	object["os_li"] = getOsLi().toJson();






	object["cp_li"] = getCpLi().toJson();




    std::list<ServerOrderRAID> raid_li_list = getRaidLi();
    bourne::json raid_li_arr = bourne::json::array();

    for(auto& var : raid_li_list)
    {
        ServerOrderRAID obj = var;
        raid_li_arr.append(obj.toJson());
    }
    object["raid_li"] = raid_li_arr;




    return object;

}

ServerOrderFormValues
ServerOrder::getFormValues()
{
	return form_values;
}

void
ServerOrder::setFormValues(ServerOrderFormValues form_values)
{
	this->form_values = form_values;
}

ServerOrderConfigIds
ServerOrder::getConfigIds()
{
	return config_ids;
}

void
ServerOrder::setConfigIds(ServerOrderConfigIds config_ids)
{
	this->config_ids = config_ids;
}

int
ServerOrder::getCpu()
{
	return cpu;
}

void
ServerOrder::setCpu(int cpu)
{
	this->cpu = cpu;
}

ServerOrderFieldLabels
ServerOrder::getFieldLabel()
{
	return field_label;
}

void
ServerOrder::setFieldLabel(ServerOrderFieldLabels field_label)
{
	this->field_label = field_label;
}

ServerOrder_cpu_li
ServerOrder::getCpuLi()
{
	return cpu_li;
}

void
ServerOrder::setCpuLi(ServerOrder_cpu_li cpu_li)
{
	this->cpu_li = cpu_li;
}

ServerOrder_memory_li
ServerOrder::getMemoryLi()
{
	return memory_li;
}

void
ServerOrder::setMemoryLi(ServerOrder_memory_li memory_li)
{
	this->memory_li = memory_li;
}

ServerOrder_bandwidth_li
ServerOrder::getBandwidthLi()
{
	return bandwidth_li;
}

void
ServerOrder::setBandwidthLi(ServerOrder_bandwidth_li bandwidth_li)
{
	this->bandwidth_li = bandwidth_li;
}

ServerOrder_ips_li
ServerOrder::getIpsLi()
{
	return ips_li;
}

void
ServerOrder::setIpsLi(ServerOrder_ips_li ips_li)
{
	this->ips_li = ips_li;
}

ServerOrder_os_li
ServerOrder::getOsLi()
{
	return os_li;
}

void
ServerOrder::setOsLi(ServerOrder_os_li os_li)
{
	this->os_li = os_li;
}

ServerOrder_cp_li
ServerOrder::getCpLi()
{
	return cp_li;
}

void
ServerOrder::setCpLi(ServerOrder_cp_li cp_li)
{
	this->cp_li = cp_li;
}

std::list<ServerOrderRAID>
ServerOrder::getRaidLi()
{
	return raid_li;
}

void
ServerOrder::setRaidLi(std::list<ServerOrderRAID> raid_li)
{
	this->raid_li = raid_li;
}



