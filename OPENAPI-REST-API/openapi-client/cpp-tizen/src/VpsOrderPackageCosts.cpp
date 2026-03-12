#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_packageCosts.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_packageCosts::VpsOrder_packageCosts()
{
	//__init();
}

VpsOrder_packageCosts::~VpsOrder_packageCosts()
{
	//__cleanup();
}

void
VpsOrder_packageCosts::__init()
{
	//57 = double(0);
}

void
VpsOrder_packageCosts::__cleanup()
{
	//if(57 != NULL) {
	//
	//delete 57;
	//57 = NULL;
	//}
	//
}

void
VpsOrder_packageCosts::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *57Key = "57";
	node = json_object_get_member(pJsonObject, 57Key);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&57, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&57);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsOrder_packageCosts::VpsOrder_packageCosts(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_packageCosts::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = get57();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (get57());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *57Key = "57";
	json_object_set_member(pJsonObject, 57Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
VpsOrder_packageCosts::get57()
{
	return 57;
}

void
VpsOrder_packageCosts::set57(long long  57)
{
	this->57 = 57;
}


