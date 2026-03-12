

#include "MailTutorialsTable.h"

using namespace Tiny;

MailTutorialsTable::MailTutorialsTable()
{
	title = std::string();
	rows = std::list<MailTutorialsTableRow>();
}

MailTutorialsTable::MailTutorialsTable(std::string jsonString)
{
	this->fromJson(jsonString);
}

MailTutorialsTable::~MailTutorialsTable()
{

}

void
MailTutorialsTable::fromJson(std::string jsonObj)
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


        std::list<MailTutorialsTableRow> rows_list;
        MailTutorialsTableRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }


}

bourne::json
MailTutorialsTable::toJson()
{
    bourne::json object = bourne::json::object();





    object["title"] = getTitle();





    std::list<MailTutorialsTableRow> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        MailTutorialsTableRow obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;




    return object;

}

std::string
MailTutorialsTable::getTitle()
{
	return title;
}

void
MailTutorialsTable::setTitle(std::string title)
{
	this->title = title;
}

std::list<MailTutorialsTableRow>
MailTutorialsTable::getRows()
{
	return rows;
}

void
MailTutorialsTable::setRows(std::list<MailTutorialsTableRow> rows)
{
	this->rows = rows;
}



