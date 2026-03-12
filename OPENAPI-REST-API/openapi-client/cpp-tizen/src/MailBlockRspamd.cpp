#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailBlockRspamd.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailBlockRspamd::MailBlockRspamd()
{
	//__init();
}

MailBlockRspamd::~MailBlockRspamd()
{
	//__cleanup();
}

void
MailBlockRspamd::__init()
{
	//from = std::string();
	//subject = std::string();
}

void
MailBlockRspamd::__cleanup()
{
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
	//
}

void
MailBlockRspamd::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
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
}

MailBlockRspamd::MailBlockRspamd(char* json)
{
	this->fromJson(json);
}

char*
MailBlockRspamd::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MailBlockRspamd::getFrom()
{
	return from;
}

void
MailBlockRspamd::setFrom(std::string  from)
{
	this->from = from;
}

std::string
MailBlockRspamd::getSubject()
{
	return subject;
}

void
MailBlockRspamd::setSubject(std::string  subject)
{
	this->subject = subject;
}


