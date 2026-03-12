#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfoLimits_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfoLimits_inner::AccountInfoLimits_inner()
{
	//__init();
}

AccountInfoLimits_inner::~AccountInfoLimits_inner()
{
	//__cleanup();
}

void
AccountInfoLimits_inner::__init()
{
	//start = std::string();
	//end = std::string();
}

void
AccountInfoLimits_inner::__cleanup()
{
	//if(start != NULL) {
	//
	//delete start;
	//start = NULL;
	//}
	//if(end != NULL) {
	//
	//delete end;
	//end = NULL;
	//}
	//
}

void
AccountInfoLimits_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *startKey = "start";
	node = json_object_get_member(pJsonObject, startKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&start, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *endKey = "end";
	node = json_object_get_member(pJsonObject, endKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&end, node, "std::string", "");
		} else {
			
		}
	}
}

AccountInfoLimits_inner::AccountInfoLimits_inner(char* json)
{
	this->fromJson(json);
}

char*
AccountInfoLimits_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getStart();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *startKey = "start";
	json_object_set_member(pJsonObject, startKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getEnd();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *endKey = "end";
	json_object_set_member(pJsonObject, endKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AccountInfoLimits_inner::getStart()
{
	return start;
}

void
AccountInfoLimits_inner::setStart(std::string  start)
{
	this->start = start;
}

std::string
AccountInfoLimits_inner::getEnd()
{
	return end;
}

void
AccountInfoLimits_inner::setEnd(std::string  end)
{
	this->end = end;
}


