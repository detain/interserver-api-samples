#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailRow::MailRow()
{
	//__init();
}

MailRow::~MailRow()
{
	//__cleanup();
}

void
MailRow::__init()
{
	//mail_id = std::string();
	//repeat_invoices_cost = std::string();
	//mail_username = std::string();
	//mail_status = std::string();
	//services_name = std::string();
}

void
MailRow::__cleanup()
{
	//if(mail_id != NULL) {
	//
	//delete mail_id;
	//mail_id = NULL;
	//}
	//if(repeat_invoices_cost != NULL) {
	//
	//delete repeat_invoices_cost;
	//repeat_invoices_cost = NULL;
	//}
	//if(mail_username != NULL) {
	//
	//delete mail_username;
	//mail_username = NULL;
	//}
	//if(mail_status != NULL) {
	//
	//delete mail_status;
	//mail_status = NULL;
	//}
	//if(services_name != NULL) {
	//
	//delete services_name;
	//services_name = NULL;
	//}
	//
}

void
MailRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *mail_idKey = "mail_id";
	node = json_object_get_member(pJsonObject, mail_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_id, node, "std::string", "");
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
	const gchar *mail_usernameKey = "mail_username";
	node = json_object_get_member(pJsonObject, mail_usernameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_username, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *mail_statusKey = "mail_status";
	node = json_object_get_member(pJsonObject, mail_statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&mail_status, node, "std::string", "");
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

MailRow::MailRow(char* json)
{
	this->fromJson(json);
}

char*
MailRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getMailId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_idKey = "mail_id";
	json_object_set_member(pJsonObject, mail_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRepeatInvoicesCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *repeat_invoices_costKey = "repeat_invoices_cost";
	json_object_set_member(pJsonObject, repeat_invoices_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailUsername();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_usernameKey = "mail_username";
	json_object_set_member(pJsonObject, mail_usernameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMailStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *mail_statusKey = "mail_status";
	json_object_set_member(pJsonObject, mail_statusKey, node);
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

std::string
MailRow::getMailId()
{
	return mail_id;
}

void
MailRow::setMailId(std::string  mail_id)
{
	this->mail_id = mail_id;
}

std::string
MailRow::getRepeatInvoicesCost()
{
	return repeat_invoices_cost;
}

void
MailRow::setRepeatInvoicesCost(std::string  repeat_invoices_cost)
{
	this->repeat_invoices_cost = repeat_invoices_cost;
}

std::string
MailRow::getMailUsername()
{
	return mail_username;
}

void
MailRow::setMailUsername(std::string  mail_username)
{
	this->mail_username = mail_username;
}

std::string
MailRow::getMailStatus()
{
	return mail_status;
}

void
MailRow::setMailStatus(std::string  mail_status)
{
	this->mail_status = mail_status;
}

std::string
MailRow::getServicesName()
{
	return services_name;
}

void
MailRow::setServicesName(std::string  services_name)
{
	this->services_name = services_name;
}


