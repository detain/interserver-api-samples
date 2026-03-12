#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerSwitchport.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerSwitchport::ServerSwitchport()
{
	//__init();
}

ServerSwitchport::~ServerSwitchport()
{
	//__cleanup();
}

void
ServerSwitchport::__init()
{
	//switchport_id = int(0);
	//switch_id = std::string();
	//r_switch = std::string();
	//port = std::string();
	//blade = std::string();
	//justport = std::string();
	//graph_id = std::string();
	//asset_id = int(0);
	//new std::list()std::list> vlans;
	//new std::list()std::list> vlans6;
}

void
ServerSwitchport::__cleanup()
{
	//if(switchport_id != NULL) {
	//
	//delete switchport_id;
	//switchport_id = NULL;
	//}
	//if(switch_id != NULL) {
	//
	//delete switch_id;
	//switch_id = NULL;
	//}
	//if(r_switch != NULL) {
	//
	//delete r_switch;
	//r_switch = NULL;
	//}
	//if(port != NULL) {
	//
	//delete port;
	//port = NULL;
	//}
	//if(blade != NULL) {
	//
	//delete blade;
	//blade = NULL;
	//}
	//if(justport != NULL) {
	//
	//delete justport;
	//justport = NULL;
	//}
	//if(graph_id != NULL) {
	//
	//delete graph_id;
	//graph_id = NULL;
	//}
	//if(asset_id != NULL) {
	//
	//delete asset_id;
	//asset_id = NULL;
	//}
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
	//
}

void
ServerSwitchport::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *switchport_idKey = "switchport_id";
	node = json_object_get_member(pJsonObject, switchport_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&switchport_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *switch_idKey = "switch_id";
	node = json_object_get_member(pJsonObject, switch_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&switch_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *r_switchKey = "switch";
	node = json_object_get_member(pJsonObject, r_switchKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&r_switch, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *portKey = "port";
	node = json_object_get_member(pJsonObject, portKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&port, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *bladeKey = "blade";
	node = json_object_get_member(pJsonObject, bladeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&blade, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *justportKey = "justport";
	node = json_object_get_member(pJsonObject, justportKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&justport, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *graph_idKey = "graph_id";
	node = json_object_get_member(pJsonObject, graph_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&graph_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *asset_idKey = "asset_id";
	node = json_object_get_member(pJsonObject, asset_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&asset_id, node, "int", "");
		} else {
			
		}
	}
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
}

ServerSwitchport::ServerSwitchport(char* json)
{
	this->fromJson(json);
}

char*
ServerSwitchport::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getSwitchportId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *switchport_idKey = "switchport_id";
	json_object_set_member(pJsonObject, switchport_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSwitchId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *switch_idKey = "switch_id";
	json_object_set_member(pJsonObject, switch_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRSwitch();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *r_switchKey = "switch";
	json_object_set_member(pJsonObject, r_switchKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPort();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *portKey = "port";
	json_object_set_member(pJsonObject, portKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBlade();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *bladeKey = "blade";
	json_object_set_member(pJsonObject, bladeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getJustport();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *justportKey = "justport";
	json_object_set_member(pJsonObject, justportKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGraphId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *graph_idKey = "graph_id";
	json_object_set_member(pJsonObject, graph_idKey, node);
	if (isprimitive("int")) {
		int obj = getAssetId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *asset_idKey = "asset_id";
	json_object_set_member(pJsonObject, asset_idKey, node);
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ServerSwitchport::getSwitchportId()
{
	return switchport_id;
}

void
ServerSwitchport::setSwitchportId(int  switchport_id)
{
	this->switchport_id = switchport_id;
}

std::string
ServerSwitchport::getSwitchId()
{
	return switch_id;
}

void
ServerSwitchport::setSwitchId(std::string  switch_id)
{
	this->switch_id = switch_id;
}

std::string
ServerSwitchport::getRSwitch()
{
	return r_switch;
}

void
ServerSwitchport::setRSwitch(std::string  r_switch)
{
	this->r_switch = r_switch;
}

std::string
ServerSwitchport::getPort()
{
	return port;
}

void
ServerSwitchport::setPort(std::string  port)
{
	this->port = port;
}

std::string
ServerSwitchport::getBlade()
{
	return blade;
}

void
ServerSwitchport::setBlade(std::string  blade)
{
	this->blade = blade;
}

std::string
ServerSwitchport::getJustport()
{
	return justport;
}

void
ServerSwitchport::setJustport(std::string  justport)
{
	this->justport = justport;
}

std::string
ServerSwitchport::getGraphId()
{
	return graph_id;
}

void
ServerSwitchport::setGraphId(std::string  graph_id)
{
	this->graph_id = graph_id;
}

int
ServerSwitchport::getAssetId()
{
	return asset_id;
}

void
ServerSwitchport::setAssetId(int  asset_id)
{
	this->asset_id = asset_id;
}

std::list<std::string>
ServerSwitchport::getVlans()
{
	return vlans;
}

void
ServerSwitchport::setVlans(std::list <std::string> vlans)
{
	this->vlans = vlans;
}

std::list<std::string>
ServerSwitchport::getVlans6()
{
	return vlans6;
}

void
ServerSwitchport::setVlans6(std::list <std::string> vlans6)
{
	this->vlans6 = vlans6;
}


