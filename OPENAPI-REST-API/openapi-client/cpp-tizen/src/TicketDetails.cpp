#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TicketDetails.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TicketDetails::TicketDetails()
{
	//__init();
}

TicketDetails::~TicketDetails()
{
	//__cleanup();
}

void
TicketDetails::__init()
{
	//ticketid = int(0);
	//ticketmaskid = std::string();
	//department = std::string();
	//status = std::string();
	//priority = std::string();
	//subject = std::string();
	//created_on = std::string();
	//updated_on = std::string();
}

void
TicketDetails::__cleanup()
{
	//if(ticketid != NULL) {
	//
	//delete ticketid;
	//ticketid = NULL;
	//}
	//if(ticketmaskid != NULL) {
	//
	//delete ticketmaskid;
	//ticketmaskid = NULL;
	//}
	//if(department != NULL) {
	//
	//delete department;
	//department = NULL;
	//}
	//if(status != NULL) {
	//
	//delete status;
	//status = NULL;
	//}
	//if(priority != NULL) {
	//
	//delete priority;
	//priority = NULL;
	//}
	//if(subject != NULL) {
	//
	//delete subject;
	//subject = NULL;
	//}
	//if(created_on != NULL) {
	//
	//delete created_on;
	//created_on = NULL;
	//}
	//if(updated_on != NULL) {
	//
	//delete updated_on;
	//updated_on = NULL;
	//}
	//
}

void
TicketDetails::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ticketidKey = "ticketid";
	node = json_object_get_member(pJsonObject, ticketidKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&ticketid, node, "int", "");
		} else {
			
		}
	}
	const gchar *ticketmaskidKey = "ticketmaskid";
	node = json_object_get_member(pJsonObject, ticketmaskidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ticketmaskid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *departmentKey = "department";
	node = json_object_get_member(pJsonObject, departmentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&department, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *statusKey = "status";
	node = json_object_get_member(pJsonObject, statusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&status, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *priorityKey = "priority";
	node = json_object_get_member(pJsonObject, priorityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&priority, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *subjectKey = "subject";
	node = json_object_get_member(pJsonObject, subjectKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&subject, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *created_onKey = "created_on";
	node = json_object_get_member(pJsonObject, created_onKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&created_on, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *updated_onKey = "updated_on";
	node = json_object_get_member(pJsonObject, updated_onKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&updated_on, node, "std::string", "");
		} else {
			
		}
	}
}

TicketDetails::TicketDetails(char* json)
{
	this->fromJson(json);
}

char*
TicketDetails::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getTicketid();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *ticketidKey = "ticketid";
	json_object_set_member(pJsonObject, ticketidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTicketmaskid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ticketmaskidKey = "ticketmaskid";
	json_object_set_member(pJsonObject, ticketmaskidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDepartment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *departmentKey = "department";
	json_object_set_member(pJsonObject, departmentKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getStatus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *statusKey = "status";
	json_object_set_member(pJsonObject, statusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPriority();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *priorityKey = "priority";
	json_object_set_member(pJsonObject, priorityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSubject();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *subjectKey = "subject";
	json_object_set_member(pJsonObject, subjectKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreatedOn();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *created_onKey = "created_on";
	json_object_set_member(pJsonObject, created_onKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUpdatedOn();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *updated_onKey = "updated_on";
	json_object_set_member(pJsonObject, updated_onKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
TicketDetails::getTicketid()
{
	return ticketid;
}

void
TicketDetails::setTicketid(int  ticketid)
{
	this->ticketid = ticketid;
}

std::string
TicketDetails::getTicketmaskid()
{
	return ticketmaskid;
}

void
TicketDetails::setTicketmaskid(std::string  ticketmaskid)
{
	this->ticketmaskid = ticketmaskid;
}

std::string
TicketDetails::getDepartment()
{
	return department;
}

void
TicketDetails::setDepartment(std::string  department)
{
	this->department = department;
}

std::string
TicketDetails::getStatus()
{
	return status;
}

void
TicketDetails::setStatus(std::string  status)
{
	this->status = status;
}

std::string
TicketDetails::getPriority()
{
	return priority;
}

void
TicketDetails::setPriority(std::string  priority)
{
	this->priority = priority;
}

std::string
TicketDetails::getSubject()
{
	return subject;
}

void
TicketDetails::setSubject(std::string  subject)
{
	this->subject = subject;
}

std::string
TicketDetails::getCreatedOn()
{
	return created_on;
}

void
TicketDetails::setCreatedOn(std::string  created_on)
{
	this->created_on = created_on;
}

std::string
TicketDetails::getUpdatedOn()
{
	return updated_on;
}

void
TicketDetails::setUpdatedOn(std::string  updated_on)
{
	this->updated_on = updated_on;
}


