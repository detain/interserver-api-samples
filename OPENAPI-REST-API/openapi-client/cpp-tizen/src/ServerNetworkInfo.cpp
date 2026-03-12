#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerNetworkInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerNetworkInfo::ServerNetworkInfo()
{
	//__init();
}

ServerNetworkInfo::~ServerNetworkInfo()
{
	//__cleanup();
}

void
ServerNetworkInfo::__init()
{
	//new std::list()std::list> vlans;
	//new std::list()std::list> vlans6;
	//assets = new ServerNetworkInfo_assets();
	//switchports = new ServerNetworkInfo_switchports();
}

void
ServerNetworkInfo::__cleanup()
{
	//if(vlans != NULL) {
	//vlans.RemoveAll(true);
	//delete vlans;
	//vlans = NULL;
	//}
	//if(vlans6 != NULL) {
	//vlans6.RemoveAll(true);
	//delete vlans6;
	//vlans6 = NULL;
	//}
	//if(assets != NULL) {
	//
	//delete assets;
	//assets = NULL;
	//}
	//if(switchports != NULL) {
	//
	//delete switchports;
	//switchports = NULL;
	//}
	//
}

void
ServerNetworkInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *vlansKey = "vlans";
	node = json_object_get_member(pJsonObject, vlansKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			vlans = new_list;
		}
		
	}
	const gchar *vlans6Key = "vlans6";
	node = json_object_get_member(pJsonObject, vlans6Key);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			vlans6 = new_list;
		}
		
	}
	const gchar *assetsKey = "assets";
	node = json_object_get_member(pJsonObject, assetsKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerNetworkInfo_assets")) {
			jsonToValue(&assets, node, "ServerNetworkInfo_assets", "ServerNetworkInfo_assets");
		} else {
			
			ServerNetworkInfo_assets* obj = static_cast<ServerNetworkInfo_assets*> (&assets);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *switchportsKey = "switchports";
	node = json_object_get_member(pJsonObject, switchportsKey);
	if (node !=NULL) {
	

		if (isprimitive("ServerNetworkInfo_switchports")) {
			jsonToValue(&switchports, node, "ServerNetworkInfo_switchports", "ServerNetworkInfo_switchports");
		} else {
			
			ServerNetworkInfo_switchports* obj = static_cast<ServerNetworkInfo_switchports*> (&switchports);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

ServerNetworkInfo::ServerNetworkInfo(char* json)
{
	this->fromJson(json);
}

char*
ServerNetworkInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getVlans());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getVlans());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *vlansKey = "vlans";
	json_object_set_member(pJsonObject, vlansKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getVlans6());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getVlans6());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *vlans6Key = "vlans6";
	json_object_set_member(pJsonObject, vlans6Key, node);
	if (isprimitive("ServerNetworkInfo_assets")) {
		ServerNetworkInfo_assets obj = getAssets();
		node = converttoJson(&obj, "ServerNetworkInfo_assets", "");
	}
	else {
		
		ServerNetworkInfo_assets obj = static_cast<ServerNetworkInfo_assets> (getAssets());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *assetsKey = "assets";
	json_object_set_member(pJsonObject, assetsKey, node);
	if (isprimitive("ServerNetworkInfo_switchports")) {
		ServerNetworkInfo_switchports obj = getSwitchports();
		node = converttoJson(&obj, "ServerNetworkInfo_switchports", "");
	}
	else {
		
		ServerNetworkInfo_switchports obj = static_cast<ServerNetworkInfo_switchports> (getSwitchports());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *switchportsKey = "switchports";
	json_object_set_member(pJsonObject, switchportsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<std::string>
ServerNetworkInfo::getVlans()
{
	return vlans;
}

void
ServerNetworkInfo::setVlans(std::list <std::string> vlans)
{
	this->vlans = vlans;
}

std::list<std::string>
ServerNetworkInfo::getVlans6()
{
	return vlans6;
}

void
ServerNetworkInfo::setVlans6(std::list <std::string> vlans6)
{
	this->vlans6 = vlans6;
}

ServerNetworkInfo_assets
ServerNetworkInfo::getAssets()
{
	return assets;
}

void
ServerNetworkInfo::setAssets(ServerNetworkInfo_assets  assets)
{
	this->assets = assets;
}

ServerNetworkInfo_switchports
ServerNetworkInfo::getSwitchports()
{
	return switchports;
}

void
ServerNetworkInfo::setSwitchports(ServerNetworkInfo_switchports  switchports)
{
	this->switchports = switchports;
}


