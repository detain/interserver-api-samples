

#include "MailExtraInfoTable.h"

using namespace Tiny;

MailExtraInfoTable::MailExtraInfoTable()
{
	title = std::string();
	rows = std::list<MailExtraInfoTableRow>();
}

MailExtraInfoTable::MailExtraInfoTable(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailExtraInfoTable::~MailExtraInfoTable()
{

}

void
MailExtraInfoTable::fromJson(std::string jsonObj)
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


        std::list<MailExtraInfoTableRow> rows_list;
        MailExtraInfoTableRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
MailExtraInfoTable::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();





    std::list<MailExtraInfoTableRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        MailExtraInfoTableRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;




    return object;

}

std::string
MailExtraInfoTable::getTitle()
{
	return title;
}

void
MailExtraInfoTable::setTitle(std::string title)
{
	this->title = title;
}

std::list<MailExtraInfoTableRow>
MailExtraInfoTable::getRows()
{
	return rows;
}

void
MailExtraInfoTable::setRows(std::list<MailExtraInfoTableRow> rows)
{
	this->rows = rows;
}



