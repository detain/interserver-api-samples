#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_locationNames.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_locationNames::VpsOrder_locationNames()
{
	//__init();
}

VpsOrder_locationNames::~VpsOrder_locationNames()
{
	//__cleanup();
}

void
VpsOrder_locationNames::__init()
{
	//3 = std::string();
}

void
VpsOrder_locationNames::__cleanup()
{
	//if(3 != NULL) {
	//
	//delete 3;
	//3 = NULL;
	//}
	//
}

void
VpsOrder_locationNames::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *3Key = "3";
	node = json_object_get_member(pJsonObject, 3Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&3, node, "std::string", "");
		} else {
			
		}
	}
}

VpsOrder_locationNames::VpsOrder_locationNames(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_locationNames::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get3();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *3Key = "3";
	json_object_set_member(pJsonObject, 3Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsOrder_locationNames::get3()
{
	return 3;
}

void
VpsOrder_locationNames::set3(std::string  3)
{
	this->3 = 3;
}


