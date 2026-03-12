#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailDelistResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailDelistResponse::MailDelistResponse()
{
	//__init();
}

MailDelistResponse::~MailDelistResponse()
{
	//__cleanup();
}

void
MailDelistResponse::__init()
{
	//id = int(0);
	//new std::list()std::list> local;
	//new std::list()std::list> mbtrap;
	//new std::list()std::list> subject;
	//new std::list()std::list> manual;
}

void
MailDelistResponse::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
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
	//if(manual != NULL) {
	//manual.RemoveAll(true);
	//delete manual;
	//manual = NULL;
	//}
	//
}

void
MailDelistResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
		} else {
			
		}
	}
	const gchar *localKey = "local";
	node = json_object_get_member(pJsonObject, localKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
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
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
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
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			subject = new_list;
		}
		
	}
	const gchar *manualKey = "manual";
	node = json_object_get_member(pJsonObject, manualKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			manual = new_list;
		}
		
	}
}

MailDelistResponse::MailDelistResponse(char* json)
{
	this->fromJson(json);
}

char*
MailDelistResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getLocal());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getLocal());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<std::string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			std::string obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *localKey = "local";
	json_object_set_member(pJsonObject, localKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getMbtrap());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getMbtrap());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<std::string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			std::string obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *mbtrapKey = "mbtrap";
	json_object_set_member(pJsonObject, mbtrapKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getSubject());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getSubject());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<std::string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			std::string obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *subjectKey = "subject";
	json_object_set_member(pJsonObject, subjectKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getManual());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getManual());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<std::string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			std::string obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *manualKey = "manual";
	json_object_set_member(pJsonObject, manualKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
MailDelistResponse::getId()
{
	return id;
}

void
MailDelistResponse::setId(int  id)
{
	this->id = id;
}

std::list<std::string>
MailDelistResponse::getLocal()
{
	return local;
}

void
MailDelistResponse::setLocal(std::list <std::string> local)
{
	this->local = local;
}

std::list<std::string>
MailDelistResponse::getMbtrap()
{
	return mbtrap;
}

void
MailDelistResponse::setMbtrap(std::list <std::string> mbtrap)
{
	this->mbtrap = mbtrap;
}

std::list<std::string>
MailDelistResponse::getSubject()
{
	return subject;
}

void
MailDelistResponse::setSubject(std::list <std::string> subject)
{
	this->subject = subject;
}

std::list<std::string>
MailDelistResponse::getManual()
{
	return manual;
}

void
MailDelistResponse::setManual(std::list <std::string> manual)
{
	this->manual = manual;
}


