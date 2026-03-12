#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PlaceScrubOrder_201_response_order_details.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PlaceScrubOrder_201_response_order_details::PlaceScrubOrder_201_response_order_details()
{
	//__init();
}

PlaceScrubOrder_201_response_order_details::~PlaceScrubOrder_201_response_order_details()
{
	//__cleanup();
}

void
PlaceScrubOrder_201_response_order_details::__init()
{
	//total_cost = int(0);
	//service_id = int(0);
	//invoice_id = int(0);
	//invoice_description = std::string();
	//cj_params = new PlaceScrubOrder_201_response_order_details_cj_params();
}

void
PlaceScrubOrder_201_response_order_details::__cleanup()
{
	//if(total_cost != NULL) {
	//
	//delete total_cost;
	//total_cost = NULL;
	//}
	//if(service_id != NULL) {
	//
	//delete service_id;
	//service_id = NULL;
	//}
	//if(invoice_id != NULL) {
	//
	//delete invoice_id;
	//invoice_id = NULL;
	//}
	//if(invoice_description != NULL) {
	//
	//delete invoice_description;
	//invoice_description = NULL;
	//}
	//if(cj_params != NULL) {
	//
	//delete cj_params;
	//cj_params = NULL;
	//}
	//
}

void
PlaceScrubOrder_201_response_order_details::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *total_costKey = "total_cost";
	node = json_object_get_member(pJsonObject, total_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&total_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *service_idKey = "service_id";
	node = json_object_get_member(pJsonObject, service_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&service_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *invoice_idKey = "invoice_id";
	node = json_object_get_member(pJsonObject, invoice_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&invoice_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *invoice_descriptionKey = "invoice_description";
	node = json_object_get_member(pJsonObject, invoice_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&invoice_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cj_paramsKey = "cj_params";
	node = json_object_get_member(pJsonObject, cj_paramsKey);
	if (node !=NULL) {
	

		if (isprimitive("PlaceScrubOrder_201_response_order_details_cj_params")) {
			jsonToValue(&cj_params, node, "PlaceScrubOrder_201_response_order_details_cj_params", "PlaceScrubOrder_201_response_order_details_cj_params");
		} else {
			
			PlaceScrubOrder_201_response_order_details_cj_params* obj = static_cast<PlaceScrubOrder_201_response_order_details_cj_params*> (&cj_params);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

PlaceScrubOrder_201_response_order_details::PlaceScrubOrder_201_response_order_details(char* json)
{
	this->fromJson(json);
}

char*
PlaceScrubOrder_201_response_order_details::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getTotalCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *total_costKey = "total_cost";
	json_object_set_member(pJsonObject, total_costKey, node);
	if (isprimitive("int")) {
		int obj = getServiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *service_idKey = "service_id";
	json_object_set_member(pJsonObject, service_idKey, node);
	if (isprimitive("int")) {
		int obj = getInvoiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInvoiceDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *invoice_descriptionKey = "invoice_description";
	json_object_set_member(pJsonObject, invoice_descriptionKey, node);
	if (isprimitive("PlaceScrubOrder_201_response_order_details_cj_params")) {
		PlaceScrubOrder_201_response_order_details_cj_params obj = getCjParams();
		node = converttoJson(&obj, "PlaceScrubOrder_201_response_order_details_cj_params", "");
	}
	else {
		
		PlaceScrubOrder_201_response_order_details_cj_params obj = static_cast<PlaceScrubOrder_201_response_order_details_cj_params> (getCjParams());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *cj_paramsKey = "cj_params";
	json_object_set_member(pJsonObject, cj_paramsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
PlaceScrubOrder_201_response_order_details::getTotalCost()
{
	return total_cost;
}

void
PlaceScrubOrder_201_response_order_details::setTotalCost(int  total_cost)
{
	this->total_cost = total_cost;
}

int
PlaceScrubOrder_201_response_order_details::getServiceId()
{
	return service_id;
}

void
PlaceScrubOrder_201_response_order_details::setServiceId(int  service_id)
{
	this->service_id = service_id;
}

int
PlaceScrubOrder_201_response_order_details::getInvoiceId()
{
	return invoice_id;
}

void
PlaceScrubOrder_201_response_order_details::setInvoiceId(int  invoice_id)
{
	this->invoice_id = invoice_id;
}

std::string
PlaceScrubOrder_201_response_order_details::getInvoiceDescription()
{
	return invoice_description;
}

void
PlaceScrubOrder_201_response_order_details::setInvoiceDescription(std::string  invoice_description)
{
	this->invoice_description = invoice_description;
}

PlaceScrubOrder_201_response_order_details_cj_params
PlaceScrubOrder_201_response_order_details::getCjParams()
{
	return cj_params;
}

void
PlaceScrubOrder_201_response_order_details::setCjParams(PlaceScrubOrder_201_response_order_details_cj_params  cj_params)
{
	this->cj_params = cj_params;
}


