

#include "Tickets.h"

using namespace Tiny;

Tickets::Tickets()
{
	ima = std::string();
	custid = std::string();
	view = std::string();
	currentPage = int(0);
	limit = int(0);
	sortcol = int(0);
	sortdir = int(0);
	rowsOffset = int(0);
	tickets = std::list<TicketsRow>();
	pages = int(0);
	rowsTotal = int(0);
	inboxCount = int(0);
	countArray = Tickets_countArray();
	viewText = std::string();
}

Tickets::Tickets(std::string jsonString)
{
	this->fromJson(jsonString);
}

Tickets::~Tickets()
{

}

void
Tickets::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *imaKey = "ima";

    if(object.has_key(imaKey))
    {
        bourne::json value = object[imaKey];



        jsonToValue(&ima, value, "std::string");


    }

    const char *custidKey = "custid";

    if(object.has_key(custidKey))
    {
        bourne::json value = object[custidKey];



        jsonToValue(&custid, value, "std::string");


    }

    const char *viewKey = "view";

    if(object.has_key(viewKey))
    {
        bourne::json value = object[viewKey];



        jsonToValue(&view, value, "std::string");


    }

    const char *currentPageKey = "currentPage";

    if(object.has_key(currentPageKey))
    {
        bourne::json value = object[currentPageKey];



        jsonToValue(&currentPage, value, "int");


    }

    const char *limitKey = "limit";

    if(object.has_key(limitKey))
    {
        bourne::json value = object[limitKey];



        jsonToValue(&limit, value, "int");


    }

    const char *sortcolKey = "sortcol";

    if(object.has_key(sortcolKey))
    {
        bourne::json value = object[sortcolKey];



        jsonToValue(&sortcol, value, "int");


    }

    const char *sortdirKey = "sortdir";

    if(object.has_key(sortdirKey))
    {
        bourne::json value = object[sortdirKey];



        jsonToValue(&sortdir, value, "int");


    }

    const char *rowsOffsetKey = "rowsOffset";

    if(object.has_key(rowsOffsetKey))
    {
        bourne::json value = object[rowsOffsetKey];



        jsonToValue(&rowsOffset, value, "int");


    }

    const char *ticketsKey = "tickets";

    if(object.has_key(ticketsKey))
    {
        bourne::json value = object[ticketsKey];


        std::list<TicketsRow> tickets_list;
        TicketsRow element;
        for(auto& var : value.array_range())
        {


            element.fromJson(var.dump());

            tickets_list.push_back(element);
        }
        tickets = tickets_list;


    }

    const char *pagesKey = "pages";

    if(object.has_key(pagesKey))
    {
        bourne::json value = object[pagesKey];



        jsonToValue(&pages, value, "int");


    }

    const char *rowsTotalKey = "rowsTotal";

    if(object.has_key(rowsTotalKey))
    {
        bourne::json value = object[rowsTotalKey];



        jsonToValue(&rowsTotal, value, "int");


    }

    const char *inboxCountKey = "inboxCount";

    if(object.has_key(inboxCountKey))
    {
        bourne::json value = object[inboxCountKey];



        jsonToValue(&inboxCount, value, "int");


    }

    const char *countArrayKey = "countArray";

    if(object.has_key(countArrayKey))
    {
        bourne::json value = object[countArrayKey];




        Tickets_countArray* obj = &countArray;
		obj->fromJson(value.dump());

    }

    const char *viewTextKey = "viewText";

    if(object.has_key(viewTextKey))
    {
        bourne::json value = object[viewTextKey];



        jsonToValue(&viewText, value, "std::string");


    }


}

bourne::json
Tickets::toJson()
{
    bourne::json object = bourne::json::object();





    object["ima"] = getIma();






    object["custid"] = getCustid();






    object["view"] = getView();






    object["currentPage"] = getCurrentPage();






    object["limit"] = getLimit();






    object["sortcol"] = getSortcol();






    object["sortdir"] = getSortdir();






    object["rowsOffset"] = getRowsOffset();





    std::list<TicketsRow> tickets_list = getTickets();
    bourne::json tickets_arr = bourne::json::array();

    for(auto& var : tickets_list)
    {
        TicketsRow obj = var;
        tickets_arr.append(obj.toJson());
    }
    object["tickets"] = tickets_arr;







    object["pages"] = getPages();






    object["rowsTotal"] = getRowsTotal();






    object["inboxCount"] = getInboxCount();







	object["countArray"] = getCountArray().toJson();





    object["viewText"] = getViewText();



    return object;

}

std::string
Tickets::getIma()
{
	return ima;
}

void
Tickets::setIma(std::string ima)
{
	this->ima = ima;
}

std::string
Tickets::getCustid()
{
	return custid;
}

void
Tickets::setCustid(std::string custid)
{
	this->custid = custid;
}

std::string
Tickets::getView()
{
	return view;
}

void
Tickets::setView(std::string view)
{
	this->view = view;
}

int
Tickets::getCurrentPage()
{
	return currentPage;
}

void
Tickets::setCurrentPage(int currentPage)
{
	this->currentPage = currentPage;
}

int
Tickets::getLimit()
{
	return limit;
}

void
Tickets::setLimit(int limit)
{
	this->limit = limit;
}

int
Tickets::getSortcol()
{
	return sortcol;
}

void
Tickets::setSortcol(int sortcol)
{
	this->sortcol = sortcol;
}

int
Tickets::getSortdir()
{
	return sortdir;
}

void
Tickets::setSortdir(int sortdir)
{
	this->sortdir = sortdir;
}

int
Tickets::getRowsOffset()
{
	return rowsOffset;
}

void
Tickets::setRowsOffset(int rowsOffset)
{
	this->rowsOffset = rowsOffset;
}

std::list<TicketsRow>
Tickets::getTickets()
{
	return tickets;
}

void
Tickets::setTickets(std::list<TicketsRow> tickets)
{
	this->tickets = tickets;
}

int
Tickets::getPages()
{
	return pages;
}

void
Tickets::setPages(int pages)
{
	this->pages = pages;
}

int
Tickets::getRowsTotal()
{
	return rowsTotal;
}

void
Tickets::setRowsTotal(int rowsTotal)
{
	this->rowsTotal = rowsTotal;
}

int
Tickets::getInboxCount()
{
	return inboxCount;
}

void
Tickets::setInboxCount(int inboxCount)
{
	this->inboxCount = inboxCount;
}

Tickets_countArray
Tickets::getCountArray()
{
	return countArray;
}

void
Tickets::setCountArray(Tickets_countArray countArray)
{
	this->countArray = countArray;
}

std::string
Tickets::getViewText()
{
	return viewText;
}

void
Tickets::setViewText(std::string viewText)
{
	this->viewText = viewText;
}



