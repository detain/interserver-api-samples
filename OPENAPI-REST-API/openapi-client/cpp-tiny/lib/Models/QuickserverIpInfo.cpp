

#include "QuickserverIpInfo.h"

using namespace Tiny;

QuickserverIpInfo::QuickserverIpInfo()
{
	title = std::string();
	rows = std::list<QuickserverIpTableRow>();
}

QuickserverIpInfo::QuickserverIpInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverIpInfo::~QuickserverIpInfo()
{

}

void
QuickserverIpInfo::fromJson(std::string jsonObj)
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


        std::list<QuickserverIpTableRow> rows_list;
        QuickserverIpTableRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
QuickserverIpInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();





    std::list<QuickserverIpTableRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        QuickserverIpTableRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;




    return object;

}

std::string
QuickserverIpInfo::getTitle()
{
	return title;
}

void
QuickserverIpInfo::setTitle(std::string title)
{
	this->title = title;
}

std::list<QuickserverIpTableRow>
QuickserverIpInfo::getRows()
{
	return rows;
}

void
QuickserverIpInfo::setRows(std::list<QuickserverIpTableRow> rows)
{
	this->rows = rows;
}



