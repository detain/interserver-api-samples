

#include "QuickserverServiceMaster.h"

using namespace Tiny;

QuickserverServiceMaster::QuickserverServiceMaster()
{
	qs_id = std::string();
	qs_name = std::string();
	qs_ip = std::string();
	qs_type = std::string();
	qs_hdsize = std::string();
	qs_hdfree = std::string();
	qs_bits = std::string();
	qs_load = std::string();
	qs_ram = std::string();
	qs_cpu_model = std::string();
	qs_cpu_mhz = std::string();
	qs_location = std::string();
	qs_available = std::string();
	qs_cost = std::string();
	qs_last_update = std::string();
	qs_cores = std::string();
	qs_iowait = std::string();
	qs_raid_status = std::string();
	qs_drive_type = std::string();
	qs_order = std::string();
	qs_raid_building = std::string();
	qs_kernel = std::string();
	qs_ioping = std::string();
	qs_speed = std::string();
	qs_distro = std::string();
	qs_distro_version = std::string();
	qs_bytes_sec_in = std::string();
	qs_bytes_sec_out = std::string();
	qs_packets_sec_in = std::string();
	qs_packets_sec_out = std::string();
	qs_last_install_time = null;
	qs_partitions = null;
	qs_cpu_flags = std::string();
}

