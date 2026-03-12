

#include "VpsServiceMaster.h"

using namespace Tiny;

VpsServiceMaster::VpsServiceMaster()
{
	vps_id = std::string();
	vps_name = std::string();
	vps_ip = std::string();
	vps_type = std::string();
	vps_hdsize = std::string();
	vps_hdfree = std::string();
	vps_bits = std::string();
	vps_load = std::string();
	vps_ram = std::string();
	vps_cpu_model = std::string();
	vps_cpu_mhz = std::string();
	vps_location = std::string();
	vps_last_update = std::string();
	vps_raid_building = std::string();
	vps_kernel = std::string();
	vps_available = std::string();
	vps_cores = std::string();
	vps_iowait = std::string();
	vps_raid_status = std::string();
	vps_mounts = std::string();
	vps_server_max = std::string();
	vps_server_max_slices = std::string();
	vps_drive_type = std::string();
	vps_order = std::string();
}

VpsServiceMaster::VpsServiceMaster(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsServiceMaster::~VpsServiceMaster()
{

}

void
VpsServiceMaster::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *vps_idKey = "vps_id";

    if(object.has_key(vps_idKey))
    {
        bourne::json value = object[vps_idKey];



        jsonToValue(&vps_id, value, "std::string");


    }

    const char *vps_nameKey = "vps_name";

    if(object.has_key(vps_nameKey))
    {
        bourne::json value = object[vps_nameKey];



        jsonToValue(&vps_name, value, "std::string");


    }

    const char *vps_ipKey = "vps_ip";

    if(object.has_key(vps_ipKey))
    {
        bourne::json value = object[vps_ipKey];



        jsonToValue(&vps_ip, value, "std::string");


    }

    const char *vps_typeKey = "vps_type";

    if(object.has_key(vps_typeKey))
    {
        bourne::json value = object[vps_typeKey];



        jsonToValue(&vps_type, value, "std::string");


    }

    const char *vps_hdsizeKey = "vps_hdsize";

    if(object.has_key(vps_hdsizeKey))
    {
        bourne::json value = object[vps_hdsizeKey];



        jsonToValue(&vps_hdsize, value, "std::string");


    }

    const char *vps_hdfreeKey = "vps_hdfree";

    if(object.has_key(vps_hdfreeKey))
    {
        bourne::json value = object[vps_hdfreeKey];



        jsonToValue(&vps_hdfree, value, "std::string");


    }

    const char *vps_bitsKey = "vps_bits";

    if(object.has_key(vps_bitsKey))
    {
        bourne::json value = object[vps_bitsKey];



        jsonToValue(&vps_bits, value, "std::string");


    }

    const char *vps_loadKey = "vps_load";

    if(object.has_key(vps_loadKey))
    {
        bourne::json value = object[vps_loadKey];



        jsonToValue(&vps_load, value, "std::string");


    }

    const char *vps_ramKey = "vps_ram";

    if(object.has_key(vps_ramKey))
    {
        bourne::json value = object[vps_ramKey];



        jsonToValue(&vps_ram, value, "std::string");


    }

    const char *vps_cpu_modelKey = "vps_cpu_model";

    if(object.has_key(vps_cpu_modelKey))
    {
        bourne::json value = object[vps_cpu_modelKey];



        jsonToValue(&vps_cpu_model, value, "std::string");


    }

    const char *vps_cpu_mhzKey = "vps_cpu_mhz";

    if(object.has_key(vps_cpu_mhzKey))
    {
        bourne::json value = object[vps_cpu_mhzKey];



        jsonToValue(&vps_cpu_mhz, value, "std::string");


    }

    const char *vps_locationKey = "vps_location";

    if(object.has_key(vps_locationKey))
    {
        bourne::json value = object[vps_locationKey];



        jsonToValue(&vps_location, value, "std::string");


    }

    const char *vps_last_updateKey = "vps_last_update";

    if(object.has_key(vps_last_updateKey))
    {
        bourne::json value = object[vps_last_updateKey];



        jsonToValue(&vps_last_update, value, "std::string");


    }

    const char *vps_raid_buildingKey = "vps_raid_building";

    if(object.has_key(vps_raid_buildingKey))
    {
        bourne::json value = object[vps_raid_buildingKey];



        jsonToValue(&vps_raid_building, value, "std::string");


    }

    const char *vps_kernelKey = "vps_kernel";

    if(object.has_key(vps_kernelKey))
    {
        bourne::json value = object[vps_kernelKey];



        jsonToValue(&vps_kernel, value, "std::string");


    }

    const char *vps_availableKey = "vps_available";

    if(object.has_key(vps_availableKey))
    {
        bourne::json value = object[vps_availableKey];



        jsonToValue(&vps_available, value, "std::string");


    }

    const char *vps_coresKey = "vps_cores";

    if(object.has_key(vps_coresKey))
    {
        bourne::json value = object[vps_coresKey];



        jsonToValue(&vps_cores, value, "std::string");


    }

    const char *vps_iowaitKey = "vps_iowait";

    if(object.has_key(vps_iowaitKey))
    {
        bourne::json value = object[vps_iowaitKey];



        jsonToValue(&vps_iowait, value, "std::string");


    }

    const char *vps_raid_statusKey = "vps_raid_status";

    if(object.has_key(vps_raid_statusKey))
    {
        bourne::json value = object[vps_raid_statusKey];



        jsonToValue(&vps_raid_status, value, "std::string");


    }

    const char *vps_mountsKey = "vps_mounts";

    if(object.has_key(vps_mountsKey))
    {
        bourne::json value = object[vps_mountsKey];



        jsonToValue(&vps_mounts, value, "std::string");


    }

    const char *vps_server_maxKey = "vps_server_max";

    if(object.has_key(vps_server_maxKey))
    {
        bourne::json value = object[vps_server_maxKey];



        jsonToValue(&vps_server_max, value, "std::string");


    }

    const char *vps_server_max_slicesKey = "vps_server_max_slices";

    if(object.has_key(vps_server_max_slicesKey))
    {
        bourne::json value = object[vps_server_max_slicesKey];



        jsonToValue(&vps_server_max_slices, value, "std::string");


    }

    const char *vps_drive_typeKey = "vps_drive_type";

    if(object.has_key(vps_drive_typeKey))
    {
        bourne::json value = object[vps_drive_typeKey];



        jsonToValue(&vps_drive_type, value, "std::string");


    }

    const char *vps_orderKey = "vps_order";

    if(object.has_key(vps_orderKey))
    {
        bourne::json value = object[vps_orderKey];



        jsonToValue(&vps_order, value, "std::string");


    }


}

