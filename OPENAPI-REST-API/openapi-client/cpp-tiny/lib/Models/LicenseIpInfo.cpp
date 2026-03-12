

#include "LicenseIpInfo.h"

using namespace Tiny;

LicenseIpInfo::LicenseIpInfo()
{
	title = std::string();
	rows = std::list<LicenseIpInfoRow>();
}

LicenseIpInfo::LicenseIpInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

LicenseIpInfo::~LicenseIpInfo()
{

}

void
LicenseIpInfo::fromJson(std::string jsonObj)
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


        std::list<LicenseIpInfoRow> rows_list;
        LicenseIpInfoRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
LicenseIpInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();





    std::list<LicenseIpInfoRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        LicenseIpInfoRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;




    return object;

}

std::string
LicenseIpInfo::getTitle()
{
	return title;
}

void
LicenseIpInfo::setTitle(std::string title)
{
	this->title = title;
}

std::list<LicenseIpInfoRow>
LicenseIpInfo::getRows()
{
	return rows;
}

void
LicenseIpInfo::setRows(std::list<LicenseIpInfoRow> rows)
{
	this->rows = rows;
}



