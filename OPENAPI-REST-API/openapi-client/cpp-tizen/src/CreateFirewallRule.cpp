#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CreateFirewallRule.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CreateFirewallRule::CreateFirewallRule()
{
	//__init();
}

CreateFirewallRule::~CreateFirewallRule()
{
	//__cleanup();
}

void
CreateFirewallRule::__init()
{
	//protocol_id = int(0);
	//xdp_action = int(0);
	//destination_port = int(0);
	//source_ip = std::string();
	//source_port = int(0);
}

void
CreateFirewallRule::__cleanup()
{
	//if(protocol_id != NULL) {
	//
	//delete protocol_id;
	//protocol_id = NULL;
	//}
	//if(xdp_action != NULL) {
	//
	//delete xdp_action;
	//xdp_action = NULL;
	//}
	//if(destination_port != NULL) {
	//
	//delete destination_port;
	//destination_port = NULL;
	//}
	//if(source_ip != NULL) {
	//
	//delete source_ip;
	//source_ip = NULL;
	//}
	//if(source_port != NULL) {
	//
	//delete source_port;
	//source_port = NULL;
	//}
	//
}

void
CreateFirewallRule::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *protocol_idKey = "protocol_id";
	node = json_object_get_member(pJsonObject, protocol_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&protocol_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *xdp_actionKey = "xdp_action";
	node = json_object_get_member(pJsonObject, xdp_actionKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&xdp_action, node, "int", "");
		} else {
			
		}
	}
	const gchar *destination_portKey = "destination_port";
	node = json_object_get_member(pJsonObject, destination_portKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&destination_port, node, "int", "");
		} else {
			
		}
	}
	const gchar *source_ipKey = "source_ip";
	node = json_object_get_member(pJsonObject, source_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&source_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *source_portKey = "source_port";
	node = json_object_get_member(pJsonObject, source_portKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&source_port, node, "int", "");
		} else {
			
		}
	}
}

CreateFirewallRule::CreateFirewallRule(char* json)
{
	this->fromJson(json);
}

char*
CreateFirewallRule::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getProtocolId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *protocol_idKey = "protocol_id";
	json_object_set_member(pJsonObject, protocol_idKey, node);
	if (isprimitive("int")) {
		int obj = getXdpAction();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *xdp_actionKey = "xdp_action";
	json_object_set_member(pJsonObject, xdp_actionKey, node);
	if (isprimitive("int")) {
		int obj = getDestinationPort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *destination_portKey = "destination_port";
	json_object_set_member(pJsonObject, destination_portKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSourceIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *source_ipKey = "source_ip";
	json_object_set_member(pJsonObject, source_ipKey, node);
	if (isprimitive("int")) {
		int obj = getSourcePort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *source_portKey = "source_port";
	json_object_set_member(pJsonObject, source_portKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
CreateFirewallRule::getProtocolId()
{
	return protocol_id;
}

void
CreateFirewallRule::setProtocolId(int  protocol_id)
{
	this->protocol_id = protocol_id;
}

int
CreateFirewallRule::getXdpAction()
{
	return xdp_action;
}

void
CreateFirewallRule::setXdpAction(int  xdp_action)
{
	this->xdp_action = xdp_action;
}

int
CreateFirewallRule::getDestinationPort()
{
	return destination_port;
}

void
CreateFirewallRule::setDestinationPort(int  destination_port)
{
	this->destination_port = destination_port;
}

std::string
CreateFirewallRule::getSourceIp()
{
	return source_ip;
}

void
CreateFirewallRule::setSourceIp(std::string  source_ip)
{
	this->source_ip = source_ip;
}

int
CreateFirewallRule::getSourcePort()
{
	return source_port;
}

void
CreateFirewallRule::setSourcePort(int  source_port)
{
	this->source_port = source_port;
}


