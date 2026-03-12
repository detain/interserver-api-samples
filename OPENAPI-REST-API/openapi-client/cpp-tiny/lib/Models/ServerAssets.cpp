

#include "ServerAssets.h"

using namespace Tiny;

ServerAssets::ServerAssets()
{
	title = std::string();
	size = int(0);
	type = std::string();
	header = std::list<std::string>();
	rows = std::list<std::list>();
}

ServerAssets::ServerAssets(std::string jsonString)
{
	this->fromJson(jsonString);
}

ServerAssets::~ServerAssets()
{

}

void
ServerAssets::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *titleKey = "title";

    if(object.has_key(titleKey))
    {
        bourne::json value = object[titleKey];



        jsonToValue(&title, value, "std::string");


    }

    const char *sizeKey = "size";

    if(object.has_key(sizeKey))
    {
        bourne::json value = object[sizeKey];



        jsonToValue(&size, value, "int");


    }

    const char *typeKey = "type";

    if(object.has_key(typeKey))
    {
        bourne::json value = object[typeKey];



        jsonToValue(&type, value, "std::string");


    }

    const char *headerKey = "header";

    if(object.has_key(headerKey))
    {
        bourne::json value = object[headerKey];


        std::list<std::string> header_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            header_list.push_back(element);
        }
        header = header_list;


    }

    const char *rowsKey = "rows";

    if(object.has_key(rowsKey))
    {
        bourne::json value = object[rowsKey];


        std::list<std::list> rows_list;
        std::list element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::list");


            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
ServerAssets::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();






    object["size"] = getSize();






    object["type"] = getType();





    std::list<std::string> header_list = getHeader();
    bourne::json header_arr = bourne::json::array();

    for(auto& var : header_list)
    {
        header_arr.append(var);
    }
    object["header"] = header_arr;








    std::list<std::list> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        rows_arr.append(var);
    }
    object["rows"] = rows_arr;






    return object;

}

std::string
ServerAssets::getTitle()
{
	return title;
}

void
ServerAssets::setTitle(std::string title)
{
	this->title = title;
}

int
ServerAssets::getSize()
{
	return size;
}

void
ServerAssets::setSize(int size)
{
	this->size = size;
}

std::string
ServerAssets::getType()
{
	return type;
}

void
ServerAssets::setType(std::string type)
{
	this->type = type;
}

std::list<std::string>
ServerAssets::getHeader()
{
	return header;
}

void
ServerAssets::setHeader(std::list<std::string> header)
{
	this->header = header;
}

std::list<std::list>
ServerAssets::getRows()
{
	return rows;
}

void
ServerAssets::setRows(std::list<std::list> rows)
{
	this->rows = rows;
}



