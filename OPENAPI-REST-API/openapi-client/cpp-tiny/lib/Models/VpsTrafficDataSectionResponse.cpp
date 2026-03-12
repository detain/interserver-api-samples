

#include "VpsTrafficDataSectionResponse.h"

using namespace Tiny;

VpsTrafficDataSectionResponse::VpsTrafficDataSectionResponse()
{
	name = std::string();
	data = std::list<VPSTrafficDataDataSectionResponse>();
}

VpsTrafficDataSectionResponse::VpsTrafficDataSectionResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsTrafficDataSectionResponse::~VpsTrafficDataSectionResponse()
{

}

void
VpsTrafficDataSectionResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *nameKey = "name";

    if(object.has_key(nameKey))
    {
        bourne::json value = object[nameKey];



        jsonToValue(&name, value, "std::string");


    }

    const char *dataKey = "data";

    if(object.has_key(dataKey))
    {
        bourne::json value = object[dataKey];


        std::list<VPSTrafficDataDataSectionResponse> data_list;
        VPSTrafficDataDataSectionResponse element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            data_list.push_back(element);
        }
        data = data_list;


    }


}

bourne::json
VpsTrafficDataSectionResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["name"] = getName();





    std::list<VPSTrafficDataDataSectionResponse> data_list = getData();
    bourne::json data_arr = bourne::json::array();

    for(auto& var : data_list)
    {
        VPSTrafficDataDataSectionResponse obj = var;
        data_arr.append(obj.toJson());
    }
    object["data"] = data_arr;




    return object;

}

std::string
VpsTrafficDataSectionResponse::getName()
{
	return name;
}

void
VpsTrafficDataSectionResponse::setName(std::string name)
{
	this->name = name;
}

std::list<VPSTrafficDataDataSectionResponse>
VpsTrafficDataSectionResponse::getData()
{
	return data;
}

void
VpsTrafficDataSectionResponse::setData(std::list<VPSTrafficDataDataSectionResponse> data)
{
	this->data = data;
}



