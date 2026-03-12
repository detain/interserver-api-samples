#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DomainRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DomainRow::DomainRow()
{
	//__init();
}

DomainRow::~DomainRow()
{
	//__cleanup();
}

void
DomainRow::__init()
{
	//domain_id = std::string();
	//domain_hostname = std::string();
	//domain_expire_date = std::string();
	//cost = std::string();
	//domain_status = std::string();
}

void
DomainRow::__cleanup()
{
	//if(domain_id != NULL) {
	//
	//delete domain_id;
	//domain_id = NULL;
	//}
	//if(domain_hostname != NULL) {
	//
	//delete domain_hostname;
	//domain_hostname = NULL;
	//}
	//if(domain_expire_date != NULL) {
	//
	//delete domain_expire_date;
	//domain_expire_date = NULL;
	//}
	//if(cost != NULL) {
	//
	//delete cost;
	//cost = NULL;
	//}
	//if(domain_status != NULL) {
	//
	//delete domain_status;
	//domain_status = NULL;
	//}
	//
}

void
DomainRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *domain_idKey = "domain_id";
	node = json_object_get_member(pJsonObject, domain_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_hostnameKey = "domain_hostname";
	node = json_object_get_member(pJsonObject, domain_hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *domain_expire_dateKey = "domain_expire_date";
	node = json_object_get_member(pJsonObject, domain_expire_dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_expire_date, node, "std::string", "");
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
	const gchar *domain_statusKey = "domain_status";
	node = json_object_get_member(pJsonObject, domain_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain_status, node, "std::string", "");
		} else {
			
		}
	}
}

DomainRow::DomainRow(char* json)
{
	this->fromJson(json);
}

char*
DomainRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDomainId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_idKey = "domain_id";
	json_object_set_member(pJsonObject, domain_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_hostnameKey = "domain_hostname";
	json_object_set_member(pJsonObject, domain_hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainExpireDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_expire_dateKey = "domain_expire_date";
	json_object_set_member(pJsonObject, domain_expire_dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *costKey = "cost";
	json_object_set_member(pJsonObject, costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDomainStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domain_statusKey = "domain_status";
	json_object_set_member(pJsonObject, domain_statusKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
DomainRow::getDomainId()
{
	return domain_id;
}

void
DomainRow::setDomainId(std::string  domain_id)
{
	this->domain_id = domain_id;
}

std::string
DomainRow::getDomainHostname()
{
	return domain_hostname;
}

void
DomainRow::setDomainHostname(std::string  domain_hostname)
{
	this->domain_hostname = domain_hostname;
}

std::string
DomainRow::getDomainExpireDate()
{
	return domain_expire_date;
}

void
DomainRow::setDomainExpireDate(std::string  domain_expire_date)
{
	this->domain_expire_date = domain_expire_date;
}

std::string
DomainRow::getCost()
{
	return cost;
}

void
DomainRow::setCost(std::string  cost)
{
	this->cost = cost;
}

std::string
DomainRow::getDomainStatus()
{
	return domain_status;
}

void
DomainRow::setDomainStatus(std::string  domain_status)
{
	this->domain_status = domain_status;
}


