#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_locationStock.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_locationStock::VpsOrder_locationStock()
{
	//__init();
}

VpsOrder_locationStock::~VpsOrder_locationStock()
{
	//__cleanup();
}

void
VpsOrder_locationStock::__init()
{
	//1 = new VpsOrder_locationStock_1();
}

void
VpsOrder_locationStock::__cleanup()
{
	//if(1 != NULL) {
	//
	//delete 1;
	//1 = NULL;
	//}
	//
}

void
VpsOrder_locationStock::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *1Key = "1";
	node = json_object_get_member(pJsonObject, 1Key);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_locationStock_1")) {
			jsonToValue(&1, node, "VpsOrder_locationStock_1", "VpsOrder_locationStock_1");
		} else {
			
			VpsOrder_locationStock_1* obj = static_cast<VpsOrder_locationStock_1*> (&1);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsOrder_locationStock::VpsOrder_locationStock(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_locationStock::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsOrder_locationStock_1")) {
		VpsOrder_locationStock_1 obj = get1();
		node = converttoJson(&obj, "VpsOrder_locationStock_1", "");
	}
	else {
		
		VpsOrder_locationStock_1 obj = static_cast<VpsOrder_locationStock_1> (get1());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *1Key = "1";
	json_object_set_member(pJsonObject, 1Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsOrder_locationStock_1
VpsOrder_locationStock::get1()
{
	return 1;
}

void
VpsOrder_locationStock::set1(VpsOrder_locationStock_1  1)
{
	this->1 = 1;
}


