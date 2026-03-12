

#include "MailDeliverabilityResponse.h"

using namespace Tiny;

MailDeliverabilityResponse::MailDeliverabilityResponse()
{
	stat = null;
	percent = float(0);
	table_data = std::list<std::list>();
}

MailDeliverabilityResponse::MailDeliverabilityResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailDeliverabilityResponse::~MailDeliverabilityResponse()
{

}

void
MailDeliverabilityResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *statKey = "stat";

    if(object.has_key(statKey))
    {
        bourne::json value = object[statKey];




        Object* obj = &stat;
		obj->fromJson(value.dump());

    }

    const char *percentKey = "percent";

    if(object.has_key(percentKey))
    {
        bourne::json value = object[percentKey];



        jsonToValue(&percent, value, "long");


    }

    const char *table_dataKey = "table_data";

    if(object.has_key(table_dataKey))
    {
        bourne::json value = object[table_dataKey];


        std::list<std::list> table_data_list;
        std::list element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::list");


            table_data_list.push_back(element);
        }
        table_data = table_data_list;


    }


}

bourne::json
MailDeliverabilityResponse::toJson()
{
    bourne::json object = bourne::json::object();






	object["stat"] = getStat().toJson();





    object["percent"] = getPercent();





    std::list<std::list> table_data_list = getTableData();
    bourne::json table_data_arr = bourne::json::array();

    for(auto& var : table_data_list)
    {
        table_data_arr.append(var);
    }
    object["table_data"] = table_data_arr;






    return object;

}

Object
MailDeliverabilityResponse::getStat()
{
	return stat;
}

void
MailDeliverabilityResponse::setStat(Object stat)
{
	this->stat = stat;
}

long
MailDeliverabilityResponse::getPercent()
{
	return percent;
}

void
MailDeliverabilityResponse::setPercent(long percent)
{
	this->percent = percent;
}

std::list<std::list>
MailDeliverabilityResponse::getTableData()
{
	return table_data;
}

void
MailDeliverabilityResponse::setTableData(std::list<std::list> table_data)
{
	this->table_data = table_data;
}



