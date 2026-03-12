#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ScrubIpsRowSchema.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ScrubIpsRowSchema::ScrubIpsRowSchema()
{
	//__init();
}

ScrubIpsRowSchema::~ScrubIpsRowSchema()
{
	//__cleanup();
}

void
ScrubIpsRowSchema::__init()
{
	//scrub_ip_id = int(0);
	//repeat_invoices_cost = double(0);
	//scrub_ip_ip = std::string();
	//scrub_ip_status = std::string();
	//services_name = std::string();
}

void
ScrubIpsRowSchema::__cleanup()
{
	//if(scrub_ip_id != NULL) {
	//
	//delete scrub_ip_id;
	//scrub_ip_id = NULL;
	//}
	//if(repeat_invoices_cost != NULL) {
	//
	//delete repeat_invoices_cost;
	//repeat_invoices_cost = NULL;
	//}
	//if(scrub_ip_ip != NULL) {
	//
	//delete scrub_ip_ip;
	//scrub_ip_ip = NULL;
	//}
	//if(scrub_ip_status != NULL) {
	//
	//delete scrub_ip_status;
	//scrub_ip_status = NULL;
	//}
	//if(services_name != NULL) {
	//
	//delete services_name;
	//services_name = NULL;
	//}
	//
}

void
ScrubIpsRowSchema::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *scrub_ip_idKey = "scrub_ip_id";
	node = json_object_get_member(pJsonObject, scrub_ip_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&scrub_ip_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *repeat_invoices_costKey = "repeat_invoices_cost";
	node = json_object_get_member(pJsonObject, repeat_invoices_costKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&repeat_invoices_cost, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&repeat_invoices_cost);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *scrub_ip_ipKey = "scrub_ip_ip";
	node = json_object_get_member(pJsonObject, scrub_ip_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *scrub_ip_statusKey = "scrub_ip_status";
	node = json_object_get_member(pJsonObject, scrub_ip_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&scrub_ip_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *services_nameKey = "services_name";
	node = json_object_get_member(pJsonObject, services_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&services_name, node, "std::string", "");
		} else {
			
		}
	}
}

ScrubIpsRowSchema::ScrubIpsRowSchema(char* json)
{
	this->fromJson(json);
}

char*
ScrubIpsRowSchema::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getScrubIpId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *scrub_ip_idKey = "scrub_ip_id";
	json_object_set_member(pJsonObject, scrub_ip_idKey, node);
	if (isprimitive("long long")) {
		long long obj = getRepeatInvoicesCost();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getRepeatInvoicesCost());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *repeat_invoices_costKey = "repeat_invoices_cost";
	json_object_set_member(pJsonObject, repeat_invoices_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_ipKey = "scrub_ip_ip";
	json_object_set_member(pJsonObject, scrub_ip_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getScrubIpStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scrub_ip_statusKey = "scrub_ip_status";
	json_object_set_member(pJsonObject, scrub_ip_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_nameKey = "services_name";
	json_object_set_member(pJsonObject, services_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ScrubIpsRowSchema::getScrubIpId()
{
	return scrub_ip_id;
}

void
ScrubIpsRowSchema::setScrubIpId(int  scrub_ip_id)
{
	this->scrub_ip_id = scrub_ip_id;
}

long long
ScrubIpsRowSchema::getRepeatInvoicesCost()
{
	return repeat_invoices_cost;
}

void
ScrubIpsRowSchema::setRepeatInvoicesCost(long long  repeat_invoices_cost)
{
	this->repeat_invoices_cost = repeat_invoices_cost;
}

std::string
ScrubIpsRowSchema::getScrubIpIp()
{
	return scrub_ip_ip;
}

void
ScrubIpsRowSchema::setScrubIpIp(std::string  scrub_ip_ip)
{
	this->scrub_ip_ip = scrub_ip_ip;
}

std::string
ScrubIpsRowSchema::getScrubIpStatus()
{
	return scrub_ip_status;
}

void
ScrubIpsRowSchema::setScrubIpStatus(std::string  scrub_ip_status)
{
	this->scrub_ip_status = scrub_ip_status;
}

std::string
ScrubIpsRowSchema::getServicesName()
{
	return services_name;
}

void
ScrubIpsRowSchema::setServicesName(std::string  services_name)
{
	this->services_name = services_name;
}


