#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetWebsiteBuyIp_200_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetWebsiteBuyIp_200_response::GetWebsiteBuyIp_200_response()
{
	//__init();
}

GetWebsiteBuyIp_200_response::~GetWebsiteBuyIp_200_response()
{
	//__cleanup();
}

void
GetWebsiteBuyIp_200_response::__init()
{
	//new std::map()std::map> ips;
}

void
GetWebsiteBuyIp_200_response::__cleanup()
{
	//if(ips != NULL) {
	//ips.RemoveAll(true);
	//delete ips;
	//ips = NULL;
	//}
	//
}

void
GetWebsiteBuyIp_200_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ipsKey = "ips";
	node = json_object_get_member(pJsonObject, ipsKey);
	if (node !=NULL) {
	
		{
			JsonObject* json_obj = json_node_get_object(node);
			map<string,string> new_map;
			json_object_foreach_member(json_obj,helper_func,&new_map);
			ips = new_map;
		}
		
	}
}

GetWebsiteBuyIp_200_response::GetWebsiteBuyIp_200_response(char* json)
{
	this->fromJson(json);
}

char*
GetWebsiteBuyIp_200_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;


	{
		JsonObject* json_obj;
		map<string, string> new_list = static_cast<map <string, string> > (getIps());
		json_obj = json_object_new();
		for (map<string, string>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			string obj = (*it).first;
			string obj2 = (*it).second;
			JsonNode* tempnode = json_from_string(obj2.c_str(),NULL);
			json_object_set_member(json_obj, obj.c_str(), tempnode);
		}
	node = json_node_alloc();
	json_node_init_object(node, json_obj);
	json_object_unref(json_obj);
	}

	const gchar *ipsKey = "ips";
	json_object_set_member(pJsonObject, ipsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::map<string, string>
GetWebsiteBuyIp_200_response::getIps()
{
	return ips;
}

void
GetWebsiteBuyIp_200_response::setIps(std::map <string, string> ips)
{
	this->ips = ips;
}


