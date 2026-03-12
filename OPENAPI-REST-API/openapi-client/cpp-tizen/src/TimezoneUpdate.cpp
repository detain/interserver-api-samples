#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "TimezoneUpdate.h"

using namespace std;
using namespace Tizen::ArtikCloud;

TimezoneUpdate::TimezoneUpdate()
{
	//__init();
}

TimezoneUpdate::~TimezoneUpdate()
{
	//__cleanup();
}

void
TimezoneUpdate::__init()
{
	//timezone = std::string();
}

void
TimezoneUpdate::__cleanup()
{
	//if(timezone != NULL) {
	//
	//delete timezone;
	//timezone = NULL;
	//}
	//
}

void
TimezoneUpdate::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *timezoneKey = "timezone";
	node = json_object_get_member(pJsonObject, timezoneKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&timezone, node, "std::string", "");
		} else {
			
		}
	}
}

TimezoneUpdate::TimezoneUpdate(char* json)
{
	this->fromJson(json);
}

char*
TimezoneUpdate::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getTimezone();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *timezoneKey = "timezone";
	json_object_set_member(pJsonObject, timezoneKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
TimezoneUpdate::getTimezone()
{
	return timezone;
}

void
TimezoneUpdate::setTimezone(std::string  timezone)
{
	this->timezone = timezone;
}


