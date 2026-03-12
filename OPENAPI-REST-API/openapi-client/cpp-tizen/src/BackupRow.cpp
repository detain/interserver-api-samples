#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupRow::BackupRow()
{
	//__init();
}

BackupRow::~BackupRow()
{
	//__cleanup();
}

void
BackupRow::__init()
{
	//backup_id = std::string();
	//backup_name = std::string();
	//backup_cost = std::string();
	//backup_username = std::string();
	//backup_status = std::string();
	//services_name = std::string();
}

void
BackupRow::__cleanup()
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
	//if(backup_cost != NULL) {
	//
	//delete backup_cost;
	//backup_cost = NULL;
	//}
	//if(backup_username != NULL) {
	//
	//delete backup_username;
	//backup_username = NULL;
	//}
	//if(backup_status != NULL) {
	//
	//delete backup_status;
	//backup_status = NULL;
	//}
	//if(services_name != NULL) {
	//
	//delete services_name;
	//services_name = NULL;
	//}
	//
}

void
BackupRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *backup_idKey = "backup_id";
	node = json_object_get_member(pJsonObject, backup_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_id, node, "std::string", "");
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
	const gchar *backup_costKey = "backup_cost";
	node = json_object_get_member(pJsonObject, backup_costKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_cost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_usernameKey = "backup_username";
	node = json_object_get_member(pJsonObject, backup_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *backup_statusKey = "backup_status";
	node = json_object_get_member(pJsonObject, backup_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&backup_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *services_nameKey = "services_name";
	node = json_object_get_member(pJsonObject, services_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_name, node, "std::string", "");
		} else {
			
		}
	}
}

BackupRow::BackupRow(char* json)
{
	this->fromJson(json);
}

char*
BackupRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getBackupId();
		node = converttoJson(&obj, "std::string", "");
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
		std::string obj = getBackupCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_costKey = "backup_cost";
	json_object_set_member(pJsonObject, backup_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_usernameKey = "backup_username";
	json_object_set_member(pJsonObject, backup_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBackupStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *backup_statusKey = "backup_status";
	json_object_set_member(pJsonObject, backup_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_nameKey = "services_name";
	json_object_set_member(pJsonObject, services_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BackupRow::getBackupId()
{
	return backup_id;
}

void
BackupRow::setBackupId(std::string  backup_id)
{
	this->backup_id = backup_id;
}

std::string
BackupRow::getBackupName()
{
	return backup_name;
}

void
BackupRow::setBackupName(std::string  backup_name)
{
	this->backup_name = backup_name;
}

std::string
BackupRow::getBackupCost()
{
	return backup_cost;
}

void
BackupRow::setBackupCost(std::string  backup_cost)
{
	this->backup_cost = backup_cost;
}

std::string
BackupRow::getBackupUsername()
{
	return backup_username;
}

void
BackupRow::setBackupUsername(std::string  backup_username)
{
	this->backup_username = backup_username;
}

std::string
BackupRow::getBackupStatus()
{
	return backup_status;
}

void
BackupRow::setBackupStatus(std::string  backup_status)
{
	this->backup_status = backup_status;
}

std::string
BackupRow::getServicesName()
{
	return services_name;
}

void
BackupRow::setServicesName(std::string  services_name)
{
	this->services_name = services_name;
}


