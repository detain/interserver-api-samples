#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupsOrder_serviceTypes.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupsOrder_serviceTypes::BackupsOrder_serviceTypes()
{
	//__init();
}

BackupsOrder_serviceTypes::~BackupsOrder_serviceTypes()
{
	//__cleanup();
}

void
BackupsOrder_serviceTypes::__init()
{
	//11006 = new BackupsOrderServiceTypes();
}

void
BackupsOrder_serviceTypes::__cleanup()
{
	//if(11006 != NULL) {
	//
	//delete 11006;
	//11006 = NULL;
	//}
	//
}

void
BackupsOrder_serviceTypes::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *11006Key = "11006";
	node = json_object_get_member(pJsonObject, 11006Key);
	if (node !=NULL) {
	

		if (isprimitive("BackupsOrderServiceTypes")) {
			jsonToValue(&11006, node, "BackupsOrderServiceTypes", "BackupsOrderServiceTypes");
		} else {
			
			BackupsOrderServiceTypes* obj = static_cast<BackupsOrderServiceTypes*> (&11006);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

BackupsOrder_serviceTypes::BackupsOrder_serviceTypes(char* json)
{
	this->fromJson(json);
}

char*
BackupsOrder_serviceTypes::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("BackupsOrderServiceTypes")) {
		BackupsOrderServiceTypes obj = get11006();
		node = converttoJson(&obj, "BackupsOrderServiceTypes", "");
	}
	else {
		
		BackupsOrderServiceTypes obj = static_cast<BackupsOrderServiceTypes> (get11006());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *11006Key = "11006";
	json_object_set_member(pJsonObject, 11006Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

BackupsOrderServiceTypes
BackupsOrder_serviceTypes::get11006()
{
	return 11006;
}

void
BackupsOrder_serviceTypes::set11006(BackupsOrderServiceTypes  11006)
{
	this->11006 = 11006;
}


