#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsRow::VpsRow()
{
	//__init();
}

VpsRow::~VpsRow()
{
	//__cleanup();
}

void
VpsRow::__init()
{
	//vps_id = std::string();
	//vps_name = std::string();
	//repeat_invoices_cost = std::string();
	//vps_hostname = std::string();
	//vps_ip = std::string();
	//vps_status = std::string();
	//services_name = std::string();
	//vps_comment = std::string();
}

void
VpsRow::__cleanup()
{
	//if(vps_id != NULL) {
	//
	//delete vps_id;
	//vps_id = NULL;
	//}
	//if(vps_name != NULL) {
	//
	//delete vps_name;
	//vps_name = NULL;
	//}
	//if(repeat_invoices_cost != NULL) {
	//
	//delete repeat_invoices_cost;
	//repeat_invoices_cost = NULL;
	//}
	//if(vps_hostname != NULL) {
	//
	//delete vps_hostname;
	//vps_hostname = NULL;
	//}
	//if(vps_ip != NULL) {
	//
	//delete vps_ip;
	//vps_ip = NULL;
	//}
	//if(vps_status != NULL) {
	//
	//delete vps_status;
	//vps_status = NULL;
	//}
	//if(services_name != NULL) {
	//
	//delete services_name;
	//services_name = NULL;
	//}
	//if(vps_comment != NULL) {
	//
	//delete vps_comment;
	//vps_comment = NULL;
	//}
	//
}

void
VpsRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *vps_idKey = "vps_id";
	node = json_object_get_member(pJsonObject, vps_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_nameKey = "vps_name";
	node = json_object_get_member(pJsonObject, vps_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_name, node, "std::string", "");
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
	const gchar *vps_hostnameKey = "vps_hostname";
	node = json_object_get_member(pJsonObject, vps_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_ipKey = "vps_ip";
	node = json_object_get_member(pJsonObject, vps_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *vps_statusKey = "vps_status";
	node = json_object_get_member(pJsonObject, vps_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_status, node, "std::string", "");
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
	const gchar *vps_commentKey = "vps_comment";
	node = json_object_get_member(pJsonObject, vps_commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vps_comment, node, "std::string", "");
		} else {
			
		}
	}
}

VpsRow::VpsRow(char* json)
{
	this->fromJson(json);
}

char*
VpsRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getVpsId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_idKey = "vps_id";
	json_object_set_member(pJsonObject, vps_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_nameKey = "vps_name";
	json_object_set_member(pJsonObject, vps_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRepeatInvoicesCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *repeat_invoices_costKey = "repeat_invoices_cost";
	json_object_set_member(pJsonObject, repeat_invoices_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_hostnameKey = "vps_hostname";
	json_object_set_member(pJsonObject, vps_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_ipKey = "vps_ip";
	json_object_set_member(pJsonObject, vps_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_statusKey = "vps_status";
	json_object_set_member(pJsonObject, vps_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_nameKey = "services_name";
	json_object_set_member(pJsonObject, services_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vps_commentKey = "vps_comment";
	json_object_set_member(pJsonObject, vps_commentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsRow::getVpsId()
{
	return vps_id;
}

void
VpsRow::setVpsId(std::string  vps_id)
{
	this->vps_id = vps_id;
}

std::string
VpsRow::getVpsName()
{
	return vps_name;
}

void
VpsRow::setVpsName(std::string  vps_name)
{
	this->vps_name = vps_name;
}

std::string
VpsRow::getRepeatInvoicesCost()
{
	return repeat_invoices_cost;
}

void
VpsRow::setRepeatInvoicesCost(std::string  repeat_invoices_cost)
{
	this->repeat_invoices_cost = repeat_invoices_cost;
}

std::string
VpsRow::getVpsHostname()
{
	return vps_hostname;
}

void
VpsRow::setVpsHostname(std::string  vps_hostname)
{
	this->vps_hostname = vps_hostname;
}

std::string
VpsRow::getVpsIp()
{
	return vps_ip;
}

void
VpsRow::setVpsIp(std::string  vps_ip)
{
	this->vps_ip = vps_ip;
}

std::string
VpsRow::getVpsStatus()
{
	return vps_status;
}

void
VpsRow::setVpsStatus(std::string  vps_status)
{
	this->vps_status = vps_status;
}

std::string
VpsRow::getServicesName()
{
	return services_name;
}

void
VpsRow::setServicesName(std::string  services_name)
{
	this->services_name = services_name;
}

std::string
VpsRow::getVpsComment()
{
	return vps_comment;
}

void
VpsRow::setVpsComment(std::string  vps_comment)
{
	this->vps_comment = vps_comment;
}


