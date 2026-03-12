#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServersBuyNowResponse_order_details.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServersBuyNowResponse_order_details::ServersBuyNowResponse_order_details()
{
	//__init();
}

ServersBuyNowResponse_order_details::~ServersBuyNowResponse_order_details()
{
	//__cleanup();
}

void
ServersBuyNowResponse_order_details::__init()
{
	//service_id = double(0);
	//invoice_id = double(0);
}

void
ServersBuyNowResponse_order_details::__cleanup()
{
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
	//
}

void
ServersBuyNowResponse_order_details::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *service_idKey = "service_id";
	node = json_object_get_member(pJsonObject, service_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&service_id, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&service_id);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *invoice_idKey = "invoice_id";
	node = json_object_get_member(pJsonObject, invoice_idKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&invoice_id, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&invoice_id);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServersBuyNowResponse_order_details::ServersBuyNowResponse_order_details(char* json)
{
	this->fromJson(json);
}

char*
ServersBuyNowResponse_order_details::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getServiceId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getServiceId());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *service_idKey = "service_id";
	json_object_set_member(pJsonObject, service_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getInvoiceId();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getInvoiceId());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *invoice_idKey = "invoice_id";
	json_object_set_member(pJsonObject, invoice_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
ServersBuyNowResponse_order_details::getServiceId()
{
	return service_id;
}

void
ServersBuyNowResponse_order_details::setServiceId(long long  service_id)
{
	this->service_id = service_id;
}

long long
ServersBuyNowResponse_order_details::getInvoiceId()
{
	return invoice_id;
}

void
ServersBuyNowResponse_order_details::setInvoiceId(long long  invoice_id)
{
	this->invoice_id = invoice_id;
}


