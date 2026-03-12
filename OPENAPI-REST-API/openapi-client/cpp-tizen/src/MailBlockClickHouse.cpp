#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailBlockClickHouse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailBlockClickHouse::MailBlockClickHouse()
{
	//__init();
}

MailBlockClickHouse::~MailBlockClickHouse()
{
	//__cleanup();
}

void
MailBlockClickHouse::__init()
{
	//date = null;
	//from = std::string();
	//messageId = std::string();
	//subject = std::string();
	//to = std::string();
}

void
MailBlockClickHouse::__cleanup()
{
	//if(date != NULL) {
	//
	//delete date;
	//date = NULL;
	//}
	//if(from != NULL) {
	//
	//delete from;
	//from = NULL;
	//}
	//if(messageId != NULL) {
	//
	//delete messageId;
	//messageId = NULL;
	//}
	//if(subject != NULL) {
	//
	//delete subject;
	//subject = NULL;
	//}
	//if(to != NULL) {
	//
	//delete to;
	//to = NULL;
	//}
	//
}

void
MailBlockClickHouse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dateKey = "date";
	node = json_object_get_member(pJsonObject, dateKey);
	if (node !=NULL) {
	

		if (isprimitive("Date")) {
			jsonToValue(&date, node, "Date", "Date");
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
	const gchar *messageIdKey = "messageId";
	node = json_object_get_member(pJsonObject, messageIdKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&messageId, node, "std::string", "");
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
	const gchar *toKey = "to";
	node = json_object_get_member(pJsonObject, toKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&to, node, "std::string", "");
		} else {
			
		}
	}
}

MailBlockClickHouse::MailBlockClickHouse(char* json)
{
	this->fromJson(json);
}

char*
MailBlockClickHouse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Date")) {
		Date obj = getDate();
		node = converttoJson(&obj, "Date", "");
	}
	else {
		
	}
	const gchar *dateKey = "date";
	json_object_set_member(pJsonObject, dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFrom();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *fromKey = "from";
	json_object_set_member(pJsonObject, fromKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessageId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *messageIdKey = "messageId";
	json_object_set_member(pJsonObject, messageIdKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSubject();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *subjectKey = "subject";
	json_object_set_member(pJsonObject, subjectKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTo();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *toKey = "to";
	json_object_set_member(pJsonObject, toKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Date
MailBlockClickHouse::getDate()
{
	return date;
}

void
MailBlockClickHouse::setDate(Date  date)
{
	this->date = date;
}

std::string
MailBlockClickHouse::getFrom()
{
	return from;
}

void
MailBlockClickHouse::setFrom(std::string  from)
{
	this->from = from;
}

std::string
MailBlockClickHouse::getMessageId()
{
	return messageId;
}

void
MailBlockClickHouse::setMessageId(std::string  messageId)
{
	this->messageId = messageId;
}

std::string
MailBlockClickHouse::getSubject()
{
	return subject;
}

void
MailBlockClickHouse::setSubject(std::string  subject)
{
	this->subject = subject;
}

std::string
MailBlockClickHouse::getTo()
{
	return to;
}

void
MailBlockClickHouse::setTo(std::string  to)
{
	this->to = to;
}


