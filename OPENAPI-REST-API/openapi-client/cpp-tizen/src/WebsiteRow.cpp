#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsiteRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsiteRow::WebsiteRow()
{
	//__init();
}

WebsiteRow::~WebsiteRow()
{
	//__cleanup();
}

void
WebsiteRow::__init()
{
	//website_id = std::string();
	//website_hostname = std::string();
	//repeat_invoices_cost = std::string();
	//website_status = std::string();
	//services_name = std::string();
	//website_comment = std::string();
}

void
WebsiteRow::__cleanup()
{
	//if(website_id != NULL) {
	//
	//delete website_id;
	//website_id = NULL;
	//}
	//if(website_hostname != NULL) {
	//
	//delete website_hostname;
	//website_hostname = NULL;
	//}
	//if(repeat_invoices_cost != NULL) {
	//
	//delete repeat_invoices_cost;
	//repeat_invoices_cost = NULL;
	//}
	//if(website_status != NULL) {
	//
	//delete website_status;
	//website_status = NULL;
	//}
	//if(services_name != NULL) {
	//
	//delete services_name;
	//services_name = NULL;
	//}
	//if(website_comment != NULL) {
	//
	//delete website_comment;
	//website_comment = NULL;
	//}
	//
}

void
WebsiteRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *website_idKey = "website_id";
	node = json_object_get_member(pJsonObject, website_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_hostnameKey = "website_hostname";
	node = json_object_get_member(pJsonObject, website_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *repeat_invoices_costKey = "repeat_invoices_cost";
	node = json_object_get_member(pJsonObject, repeat_invoices_costKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&repeat_invoices_cost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *website_statusKey = "website_status";
	node = json_object_get_member(pJsonObject, website_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_status, node, "std::string", "");
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
	const gchar *website_commentKey = "website_comment";
	node = json_object_get_member(pJsonObject, website_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&website_comment, node, "std::string", "");
		} else {
			
		}
	}
}

WebsiteRow::WebsiteRow(char* json)
{
	this->fromJson(json);
}

char*
WebsiteRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_idKey = "website_id";
	json_object_set_member(pJsonObject, website_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_hostnameKey = "website_hostname";
	json_object_set_member(pJsonObject, website_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRepeatInvoicesCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *repeat_invoices_costKey = "repeat_invoices_cost";
	json_object_set_member(pJsonObject, repeat_invoices_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_statusKey = "website_status";
	json_object_set_member(pJsonObject, website_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_nameKey = "services_name";
	json_object_set_member(pJsonObject, services_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWebsiteComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *website_commentKey = "website_comment";
	json_object_set_member(pJsonObject, website_commentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WebsiteRow::getWebsiteId()
{
	return website_id;
}

void
WebsiteRow::setWebsiteId(std::string  website_id)
{
	this->website_id = website_id;
}

std::string
WebsiteRow::getWebsiteHostname()
{
	return website_hostname;
}

void
WebsiteRow::setWebsiteHostname(std::string  website_hostname)
{
	this->website_hostname = website_hostname;
}

std::string
WebsiteRow::getRepeatInvoicesCost()
{
	return repeat_invoices_cost;
}

void
WebsiteRow::setRepeatInvoicesCost(std::string  repeat_invoices_cost)
{
	this->repeat_invoices_cost = repeat_invoices_cost;
}

std::string
WebsiteRow::getWebsiteStatus()
{
	return website_status;
}

void
WebsiteRow::setWebsiteStatus(std::string  website_status)
{
	this->website_status = website_status;
}

std::string
WebsiteRow::getServicesName()
{
	return services_name;
}

void
WebsiteRow::setServicesName(std::string  services_name)
{
	this->services_name = services_name;
}

std::string
WebsiteRow::getWebsiteComment()
{
	return website_comment;
}

void
WebsiteRow::setWebsiteComment(std::string  website_comment)
{
	this->website_comment = website_comment;
}


