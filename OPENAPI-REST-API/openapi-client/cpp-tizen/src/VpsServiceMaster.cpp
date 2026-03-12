#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsServiceMaster.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsServiceMaster::VpsServiceMaster()
{
	//__init();
}

VpsServiceMaster::~VpsServiceMaster()
{
	//__cleanup();
}

void
VpsServiceMaster::__init()
{
	//vps_id = std::string();
	//vps_name = std::string();
	//vps_ip = std::string();
	//vps_type = std::string();
	//vps_hdsize = std::string();
	//vps_hdfree = std::string();
	//vps_bits = std::string();
	//vps_load = std::string();
	//vps_ram = std::string();
	//vps_cpu_model = std::string();
	//vps_cpu_mhz = std::string();
	//vps_location = std::string();
	//vps_last_update = std::string();
	//vps_raid_building = std::string();
	//vps_kernel = std::string();
	//vps_available = std::string();
	//vps_cores = std::string();
	//vps_iowait = std::string();
	//vps_raid_status = std::string();
	//vps_mounts = std::string();
	//vps_server_max = std::string();
	//vps_server_max_slices = std::string();
	//vps_drive_type = std::string();
	//vps_order = std::string();
}

void
VpsServiceMaster::__cleanup()
{
	//if(vps_id != NULL) {
	//
	//delete vps_id;
	//vps_id = NULL;
	//}
	//if(vps_name != NULL) {
	//
	//delete vps_name;
	//vps_name = NULL;
	//}
	//if(vps_ip != NULL) {
	//
	//delete vps_ip;
	//vps_ip = NULL;
	//}
	//if(vps_type != NULL) {
	//
	//delete vps_type;
	//vps_type = NULL;
	//}
	//if(vps_hdsize != NULL) {
	//
	//delete vps_hdsize;
	//vps_hdsize = NULL;
	//}
	//if(vps_hdfree != NULL) {
	//
	//delete vps_hdfree;
	//vps_hdfree = NULL;
	//}
	//if(vps_bits != NULL) {
	//
	//delete vps_bits;
	//vps_bits = NULL;
	//}
	//if(vps_load != NULL) {
	//
	//delete vps_load;
	//vps_load = NULL;
	//}
	//if(vps_ram != NULL) {
	//
	//delete vps_ram;
	//vps_ram = NULL;
	//}
	//if(vps_cpu_model != NULL) {
	//
	//delete vps_cpu_model;
	//vps_cpu_model = NULL;
	//}
	//if(vps_cpu_mhz != NULL) {
	//
	//delete vps_cpu_mhz;
	//vps_cpu_mhz = NULL;
	//}
	//if(vps_location != NULL) {
	//
	//delete vps_location;
	//vps_location = NULL;
	//}
	//if(vps_last_update != NULL) {
	//
	//delete vps_last_update;
	//vps_last_update = NULL;
	//}
	//if(vps_raid_building != NULL) {
	//
	//delete vps_raid_building;
	//vps_raid_building = NULL;
	//}
	//if(vps_kernel != NULL) {
	//
	//delete vps_kernel;
	//vps_kernel = NULL;
	//}
	//if(vps_available != NULL) {
	//
	//delete vps_available;
	//vps_available = NULL;
	//}
	//if(vps_cores != NULL) {
	//
	//delete vps_cores;
	//vps_cores = NULL;
	//}
	//if(vps_iowait != NULL) {
	//
	//delete vps_iowait;
	//vps_iowait = NULL;
	//}
	//if(vps_raid_status != NULL) {
	//
	//delete vps_raid_status;
	//vps_raid_status = NULL;
	//}
	//if(vps_mounts != NULL) {
	//
	//delete vps_mounts;
	//vps_mounts = NULL;
	//}
	//if(vps_server_max != NULL) {
	//
	//delete vps_server_max;
	//vps_server_max = NULL;
	//}
	//if(vps_server_max_slices != NULL) {
	//
	//delete vps_server_max_slices;
	//vps_server_max_slices = NULL;
	//}
	//if(vps_drive_type != NULL) {
	//
	//delete vps_drive_type;
	//vps_drive_type = NULL;
	//}
	//if(vps_order != NULL) {
	//
	//delete vps_order;
	//vps_order = NULL;
	//}
	//
}

