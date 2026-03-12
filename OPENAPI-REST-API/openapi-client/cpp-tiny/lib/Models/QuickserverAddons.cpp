

#include "QuickserverAddons.h"

using namespace Tiny;

QuickserverAddons::QuickserverAddons()
{
	title = std::string();
	rows = std::list<QuickserverAddonsRow>();
}

QuickserverAddons::QuickserverAddons(std::string jsonString)
{
	this->fromJson(jsonString);
}

QuickserverAddons::~QuickserverAddons()
{

}

void
QuickserverAddons::fromJson(std::string jsonObj)
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


        std::list<QuickserverAddonsRow> rows_list;
        QuickserverAddonsRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
QuickserverAddons::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();





    std::list<QuickserverAddonsRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        QuickserverAddonsRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;




    return object;

}

std::string
QuickserverAddons::getTitle()
{
	return title;
}

void
QuickserverAddons::setTitle(std::string title)
{
	this->title = title;
}

std::list<QuickserverAddonsRow>
QuickserverAddons::getRows()
{
	return rows;
}

void
QuickserverAddons::setRows(std::list<QuickserverAddonsRow> rows)
{
	this->rows = rows;
}