QuickserverServiceMaster::QuickserverServiceMaster(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverServiceMaster::~QuickserverServiceMaster()
{

}

void
QuickserverServiceMaster::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *qs_idKey = "qs_id";

    if(object.has_key(qs_idKey))
    {
        bourne::json value = object[qs_idKey];



        jsonToValue(&qs_id, value, "std::string");


    }

    const char *qs_nameKey = "qs_name";

    if(object.has_key(qs_nameKey))
    {
        bourne::json value = object[qs_nameKey];



        jsonToValue(&qs_name, value, "std::string");


    }

    const char *qs_ipKey = "qs_ip";

    if(object.has_key(qs_ipKey))
    {
        bourne::json value = object[qs_ipKey];



        jsonToValue(&qs_ip, value, "std::string");


    }

    const char *qs_typeKey = "qs_type";

    if(object.has_key(qs_typeKey))
    {
        bourne::json value = object[qs_typeKey];



        jsonToValue(&qs_type, value, "std::string");


    }

    const char *qs_hdsizeKey = "qs_hdsize";

    if(object.has_key(qs_hdsizeKey))
    {
        bourne::json value = object[qs_hdsizeKey];



        jsonToValue(&qs_hdsize, value, "std::string");


    }

    const char *qs_hdfreeKey = "qs_hdfree";

    if(object.has_key(qs_hdfreeKey))
    {
        bourne::json value = object[qs_hdfreeKey];



        jsonToValue(&qs_hdfree, value, "std::string");


    }

    const char *qs_bitsKey = "qs_bits";

    if(object.has_key(qs_bitsKey))
    {
        bourne::json value = object[qs_bitsKey];



        jsonToValue(&qs_bits, value, "std::string");


    }

    const char *qs_loadKey = "qs_load";

    if(object.has_key(qs_loadKey))
    {
        bourne::json value = object[qs_loadKey];



        jsonToValue(&qs_load, value, "std::string");


    }

    const char *qs_ramKey = "qs_ram";

    if(object.has_key(qs_ramKey))
    {
        bourne::json value = object[qs_ramKey];



        jsonToValue(&qs_ram, value, "std::string");


    }

    const char *qs_cpu_modelKey = "qs_cpu_model";

    if(object.has_key(qs_cpu_modelKey))
    {
        bourne::json value = object[qs_cpu_modelKey];



        jsonToValue(&qs_cpu_model, value, "std::string");


    }

    const char *qs_cpu_mhzKey = "qs_cpu_mhz";

    if(object.has_key(qs_cpu_mhzKey))
    {
        bourne::json value = object[qs_cpu_mhzKey];



        jsonToValue(&qs_cpu_mhz, value, "std::string");


    }

    const char *qs_locationKey = "qs_location";

    if(object.has_key(qs_locationKey))
    {
        bourne::json value = object[qs_locationKey];



        jsonToValue(&qs_location, value, "std::string");


    }

    const char *qs_availableKey = "qs_available";

    if(object.has_key(qs_availableKey))
    {
        bourne::json value = object[qs_availableKey];



        jsonToValue(&qs_available, value, "std::string");


    }

    const char *qs_costKey = "qs_cost";

    if(object.has_key(qs_costKey))
    {
        bourne::json value = object[qs_costKey];



        jsonToValue(&qs_cost, value, "std::string");


    }

    const char *qs_last_updateKey = "qs_last_update";

    if(object.has_key(qs_last_updateKey))
    {
        bourne::json value = object[qs_last_updateKey];



        jsonToValue(&qs_last_update, value, "std::string");


    }

    const char *qs_coresKey = "qs_cores";

    if(object.has_key(qs_coresKey))
    {
        bourne::json value = object[qs_coresKey];



        jsonToValue(&qs_cores, value, "std::string");


    }

    const char *qs_iowaitKey = "qs_iowait";

    if(object.has_key(qs_iowaitKey))
    {
        bourne::json value = object[qs_iowaitKey];



        jsonToValue(&qs_iowait, value, "std::string");


    }

    const char *qs_raid_statusKey = "qs_raid_status";

    if(object.has_key(qs_raid_statusKey))
    {
        bourne::json value = object[qs_raid_statusKey];



        jsonToValue(&qs_raid_status, value, "std::string");


    }

    const char *qs_drive_typeKey = "qs_drive_type";

    if(object.has_key(qs_drive_typeKey))
    {
        bourne::json value = object[qs_drive_typeKey];



        jsonToValue(&qs_drive_type, value, "std::string");


    }

    const char *qs_orderKey = "qs_order";

    if(object.has_key(qs_orderKey))
    {
        bourne::json value = object[qs_orderKey];



        jsonToValue(&qs_order, value, "std::string");


    }

    const char *qs_raid_buildingKey = "qs_raid_building";

    if(object.has_key(qs_raid_buildingKey))
    {
        bourne::json value = object[qs_raid_buildingKey];



        jsonToValue(&qs_raid_building, value, "std::string");


    }

    const char *qs_kernelKey = "qs_kernel";

    if(object.has_key(qs_kernelKey))
    {
        bourne::json value = object[qs_kernelKey];



        jsonToValue(&qs_kernel, value, "std::string");


    }

    const char *qs_iopingKey = "qs_ioping";

    if(object.has_key(qs_iopingKey))
    {
        bourne::json value = object[qs_iopingKey];



        jsonToValue(&qs_ioping, value, "std::string");


    }

    const char *qs_speedKey = "qs_speed";

    if(object.has_key(qs_speedKey))
    {
        bourne::json value = object[qs_speedKey];



        jsonToValue(&qs_speed, value, "std::string");


    }

    const char *qs_distroKey = "qs_distro";

    if(object.has_key(qs_distroKey))
    {
        bourne::json value = object[qs_distroKey];



        jsonToValue(&qs_distro, value, "std::string");


    }

    const char *qs_distro_versionKey = "qs_distro_version";

    if(object.has_key(qs_distro_versionKey))
    {
        bourne::json value = object[qs_distro_versionKey];



        jsonToValue(&qs_distro_version, value, "std::string");


    }

    const char *qs_bytes_sec_inKey = "qs_bytes_sec_in";

    if(object.has_key(qs_bytes_sec_inKey))
    {
        bourne::json value = object[qs_bytes_sec_inKey];



        jsonToValue(&qs_bytes_sec_in, value, "std::string");


    }

    const char *qs_bytes_sec_outKey = "qs_bytes_sec_out";

    if(object.has_key(qs_bytes_sec_outKey))
    {
        bourne::json value = object[qs_bytes_sec_outKey];



        jsonToValue(&qs_bytes_sec_out, value, "std::string");


    }

    const char *qs_packets_sec_inKey = "qs_packets_sec_in";

    if(object.has_key(qs_packets_sec_inKey))
    {
        bourne::json value = object[qs_packets_sec_inKey];



        jsonToValue(&qs_packets_sec_in, value, "std::string");


    }

    const char *qs_packets_sec_outKey = "qs_packets_sec_out";

    if(object.has_key(qs_packets_sec_outKey))
    {
        bourne::json value = object[qs_packets_sec_outKey];



        jsonToValue(&qs_packets_sec_out, value, "std::string");


    }

    const char *qs_last_install_timeKey = "qs_last_install_time";

    if(object.has_key(qs_last_install_timeKey))
    {
        bourne::json value = object[qs_last_install_timeKey];




        AnyType* obj = &qs_last_install_time;
		obj->fromJson(value.dump());

    }

    const char *qs_partitionsKey = "qs_partitions";

    if(object.has_key(qs_partitionsKey))
    {
        bourne::json value = object[qs_partitionsKey];




        AnyType* obj = &qs_partitions;
		obj->fromJson(value.dump());

    }

    const char *qs_cpu_flagsKey = "qs_cpu_flags";

    if(object.has_key(qs_cpu_flagsKey))
    {
        bourne::json value = object[qs_cpu_flagsKey];



        jsonToValue(&qs_cpu_flags, value, "std::string");


    }


}

