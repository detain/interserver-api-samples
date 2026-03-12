#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerNetworkInfo_switchports.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerNetworkInfo_switchports::ServerNetworkInfo_switchports()
{
	//__init();
}

ServerNetworkInfo_switchports::~ServerNetworkInfo_switchports()
{
	//__cleanup();
}

void
ServerNetworkInfo_switchports::__init()
{
	//10414 = new ServerSwitchport();
}

void
ServerNetworkInfo_switchports::__cleanup()
{
	//if(10414 != NULL) {
	//
	//delete 10414;
	//10414 = NULL;
	//}
	//
}

void
ServerNetworkInfo_switchports::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *10414Key = "10414";
	node = json_object_get_member(pJsonObject, 10414Key);
	if (node !=NULL) {
	

		if (isprimitive("ServerSwitchport")) {
			jsonToValue(&10414, node, "ServerSwitchport", "ServerSwitchport");
		} else {
			
			ServerSwitchport* obj = static_cast<ServerSwitchport*> (&10414);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerNetworkInfo_switchports::ServerNetworkInfo_switchports(char* json)
{
	this->fromJson(json);
}

char*
ServerNetworkInfo_switchports::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerSwitchport")) {
		ServerSwitchport obj = get10414();
		node = converttoJson(&obj, "ServerSwitchport", "");
	}
	else {
		
		ServerSwitchport obj = static_cast<ServerSwitchport> (get10414());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *10414Key = "10414";
	json_object_set_member(pJsonObject, 10414Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ServerSwitchport
ServerNetworkInfo_switchports::get10414()
{
	return 10414;
}

void
ServerNetworkInfo_switchports::set10414(ServerSwitchport  10414)
{
	this->10414 = 10414;
}


