#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailBlocks.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailBlocks::MailBlocks()
{
	//__init();
}

MailBlocks::~MailBlocks()
{
	//__cleanup();
}

void
MailBlocks::__init()
{
	//new std::list()std::list> local;
	//new std::list()std::list> mbtrap;
	//new std::list()std::list> subject;
}

void
MailBlocks::__cleanup()
{
	//if(local != NULL) {
	//local.RemoveAll(true);
	//delete local;
	//local = NULL;
	//}
	//if(mbtrap != NULL) {
	//mbtrap.RemoveAll(true);
	//delete mbtrap;
	//mbtrap = NULL;
	//}
	//if(subject != NULL) {
	//subject.RemoveAll(true);
	//delete subject;
	//subject = NULL;
	//}
	//
}

void
MailBlocks::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *localKey = "local";
	node = json_object_get_member(pJsonObject, localKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<MailBlockClickHouse> new_list;
			MailBlockClickHouse inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("MailBlockClickHouse")) {
					jsonToValue(&inst, temp_json, "MailBlockClickHouse", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			local = new_list;
		}
		
	}
	const gchar *mbtrapKey = "mbtrap";
	node = json_object_get_member(pJsonObject, mbtrapKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<MailBlockClickHouse> new_list;
			MailBlockClickHouse inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("MailBlockClickHouse")) {
					jsonToValue(&inst, temp_json, "MailBlockClickHouse", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			mbtrap = new_list;
		}
		
	}
	const gchar *subjectKey = "subject";
	node = json_object_get_member(pJsonObject, subjectKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<MailBlockRspamd> new_list;
			MailBlockRspamd inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("MailBlockRspamd")) {
					jsonToValue(&inst, temp_json, "MailBlockRspamd", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			subject = new_list;
		}
		
	}
}

MailBlocks::MailBlocks(char* json)
{
	this->fromJson(json);
}

char*
MailBlocks::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("MailBlockClickHouse")) {
		list<MailBlockClickHouse> new_list = static_cast<list <MailBlockClickHouse> > (getLocal());
		node = converttoJson(&new_list, "MailBlockClickHouse", "array");
	} else {
		node = json_node_alloc();
		list<MailBlockClickHouse> new_list = static_cast<list <MailBlockClickHouse> > (getLocal());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<MailBlockClickHouse>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			MailBlockClickHouse obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *localKey = "local";
	json_object_set_member(pJsonObject, localKey, node);
	if (isprimitive("MailBlockClickHouse")) {
		list<MailBlockClickHouse> new_list = static_cast<list <MailBlockClickHouse> > (getMbtrap());
		node = converttoJson(&new_list, "MailBlockClickHouse", "array");
	} else {
		node = json_node_alloc();
		list<MailBlockClickHouse> new_list = static_cast<list <MailBlockClickHouse> > (getMbtrap());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<MailBlockClickHouse>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			MailBlockClickHouse obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *mbtrapKey = "mbtrap";
	json_object_set_member(pJsonObject, mbtrapKey, node);
	if (isprimitive("MailBlockRspamd")) {
		list<MailBlockRspamd> new_list = static_cast<list <MailBlockRspamd> > (getSubject());
		node = converttoJson(&new_list, "MailBlockRspamd", "array");
	} else {
		node = json_node_alloc();
		list<MailBlockRspamd> new_list = static_cast<list <MailBlockRspamd> > (getSubject());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<MailBlockRspamd>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			MailBlockRspamd obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
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

std::list<MailBlockClickHouse>
MailBlocks::getLocal()
{
	return local;
}

void
MailBlocks::setLocal(std::list <MailBlockClickHouse> local)
{
	this->local = local;
}

std::list<MailBlockClickHouse>
MailBlocks::getMbtrap()
{
	return mbtrap;
}

void
MailBlocks::setMbtrap(std::list <MailBlockClickHouse> mbtrap)
{
	this->mbtrap = mbtrap;
}

std::list<MailBlockRspamd>
MailBlocks::getSubject()
{
	return subject;
}

void
MailBlocks::setSubject(std::list <MailBlockRspamd> subject)
{
	this->subject = subject;
}