bourne::json
VpsServiceMaster::toJson()
{
    bourne::json object = bourne::json::object();





    object["vps_id"] = getVpsId();






    object["vps_name"] = getVpsName();






    object["vps_ip"] = getVpsIp();






    object["vps_type"] = getVpsType();






    object["vps_hdsize"] = getVpsHdsize();






    object["vps_hdfree"] = getVpsHdfree();






    object["vps_bits"] = getVpsBits();






    object["vps_load"] = getVpsLoad();






    object["vps_ram"] = getVpsRam();






    object["vps_cpu_model"] = getVpsCpuModel();






    object["vps_cpu_mhz"] = getVpsCpuMhz();






    object["vps_location"] = getVpsLocation();






    object["vps_last_update"] = getVpsLastUpdate();






    object["vps_raid_building"] = getVpsRaidBuilding();






    object["vps_kernel"] = getVpsKernel();






    object["vps_available"] = getVpsAvailable();






    object["vps_cores"] = getVpsCores();






    object["vps_iowait"] = getVpsIowait();






    object["vps_raid_status"] = getVpsRaidStatus();






    object["vps_mounts"] = getVpsMounts();






    object["vps_server_max"] = getVpsServerMax();






    object["vps_server_max_slices"] = getVpsServerMaxSlices();






    object["vps_drive_type"] = getVpsDriveType();






    object["vps_order"] = getVpsOrder();



    return object;

}

std::string
VpsServiceMaster::getVpsId()
{
	return vps_id;
}

void
VpsServiceMaster::setVpsId(std::string vps_id)
{
	this->vps_id = vps_id;
}

std::string
VpsServiceMaster::getVpsName()
{
	return vps_name;
}

void
VpsServiceMaster::setVpsName(std::string vps_name)
{
	this->vps_name = vps_name;
}

std::string
VpsServiceMaster::getVpsIp()
{
	return vps_ip;
}

void
VpsServiceMaster::setVpsIp(std::string vps_ip)
{
	this->vps_ip = vps_ip;
}

std::string
VpsServiceMaster::getVpsType()
{
	return vps_type;
}

void
VpsServiceMaster::setVpsType(std::string vps_type)
{
	this->vps_type = vps_type;
}

std::string
VpsServiceMaster::getVpsHdsize()
{
	return vps_hdsize;
}

