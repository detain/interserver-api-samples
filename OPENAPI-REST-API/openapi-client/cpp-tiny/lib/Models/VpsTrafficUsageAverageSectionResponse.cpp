

#include "VpsTrafficUsageAverageSectionResponse.h"

using namespace Tiny;

VpsTrafficUsageAverageSectionResponse::VpsTrafficUsageAverageSectionResponse()
{
	total = int(0);
	count = int(0);
	value = int(0);
}

VpsTrafficUsageAverageSectionResponse::VpsTrafficUsageAverageSectionResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficUsageAverageSectionResponse::~VpsTrafficUsageAverageSectionResponse()
{

}

void
VpsTrafficUsageAverageSectionResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *totalKey = "total";

    if(object.has_key(totalKey))
    {
        bourne::json value = object[totalKey];



        jsonToValue(&total, value, "int");


    }

    const char *countKey = "count";

    if(object.has_key(countKey))
    {
        bourne::json value = object[countKey];



        jsonToValue(&count, value, "int");


    }

    const char *valueKey = "value";

    if(object.has_key(valueKey))
    {
        bourne::json value = object[valueKey];



        jsonToValue(&value, value, "int");


    }


}

bourne::json
VpsTrafficUsageAverageSectionResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["total"] = getTotal();






    object["count"] = getCount();






    object["value"] = getValue();



    return object;

}

int
VpsTrafficUsageAverageSectionResponse::getTotal()
{
	return total;
}

void
VpsTrafficUsageAverageSectionResponse::setTotal(int total)
{
	this->total = total;
}

int
VpsTrafficUsageAverageSectionResponse::getCount()
{
	return count;
}

void
VpsTrafficUsageAverageSectionResponse::setCount(int count)
{
	this->count = count;
}

int
VpsTrafficUsageAverageSectionResponse::getValue()
{
	return value;
}

void
VpsTrafficUsageAverageSectionResponse::setValue(int value)
{
	this->value = value;
}



