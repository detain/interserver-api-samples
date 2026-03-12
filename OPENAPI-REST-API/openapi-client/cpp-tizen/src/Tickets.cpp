#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Tickets.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Tickets::Tickets()
{
	//__init();
}

Tickets::~Tickets()
{
	//__cleanup();
}

void
Tickets::__init()
{
	//ima = std::string();
	//custid = std::string();
	//view = std::string();
	//currentPage = int(0);
	//limit = int(0);
	//sortcol = int(0);
	//sortdir = int(0);
	//rowsOffset = int(0);
	//new std::list()std::list> tickets;
	//pages = int(0);
	//rowsTotal = int(0);
	//inboxCount = int(0);
	//countArray = new Tickets_countArray();
	//viewText = std::string();
}

void
Tickets::__cleanup()
{
	//if(ima != NULL) {
	//
	//delete ima;
	//ima = NULL;
	//}
	//if(custid != NULL) {
	//
	//delete custid;
	//custid = NULL;
	//}
	//if(view != NULL) {
	//
	//delete view;
	//view = NULL;
	//}
	//if(currentPage != NULL) {
	//
	//delete currentPage;
	//currentPage = NULL;
	//}
	//if(limit != NULL) {
	//
	//delete limit;
	//limit = NULL;
	//}
	//if(sortcol != NULL) {
	//
	//delete sortcol;
	//sortcol = NULL;
	//}
	//if(sortdir != NULL) {
	//
	//delete sortdir;
	//sortdir = NULL;
	//}
	//if(rowsOffset != NULL) {
	//
	//delete rowsOffset;
	//rowsOffset = NULL;
	//}
	//if(tickets != NULL) {
	//tickets.RemoveAll(true);
	//delete tickets;
	//tickets = NULL;
	//}
	//if(pages != NULL) {
	//
	//delete pages;
	//pages = NULL;
	//}
	//if(rowsTotal != NULL) {
	//
	//delete rowsTotal;
	//rowsTotal = NULL;
	//}
	//if(inboxCount != NULL) {
	//
	//delete inboxCount;
	//inboxCount = NULL;
	//}
	//if(countArray != NULL) {
	//
	//delete countArray;
	//countArray = NULL;
	//}
	//if(viewText != NULL) {
	//
	//delete viewText;
	//viewText = NULL;
	//}
	//
}

void
Tickets::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *imaKey = "ima";
	node = json_object_get_member(pJsonObject, imaKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ima, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *custidKey = "custid";
	node = json_object_get_member(pJsonObject, custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *viewKey = "view";
	node = json_object_get_member(pJsonObject, viewKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&view, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currentPageKey = "currentPage";
	node = json_object_get_member(pJsonObject, currentPageKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&currentPage, node, "int", "");
		} else {
			
		}
	}
	const gchar *limitKey = "limit";
	node = json_object_get_member(pJsonObject, limitKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&limit, node, "int", "");
		} else {
			
		}
	}
	const gchar *sortcolKey = "sortcol";
	node = json_object_get_member(pJsonObject, sortcolKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sortcol, node, "int", "");
		} else {
			
		}
	}
	const gchar *sortdirKey = "sortdir";
	node = json_object_get_member(pJsonObject, sortdirKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sortdir, node, "int", "");
		} else {
			
		}
	}
	const gchar *rowsOffsetKey = "rowsOffset";
	node = json_object_get_member(pJsonObject, rowsOffsetKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&rowsOffset, node, "int", "");
		} else {
			
		}
	}
	const gchar *ticketsKey = "tickets";
	node = json_object_get_member(pJsonObject, ticketsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<TicketsRow> new_list;
			TicketsRow inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("TicketsRow")) {
					jsonToValue(&inst, temp_json, "TicketsRow", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			tickets = new_list;
		}
		
	}
	const gchar *pagesKey = "pages";
	node = json_object_get_member(pJsonObject, pagesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&pages, node, "int", "");
		} else {
			
		}
	}
	const gchar *rowsTotalKey = "rowsTotal";
	node = json_object_get_member(pJsonObject, rowsTotalKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&rowsTotal, node, "int", "");
		} else {
			
		}
	}
	const gchar *inboxCountKey = "inboxCount";
	node = json_object_get_member(pJsonObject, inboxCountKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&inboxCount, node, "int", "");
		} else {
			
		}
	}
	const gchar *countArrayKey = "countArray";
	node = json_object_get_member(pJsonObject, countArrayKey);
	if (node !=NULL) {
	

		if (isprimitive("Tickets_countArray")) {
			jsonToValue(&countArray, node, "Tickets_countArray", "Tickets_countArray");
		} else {
			
			Tickets_countArray* obj = static_cast<Tickets_countArray*> (&countArray);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *viewTextKey = "viewText";
	node = json_object_get_member(pJsonObject, viewTextKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&viewText, node, "std::string", "");
		} else {
			
		}
	}
}

