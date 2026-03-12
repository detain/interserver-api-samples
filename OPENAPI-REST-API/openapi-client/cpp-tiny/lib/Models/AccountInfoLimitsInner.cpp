

#include "AccountInfoLimits_inner.h"

using namespace Tiny;

AccountInfoLimits_inner::AccountInfoLimits_inner()
{
	start = std::string();
	end = std::string();
}

AccountInfoLimits_inner::AccountInfoLimits_inner(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoLimits_inner::~AccountInfoLimits_inner()
{

}

void
AccountInfoLimits_inner::fromJson(std::string jsonObj)
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
AccountInfoLimits_inner::toJson()
{
    bourne::json object = bourne::json::object();





    object["start"] = getStart();






    object["end"] = getEnd();



    return object;

}

std::string
AccountInfoLimits_inner::getStart()
{
	return start;
}

void
AccountInfoLimits_inner::setStart(std::string start)
{
	this->start = start;
}

std::string
AccountInfoLimits_inner::getEnd()
{
	return end;
}

void
AccountInfoLimits_inner::setEnd(std::string end)
{
	this->end = end;
}



