#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrder_bandwidth_li.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrder_bandwidth_li::ServerOrder_bandwidth_li()
{
	//__init();
}

ServerOrder_bandwidth_li::~ServerOrder_bandwidth_li()
{
	//__cleanup();
}

void
ServerOrder_bandwidth_li::__init()
{
	//15 = new ServerOrderBandwidth();
}

void
ServerOrder_bandwidth_li::__cleanup()
{
	//if(15 != NULL) {
	//
	//delete 15;
	//15 = NULL;
	//}
	//
}

void
ServerOrder_bandwidth_li::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *15Key = "15";
	node = json_object_get_member(pJsonObject, 15Key);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderBandwidth")) {
			jsonToValue(&15, node, "ServerOrderBandwidth", "ServerOrderBandwidth");
		} else {
			
			ServerOrderBandwidth* obj = static_cast<ServerOrderBandwidth*> (&15);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerOrder_bandwidth_li::ServerOrder_bandwidth_li(char* json)
{
	this->fromJson(json);
}

char*
ServerOrder_bandwidth_li::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerOrderBandwidth")) {
		ServerOrderBandwidth obj = get15();
		node = converttoJson(&obj, "ServerOrderBandwidth", "");
	}
	else {
		
		ServerOrderBandwidth obj = static_cast<ServerOrderBandwidth> (get15());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *15Key = "15";
	json_object_set_member(pJsonObject, 15Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ServerOrderBandwidth
ServerOrder_bandwidth_li::get15()
{
	return 15;
}

void
ServerOrder_bandwidth_li::set15(ServerOrderBandwidth  15)
{
	this->15 = 15;
}


