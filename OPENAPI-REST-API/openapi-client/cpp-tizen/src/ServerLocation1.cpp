#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerLocation1.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerLocation1::ServerLocation1()
{
	//__init();
}

ServerLocation1::~ServerLocation1()
{
	//__cleanup();
}

void
ServerLocation1::__init()
{
	//location_id = int(0);
	//location_name = std::string();
	//location_lat = std::string();
	//location_long = std::string();
	//location_description = std::string();
	//location_ipmi_group = int(0);
}

void
ServerLocation1::__cleanup()
{
	//if(location_id != NULL) {
	//
	//delete location_id;
	//location_id = NULL;
	//}
	//if(location_name != NULL) {
	//
	//delete location_name;
	//location_name = NULL;
	//}
	//if(location_lat != NULL) {
	//
	//delete location_lat;
	//location_lat = NULL;
	//}
	//if(location_long != NULL) {
	//
	//delete location_long;
	//location_long = NULL;
	//}
	//if(location_description != NULL) {
	//
	//delete location_description;
	//location_description = NULL;
	//}
	//if(location_ipmi_group != NULL) {
	//
	//delete location_ipmi_group;
	//location_ipmi_group = NULL;
	//}
	//
}

void
ServerLocation1::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *location_idKey = "location_id";
	node = json_object_get_member(pJsonObject, location_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&location_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *location_nameKey = "location_name";
	node = json_object_get_member(pJsonObject, location_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *location_latKey = "location_lat";
	node = json_object_get_member(pJsonObject, location_latKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location_lat, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *location_longKey = "location_long";
	node = json_object_get_member(pJsonObject, location_longKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location_long, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *location_descriptionKey = "location_description";
	node = json_object_get_member(pJsonObject, location_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *location_ipmi_groupKey = "location_ipmi_group";
	node = json_object_get_member(pJsonObject, location_ipmi_groupKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&location_ipmi_group, node, "int", "");
		} else {
			
		}
	}
}

ServerLocation1::ServerLocation1(char* json)
{
	this->fromJson(json);
}

char*
ServerLocation1::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getLocationId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *location_idKey = "location_id";
	json_object_set_member(pJsonObject, location_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocationName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *location_nameKey = "location_name";
	json_object_set_member(pJsonObject, location_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocationLat();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *location_latKey = "location_lat";
	json_object_set_member(pJsonObject, location_latKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocationLong();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *location_longKey = "location_long";
	json_object_set_member(pJsonObject, location_longKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocationDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *location_descriptionKey = "location_description";
	json_object_set_member(pJsonObject, location_descriptionKey, node);
	if (isprimitive("int")) {
		int obj = getLocationIpmiGroup();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *location_ipmi_groupKey = "location_ipmi_group";
	json_object_set_member(pJsonObject, location_ipmi_groupKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ServerLocation1::getLocationId()
{
	return location_id;
}

void
ServerLocation1::setLocationId(int  location_id)
{
	this->location_id = location_id;
}

std::string
ServerLocation1::getLocationName()
{
	return location_name;
}

void
ServerLocation1::setLocationName(std::string  location_name)
{
	this->location_name = location_name;
}

std::string
ServerLocation1::getLocationLat()
{
	return location_lat;
}

void
ServerLocation1::setLocationLat(std::string  location_lat)
{
	this->location_lat = location_lat;
}

std::string
ServerLocation1::getLocationLong()
{
	return location_long;
}

void
ServerLocation1::setLocationLong(std::string  location_long)
{
	this->location_long = location_long;
}

std::string
ServerLocation1::getLocationDescription()
{
	return location_description;
}

void
ServerLocation1::setLocationDescription(std::string  location_description)
{
	this->location_description = location_description;
}

int
ServerLocation1::getLocationIpmiGroup()
{
	return location_ipmi_group;
}

void
ServerLocation1::setLocationIpmiGroup(int  location_ipmi_group)
{
	this->location_ipmi_group = location_ipmi_group;
}


