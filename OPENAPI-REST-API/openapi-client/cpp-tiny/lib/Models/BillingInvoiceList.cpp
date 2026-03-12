

#include "BillingInvoiceList.h"

using namespace Tiny;

BillingInvoiceList::BillingInvoiceList()
{
	rows = std::list<Object>();
	summary = null;
}

BillingInvoiceList::BillingInvoiceList(std::string jsonString)
{
	this->fromJson(jsonString);
}

BillingInvoiceList::~BillingInvoiceList()
{

}

void
BillingInvoiceList::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *rowsKey = "rows";

    if(object.has_key(rowsKey))
    {
        bourne::json value = object[rowsKey];


        std::list<Object> rows_list;
        Object element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            rows_list.push_back(element);
        }
        rows = rows_list;


    }

    const char *summaryKey = "summary";

    if(object.has_key(summaryKey))
    {
        bourne::json value = object[summaryKey];




        Object* obj = &summary;
		obj->fromJson(value.dump());

    }


}

bourne::json
BillingInvoiceList::toJson()
{
    bourne::json object = bourne::json::object();




    std::list<Object> rows_list = getRows();
    bourne::json rows_arr = bourne::json::array();

    for(auto& var : rows_list)
    {
        Object obj = var;
        rows_arr.append(obj.toJson());
    }
    object["rows"] = rows_arr;








	object["summary"] = getSummary().toJson();


    return object;

}

std::list<Object>
BillingInvoiceList::getRows()
{
	return rows;
}

void
BillingInvoiceList::setRows(std::list<Object> rows)
{
	this->rows = rows;
}

Object
BillingInvoiceList::getSummary()
{
	return summary;
}

void
BillingInvoiceList::setSummary(Object summary)
{
	this->summary = summary;
}



