#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrder_os_li.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrder_os_li::ServerOrder_os_li()
{
	//__init();
}

ServerOrder_os_li::~ServerOrder_os_li()
{
	//__cleanup();
}

void
ServerOrder_os_li::__init()
{
	//51 = new ServerOrderOS();
}

void
ServerOrder_os_li::__cleanup()
{
	//if(51 != NULL) {
	//
	//delete 51;
	//51 = NULL;
	//}
	//
}

void
ServerOrder_os_li::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *51Key = "51";
	node = json_object_get_member(pJsonObject, 51Key);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderOS")) {
			jsonToValue(&51, node, "ServerOrderOS", "ServerOrderOS");
		} else {
			
			ServerOrderOS* obj = static_cast<ServerOrderOS*> (&51);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerOrder_os_li::ServerOrder_os_li(char* json)
{
	this->fromJson(json);
}

char*
ServerOrder_os_li::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerOrderOS")) {
		ServerOrderOS obj = get51();
		node = converttoJson(&obj, "ServerOrderOS", "");
	}
	else {
		
		ServerOrderOS obj = static_cast<ServerOrderOS> (get51());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *51Key = "51";
	json_object_set_member(pJsonObject, 51Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ServerOrderOS
ServerOrder_os_li::get51()
{
	return 51;
}

void
ServerOrder_os_li::set51(ServerOrderOS  51)
{
	this->51 = 51;
}


