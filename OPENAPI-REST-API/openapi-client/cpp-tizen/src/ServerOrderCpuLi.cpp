#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrder_cpu_li.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrder_cpu_li::ServerOrder_cpu_li()
{
	//__init();
}

ServerOrder_cpu_li::~ServerOrder_cpu_li()
{
	//__cleanup();
}

void
ServerOrder_cpu_li::__init()
{
	//254 = new ServerOrderCPU();
}

void
ServerOrder_cpu_li::__cleanup()
{
	//if(254 != NULL) {
	//
	//delete 254;
	//254 = NULL;
	//}
	//
}

void
ServerOrder_cpu_li::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *254Key = "254";
	node = json_object_get_member(pJsonObject, 254Key);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderCPU")) {
			jsonToValue(&254, node, "ServerOrderCPU", "ServerOrderCPU");
		} else {
			
			ServerOrderCPU* obj = static_cast<ServerOrderCPU*> (&254);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerOrder_cpu_li::ServerOrder_cpu_li(char* json)
{
	this->fromJson(json);
}

char*
ServerOrder_cpu_li::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerOrderCPU")) {
		ServerOrderCPU obj = get254();
		node = converttoJson(&obj, "ServerOrderCPU", "");
	}
	else {
		
		ServerOrderCPU obj = static_cast<ServerOrderCPU> (get254());
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

ServerOrderCPU
ServerOrder_cpu_li::get254()
{
	return 254;
}

void
ServerOrder_cpu_li::set254(ServerOrderCPU  254)
{
	this->254 = 254;
}


