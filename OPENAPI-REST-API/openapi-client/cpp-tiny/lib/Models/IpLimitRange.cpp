

#include "IpLimitRange.h"

using namespace Tiny;

IpLimitRange::IpLimitRange()
{
	start = std::string();
	end = std::string();
}

IpLimitRange::IpLimitRange(std::string jsonString)
{
	this->fromJson(jsonString);
}

IpLimitRange::~IpLimitRange()
{

}

void
IpLimitRange::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *startKey = "start";

    if(object.has_key(startKey))
    {
        bourne::json value = object[startKey];



        jsonToValue(&start, value, "std::string");


    }

    const char *endKey = "end";

    if(object.has_key(endKey))
    {
        bourne::json value = object[endKey];



        jsonToValue(&end, value, "std::string");


    }


}

bourne::json
IpLimitRange::toJson()
{
    bourne::json object = bourne::json::object();





    object["start"] = getStart();






    object["end"] = getEnd();



    return object;

}

std::string
IpLimitRange::getStart()
{
	return start;
}

void
IpLimitRange::setStart(std::string start)
{
	this->start = start;
}

std::string
IpLimitRange::getEnd()
{
	return end;
}

void
IpLimitRange::setEnd(std::string end)
{
	this->end = end;
}



