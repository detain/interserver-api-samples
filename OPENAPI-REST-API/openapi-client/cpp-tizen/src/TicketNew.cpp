#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TicketNew.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TicketNew::TicketNew()
{
	//__init();
}

TicketNew::~TicketNew()
{
	//__cleanup();
}

void
TicketNew::__init()
{
	//subject = std::string();
	//body = std::string();
	//service_id = int(0);
	//service_module = std::string();
}

void
TicketNew::__cleanup()
{
	//if(subject != NULL) {
	//
	//delete subject;
	//subject = NULL;
	//}
	//if(body != NULL) {
	//
	//delete body;
	//body = NULL;
	//}
	//if(service_id != NULL) {
	//
	//delete service_id;
	//service_id = NULL;
	//}
	//if(service_module != NULL) {
	//
	//delete service_module;
	//service_module = NULL;
	//}
	//
}

void
TicketNew::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *subjectKey = "subject";
	node = json_object_get_member(pJsonObject, subjectKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&subject, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bodyKey = "body";
	node = json_object_get_member(pJsonObject, bodyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&body, node, "std::string", "");
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
	const gchar *service_moduleKey = "service_module";
	node = json_object_get_member(pJsonObject, service_moduleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_module, node, "std::string", "");
		} else {
			
		}
	}
}

TicketNew::TicketNew(char* json)
{
	this->fromJson(json);
}

char*
TicketNew::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getSubject();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *subjectKey = "subject";
	json_object_set_member(pJsonObject, subjectKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBody();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bodyKey = "body";
	json_object_set_member(pJsonObject, bodyKey, node);
	if (isprimitive("int")) {
		int obj = getServiceId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *service_idKey = "service_id";
	json_object_set_member(pJsonObject, service_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceModule();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_moduleKey = "service_module";
	json_object_set_member(pJsonObject, service_moduleKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TicketNew::getSubject()
{
	return subject;
}

void
TicketNew::setSubject(std::string  subject)
{
	this->subject = subject;
}

std::string
TicketNew::getBody()
{
	return body;
}

void
TicketNew::setBody(std::string  body)
{
	this->body = body;
}

int
TicketNew::getServiceId()
{
	return service_id;
}

void
TicketNew::setServiceId(int  service_id)
{
	this->service_id = service_id;
}

std::string
TicketNew::getServiceModule()
{
	return service_module;
}

void
TicketNew::setServiceModule(std::string  service_module)
{
	this->service_module = service_module;
}


