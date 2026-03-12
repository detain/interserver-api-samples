#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_serviceTypes.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_serviceTypes::VpsOrder_serviceTypes()
{
	//__init();
}

VpsOrder_serviceTypes::~VpsOrder_serviceTypes()
{
	//__cleanup();
}

void
VpsOrder_serviceTypes::__init()
{
	//32 = new VpsOrder_serviceTypes_32();
}

void
VpsOrder_serviceTypes::__cleanup()
{
	//if(32 != NULL) {
	//
	//delete 32;
	//32 = NULL;
	//}
	//
}

void
VpsOrder_serviceTypes::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *32Key = "32";
	node = json_object_get_member(pJsonObject, 32Key);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_serviceTypes_32")) {
			jsonToValue(&32, node, "VpsOrder_serviceTypes_32", "VpsOrder_serviceTypes_32");
		} else {
			
			VpsOrder_serviceTypes_32* obj = static_cast<VpsOrder_serviceTypes_32*> (&32);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsOrder_serviceTypes::VpsOrder_serviceTypes(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_serviceTypes::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsOrder_serviceTypes_32")) {
		VpsOrder_serviceTypes_32 obj = get32();
		node = converttoJson(&obj, "VpsOrder_serviceTypes_32", "");
	}
	else {
		
		VpsOrder_serviceTypes_32 obj = static_cast<VpsOrder_serviceTypes_32> (get32());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *32Key = "32";
	json_object_set_member(pJsonObject, 32Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsOrder_serviceTypes_32
VpsOrder_serviceTypes::get32()
{
	return 32;
}

void
VpsOrder_serviceTypes::set32(VpsOrder_serviceTypes_32  32)
{
	this->32 = 32;
}


