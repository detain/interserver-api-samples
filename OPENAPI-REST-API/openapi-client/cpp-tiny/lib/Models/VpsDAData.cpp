

#include "VpsDAData.h"

using namespace Tiny;

VpsDAData::VpsDAData()
{
	free = VpsDALicense();
}

VpsDAData::VpsDAData(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsDAData::~VpsDAData()
{

}

void
VpsDAData::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *freeKey = "free";

    if(object.has_key(freeKey))
    {
        bourne::json value = object[freeKey];




        VpsDALicense* obj = &free;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsDAData::toJson()
{
    bourne::json object = bourne::json::object();






	object["free"] = getFree().toJson();


    return object;

}

VpsDALicense
VpsDAData::getFree()
{
	return free;
}

void
VpsDAData::setFree(VpsDALicense free)
{
	this->free = free;
}



