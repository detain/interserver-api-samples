#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LicenseRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LicenseRow::LicenseRow()
{
	//__init();
}

LicenseRow::~LicenseRow()
{
	//__cleanup();
}

void
LicenseRow::__init()
{
	//license_id = std::string();
	//license_hostname = std::string();
	//license_ip = std::string();
	//services_name = std::string();
	//cost = std::string();
	//license_status = std::string();
	//invoices_paid = std::string();
	//invoices_date = null;
}

void
LicenseRow::__cleanup()
{
	//if(license_id != NULL) {
	//
	//delete license_id;
	//license_id = NULL;
	//}
	//if(license_hostname != NULL) {
	//
	//delete license_hostname;
	//license_hostname = NULL;
	//}
	//if(license_ip != NULL) {
	//
	//delete license_ip;
	//license_ip = NULL;
	//}
	//if(services_name != NULL) {
	//
	//delete services_name;
	//services_name = NULL;
	//}
	//if(cost != NULL) {
	//
	//delete cost;
	//cost = NULL;
	//}
	//if(license_status != NULL) {
	//
	//delete license_status;
	//license_status = NULL;
	//}
	//if(invoices_paid != NULL) {
	//
	//delete invoices_paid;
	//invoices_paid = NULL;
	//}
	//if(invoices_date != NULL) {
	//
	//delete invoices_date;
	//invoices_date = NULL;
	//}
	//
}

void
LicenseRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *license_idKey = "license_id";
	node = json_object_get_member(pJsonObject, license_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_hostnameKey = "license_hostname";
	node = json_object_get_member(pJsonObject, license_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_ipKey = "license_ip";
	node = json_object_get_member(pJsonObject, license_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_ip, node, "std::string", "");
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
	const gchar *costKey = "cost";
	node = json_object_get_member(pJsonObject, costKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *license_statusKey = "license_status";
	node = json_object_get_member(pJsonObject, license_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&license_status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *invoices_paidKey = "invoices_paid";
	node = json_object_get_member(pJsonObject, invoices_paidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&invoices_paid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *invoices_dateKey = "invoices_date";
	node = json_object_get_member(pJsonObject, invoices_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&invoices_date, node, "std::string", "");
		} else {
			
		}
	}
}

LicenseRow::LicenseRow(char* json)
{
	this->fromJson(json);
}

char*
LicenseRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getLicenseId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_idKey = "license_id";
	json_object_set_member(pJsonObject, license_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_hostnameKey = "license_hostname";
	json_object_set_member(pJsonObject, license_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_ipKey = "license_ip";
	json_object_set_member(pJsonObject, license_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServicesName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *services_nameKey = "services_name";
	json_object_set_member(pJsonObject, services_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *costKey = "cost";
	json_object_set_member(pJsonObject, costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLicenseStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *license_statusKey = "license_status";
	json_object_set_member(pJsonObject, license_statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInvoicesPaid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *invoices_paidKey = "invoices_paid";
	json_object_set_member(pJsonObject, invoices_paidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getInvoicesDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *invoices_dateKey = "invoices_date";
	json_object_set_member(pJsonObject, invoices_dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
LicenseRow::getLicenseId()
{
	return license_id;
}

void
LicenseRow::setLicenseId(std::string  license_id)
{
	this->license_id = license_id;
}

std::string
LicenseRow::getLicenseHostname()
{
	return license_hostname;
}

void
LicenseRow::setLicenseHostname(std::string  license_hostname)
{
	this->license_hostname = license_hostname;
}

std::string
LicenseRow::getLicenseIp()
{
	return license_ip;
}

void
LicenseRow::setLicenseIp(std::string  license_ip)
{
	this->license_ip = license_ip;
}

std::string
LicenseRow::getServicesName()
{
	return services_name;
}

void
LicenseRow::setServicesName(std::string  services_name)
{
	this->services_name = services_name;
}

std::string
LicenseRow::getCost()
{
	return cost;
}

void
LicenseRow::setCost(std::string  cost)
{
	this->cost = cost;
}

std::string
LicenseRow::getLicenseStatus()
{
	return license_status;
}

void
LicenseRow::setLicenseStatus(std::string  license_status)
{
	this->license_status = license_status;
}

std::string
LicenseRow::getInvoicesPaid()
{
	return invoices_paid;
}

void
LicenseRow::setInvoicesPaid(std::string  invoices_paid)
{
	this->invoices_paid = invoices_paid;
}

std::string
LicenseRow::getInvoicesDate()
{
	return invoices_date;
}

void
LicenseRow::setInvoicesDate(std::string  invoices_date)
{
	this->invoices_date = invoices_date;
}


