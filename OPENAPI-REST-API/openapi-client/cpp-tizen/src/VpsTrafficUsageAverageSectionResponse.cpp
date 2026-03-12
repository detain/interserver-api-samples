#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTrafficUsageAverageSectionResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTrafficUsageAverageSectionResponse::VpsTrafficUsageAverageSectionResponse()
{
	//__init();
}

VpsTrafficUsageAverageSectionResponse::~VpsTrafficUsageAverageSectionResponse()
{
	//__cleanup();
}

void
VpsTrafficUsageAverageSectionResponse::__init()
{
	//total = int(0);
	//count = int(0);
	//value = int(0);
}

void
VpsTrafficUsageAverageSectionResponse::__cleanup()
{
	//if(total != NULL) {
	//
	//delete total;
	//total = NULL;
	//}
	//if(count != NULL) {
	//
	//delete count;
	//count = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
VpsTrafficUsageAverageSectionResponse::fromJson(char* jsonStr)
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
	const gchar *countKey = "count";
	node = json_object_get_member(pJsonObject, countKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&count, node, "int", "");
		} else {
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&value, node, "int", "");
		} else {
			
		}
	}
}

VpsTrafficUsageAverageSectionResponse::VpsTrafficUsageAverageSectionResponse(char* json)
{
	this->fromJson(json);
}

char*
VpsTrafficUsageAverageSectionResponse::toJson()
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
		int obj = getCount();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *countKey = "count";
	json_object_set_member(pJsonObject, countKey, node);
	if (isprimitive("int")) {
		int obj = getValue();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
VpsTrafficUsageAverageSectionResponse::getTotal()
{
	return total;
}

void
VpsTrafficUsageAverageSectionResponse::setTotal(int  total)
{
	this->total = total;
}

int
VpsTrafficUsageAverageSectionResponse::getCount()
{
	return count;
}

void
VpsTrafficUsageAverageSectionResponse::setCount(int  count)
{
	this->count = count;
}

int
VpsTrafficUsageAverageSectionResponse::getValue()
{
	return value;
}

void
VpsTrafficUsageAverageSectionResponse::setValue(int  value)
{
	this->value = value;
}


