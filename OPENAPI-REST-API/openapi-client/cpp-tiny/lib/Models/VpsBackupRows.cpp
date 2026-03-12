

#include "VpsBackupRows.h"

using namespace Tiny;

VpsBackupRows::VpsBackupRows()
{
}

VpsBackupRows::VpsBackupRows(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsBackupRows::~VpsBackupRows()
{

}

void
VpsBackupRows::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);


}

bourne::json
VpsBackupRows::toJson()
{
    bourne::json object = bourne::json::object();


    return object;

}