void
VpsServiceMaster::setVpsHdsize(std::string vps_hdsize)
{
	this->vps_hdsize = vps_hdsize;
}

std::string
VpsServiceMaster::getVpsHdfree()
{
	return vps_hdfree;
}

void
VpsServiceMaster::setVpsHdfree(std::string vps_hdfree)
{
	this->vps_hdfree = vps_hdfree;
}

std::string
VpsServiceMaster::getVpsBits()
{
	return vps_bits;
}

void
VpsServiceMaster::setVpsBits(std::string vps_bits)
{
	this->vps_bits = vps_bits;
}

std::string
VpsServiceMaster::getVpsLoad()
{
	return vps_load;
}

void
VpsServiceMaster::setVpsLoad(std::string vps_load)
{
	this->vps_load = vps_load;
}

std::string
VpsServiceMaster::getVpsRam()
{
	return vps_ram;
}

void
VpsServiceMaster::setVpsRam(std::string vps_ram)
{
	this->vps_ram = vps_ram;
}

std::string
VpsServiceMaster::getVpsCpuModel()
{
	return vps_cpu_model;
}

void
VpsServiceMaster::setVpsCpuModel(std::string vps_cpu_model)
{
	this->vps_cpu_model = vps_cpu_model;
}

std::string
VpsServiceMaster::getVpsCpuMhz()
{
	return vps_cpu_mhz;
}

void
VpsServiceMaster::setVpsCpuMhz(std::string vps_cpu_mhz)
{
	this->vps_cpu_mhz = vps_cpu_mhz;
}

std::string
VpsServiceMaster::getVpsLocation()
{
	return vps_location;
}

void
VpsServiceMaster::setVpsLocation(std::string vps_location)
{
	this->vps_location = vps_location;
}

std::string
VpsServiceMaster::getVpsLastUpdate()
{
	return vps_last_update;
}

void
VpsServiceMaster::setVpsLastUpdate(std::string vps_last_update)
{
	this->vps_last_update = vps_last_update;
}

std::string
VpsServiceMaster::getVpsRaidBuilding()
{
	return vps_raid_building;
}

void
VpsServiceMaster::setVpsRaidBuilding(std::string vps_raid_building)
{
	this->vps_raid_building = vps_raid_building;
}

std::string
VpsServiceMaster::getVpsKernel()
{
	return vps_kernel;
}

void
VpsServiceMaster::setVpsKernel(std::string vps_kernel)
{
	this->vps_kernel = vps_kernel;
}

std::string
VpsServiceMaster::getVpsAvailable()
{
	return vps_available;
}

void
VpsServiceMaster::setVpsAvailable(std::string vps_available)
{
	this->vps_available = vps_available;
}

std::string
VpsServiceMaster::getVpsCores()
{
	return vps_cores;
}

void
VpsServiceMaster::setVpsCores(std::string vps_cores)
{
	this->vps_cores = vps_cores;
}

std::string
VpsServiceMaster::getVpsIowait()
{
	return vps_iowait;
}

void
VpsServiceMaster::setVpsIowait(std::string vps_iowait)
{
	this->vps_iowait = vps_iowait;
}

std::string
VpsServiceMaster::getVpsRaidStatus()
{
	return vps_raid_status;
}

void
VpsServiceMaster::setVpsRaidStatus(std::string vps_raid_status)
{
	this->vps_raid_status = vps_raid_status;
}

std::string
VpsServiceMaster::getVpsMounts()
{
	return vps_mounts;
}

void
VpsServiceMaster::setVpsMounts(std::string vps_mounts)
{
	this->vps_mounts = vps_mounts;
}

std::string
VpsServiceMaster::getVpsServerMax()
{
	return vps_server_max;
}

void
VpsServiceMaster::setVpsServerMax(std::string vps_server_max)
{
	this->vps_server_max = vps_server_max;
}

std::string
VpsServiceMaster::getVpsServerMaxSlices()
{
	return vps_server_max_slices;
}

void
VpsServiceMaster::setVpsServerMaxSlices(std::string vps_server_max_slices)
{
	this->vps_server_max_slices = vps_server_max_slices;
}

std::string
VpsServiceMaster::getVpsDriveType()
{
	return vps_drive_type;
}

void
VpsServiceMaster::setVpsDriveType(std::string vps_drive_type)
{
	this->vps_drive_type = vps_drive_type;
}

std::string
VpsServiceMaster::getVpsOrder()
{
	return vps_order;
}

void
VpsServiceMaster::setVpsOrder(std::string vps_order)
{
	this->vps_order = vps_order;
}



