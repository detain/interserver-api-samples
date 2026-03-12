

#include "VpsTrafficHistoryResponse.h"

using namespace Tiny;

VpsTrafficHistoryResponse::VpsTrafficHistoryResponse()
{
	hour = VpsTrafficHistorySectionResponse();
	day = VpsTrafficHistorySectionResponse();
}

VpsTrafficHistoryResponse::VpsTrafficHistoryResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficHistoryResponse::~VpsTrafficHistoryResponse()
{

}

void
VpsTrafficHistoryResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *hourKey = "hour";

    if(object.has_key(hourKey))
    {
        bourne::json value = object[hourKey];




        VpsTrafficHistorySectionResponse* obj = &hour;
		obj->fromJson(value.dump());

    }

    const char *dayKey = "day";

    if(object.has_key(dayKey))
    {
        bourne::json value = object[dayKey];




        VpsTrafficHistorySectionResponse* obj = &day;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsTrafficHistoryResponse::toJson()
{
    bourne::json object = bourne::json::object();






	object["hour"] = getHour().toJson();






	object["day"] = getDay().toJson();


    return object;

}

VpsTrafficHistorySectionResponse
VpsTrafficHistoryResponse::getHour()
{
	return hour;
}

void
VpsTrafficHistoryResponse::setHour(VpsTrafficHistorySectionResponse hour)
{
	this->hour = hour;
}

VpsTrafficHistorySectionResponse
VpsTrafficHistoryResponse::getDay()
{
	return day;
}

void
VpsTrafficHistoryResponse::setDay(VpsTrafficHistorySectionResponse day)
{
	this->day = day;
}



