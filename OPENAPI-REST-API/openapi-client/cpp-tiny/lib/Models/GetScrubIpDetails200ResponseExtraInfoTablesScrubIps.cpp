

#include "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips.h"

using namespace Tiny;

GetScrubIpDetails_200_response_extraInfoTables_scrub_ips::GetScrubIpDetails_200_response_extraInfoTables_scrub_ips()
{
	title = std::string();
	rows = std::list<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner>();
}

GetScrubIpDetails_200_response_extraInfoTables_scrub_ips::GetScrubIpDetails_200_response_extraInfoTables_scrub_ips(std::string jsonString)
{
	this->fromJson(jsonString);
}

GetScrubIpDetails_200_response_extraInfoTables_scrub_ips::~GetScrubIpDetails_200_response_extraInfoTables_scrub_ips()
{

}

void
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *titleKey = "title";

    if(object.has_key(titleKey))
    {
        bourne::json value = object[titleKey];



        jsonToValue(&title, value, "std::string");


    }

    const char *rowsKey = "rows";

    if(object.has_key(rowsKey))
    {
        bourne::json value = object[rowsKey];


        std::list<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner> rows_list;
        GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();





    std::list<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;




    return object;

}

std::string
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips::getTitle()
{
	return title;
}

void
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips::setTitle(std::string title)
{
	this->title = title;
}

std::list<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner>
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips::getRows()
{
	return rows;
}

void
GetScrubIpDetails_200_response_extraInfoTables_scrub_ips::setRows(std::list<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner> rows)
{
	this->rows = rows;
}



