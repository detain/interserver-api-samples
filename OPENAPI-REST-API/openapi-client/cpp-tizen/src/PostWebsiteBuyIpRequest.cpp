#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "PostWebsiteBuyIp_request.h"

using namespace std;
using namespace Tizen::ArtikCloud;

PostWebsiteBuyIp_request::PostWebsiteBuyIp_request()
{
	//__init();
}

PostWebsiteBuyIp_request::~PostWebsiteBuyIp_request()
{
	//__cleanup();
}

void
PostWebsiteBuyIp_request::__init()
{
	//new std::map()std::map> ips;
}

void
PostWebsiteBuyIp_request::__cleanup()
{
	//if(ips != NULL) {
	//ips.RemoveAll(true);
	//delete ips;
	//ips = NULL;
	//}
	//
}

void
PostWebsiteBuyIp_request::fromJson(char* jsonStr)
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

PostWebsiteBuyIp_request::PostWebsiteBuyIp_request(char* json)
{
	this->fromJson(json);
}

char*
PostWebsiteBuyIp_request::toJson()
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
PostWebsiteBuyIp_request::getIps()
{
	return ips;
}

void
PostWebsiteBuyIp_request::setIps(std::map <string, string> ips)
{
	this->ips = ips;
}


