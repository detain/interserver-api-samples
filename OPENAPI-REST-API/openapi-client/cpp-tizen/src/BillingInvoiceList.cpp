#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BillingInvoiceList.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BillingInvoiceList::BillingInvoiceList()
{
	//__init();
}

BillingInvoiceList::~BillingInvoiceList()
{
	//__cleanup();
}

void
BillingInvoiceList::__init()
{
	//new std::list()std::list> rows;
	//summary = null;
}

void
BillingInvoiceList::__cleanup()
{
	//if(rows != NULL) {
	//rows.RemoveAll(true);
	//delete rows;
	//rows = NULL;
	//}
	//if(summary != NULL) {
	//
	//delete summary;
	//summary = NULL;
	//}
	//
}

void
BillingInvoiceList::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *rowsKey = "rows";
	node = json_object_get_member(pJsonObject, rowsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			rows = new_list;
		}
		
	}
	const gchar *summaryKey = "summary";
	node = json_object_get_member(pJsonObject, summaryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&summary, node, "std::string", "");
		} else {
			
			std::string* obj = static_cast<std::string*> (&summary);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

BillingInvoiceList::BillingInvoiceList(char* json)
{
	this->fromJson(json);
}

char*
BillingInvoiceList::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getRows());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getRows());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<std::string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			std::string obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *rowsKey = "rows";
	json_object_set_member(pJsonObject, rowsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSummary();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
		std::string obj = static_cast<std::string> (getSummary());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *summaryKey = "summary";
	json_object_set_member(pJsonObject, summaryKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<std::string>
BillingInvoiceList::getRows()
{
	return rows;
}

void
BillingInvoiceList::setRows(std::list <std::string> rows)
{
	this->rows = rows;
}

std::string
BillingInvoiceList::getSummary()
{
	return summary;
}

void
BillingInvoiceList::setSummary(std::string  summary)
{
	this->summary = summary;
}


