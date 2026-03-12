#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Server_locations.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Server_locations::Server_locations()
{
	//__init();
}

Server_locations::~Server_locations()
{
	//__cleanup();
}

void
Server_locations::__init()
{
	//1 = new ServerLocation1();
}

void
Server_locations::__cleanup()
{
	//if(1 != NULL) {
	//
	//delete 1;
	//1 = NULL;
	//}
	//
}

void
Server_locations::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *1Key = "1";
	node = json_object_get_member(pJsonObject, 1Key);
	if (node !=NULL) {
	

		if (isprimitive("ServerLocation1")) {
			jsonToValue(&1, node, "ServerLocation1", "ServerLocation1");
		} else {
			
			ServerLocation1* obj = static_cast<ServerLocation1*> (&1);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Server_locations::Server_locations(char* json)
{
	this->fromJson(json);
}

char*
Server_locations::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerLocation1")) {
		ServerLocation1 obj = get1();
		node = converttoJson(&obj, "ServerLocation1", "");
	}
	else {
		
		ServerLocation1 obj = static_cast<ServerLocation1> (get1());
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

ServerLocation1
Server_locations::get1()
{
	return 1;
}

void
Server_locations::set1(ServerLocation1  1)
{
	this->1 = 1;
}