bourne::json
QuickserverServiceMaster::toJson()
{
    bourne::json object = bourne::json::object();





    object["qs_id"] = getQsId();






    object["qs_name"] = getQsName();






    object["qs_ip"] = getQsIp();






    object["qs_type"] = getQsType();






    object["qs_hdsize"] = getQsHdsize();






    object["qs_hdfree"] = getQsHdfree();






    object["qs_bits"] = getQsBits();






    object["qs_load"] = getQsLoad();






    object["qs_ram"] = getQsRam();






    object["qs_cpu_model"] = getQsCpuModel();






    object["qs_cpu_mhz"] = getQsCpuMhz();






    object["qs_location"] = getQsLocation();






    object["qs_available"] = getQsAvailable();






    object["qs_cost"] = getQsCost();






    object["qs_last_update"] = getQsLastUpdate();






    object["qs_cores"] = getQsCores();






    object["qs_iowait"] = getQsIowait();






    object["qs_raid_status"] = getQsRaidStatus();






    object["qs_drive_type"] = getQsDriveType();






    object["qs_order"] = getQsOrder();






    object["qs_raid_building"] = getQsRaidBuilding();






    object["qs_kernel"] = getQsKernel();






    object["qs_ioping"] = getQsIoping();






    object["qs_speed"] = getQsSpeed();






    object["qs_distro"] = getQsDistro();






    object["qs_distro_version"] = getQsDistroVersion();






    object["qs_bytes_sec_in"] = getQsBytesSecIn();






    object["qs_bytes_sec_out"] = getQsBytesSecOut();






    object["qs_packets_sec_in"] = getQsPacketsSecIn();






    object["qs_packets_sec_out"] = getQsPacketsSecOut();







	object["qs_last_install_time"] = getQsLastInstallTime().toJson();






	object["qs_partitions"] = getQsPartitions().toJson();





    object["qs_cpu_flags"] = getQsCpuFlags();



    return object;

}

std::string
QuickserverServiceMaster::getQsId()
{
	return qs_id;
}

void
QuickserverServiceMaster::setQsId(std::string qs_id)
{
	this->qs_id = qs_id;
}

std::string
QuickserverServiceMaster::getQsName()
{
	return qs_name;
}

void
QuickserverServiceMaster::setQsName(std::string qs_name)
{
	this->qs_name = qs_name;
}

std::string
QuickserverServiceMaster::getQsIp()
{
	return qs_ip;
}

void
QuickserverServiceMaster::setQsIp(std::string qs_ip)
{
	this->qs_ip = qs_ip;
}

std::string
QuickserverServiceMaster::getQsType()
{
	return qs_type;
}

void
QuickserverServiceMaster::setQsType(std::string qs_type)
{
	this->qs_type = qs_type;
}

std::string
QuickserverServiceMaster::getQsHdsize()
{
	return qs_hdsize;
}

void
QuickserverServiceMaster::setQsHdsize(std::string qs_hdsize)
{
	this->qs_hdsize = qs_hdsize;
}

std::string
QuickserverServiceMaster::getQsHdfree()
{
	return qs_hdfree;
}

void
QuickserverServiceMaster::setQsHdfree(std::string qs_hdfree)
{
	this->qs_hdfree = qs_hdfree;
}

std::string
QuickserverServiceMaster::getQsBits()
{
	return qs_bits;
}

void
QuickserverServiceMaster::setQsBits(std::string qs_bits)
{
	this->qs_bits = qs_bits;
}

std::string
QuickserverServiceMaster::getQsLoad()
{
	return qs_load;
}

void
QuickserverServiceMaster::setQsLoad(std::string qs_load)
{
	this->qs_load = qs_load;
}

std::string
QuickserverServiceMaster::getQsRam()
{
	return qs_ram;
}

void
QuickserverServiceMaster::setQsRam(std::string qs_ram)
{
	this->qs_ram = qs_ram;
}

std::string
QuickserverServiceMaster::getQsCpuModel()
{
	return qs_cpu_model;
}

void
QuickserverServiceMaster::setQsCpuModel(std::string qs_cpu_model)
{
	this->qs_cpu_model = qs_cpu_model;
}

std::string
QuickserverServiceMaster::getQsCpuMhz()
{
	return qs_cpu_mhz;
}

void
QuickserverServiceMaster::setQsCpuMhz(std::string qs_cpu_mhz)
{
	this->qs_cpu_mhz = qs_cpu_mhz;
}

std::string
QuickserverServiceMaster::getQsLocation()
{
	return qs_location;
}

void
QuickserverServiceMaster::setQsLocation(std::string qs_location)
{
	this->qs_location = qs_location;
}

std::string
QuickserverServiceMaster::getQsAvailable()
{
	return qs_available;
}

void
QuickserverServiceMaster::setQsAvailable(std::string qs_available)
{
	this->qs_available = qs_available;
}

std::string
QuickserverServiceMaster::getQsCost()
{
	return qs_cost;
}

void
QuickserverServiceMaster::setQsCost(std::string qs_cost)
{
	this->qs_cost = qs_cost;
}

