

#include "BackupIPInfo.h"

using namespace Tiny;

BackupIPInfo::BackupIPInfo()
{
	title = std::string();
	rows = std::list<BackupIPInfoRow>();
}

BackupIPInfo::BackupIPInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

BackupIPInfo::~BackupIPInfo()
{

}

void
BackupIPInfo::fromJson(std::string jsonObj)
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


        std::list<BackupIPInfoRow> rows_list;
        BackupIPInfoRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
BackupIPInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();





    std::list<BackupIPInfoRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        BackupIPInfoRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;




    return object;

}

std::string
BackupIPInfo::getTitle()
{
	return title;
}

void
BackupIPInfo::setTitle(std::string title)
{
	this->title = title;
}

std::list<BackupIPInfoRow>
BackupIPInfo::getRows()
{
	return rows;
}

void
BackupIPInfo::setRows(std::list<BackupIPInfoRow> rows)
{
	this->rows = rows;
}



