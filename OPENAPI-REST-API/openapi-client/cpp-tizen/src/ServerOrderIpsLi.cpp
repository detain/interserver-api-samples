#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrder_ips_li.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrder_ips_li::ServerOrder_ips_li()
{
	//__init();
}

ServerOrder_ips_li::~ServerOrder_ips_li()
{
	//__cleanup();
}

void
ServerOrder_ips_li::__init()
{
	//9 = new ServerOrderIP();
}

void
ServerOrder_ips_li::__cleanup()
{
	//if(9 != NULL) {
	//
	//delete 9;
	//9 = NULL;
	//}
	//
}

void
ServerOrder_ips_li::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *9Key = "9";
	node = json_object_get_member(pJsonObject, 9Key);
	if (node !=NULL) {
	

		if (isprimitive("ServerOrderIP")) {
			jsonToValue(&9, node, "ServerOrderIP", "ServerOrderIP");
		} else {
			
			ServerOrderIP* obj = static_cast<ServerOrderIP*> (&9);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerOrder_ips_li::ServerOrder_ips_li(char* json)
{
	this->fromJson(json);
}

char*
ServerOrder_ips_li::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("ServerOrderIP")) {
		ServerOrderIP obj = get9();
		node = converttoJson(&obj, "ServerOrderIP", "");
	}
	else {
		
		ServerOrderIP obj = static_cast<ServerOrderIP> (get9());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *9Key = "9";
	json_object_set_member(pJsonObject, 9Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

ServerOrderIP
ServerOrder_ips_li::get9()
{
	return 9;
}

void
ServerOrder_ips_li::set9(ServerOrderIP  9)
{
	this->9 = 9;
}


