

#include "TimezoneUpdate.h"

using namespace Tiny;

TimezoneUpdate::TimezoneUpdate()
{
	timezone = std::string();
}

TimezoneUpdate::TimezoneUpdate(std::string jsonString)
{
	this->fromJson(jsonString);
}

TimezoneUpdate::~TimezoneUpdate()
{

}

void
TimezoneUpdate::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *timezoneKey = "timezone";

    if(object.has_key(timezoneKey))
    {
        bourne::json value = object[timezoneKey];



        jsonToValue(&timezone, value, "std::string");


    }


}

bourne::json
TimezoneUpdate::toJson()
{
    bourne::json object = bourne::json::object();





    object["timezone"] = getTimezone();



    return object;

}

std::string
TimezoneUpdate::getTimezone()
{
	return timezone;
}

void
TimezoneUpdate::setTimezone(std::string timezone)
{
	this->timezone = timezone;
}



