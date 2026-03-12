

#include "WebsiteTable.h"

using namespace Tiny;

WebsiteTable::WebsiteTable()
{
	title = std::string();
	rows = std::list<WebsiteTableRow>();
}

WebsiteTable::WebsiteTable(std::string jsonString)
{
	this->fromJson(jsonString);
}

WebsiteTable::~WebsiteTable()
{

}

void
WebsiteTable::fromJson(std::string jsonObj)
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


        std::list<WebsiteTableRow> rows_list;
        WebsiteTableRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
WebsiteTable::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();





    std::list<WebsiteTableRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        WebsiteTableRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;




    return object;

}

std::string
WebsiteTable::getTitle()
{
	return title;
}

void
WebsiteTable::setTitle(std::string title)
{
	this->title = title;
}

std::list<WebsiteTableRow>
WebsiteTable::getRows()
{
	return rows;
}

void
WebsiteTable::setRows(std::list<WebsiteTableRow> rows)
{
	this->rows = rows;
}



