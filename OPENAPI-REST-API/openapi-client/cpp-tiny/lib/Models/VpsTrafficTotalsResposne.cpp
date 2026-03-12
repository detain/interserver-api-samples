

#include "VpsTrafficTotalsResposne.h"

using namespace Tiny;

VpsTrafficTotalsResposne::VpsTrafficTotalsResposne()
{
	day = VpsTrafficTotalsSectionResponse();
	month = VpsTrafficTotalsSectionResponse();
	year = VpsTrafficTotalsSectionResponse();
	all = VpsTrafficTotalsSectionResponse();
}

VpsTrafficTotalsResposne::VpsTrafficTotalsResposne(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficTotalsResposne::~VpsTrafficTotalsResposne()
{

}

void
VpsTrafficTotalsResposne::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *dayKey = "day";

    if(object.has_key(dayKey))
    {
        bourne::json value = object[dayKey];




        VpsTrafficTotalsSectionResponse* obj = &day;
		obj->fromJson(value.dump());

    }

    const char *monthKey = "month";

    if(object.has_key(monthKey))
    {
        bourne::json value = object[monthKey];




        VpsTrafficTotalsSectionResponse* obj = &month;
		obj->fromJson(value.dump());

    }

    const char *yearKey = "year";

    if(object.has_key(yearKey))
    {
        bourne::json value = object[yearKey];




        VpsTrafficTotalsSectionResponse* obj = &year;
		obj->fromJson(value.dump());

    }

    const char *allKey = "all";

    if(object.has_key(allKey))
    {
        bourne::json value = object[allKey];




        VpsTrafficTotalsSectionResponse* obj = &all;
		obj->fromJson(value.dump());

    }


}

bourne::json
VpsTrafficTotalsResposne::toJson()
{
    bourne::json object = bourne::json::object();






	object["day"] = getDay().toJson();






	object["month"] = getMonth().toJson();






	object["year"] = getYear().toJson();






	object["all"] = getAll().toJson();


    return object;

}

VpsTrafficTotalsSectionResponse
VpsTrafficTotalsResposne::getDay()
{
	return day;
}

void
VpsTrafficTotalsResposne::setDay(VpsTrafficTotalsSectionResponse day)
{
	this->day = day;
}

VpsTrafficTotalsSectionResponse
VpsTrafficTotalsResposne::getMonth()
{
	return month;
}

void
VpsTrafficTotalsResposne::setMonth(VpsTrafficTotalsSectionResponse month)
{
	this->month = month;
}

VpsTrafficTotalsSectionResponse
VpsTrafficTotalsResposne::getYear()
{
	return year;
}

void
VpsTrafficTotalsResposne::setYear(VpsTrafficTotalsSectionResponse year)
{
	this->year = year;
}

VpsTrafficTotalsSectionResponse
VpsTrafficTotalsResposne::getAll()
{
	return all;
}

void
VpsTrafficTotalsResposne::setAll(VpsTrafficTotalsSectionResponse all)
{
	this->all = all;
}



