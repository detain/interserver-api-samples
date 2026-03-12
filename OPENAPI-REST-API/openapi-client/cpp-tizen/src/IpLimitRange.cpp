#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "IpLimitRange.h"

using namespace std;
using namespace Tizen::ArtikCloud;

IpLimitRange::IpLimitRange()
{
	//__init();
}

IpLimitRange::~IpLimitRange()
{
	//__cleanup();
}

void
IpLimitRange::__init()
{
	//start = std::string();
	//end = std::string();
}

void
IpLimitRange::__cleanup()
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
IpLimitRange::fromJson(char* jsonStr)
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

IpLimitRange::IpLimitRange(char* json)
{
	this->fromJson(json);
}

char*
IpLimitRange::toJson()
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
IpLimitRange::getStart()
{
	return start;
}

void
IpLimitRange::setStart(std::string  start)
{
	this->start = start;
}

std::string
IpLimitRange::getEnd()
{
	return end;
}

void
IpLimitRange::setEnd(std::string  end)
{
	this->end = end;
}


