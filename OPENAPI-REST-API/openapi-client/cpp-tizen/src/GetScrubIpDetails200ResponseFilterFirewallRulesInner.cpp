#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetScrubIpDetails_200_response_filter_firewall_rules_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetScrubIpDetails_200_response_filter_firewall_rules_inner::GetScrubIpDetails_200_response_filter_firewall_rules_inner()
{
	//__init();
}

GetScrubIpDetails_200_response_filter_firewall_rules_inner::~GetScrubIpDetails_200_response_filter_firewall_rules_inner()
{
	//__cleanup();
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::__init()
{
	//id = std::string();
	//source_ip = std::string();
	//destination_ip = std::string();
	//protocol_id = std::string();
	//source_port = std::string();
	//destination_port = std::string();
	//xdp_action = std::string();
	//global_drop = std::string();
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(source_ip != NULL) {
	//
	//delete source_ip;
	//source_ip = NULL;
	//}
	//if(destination_ip != NULL) {
	//
	//delete destination_ip;
	//destination_ip = NULL;
	//}
	//if(protocol_id != NULL) {
	//
	//delete protocol_id;
	//protocol_id = NULL;
	//}
	//if(source_port != NULL) {
	//
	//delete source_port;
	//source_port = NULL;
	//}
	//if(destination_port != NULL) {
	//
	//delete destination_port;
	//destination_port = NULL;
	//}
	//if(xdp_action != NULL) {
	//
	//delete xdp_action;
	//xdp_action = NULL;
	//}
	//if(global_drop != NULL) {
	//
	//delete global_drop;
	//global_drop = NULL;
	//}
	//
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
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
	const gchar *destination_ipKey = "destination_ip";
	node = json_object_get_member(pJsonObject, destination_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&destination_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *protocol_idKey = "protocol_id";
	node = json_object_get_member(pJsonObject, protocol_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&protocol_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *source_portKey = "source_port";
	node = json_object_get_member(pJsonObject, source_portKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&source_port, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *destination_portKey = "destination_port";
	node = json_object_get_member(pJsonObject, destination_portKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&destination_port, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *xdp_actionKey = "xdp_action";
	node = json_object_get_member(pJsonObject, xdp_actionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&xdp_action, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *global_dropKey = "global_drop";
	node = json_object_get_member(pJsonObject, global_dropKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&global_drop, node, "std::string", "");
		} else {
			
		}
	}
}

GetScrubIpDetails_200_response_filter_firewall_rules_inner::GetScrubIpDetails_200_response_filter_firewall_rules_inner(char* json)
{
	this->fromJson(json);
}

char*
GetScrubIpDetails_200_response_filter_firewall_rules_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSourceIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *source_ipKey = "source_ip";
	json_object_set_member(pJsonObject, source_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDestinationIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *destination_ipKey = "destination_ip";
	json_object_set_member(pJsonObject, destination_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getProtocolId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *protocol_idKey = "protocol_id";
	json_object_set_member(pJsonObject, protocol_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSourcePort();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *source_portKey = "source_port";
	json_object_set_member(pJsonObject, source_portKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDestinationPort();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *destination_portKey = "destination_port";
	json_object_set_member(pJsonObject, destination_portKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getXdpAction();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *xdp_actionKey = "xdp_action";
	json_object_set_member(pJsonObject, xdp_actionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGlobalDrop();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *global_dropKey = "global_drop";
	json_object_set_member(pJsonObject, global_dropKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getId()
{
	return id;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setId(std::string  id)
{
	this->id = id;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getSourceIp()
{
	return source_ip;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setSourceIp(std::string  source_ip)
{
	this->source_ip = source_ip;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getDestinationIp()
{
	return destination_ip;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setDestinationIp(std::string  destination_ip)
{
	this->destination_ip = destination_ip;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getProtocolId()
{
	return protocol_id;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setProtocolId(std::string  protocol_id)
{
	this->protocol_id = protocol_id;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getSourcePort()
{
	return source_port;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setSourcePort(std::string  source_port)
{
	this->source_port = source_port;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getDestinationPort()
{
	return destination_port;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setDestinationPort(std::string  destination_port)
{
	this->destination_port = destination_port;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getXdpAction()
{
	return xdp_action;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setXdpAction(std::string  xdp_action)
{
	this->xdp_action = xdp_action;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_rules_inner::getGlobalDrop()
{
	return global_drop;
}

void
GetScrubIpDetails_200_response_filter_firewall_rules_inner::setGlobalDrop(std::string  global_drop)
{
	this->global_drop = global_drop;
}


