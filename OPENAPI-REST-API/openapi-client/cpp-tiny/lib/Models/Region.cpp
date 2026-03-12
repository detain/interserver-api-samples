

#include "Region.h"

using namespace Tiny;

Region::Region()
{
	region_id = int(0);
	region_name = std::string();
}

Region::Region(std::string jsonString)
{
	this->fromJson(jsonString);
}

Region::~Region()
{

}

void
Region::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *region_idKey = "region_id";

    if(object.has_key(region_idKey))
    {
        bourne::json value = object[region_idKey];



        jsonToValue(&region_id, value, "int");


    }

    const char *region_nameKey = "region_name";

    if(object.has_key(region_nameKey))
    {
        bourne::json value = object[region_nameKey];



        jsonToValue(&region_name, value, "std::string");


    }


}

bourne::json
Region::toJson()
{
    bourne::json object = bourne::json::object();





    object["region_id"] = getRegionId();






    object["region_name"] = getRegionName();



    return object;

}

int
Region::getRegionId()
{
	return region_id;
}

void
Region::setRegionId(int region_id)
{
	this->region_id = region_id;
}

std::string
Region::getRegionName()
{
	return region_name;
}

void
Region::setRegionName(std::string region_name)
{
	this->region_name = region_name;
}



