

#include "BackupServiceMaster.h"

using namespace Tiny;

BackupServiceMaster::BackupServiceMaster()
{
	backup_id = int(0);
	backup_name = std::string();
	backup_ip = std::string();
	backup_type = int(0);
	backup_hdsize = int(0);
	backup_hdfree = int(0);
	backup_last_update = std::string();
	backup_available = int(0);
	backup_iowait = int(0);
	backup_order = int(0);
}

BackupServiceMaster::BackupServiceMaster(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupServiceMaster::~BackupServiceMaster()
{

}

void
BackupServiceMaster::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *backup_idKey = "backup_id";

    if(object.has_key(backup_idKey))
    {
        bourne::json value = object[backup_idKey];



        jsonToValue(&backup_id, value, "int");


    }

    const char *backup_nameKey = "backup_name";

    if(object.has_key(backup_nameKey))
    {
        bourne::json value = object[backup_nameKey];



        jsonToValue(&backup_name, value, "std::string");


    }

    const char *backup_ipKey = "backup_ip";

    if(object.has_key(backup_ipKey))
    {
        bourne::json value = object[backup_ipKey];



        jsonToValue(&backup_ip, value, "std::string");


    }

    const char *backup_typeKey = "backup_type";

    if(object.has_key(backup_typeKey))
    {
        bourne::json value = object[backup_typeKey];



        jsonToValue(&backup_type, value, "int");


    }

    const char *backup_hdsizeKey = "backup_hdsize";

    if(object.has_key(backup_hdsizeKey))
    {
        bourne::json value = object[backup_hdsizeKey];



        jsonToValue(&backup_hdsize, value, "int");


    }

    const char *backup_hdfreeKey = "backup_hdfree";

    if(object.has_key(backup_hdfreeKey))
    {
        bourne::json value = object[backup_hdfreeKey];



        jsonToValue(&backup_hdfree, value, "int");


    }

    const char *backup_last_updateKey = "backup_last_update";

    if(object.has_key(backup_last_updateKey))
    {
        bourne::json value = object[backup_last_updateKey];



        jsonToValue(&backup_last_update, value, "std::string");


    }

    const char *backup_availableKey = "backup_available";

    if(object.has_key(backup_availableKey))
    {
        bourne::json value = object[backup_availableKey];



        jsonToValue(&backup_available, value, "int");


    }

    const char *backup_iowaitKey = "backup_iowait";

    if(object.has_key(backup_iowaitKey))
    {
        bourne::json value = object[backup_iowaitKey];



        jsonToValue(&backup_iowait, value, "int");


    }

    const char *backup_orderKey = "backup_order";

    if(object.has_key(backup_orderKey))
    {
        bourne::json value = object[backup_orderKey];



        jsonToValue(&backup_order, value, "int");


    }


}

bourne::json
BackupServiceMaster::toJson()
{
    bourne::json object = bourne::json::object();





    object["backup_id"] = getBackupId();






    object["backup_name"] = getBackupName();






    object["backup_ip"] = getBackupIp();






    object["backup_type"] = getBackupType();






    object["backup_hdsize"] = getBackupHdsize();






    object["backup_hdfree"] = getBackupHdfree();






    object["backup_last_update"] = getBackupLastUpdate();






    object["backup_available"] = getBackupAvailable();






    object["backup_iowait"] = getBackupIowait();






    object["backup_order"] = getBackupOrder();



    return object;

}

int
BackupServiceMaster::getBackupId()
{
	return backup_id;
}

void
BackupServiceMaster::setBackupId(int backup_id)
{
	this->backup_id = backup_id;
}

std::string
BackupServiceMaster::getBackupName()
{
	return backup_name;
}

void
BackupServiceMaster::setBackupName(std::string backup_name)
{
	this->backup_name = backup_name;
}

std::string
BackupServiceMaster::getBackupIp()
{
	return backup_ip;
}

void
BackupServiceMaster::setBackupIp(std::string backup_ip)
{
	this->backup_ip = backup_ip;
}

int
BackupServiceMaster::getBackupType()
{
	return backup_type;
}

void
BackupServiceMaster::setBackupType(int backup_type)
{
	this->backup_type = backup_type;
}

int
BackupServiceMaster::getBackupHdsize()
{
	return backup_hdsize;
}

void
BackupServiceMaster::setBackupHdsize(int backup_hdsize)
{
	this->backup_hdsize = backup_hdsize;
}

int
BackupServiceMaster::getBackupHdfree()
{
	return backup_hdfree;
}

void
BackupServiceMaster::setBackupHdfree(int backup_hdfree)
{
	this->backup_hdfree = backup_hdfree;
}

std::string
BackupServiceMaster::getBackupLastUpdate()
{
	return backup_last_update;
}

void
BackupServiceMaster::setBackupLastUpdate(std::string backup_last_update)
{
	this->backup_last_update = backup_last_update;
}

int
BackupServiceMaster::getBackupAvailable()
{
	return backup_available;
}

void
BackupServiceMaster::setBackupAvailable(int backup_available)
{
	this->backup_available = backup_available;
}

int
BackupServiceMaster::getBackupIowait()
{
	return backup_iowait;
}

void
BackupServiceMaster::setBackupIowait(int backup_iowait)
{
	this->backup_iowait = backup_iowait;
}

int
BackupServiceMaster::getBackupOrder()
{
	return backup_order;
}

void
BackupServiceMaster::setBackupOrder(int backup_order)
{
	this->backup_order = backup_order;
}



