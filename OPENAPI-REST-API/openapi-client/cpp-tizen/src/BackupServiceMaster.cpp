#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupServiceMaster.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupServiceMaster::BackupServiceMaster()
{
	//__init();
}

BackupServiceMaster::~BackupServiceMaster()
{
	//__cleanup();
}

void
BackupServiceMaster::__init()
{
	//backup_id = int(0);
	//backup_name = std::string();
	//backup_ip = std::string();
	//backup_type = int(0);
	//backup_hdsize = int(0);
	//backup_hdfree = int(0);
	//backup_last_update = std::string();
	//backup_available = int(0);
	//backup_iowait = int(0);
	//backup_order = int(0);
}

void
BackupServiceMaster::__cleanup()
{
	//if(backup_id != NULL) {
	//
	//delete backup_id;
	//backup_id = NULL;
	//}
	//if(backup_name != NULL) {
	//
	//delete backup_name;
	//backup_name = NULL;
	//}
	//if(backup_ip != NULL) {
	//
	//delete backup_ip;
	//backup_ip = NULL;
	//}
	//if(backup_type != NULL) {
	//
	//delete backup_type;
	//backup_type = NULL;
	//}
	//if(backup_hdsize != NULL) {
	//
	//delete backup_hdsize;
	//backup_hdsize = NULL;
	//}
	//if(backup_hdfree != NULL) {
	//
	//delete backup_hdfree;
	//backup_hdfree = NULL;
	//}
	//if(backup_last_update != NULL) {
	//
	//delete backup_last_update;
	//backup_last_update = NULL;
	//}
	//if(backup_available != NULL) {
	//
	//delete backup_available;
	//backup_available = NULL;
	//}
	//if(backup_iowait != NULL) {
	//
	//delete backup_iowait;
	//backup_iowait = NULL;
	//}
	//if(backup_order != NULL) {
	//
	//delete backup_order;
	//backup_order = NULL;
	//}
	//
}

void
BackupServiceMaster::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *backup_idKey = "backup_id";
	node = json_object_get_member(pJsonObject, backup_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&backup_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *backup_nameKey = "backup_name";
	node = json_object_get_member(pJsonObject, backup_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_ipKey = "backup_ip";
	node = json_object_get_member(pJsonObject, backup_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_typeKey = "backup_type";
	node = json_object_get_member(pJsonObject, backup_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&backup_type, node, "int", "");
		} else {
			
		}
	}
	const gchar *backup_hdsizeKey = "backup_hdsize";
	node = json_object_get_member(pJsonObject, backup_hdsizeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&backup_hdsize, node, "int", "");
		} else {
			
		}
	}
	const gchar *backup_hdfreeKey = "backup_hdfree";
	node = json_object_get_member(pJsonObject, backup_hdfreeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&backup_hdfree, node, "int", "");
		} else {
			
		}
	}
	const gchar *backup_last_updateKey = "backup_last_update";
	node = json_object_get_member(pJsonObject, backup_last_updateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_last_update, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_availableKey = "backup_available";
	node = json_object_get_member(pJsonObject, backup_availableKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&backup_available, node, "int", "");
		} else {
			
		}
	}
	const gchar *backup_iowaitKey = "backup_iowait";
	node = json_object_get_member(pJsonObject, backup_iowaitKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&backup_iowait, node, "int", "");
		} else {
			
		}
	}
	const gchar *backup_orderKey = "backup_order";
	node = json_object_get_member(pJsonObject, backup_orderKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&backup_order, node, "int", "");
		} else {
			
		}
	}
}

BackupServiceMaster::BackupServiceMaster(char* json)
{
	this->fromJson(json);
}

char*
BackupServiceMaster::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getBackupId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *backup_idKey = "backup_id";
	json_object_set_member(pJsonObject, backup_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_nameKey = "backup_name";
	json_object_set_member(pJsonObject, backup_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_ipKey = "backup_ip";
	json_object_set_member(pJsonObject, backup_ipKey, node);
	if (isprimitive("int")) {
		int obj = getBackupType();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *backup_typeKey = "backup_type";
	json_object_set_member(pJsonObject, backup_typeKey, node);
	if (isprimitive("int")) {
		int obj = getBackupHdsize();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *backup_hdsizeKey = "backup_hdsize";
	json_object_set_member(pJsonObject, backup_hdsizeKey, node);
	if (isprimitive("int")) {
		int obj = getBackupHdfree();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *backup_hdfreeKey = "backup_hdfree";
	json_object_set_member(pJsonObject, backup_hdfreeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupLastUpdate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_last_updateKey = "backup_last_update";
	json_object_set_member(pJsonObject, backup_last_updateKey, node);
	if (isprimitive("int")) {
		int obj = getBackupAvailable();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *backup_availableKey = "backup_available";
	json_object_set_member(pJsonObject, backup_availableKey, node);
	if (isprimitive("int")) {
		int obj = getBackupIowait();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *backup_iowaitKey = "backup_iowait";
	json_object_set_member(pJsonObject, backup_iowaitKey, node);
	if (isprimitive("int")) {
		int obj = getBackupOrder();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *backup_orderKey = "backup_order";
	json_object_set_member(pJsonObject, backup_orderKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
BackupServiceMaster::getBackupId()
{
	return backup_id;
}

void
BackupServiceMaster::setBackupId(int  backup_id)
{
	this->backup_id = backup_id;
}

std::string
BackupServiceMaster::getBackupName()
{
	return backup_name;
}

void
BackupServiceMaster::setBackupName(std::string  backup_name)
{
	this->backup_name = backup_name;
}

std::string
BackupServiceMaster::getBackupIp()
{
	return backup_ip;
}

void
BackupServiceMaster::setBackupIp(std::string  backup_ip)
{
	this->backup_ip = backup_ip;
}

int
BackupServiceMaster::getBackupType()
{
	return backup_type;
}

void
BackupServiceMaster::setBackupType(int  backup_type)
{
	this->backup_type = backup_type;
}

int
BackupServiceMaster::getBackupHdsize()
{
	return backup_hdsize;
}

void
BackupServiceMaster::setBackupHdsize(int  backup_hdsize)
{
	this->backup_hdsize = backup_hdsize;
}

int
BackupServiceMaster::getBackupHdfree()
{
	return backup_hdfree;
}

void
BackupServiceMaster::setBackupHdfree(int  backup_hdfree)
{
	this->backup_hdfree = backup_hdfree;
}

std::string
BackupServiceMaster::getBackupLastUpdate()
{
	return backup_last_update;
}

void
BackupServiceMaster::setBackupLastUpdate(std::string  backup_last_update)
{
	this->backup_last_update = backup_last_update;
}

int
BackupServiceMaster::getBackupAvailable()
{
	return backup_available;
}

void
BackupServiceMaster::setBackupAvailable(int  backup_available)
{
	this->backup_available = backup_available;
}

int
BackupServiceMaster::getBackupIowait()
{
	return backup_iowait;
}

void
BackupServiceMaster::setBackupIowait(int  backup_iowait)
{
	this->backup_iowait = backup_iowait;
}

int
BackupServiceMaster::getBackupOrder()
{
	return backup_order;
}

void
BackupServiceMaster::setBackupOrder(int  backup_order)
{
	this->backup_order = backup_order;
}


