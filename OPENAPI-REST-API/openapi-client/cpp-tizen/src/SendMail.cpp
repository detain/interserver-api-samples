#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "SendMail.h"

using namespace std;
using namespace Tizen::ArtikCloud;

SendMail::SendMail()
{
	//__init();
}

SendMail::~SendMail()
{
	//__cleanup();
}

void
SendMail::__init()
{
	//to = std::string();
	//from = std::string();
	//subject = std::string();
	//body = std::string();
}

void
SendMail::__cleanup()
{
	//if(to != NULL) {
	//
	//delete to;
	//to = NULL;
	//}
	//if(from != NULL) {
	//
	//delete from;
	//from = NULL;
	//}
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
	//
}

void
SendMail::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *toKey = "to";
	node = json_object_get_member(pJsonObject, toKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&to, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *fromKey = "from";
	node = json_object_get_member(pJsonObject, fromKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&from, node, "std::string", "");
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
	const gchar *bodyKey = "body";
	node = json_object_get_member(pJsonObject, bodyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&body, node, "std::string", "");
		} else {
			
		}
	}
}

SendMail::SendMail(char* json)
{
	this->fromJson(json);
}

char*
SendMail::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getTo();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *toKey = "to";
	json_object_set_member(pJsonObject, toKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFrom();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fromKey = "from";
	json_object_set_member(pJsonObject, fromKey, node);
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
SendMail::getTo()
{
	return to;
}

void
SendMail::setTo(std::string  to)
{
	this->to = to;
}

std::string
SendMail::getFrom()
{
	return from;
}

void
SendMail::setFrom(std::string  from)
{
	this->from = from;
}

std::string
SendMail::getSubject()
{
	return subject;
}

void
SendMail::setSubject(std::string  subject)
{
	this->subject = subject;
}

std::string
SendMail::getBody()
{
	return body;
}

void
SendMail::setBody(std::string  body)
{
	this->body = body;
}


