#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrder_memory_li.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrder_memory_li::ServerOrder_memory_li()
{
	//__init();
}

ServerOrder_memory_li::~ServerOrder_memory_li()
{
	//__cleanup();
}

void
ServerOrder_memory_li::__init()
{
	//254 = new ServerOrder_memory_li_254();
}

void
ServerOrder_memory_li::__cleanup()
{
	//if(254 != NULL) {
	//
	//delete 254;
	//254 = NULL;
	//}
	//
}

void
ServerOrder_memory_li::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *254Key = "254";
	node = json_object_get_member(pJsonObject, 254Key);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrder_memory_li_254")) {
			jsonToValue(&254, node, "ServerOrder_memory_li_254", "ServerOrder_memory_li_254");
		} else {
			
			ServerOrder_memory_li_254* obj = static_cast<ServerOrder_memory_li_254*> (&254);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerOrder_memory_li::ServerOrder_memory_li(char* json)
{
	this->fromJson(json);
}

char*
ServerOrder_memory_li::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerOrder_memory_li_254")) {
		ServerOrder_memory_li_254 obj = get254();
		node = converttoJson(&obj, "ServerOrder_memory_li_254", "");
	}
	else {
		
		ServerOrder_memory_li_254 obj = static_cast<ServerOrder_memory_li_254> (get254());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *254Key = "254";
	json_object_set_member(pJsonObject, 254Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ServerOrder_memory_li_254
ServerOrder_memory_li::get254()
{
	return 254;
}

void
ServerOrder_memory_li::set254(ServerOrder_memory_li_254  254)
{
	this->254 = 254;
}


