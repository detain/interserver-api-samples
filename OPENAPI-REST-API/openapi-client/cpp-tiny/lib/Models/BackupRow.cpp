

#include "BackupRow.h"

using namespace Tiny;

BackupRow::BackupRow()
{
	backup_id = std::string();
	backup_name = std::string();
	backup_cost = std::string();
	backup_username = std::string();
	backup_status = std::string();
	services_name = std::string();
}

BackupRow::BackupRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupRow::~BackupRow()
{

}

void
BackupRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *backup_idKey = "backup_id";

    if(object.has_key(backup_idKey))
    {
        bourne::json value = object[backup_idKey];



        jsonToValue(&backup_id, value, "std::string");


    }

    const char *backup_nameKey = "backup_name";

    if(object.has_key(backup_nameKey))
    {
        bourne::json value = object[backup_nameKey];



        jsonToValue(&backup_name, value, "std::string");


    }

    const char *backup_costKey = "backup_cost";

    if(object.has_key(backup_costKey))
    {
        bourne::json value = object[backup_costKey];



        jsonToValue(&backup_cost, value, "std::string");


    }

    const char *backup_usernameKey = "backup_username";

    if(object.has_key(backup_usernameKey))
    {
        bourne::json value = object[backup_usernameKey];



        jsonToValue(&backup_username, value, "std::string");


    }

    const char *backup_statusKey = "backup_status";

    if(object.has_key(backup_statusKey))
    {
        bourne::json value = object[backup_statusKey];



        jsonToValue(&backup_status, value, "std::string");


    }

    const char *services_nameKey = "services_name";

    if(object.has_key(services_nameKey))
    {
        bourne::json value = object[services_nameKey];



        jsonToValue(&services_name, value, "std::string");


    }


}

bourne::json
BackupRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["backup_id"] = getBackupId();






    object["backup_name"] = getBackupName();






    object["backup_cost"] = getBackupCost();






    object["backup_username"] = getBackupUsername();






    object["backup_status"] = getBackupStatus();






    object["services_name"] = getServicesName();



    return object;

}

std::string
BackupRow::getBackupId()
{
	return backup_id;
}

void
BackupRow::setBackupId(std::string backup_id)
{
	this->backup_id = backup_id;
}

std::string
BackupRow::getBackupName()
{
	return backup_name;
}

void
BackupRow::setBackupName(std::string backup_name)
{
	this->backup_name = backup_name;
}

std::string
BackupRow::getBackupCost()
{
	return backup_cost;
}

void
BackupRow::setBackupCost(std::string backup_cost)
{
	this->backup_cost = backup_cost;
}

std::string
BackupRow::getBackupUsername()
{
	return backup_username;
}

void
BackupRow::setBackupUsername(std::string backup_username)
{
	this->backup_username = backup_username;
}

std::string
BackupRow::getBackupStatus()
{
	return backup_status;
}

void
BackupRow::setBackupStatus(std::string backup_status)
{
	this->backup_status = backup_status;
}

std::string
BackupRow::getServicesName()
{
	return services_name;
}

void
BackupRow::setServicesName(std::string services_name)
{
	this->services_name = services_name;
}



