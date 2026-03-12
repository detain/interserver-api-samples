

#include "VpsTrafficResponse.h"

using namespace Tiny;

VpsTrafficResponse::VpsTrafficResponse()
{
	name = std::string();
	target = std::string();
	interval = int(0);
	history = VpsTrafficHistoryResponse();
	last = std::string();
	times = std::list<std::string>();
	totals = VpsTrafficTotalsResposne();
	usage = VpsTrafficUsageResponse();
	data = std::list<VpsTrafficDataSectionResponse>();
}

VpsTrafficResponse::VpsTrafficResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficResponse::~VpsTrafficResponse()
{

}

void
VpsTrafficResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *targetKey = "target";

    if(object.has_key(targetKey))
    {
        bourne::json value = object[targetKey];



        jsonToValue(&target, value, "std::string");


    }

    const char *intervalKey = "interval";

    if(object.has_key(intervalKey))
    {
        bourne::json value = object[intervalKey];



        jsonToValue(&interval, value, "int");


    }

    const char *historyKey = "history";

    if(object.has_key(historyKey))
    {
        bourne::json value = object[historyKey];




        VpsTrafficHistoryResponse* obj = &history;
		obj->fromJson(value.dump());

    }

    const char *lastKey = "last";

    if(object.has_key(lastKey))
    {
        bourne::json value = object[lastKey];



        jsonToValue(&last, value, "std::string");


    }

    const char *timesKey = "times";

    if(object.has_key(timesKey))
    {
        bourne::json value = object[timesKey];


        std::list<std::string> times_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            times_list.push_back(element);
        }
        times = times_list;


    }

    const char *totalsKey = "totals";

    if(object.has_key(totalsKey))
    {
        bourne::json value = object[totalsKey];




        VpsTrafficTotalsResposne* obj = &totals;
		obj->fromJson(value.dump());

    }

    const char *usageKey = "usage";

    if(object.has_key(usageKey))
    {
        bourne::json value = object[usageKey];




        VpsTrafficUsageResponse* obj = &usage;
		obj->fromJson(value.dump());

    }

    const char *dataKey = "data";

    if(object.has_key(dataKey))
    {
        bourne::json value = object[dataKey];


        std::list<VpsTrafficDataSectionResponse> data_list;
        VpsTrafficDataSectionResponse element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            data_list.push_back(element);
        }
        data = data_list;


    }


}

bourne::json
VpsTrafficResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();






    object["target"] = getTarget();






    object["interval"] = getInterval();







	object["history"] = getHistory().toJson();





    object["last"] = getLast();





    std::list<std::string> times_list = getTimes();
    bourne::json times_arr = bourne::json::array();

    for(auto& var : times_list)
    {
        times_arr.append(var);
    }
    object["times"] = times_arr;










	object["totals"] = getTotals().toJson();






	object["usage"] = getUsage().toJson();




    std::list<VpsTrafficDataSectionResponse> data_list = getData();
    bourne::json data_arr = bourne::json::array();

    for(auto& var : data_list)
    {
        VpsTrafficDataSectionResponse obj = var;
        data_arr.append(obj.toJson());
    }
    object["data"] = data_arr;




    return object;

}

std::string
VpsTrafficResponse::getName()
{
	return name;
}

void
VpsTrafficResponse::setName(std::string name)
{
	this->name = name;
}

std::string
VpsTrafficResponse::getTarget()
{
	return target;
}

void
VpsTrafficResponse::setTarget(std::string target)
{
	this->target = target;
}

int
VpsTrafficResponse::getInterval()
{
	return interval;
}

void
VpsTrafficResponse::setInterval(int interval)
{
	this->interval = interval;
}

VpsTrafficHistoryResponse
VpsTrafficResponse::getHistory()
{
	return history;
}

void
VpsTrafficResponse::setHistory(VpsTrafficHistoryResponse history)
{
	this->history = history;
}

std::string
VpsTrafficResponse::getLast()
{
	return last;
}

void
VpsTrafficResponse::setLast(std::string last)
{
	this->last = last;
}

std::list<std::string>
VpsTrafficResponse::getTimes()
{
	return times;
}

void
VpsTrafficResponse::setTimes(std::list<std::string> times)
{
	this->times = times;
}

VpsTrafficTotalsResposne
VpsTrafficResponse::getTotals()
{
	return totals;
}

void
VpsTrafficResponse::setTotals(VpsTrafficTotalsResposne totals)
{
	this->totals = totals;
}

VpsTrafficUsageResponse
VpsTrafficResponse::getUsage()
{
	return usage;
}

void
VpsTrafficResponse::setUsage(VpsTrafficUsageResponse usage)
{
	this->usage = usage;
}

std::list<VpsTrafficDataSectionResponse>
VpsTrafficResponse::getData()
{
	return data;
}

void
VpsTrafficResponse::setData(std::list<VpsTrafficDataSectionResponse> data)
{
	this->data = data;
}



