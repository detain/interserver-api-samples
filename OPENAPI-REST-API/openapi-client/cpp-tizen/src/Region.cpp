#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Region.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Region::Region()
{
	//__init();
}

Region::~Region()
{
	//__cleanup();
}

void
Region::__init()
{
	//region_id = int(0);
	//region_name = std::string();
}

void
Region::__cleanup()
{
	//if(region_id != NULL) {
	//
	//delete region_id;
	//region_id = NULL;
	//}
	//if(region_name != NULL) {
	//
	//delete region_name;
	//region_name = NULL;
	//}
	//
}

void
Region::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *region_idKey = "region_id";
	node = json_object_get_member(pJsonObject, region_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&region_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *region_nameKey = "region_name";
	node = json_object_get_member(pJsonObject, region_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&region_name, node, "std::string", "");
		} else {
			
		}
	}
}

Region::Region(char* json)
{
	this->fromJson(json);
}

char*
Region::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getRegionId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *region_idKey = "region_id";
	json_object_set_member(pJsonObject, region_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRegionName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *region_nameKey = "region_name";
	json_object_set_member(pJsonObject, region_nameKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
Region::getRegionId()
{
	return region_id;
}

void
Region::setRegionId(int  region_id)
{
	this->region_id = region_id;
}

std::string
Region::getRegionName()
{
	return region_name;
}

void
Region::setRegionName(std::string  region_name)
{
	this->region_name = region_name;
}