void
VpsServiceMaster::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *vps_idKey = "vps_id";
	node = json_object_get_member(pJsonObject, vps_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_nameKey = "vps_name";
	node = json_object_get_member(pJsonObject, vps_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_ipKey = "vps_ip";
	node = json_object_get_member(pJsonObject, vps_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_typeKey = "vps_type";
	node = json_object_get_member(pJsonObject, vps_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_hdsizeKey = "vps_hdsize";
	node = json_object_get_member(pJsonObject, vps_hdsizeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_hdsize, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_hdfreeKey = "vps_hdfree";
	node = json_object_get_member(pJsonObject, vps_hdfreeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_hdfree, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_bitsKey = "vps_bits";
	node = json_object_get_member(pJsonObject, vps_bitsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_bits, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_loadKey = "vps_load";
	node = json_object_get_member(pJsonObject, vps_loadKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_load, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_ramKey = "vps_ram";
	node = json_object_get_member(pJsonObject, vps_ramKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_ram, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_cpu_modelKey = "vps_cpu_model";
	node = json_object_get_member(pJsonObject, vps_cpu_modelKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_cpu_model, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_cpu_mhzKey = "vps_cpu_mhz";
	node = json_object_get_member(pJsonObject, vps_cpu_mhzKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_cpu_mhz, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_locationKey = "vps_location";
	node = json_object_get_member(pJsonObject, vps_locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_location, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_last_updateKey = "vps_last_update";
	node = json_object_get_member(pJsonObject, vps_last_updateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_last_update, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_raid_buildingKey = "vps_raid_building";
	node = json_object_get_member(pJsonObject, vps_raid_buildingKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_raid_building, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_kernelKey = "vps_kernel";
	node = json_object_get_member(pJsonObject, vps_kernelKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_kernel, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_availableKey = "vps_available";
	node = json_object_get_member(pJsonObject, vps_availableKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_available, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_coresKey = "vps_cores";
	node = json_object_get_member(pJsonObject, vps_coresKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_cores, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_iowaitKey = "vps_iowait";
	node = json_object_get_member(pJsonObject, vps_iowaitKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_iowait, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_raid_statusKey = "vps_raid_status";
	node = json_object_get_member(pJsonObject, vps_raid_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_raid_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_mountsKey = "vps_mounts";
	node = json_object_get_member(pJsonObject, vps_mountsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_mounts, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_server_maxKey = "vps_server_max";
	node = json_object_get_member(pJsonObject, vps_server_maxKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_server_max, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_server_max_slicesKey = "vps_server_max_slices";
	node = json_object_get_member(pJsonObject, vps_server_max_slicesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_server_max_slices, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_drive_typeKey = "vps_drive_type";
	node = json_object_get_member(pJsonObject, vps_drive_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_drive_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_orderKey = "vps_order";
	node = json_object_get_member(pJsonObject, vps_orderKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_order, node, "std::string", "");
		} else {
			
		}
	}
}

VpsServiceMaster::VpsServiceMaster(char* json)
{
	this->fromJson(json);
}

char*
VpsServiceMaster::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getVpsId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_idKey = "vps_id";
	json_object_set_member(pJsonObject, vps_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_nameKey = "vps_name";
	json_object_set_member(pJsonObject, vps_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_ipKey = "vps_ip";
	json_object_set_member(pJsonObject, vps_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_typeKey = "vps_type";
	json_object_set_member(pJsonObject, vps_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsHdsize();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_hdsizeKey = "vps_hdsize";
	json_object_set_member(pJsonObject, vps_hdsizeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsHdfree();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_hdfreeKey = "vps_hdfree";
	json_object_set_member(pJsonObject, vps_hdfreeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsBits();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_bitsKey = "vps_bits";
	json_object_set_member(pJsonObject, vps_bitsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsLoad();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_loadKey = "vps_load";
	json_object_set_member(pJsonObject, vps_loadKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsRam();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_ramKey = "vps_ram";
	json_object_set_member(pJsonObject, vps_ramKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsCpuModel();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_cpu_modelKey = "vps_cpu_model";
	json_object_set_member(pJsonObject, vps_cpu_modelKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsCpuMhz();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_cpu_mhzKey = "vps_cpu_mhz";
	json_object_set_member(pJsonObject, vps_cpu_mhzKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_locationKey = "vps_location";
	json_object_set_member(pJsonObject, vps_locationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsLastUpdate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_last_updateKey = "vps_last_update";
	json_object_set_member(pJsonObject, vps_last_updateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsRaidBuilding();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_raid_buildingKey = "vps_raid_building";
	json_object_set_member(pJsonObject, vps_raid_buildingKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsKernel();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_kernelKey = "vps_kernel";
	json_object_set_member(pJsonObject, vps_kernelKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsAvailable();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_availableKey = "vps_available";
	json_object_set_member(pJsonObject, vps_availableKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsCores();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_coresKey = "vps_cores";
	json_object_set_member(pJsonObject, vps_coresKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsIowait();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_iowaitKey = "vps_iowait";
	json_object_set_member(pJsonObject, vps_iowaitKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsRaidStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_raid_statusKey = "vps_raid_status";
	json_object_set_member(pJsonObject, vps_raid_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsMounts();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_mountsKey = "vps_mounts";
	json_object_set_member(pJsonObject, vps_mountsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsServerMax();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_server_maxKey = "vps_server_max";
	json_object_set_member(pJsonObject, vps_server_maxKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsServerMaxSlices();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_server_max_slicesKey = "vps_server_max_slices";
	json_object_set_member(pJsonObject, vps_server_max_slicesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsDriveType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_drive_typeKey = "vps_drive_type";
	json_object_set_member(pJsonObject, vps_drive_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsOrder();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_orderKey = "vps_order";
	json_object_set_member(pJsonObject, vps_orderKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsServiceMaster::getVpsId()
{
	return vps_id;
}

void
VpsServiceMaster::setVpsId(std::string  vps_id)
{
	this->vps_id = vps_id;
}

std::string
VpsServiceMaster::getVpsName()
{
	return vps_name;
}

void
VpsServiceMaster::setVpsName(std::string  vps_name)
{
	this->vps_name = vps_name;
}

std::string
VpsServiceMaster::getVpsIp()
{
	return vps_ip;
}

void
VpsServiceMaster::setVpsIp(std::string  vps_ip)
{
	this->vps_ip = vps_ip;
}

std::string
VpsServiceMaster::getVpsType()
{
	return vps_type;
}

void
VpsServiceMaster::setVpsType(std::string  vps_type)
{
	this->vps_type = vps_type;
}

std::string
VpsServiceMaster::getVpsHdsize()
{
	return vps_hdsize;
}

void
VpsServiceMaster::setVpsHdsize(std::string  vps_hdsize)
{
	this->vps_hdsize = vps_hdsize;
}

std::string
VpsServiceMaster::getVpsHdfree()
{
	return vps_hdfree;
}

void
VpsServiceMaster::setVpsHdfree(std::string  vps_hdfree)
{
	this->vps_hdfree = vps_hdfree;
}

std::string
VpsServiceMaster::getVpsBits()
{
	return vps_bits;
}

void
VpsServiceMaster::setVpsBits(std::string  vps_bits)
{
	this->vps_bits = vps_bits;
}

std::string
VpsServiceMaster::getVpsLoad()
{
	return vps_load;
}

void
VpsServiceMaster::setVpsLoad(std::string  vps_load)
{
	this->vps_load = vps_load;
}

std::string
VpsServiceMaster::getVpsRam()
{
	return vps_ram;
}

void
VpsServiceMaster::setVpsRam(std::string  vps_ram)
{
	this->vps_ram = vps_ram;
}

std::string
VpsServiceMaster::getVpsCpuModel()
{
	return vps_cpu_model;
}

void
VpsServiceMaster::setVpsCpuModel(std::string  vps_cpu_model)
{
	this->vps_cpu_model = vps_cpu_model;
}

std::string
VpsServiceMaster::getVpsCpuMhz()
{
	return vps_cpu_mhz;
}

void
VpsServiceMaster::setVpsCpuMhz(std::string  vps_cpu_mhz)
{
	this->vps_cpu_mhz = vps_cpu_mhz;
}

std::string
VpsServiceMaster::getVpsLocation()
{
	return vps_location;
}

void
VpsServiceMaster::setVpsLocation(std::string  vps_location)
{
	this->vps_location = vps_location;
}

std::string
VpsServiceMaster::getVpsLastUpdate()
{
	return vps_last_update;
}

void
VpsServiceMaster::setVpsLastUpdate(std::string  vps_last_update)
{
	this->vps_last_update = vps_last_update;
}

std::string
VpsServiceMaster::getVpsRaidBuilding()
{
	return vps_raid_building;
}

void
VpsServiceMaster::setVpsRaidBuilding(std::string  vps_raid_building)
{
	this->vps_raid_building = vps_raid_building;
}

std::string
VpsServiceMaster::getVpsKernel()
{
	return vps_kernel;
}

void
VpsServiceMaster::setVpsKernel(std::string  vps_kernel)
{
	this->vps_kernel = vps_kernel;
}

std::string
VpsServiceMaster::getVpsAvailable()
{
	return vps_available;
}

void
VpsServiceMaster::setVpsAvailable(std::string  vps_available)
{
	this->vps_available = vps_available;
}

std::string
VpsServiceMaster::getVpsCores()
{
	return vps_cores;
}

void
VpsServiceMaster::setVpsCores(std::string  vps_cores)
{
	this->vps_cores = vps_cores;
}

std::string
VpsServiceMaster::getVpsIowait()
{
	return vps_iowait;
}

void
VpsServiceMaster::setVpsIowait(std::string  vps_iowait)
{
	this->vps_iowait = vps_iowait;
}

std::string
VpsServiceMaster::getVpsRaidStatus()
{
	return vps_raid_status;
}

void
VpsServiceMaster::setVpsRaidStatus(std::string  vps_raid_status)
{
	this->vps_raid_status = vps_raid_status;
}

std::string
VpsServiceMaster::getVpsMounts()
{
	return vps_mounts;
}

void
VpsServiceMaster::setVpsMounts(std::string  vps_mounts)
{
	this->vps_mounts = vps_mounts;
}

std::string
VpsServiceMaster::getVpsServerMax()
{
	return vps_server_max;
}

void
VpsServiceMaster::setVpsServerMax(std::string  vps_server_max)
{
	this->vps_server_max = vps_server_max;
}

std::string
VpsServiceMaster::getVpsServerMaxSlices()
{
	return vps_server_max_slices;
}

void
VpsServiceMaster::setVpsServerMaxSlices(std::string  vps_server_max_slices)
{
	this->vps_server_max_slices = vps_server_max_slices;
}

std::string
VpsServiceMaster::getVpsDriveType()
{
	return vps_drive_type;
}

void
VpsServiceMaster::setVpsDriveType(std::string  vps_drive_type)
{
	this->vps_drive_type = vps_drive_type;
}

std::string
VpsServiceMaster::getVpsOrder()
{
	return vps_order;
}

void
VpsServiceMaster::setVpsOrder(std::string  vps_order)
{
	this->vps_order = vps_order;
}


