

#include "VpsIPInfo.h"

using namespace Tiny;

VpsIPInfo::VpsIPInfo()
{
	title = std::string();
	rows = std::list<VpsIPInfoRow>();
}

VpsIPInfo::VpsIPInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

VpsIPInfo::~VpsIPInfo()
{

}

void
VpsIPInfo::fromJson(std::string jsonObj)
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


        std::list<VpsIPInfoRow> rows_list;
        VpsIPInfoRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
VpsIPInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();





    std::list<VpsIPInfoRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        VpsIPInfoRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;




    return object;

}

std::string
VpsIPInfo::getTitle()
{
	return title;
}

void
VpsIPInfo::setTitle(std::string title)
{
	this->title = title;
}

std::list<VpsIPInfoRow>
VpsIPInfo::getRows()
{
	return rows;
}

void
VpsIPInfo::setRows(std::list<VpsIPInfoRow> rows)
{
	this->rows = rows;
}