Tickets::Tickets(char* json)
{
	this->fromJson(json);
}

char*
Tickets::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getIma();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *imaKey = "ima";
	json_object_set_member(pJsonObject, imaKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *custidKey = "custid";
	json_object_set_member(pJsonObject, custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getView();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *viewKey = "view";
	json_object_set_member(pJsonObject, viewKey, node);
	if (isprimitive("int")) {
		int obj = getCurrentPage();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *currentPageKey = "currentPage";
	json_object_set_member(pJsonObject, currentPageKey, node);
	if (isprimitive("int")) {
		int obj = getLimit();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *limitKey = "limit";
	json_object_set_member(pJsonObject, limitKey, node);
	if (isprimitive("int")) {
		int obj = getSortcol();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sortcolKey = "sortcol";
	json_object_set_member(pJsonObject, sortcolKey, node);
	if (isprimitive("int")) {
		int obj = getSortdir();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sortdirKey = "sortdir";
	json_object_set_member(pJsonObject, sortdirKey, node);
	if (isprimitive("int")) {
		int obj = getRowsOffset();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *rowsOffsetKey = "rowsOffset";
	json_object_set_member(pJsonObject, rowsOffsetKey, node);
	if (isprimitive("TicketsRow")) {
		list<TicketsRow> new_list = static_cast<list <TicketsRow> > (getTickets());
		node = converttoJson(&new_list, "TicketsRow", "array");
	} else {
		node = json_node_alloc();
		list<TicketsRow> new_list = static_cast<list <TicketsRow> > (getTickets());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<TicketsRow>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			TicketsRow obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *ticketsKey = "tickets";
	json_object_set_member(pJsonObject, ticketsKey, node);
	if (isprimitive("int")) {
		int obj = getPages();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *pagesKey = "pages";
	json_object_set_member(pJsonObject, pagesKey, node);
	if (isprimitive("int")) {
		int obj = getRowsTotal();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *rowsTotalKey = "rowsTotal";
	json_object_set_member(pJsonObject, rowsTotalKey, node);
	if (isprimitive("int")) {
		int obj = getInboxCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *inboxCountKey = "inboxCount";
	json_object_set_member(pJsonObject, inboxCountKey, node);
	if (isprimitive("Tickets_countArray")) {
		Tickets_countArray obj = getCountArray();
		node = converttoJson(&obj, "Tickets_countArray", "");
	}
	else {
		
		Tickets_countArray obj = static_cast<Tickets_countArray> (getCountArray());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *countArrayKey = "countArray";
	json_object_set_member(pJsonObject, countArrayKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getViewText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *viewTextKey = "viewText";
	json_object_set_member(pJsonObject, viewTextKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
Tickets::getIma()
{
	return ima;
}

void
Tickets::setIma(std::string  ima)
{
	this->ima = ima;
}

std::string
Tickets::getCustid()
{
	return custid;
}

void
Tickets::setCustid(std::string  custid)
{
	this->custid = custid;
}

std::string
Tickets::getView()
{
	return view;
}

void
Tickets::setView(std::string  view)
{
	this->view = view;
}

int
Tickets::getCurrentPage()
{
	return currentPage;
}

void
Tickets::setCurrentPage(int  currentPage)
{
	this->currentPage = currentPage;
}

int
Tickets::getLimit()
{
	return limit;
}

void
Tickets::setLimit(int  limit)
{
	this->limit = limit;
}

int
Tickets::getSortcol()
{
	return sortcol;
}

void
Tickets::setSortcol(int  sortcol)
{
	this->sortcol = sortcol;
}

int
Tickets::getSortdir()
{
	return sortdir;
}

void
Tickets::setSortdir(int  sortdir)
{
	this->sortdir = sortdir;
}

int
Tickets::getRowsOffset()
{
	return rowsOffset;
}

void
Tickets::setRowsOffset(int  rowsOffset)
{
	this->rowsOffset = rowsOffset;
}

std::list<TicketsRow>
Tickets::getTickets()
{
	return tickets;
}

void
Tickets::setTickets(std::list <TicketsRow> tickets)
{
	this->tickets = tickets;
}

int
Tickets::getPages()
{
	return pages;
}

void
Tickets::setPages(int  pages)
{
	this->pages = pages;
}

int
Tickets::getRowsTotal()
{
	return rowsTotal;
}

void
Tickets::setRowsTotal(int  rowsTotal)
{
	this->rowsTotal = rowsTotal;
}

int
Tickets::getInboxCount()
{
	return inboxCount;
}

void
Tickets::setInboxCount(int  inboxCount)
{
	this->inboxCount = inboxCount;
}

Tickets_countArray
Tickets::getCountArray()
{
	return countArray;
}

void
Tickets::setCountArray(Tickets_countArray  countArray)
{
	this->countArray = countArray;
}

std::string
Tickets::getViewText()
{
	return viewText;
}

void
Tickets::setViewText(std::string  viewText)
{
	this->viewText = viewText;
}


