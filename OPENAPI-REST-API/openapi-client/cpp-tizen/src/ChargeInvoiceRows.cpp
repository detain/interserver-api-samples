#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ChargeInvoiceRows.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ChargeInvoiceRows::ChargeInvoiceRows()
{
	//__init();
}

ChargeInvoiceRows::~ChargeInvoiceRows()
{
	//__cleanup();
}

void
ChargeInvoiceRows::__init()
{
	//success = bool(false);
	//new std::map()std::map> invoices;
}

void
ChargeInvoiceRows::__cleanup()
{
	//if(success != NULL) {
	//
	//delete success;
	//success = NULL;
	//}
	//if(invoices != NULL) {
	//invoices.RemoveAll(true);
	//delete invoices;
	//invoices = NULL;
	//}
	//
}

void
ChargeInvoiceRows::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *successKey = "success";
	node = json_object_get_member(pJsonObject, successKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&success, node, "bool", "");
		} else {
			
		}
	}
	const gchar *invoicesKey = "invoices";
	node = json_object_get_member(pJsonObject, invoicesKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			invoices = new_map;
		}
		
	}
}

ChargeInvoiceRows::ChargeInvoiceRows(char* json)
{
	this->fromJson(json);
}

char*
ChargeInvoiceRows::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getSuccess();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *successKey = "success";
	json_object_set_member(pJsonObject, successKey, node);


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getInvoices());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *invoicesKey = "invoices";
	json_object_set_member(pJsonObject, invoicesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
ChargeInvoiceRows::getSuccess()
{
	return success;
}

void
ChargeInvoiceRows::setSuccess(bool  success)
{
	this->success = success;
}

std::map<string, string>
ChargeInvoiceRows::getInvoices()
{
	return invoices;
}

void
ChargeInvoiceRows::setInvoices(std::map <string, string> invoices)
{
	this->invoices = invoices;
}


