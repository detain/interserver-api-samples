#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServiceOrderPostResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServiceOrderPostResponse::ServiceOrderPostResponse()
{
	//__init();
}

ServiceOrderPostResponse::~ServiceOrderPostResponse()
{
	//__cleanup();
}

void
ServiceOrderPostResponse::__init()
{
	//r_continue = bool(false);
	//new std::list()std::list> errors;
	//total_cost = std::string();
	//iid = std::string();
	//new std::list()std::list> iids;
	//new std::list()std::list> real_iids;
	//serviceId = int(0);
	//invoice_description = std::string();
}

void
ServiceOrderPostResponse::__cleanup()
{
	//if(r_continue != NULL) {
	//
	//delete r_continue;
	//r_continue = NULL;
	//}
	//if(errors != NULL) {
	//errors.RemoveAll(true);
	//delete errors;
	//errors = NULL;
	//}
	//if(total_cost != NULL) {
	//
	//delete total_cost;
	//total_cost = NULL;
	//}
	//if(iid != NULL) {
	//
	//delete iid;
	//iid = NULL;
	//}
	//if(iids != NULL) {
	//iids.RemoveAll(true);
	//delete iids;
	//iids = NULL;
	//}
	//if(real_iids != NULL) {
	//real_iids.RemoveAll(true);
	//delete real_iids;
	//real_iids = NULL;
	//}
	//if(serviceId != NULL) {
	//
	//delete serviceId;
	//serviceId = NULL;
	//}
	//if(invoice_description != NULL) {
	//
	//delete invoice_description;
	//invoice_description = NULL;
	//}
	//
}

void
ServiceOrderPostResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *r_continueKey = "continue";
	node = json_object_get_member(pJsonObject, r_continueKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&r_continue, node, "bool", "");
		} else {
			
		}
	}
	const gchar *errorsKey = "errors";
	node = json_object_get_member(pJsonObject, errorsKey);
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
					
				}
				new_list.push_back(inst);
			}
			errors = new_list;
		}
		
	}
	const gchar *total_costKey = "total_cost";
	node = json_object_get_member(pJsonObject, total_costKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&total_cost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *iidKey = "iid";
	node = json_object_get_member(pJsonObject, iidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&iid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *iidsKey = "iids";
	node = json_object_get_member(pJsonObject, iidsKey);
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
					
				}
				new_list.push_back(inst);
			}
			iids = new_list;
		}
		
	}
	const gchar *real_iidsKey = "real_iids";
	node = json_object_get_member(pJsonObject, real_iidsKey);
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
					
				}
				new_list.push_back(inst);
			}
			real_iids = new_list;
		}
		
	}
	const gchar *serviceIdKey = "serviceId";
	node = json_object_get_member(pJsonObject, serviceIdKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&serviceId, node, "int", "");
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
}

ServiceOrderPostResponse::ServiceOrderPostResponse(char* json)
{
	this->fromJson(json);
}

char*
ServiceOrderPostResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getRContinue();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *r_continueKey = "continue";
	json_object_set_member(pJsonObject, r_continueKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getErrors());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getErrors());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *errorsKey = "errors";
	json_object_set_member(pJsonObject, errorsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTotalCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *total_costKey = "total_cost";
	json_object_set_member(pJsonObject, total_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *iidKey = "iid";
	json_object_set_member(pJsonObject, iidKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getIids());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getIids());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *iidsKey = "iids";
	json_object_set_member(pJsonObject, iidsKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getRealIids());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getRealIids());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *real_iidsKey = "real_iids";
	json_object_set_member(pJsonObject, real_iidsKey, node);
	if (isprimitive("int")) {
		int obj = getServiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *serviceIdKey = "serviceId";
	json_object_set_member(pJsonObject, serviceIdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInvoiceDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *invoice_descriptionKey = "invoice_description";
	json_object_set_member(pJsonObject, invoice_descriptionKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
ServiceOrderPostResponse::getRContinue()
{
	return r_continue;
}

void
ServiceOrderPostResponse::setRContinue(bool  r_continue)
{
	this->r_continue = r_continue;
}

std::list<std::string>
ServiceOrderPostResponse::getErrors()
{
	return errors;
}

void
ServiceOrderPostResponse::setErrors(std::list <std::string> errors)
{
	this->errors = errors;
}

std::string
ServiceOrderPostResponse::getTotalCost()
{
	return total_cost;
}

void
ServiceOrderPostResponse::setTotalCost(std::string  total_cost)
{
	this->total_cost = total_cost;
}

std::string
ServiceOrderPostResponse::getIid()
{
	return iid;
}

void
ServiceOrderPostResponse::setIid(std::string  iid)
{
	this->iid = iid;
}

std::list<std::string>
ServiceOrderPostResponse::getIids()
{
	return iids;
}

void
ServiceOrderPostResponse::setIids(std::list <std::string> iids)
{
	this->iids = iids;
}

std::list<std::string>
ServiceOrderPostResponse::getRealIids()
{
	return real_iids;
}

void
ServiceOrderPostResponse::setRealIids(std::list <std::string> real_iids)
{
	this->real_iids = real_iids;
}

int
ServiceOrderPostResponse::getServiceId()
{
	return serviceId;
}

void
ServiceOrderPostResponse::setServiceId(int  serviceId)
{
	this->serviceId = serviceId;
}

std::string
ServiceOrderPostResponse::getInvoiceDescription()
{
	return invoice_description;
}

void
ServiceOrderPostResponse::setInvoiceDescription(std::string  invoice_description)
{
	this->invoice_description = invoice_description;
}


