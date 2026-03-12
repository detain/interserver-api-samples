

#include "VpsTrafficHistorySectionResponse.h"

using namespace Tiny;

VpsTrafficHistorySectionResponse::VpsTrafficHistorySectionResponse()
{
	data = std::list<VpsTrafficHistorySectionDataResponse>();
	times = std::list<std::string>();
}

VpsTrafficHistorySectionResponse::VpsTrafficHistorySectionResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficHistorySectionResponse::~VpsTrafficHistorySectionResponse()
{

}

void
VpsTrafficHistorySectionResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *dataKey = "data";

    if(object.has_key(dataKey))
    {
        bourne::json value = object[dataKey];


        std::list<VpsTrafficHistorySectionDataResponse> data_list;
        VpsTrafficHistorySectionDataResponse element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            data_list.push_back(element);
        }
        data = data_list;


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


}

bourne::json
VpsTrafficHistorySectionResponse::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<VpsTrafficHistorySectionDataResponse> data_list = getData();
    bourne::json data_arr = bourne::json::array();

    for(auto& var : data_list)
    {
        VpsTrafficHistorySectionDataResponse obj = var;
        data_arr.append(obj.toJson());
    }
    object["data"] = data_arr;






    std::list<std::string> times_list = getTimes();
    bourne::json times_arr = bourne::json::array();

    for(auto& var : times_list)
    {
        times_arr.append(var);
    }
    object["times"] = times_arr;






    return object;

}

std::list<VpsTrafficHistorySectionDataResponse>
VpsTrafficHistorySectionResponse::getData()
{
	return data;
}

void
VpsTrafficHistorySectionResponse::setData(std::list<VpsTrafficHistorySectionDataResponse> data)
{
	this->data = data;
}

std::list<std::string>
VpsTrafficHistorySectionResponse::getTimes()
{
	return times;
}

void
VpsTrafficHistorySectionResponse::setTimes(std::list<std::string> times)
{
	this->times = times;
}



