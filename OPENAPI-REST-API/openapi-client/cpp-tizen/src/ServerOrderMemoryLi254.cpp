#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrder_memory_li_254.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrder_memory_li_254::ServerOrder_memory_li_254()
{
	//__init();
}

ServerOrder_memory_li_254::~ServerOrder_memory_li_254()
{
	//__cleanup();
}

void
ServerOrder_memory_li_254::__init()
{
	//65 = new ServerOrderMemory();
}

void
ServerOrder_memory_li_254::__cleanup()
{
	//if(65 != NULL) {
	//
	//delete 65;
	//65 = NULL;
	//}
	//
}

void
ServerOrder_memory_li_254::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *65Key = "65";
	node = json_object_get_member(pJsonObject, 65Key);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderMemory")) {
			jsonToValue(&65, node, "ServerOrderMemory", "ServerOrderMemory");
		} else {
			
			ServerOrderMemory* obj = static_cast<ServerOrderMemory*> (&65);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerOrder_memory_li_254::ServerOrder_memory_li_254(char* json)
{
	this->fromJson(json);
}

char*
ServerOrder_memory_li_254::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerOrderMemory")) {
		ServerOrderMemory obj = get65();
		node = converttoJson(&obj, "ServerOrderMemory", "");
	}
	else {
		
		ServerOrderMemory obj = static_cast<ServerOrderMemory> (get65());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *65Key = "65";
	json_object_set_member(pJsonObject, 65Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ServerOrderMemory
ServerOrder_memory_li_254::get65()
{
	return 65;
}

void
ServerOrder_memory_li_254::set65(ServerOrderMemory  65)
{
	this->65 = 65;
}