std::string
QuickserverServiceMaster::getQsLastUpdate()
{
	return qs_last_update;
}

void
QuickserverServiceMaster::setQsLastUpdate(std::string qs_last_update)
{
	this->qs_last_update = qs_last_update;
}

std::string
QuickserverServiceMaster::getQsCores()
{
	return qs_cores;
}

void
QuickserverServiceMaster::setQsCores(std::string qs_cores)
{
	this->qs_cores = qs_cores;
}

std::string
QuickserverServiceMaster::getQsIowait()
{
	return qs_iowait;
}

void
QuickserverServiceMaster::setQsIowait(std::string qs_iowait)
{
	this->qs_iowait = qs_iowait;
}

std::string
QuickserverServiceMaster::getQsRaidStatus()
{
	return qs_raid_status;
}

void
QuickserverServiceMaster::setQsRaidStatus(std::string qs_raid_status)
{
	this->qs_raid_status = qs_raid_status;
}

std::string
QuickserverServiceMaster::getQsDriveType()
{
	return qs_drive_type;
}

void
QuickserverServiceMaster::setQsDriveType(std::string qs_drive_type)
{
	this->qs_drive_type = qs_drive_type;
}

std::string
QuickserverServiceMaster::getQsOrder()
{
	return qs_order;
}

void
QuickserverServiceMaster::setQsOrder(std::string qs_order)
{
	this->qs_order = qs_order;
}

std::string
QuickserverServiceMaster::getQsRaidBuilding()
{
	return qs_raid_building;
}

void
QuickserverServiceMaster::setQsRaidBuilding(std::string qs_raid_building)
{
	this->qs_raid_building = qs_raid_building;
}

std::string
QuickserverServiceMaster::getQsKernel()
{
	return qs_kernel;
}

void
QuickserverServiceMaster::setQsKernel(std::string qs_kernel)
{
	this->qs_kernel = qs_kernel;
}

std::string
QuickserverServiceMaster::getQsIoping()
{
	return qs_ioping;
}

void
QuickserverServiceMaster::setQsIoping(std::string qs_ioping)
{
	this->qs_ioping = qs_ioping;
}

std::string
QuickserverServiceMaster::getQsSpeed()
{
	return qs_speed;
}

void
QuickserverServiceMaster::setQsSpeed(std::string qs_speed)
{
	this->qs_speed = qs_speed;
}

std::string
QuickserverServiceMaster::getQsDistro()
{
	return qs_distro;
}

void
QuickserverServiceMaster::setQsDistro(std::string qs_distro)
{
	this->qs_distro = qs_distro;
}

std::string
QuickserverServiceMaster::getQsDistroVersion()
{
	return qs_distro_version;
}

void
QuickserverServiceMaster::setQsDistroVersion(std::string qs_distro_version)
{
	this->qs_distro_version = qs_distro_version;
}

std::string
QuickserverServiceMaster::getQsBytesSecIn()
{
	return qs_bytes_sec_in;
}

void
QuickserverServiceMaster::setQsBytesSecIn(std::string qs_bytes_sec_in)
{
	this->qs_bytes_sec_in = qs_bytes_sec_in;
}

std::string
QuickserverServiceMaster::getQsBytesSecOut()
{
	return qs_bytes_sec_out;
}

void
QuickserverServiceMaster::setQsBytesSecOut(std::string qs_bytes_sec_out)
{
	this->qs_bytes_sec_out = qs_bytes_sec_out;
}

std::string
QuickserverServiceMaster::getQsPacketsSecIn()
{
	return qs_packets_sec_in;
}

void
QuickserverServiceMaster::setQsPacketsSecIn(std::string qs_packets_sec_in)
{
	this->qs_packets_sec_in = qs_packets_sec_in;
}

std::string
QuickserverServiceMaster::getQsPacketsSecOut()
{
	return qs_packets_sec_out;
}

void
QuickserverServiceMaster::setQsPacketsSecOut(std::string qs_packets_sec_out)
{
	this->qs_packets_sec_out = qs_packets_sec_out;
}

AnyType
QuickserverServiceMaster::getQsLastInstallTime()
{
	return qs_last_install_time;
}

void
QuickserverServiceMaster::setQsLastInstallTime(AnyType qs_last_install_time)
{
	this->qs_last_install_time = qs_last_install_time;
}

AnyType
QuickserverServiceMaster::getQsPartitions()
{
	return qs_partitions;
}

void
QuickserverServiceMaster::setQsPartitions(AnyType qs_partitions)
{
	this->qs_partitions = qs_partitions;
}

std::string
QuickserverServiceMaster::getQsCpuFlags()
{
	return qs_cpu_flags;
}

void
QuickserverServiceMaster::setQsCpuFlags(std::string qs_cpu_flags)
{
	this->qs_cpu_flags = qs_cpu_flags;
}



