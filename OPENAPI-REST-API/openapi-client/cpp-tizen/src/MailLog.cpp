#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailLog.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailLog::MailLog()
{
	//__init();
}

MailLog::~MailLog()
{
	//__cleanup();
}

void
MailLog::__init()
{
	//total = int(0);
	//skip = int(0);
	//limit = int(0);
	//new std::list()std::list> emails;
}

void
MailLog::__cleanup()
{
	//if(total != NULL) {
	//
	//delete total;
	//total = NULL;
	//}
	//if(skip != NULL) {
	//
	//delete skip;
	//skip = NULL;
	//}
	//if(limit != NULL) {
	//
	//delete limit;
	//limit = NULL;
	//}
	//if(emails != NULL) {
	//emails.RemoveAll(true);
	//delete emails;
	//emails = NULL;
	//}
	//
}

void
MailLog::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *totalKey = "total";
	node = json_object_get_member(pJsonObject, totalKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&total, node, "int", "");
		} else {
			
		}
	}
	const gchar *skipKey = "skip";
	node = json_object_get_member(pJsonObject, skipKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&skip, node, "int", "");
		} else {
			
		}
	}
	const gchar *limitKey = "limit";
	node = json_object_get_member(pJsonObject, limitKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&limit, node, "int", "");
		} else {
			
		}
	}
	const gchar *emailsKey = "emails";
	node = json_object_get_member(pJsonObject, emailsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<MailLogEntry> new_list;
			MailLogEntry inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("MailLogEntry")) {
					jsonToValue(&inst, temp_json, "MailLogEntry", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			emails = new_list;
		}
		
	}
}

MailLog::MailLog(char* json)
{
	this->fromJson(json);
}

char*
MailLog::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getTotal();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *totalKey = "total";
	json_object_set_member(pJsonObject, totalKey, node);
	if (isprimitive("int")) {
		int obj = getSkip();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *skipKey = "skip";
	json_object_set_member(pJsonObject, skipKey, node);
	if (isprimitive("int")) {
		int obj = getLimit();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *limitKey = "limit";
	json_object_set_member(pJsonObject, limitKey, node);
	if (isprimitive("MailLogEntry")) {
		list<MailLogEntry> new_list = static_cast<list <MailLogEntry> > (getEmails());
		node = converttoJson(&new_list, "MailLogEntry", "array");
	} else {
		node = json_node_alloc();
		list<MailLogEntry> new_list = static_cast<list <MailLogEntry> > (getEmails());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<MailLogEntry>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			MailLogEntry obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *emailsKey = "emails";
	json_object_set_member(pJsonObject, emailsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
MailLog::getTotal()
{
	return total;
}

void
MailLog::setTotal(int  total)
{
	this->total = total;
}

int
MailLog::getSkip()
{
	return skip;
}

void
MailLog::setSkip(int  skip)
{
	this->skip = skip;
}

int
MailLog::getLimit()
{
	return limit;
}

void
MailLog::setLimit(int  limit)
{
	this->limit = limit;
}

std::list<MailLogEntry>
MailLog::getEmails()
{
	return emails;
}

void
MailLog::setEmails(std::list <MailLogEntry> emails)
{
	this->emails = emails;
}


