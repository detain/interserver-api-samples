#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ScrubIpsLogRowSchema.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ScrubIpsLogRowSchema::ScrubIpsLogRowSchema()
{
	//__init();
}

ScrubIpsLogRowSchema::~ScrubIpsLogRowSchema()
{
	//__cleanup();
}

void
ScrubIpsLogRowSchema::__init()
{
	//date = std::string();
	//filter = std::string();
	//blocked_ip = std::string();
	//target_ip = std::string();
	//target_port = double(0);
	//protocol = std::string();
	//byte_count = double(0);
	//xdp_action = std::string();
}

void
ScrubIpsLogRowSchema::__cleanup()
{
	//if(date != NULL) {
	//
	//delete date;
	//date = NULL;
	//}
	//if(filter != NULL) {
	//
	//delete filter;
	//filter = NULL;
	//}
	//if(blocked_ip != NULL) {
	//
	//delete blocked_ip;
	//blocked_ip = NULL;
	//}
	//if(target_ip != NULL) {
	//
	//delete target_ip;
	//target_ip = NULL;
	//}
	//if(target_port != NULL) {
	//
	//delete target_port;
	//target_port = NULL;
	//}
	//if(protocol != NULL) {
	//
	//delete protocol;
	//protocol = NULL;
	//}
	//if(byte_count != NULL) {
	//
	//delete byte_count;
	//byte_count = NULL;
	//}
	//if(xdp_action != NULL) {
	//
	//delete xdp_action;
	//xdp_action = NULL;
	//}
	//
}

void
ScrubIpsLogRowSchema::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dateKey = "date";
	node = json_object_get_member(pJsonObject, dateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&date, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *filterKey = "filter";
	node = json_object_get_member(pJsonObject, filterKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&filter, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *blocked_ipKey = "blocked_ip";
	node = json_object_get_member(pJsonObject, blocked_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&blocked_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *target_ipKey = "target_ip";
	node = json_object_get_member(pJsonObject, target_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&target_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *target_portKey = "target_port";
	node = json_object_get_member(pJsonObject, target_portKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&target_port, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&target_port);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *protocolKey = "protocol";
	node = json_object_get_member(pJsonObject, protocolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&protocol, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *byte_countKey = "byte_count";
	node = json_object_get_member(pJsonObject, byte_countKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&byte_count, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&byte_count);
			obj->fromJson(json_to_string(node, false));
			
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
}

ScrubIpsLogRowSchema::ScrubIpsLogRowSchema(char* json)
{
	this->fromJson(json);
}

char*
ScrubIpsLogRowSchema::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *dateKey = "date";
	json_object_set_member(pJsonObject, dateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFilter();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *filterKey = "filter";
	json_object_set_member(pJsonObject, filterKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBlockedIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *blocked_ipKey = "blocked_ip";
	json_object_set_member(pJsonObject, blocked_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTargetIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *target_ipKey = "target_ip";
	json_object_set_member(pJsonObject, target_ipKey, node);
	if (isprimitive("long long")) {
		long long obj = getTargetPort();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getTargetPort());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *target_portKey = "target_port";
	json_object_set_member(pJsonObject, target_portKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getProtocol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *protocolKey = "protocol";
	json_object_set_member(pJsonObject, protocolKey, node);
	if (isprimitive("long long")) {
		long long obj = getByteCount();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getByteCount());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *byte_countKey = "byte_count";
	json_object_set_member(pJsonObject, byte_countKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getXdpAction();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *xdp_actionKey = "xdp_action";
	json_object_set_member(pJsonObject, xdp_actionKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ScrubIpsLogRowSchema::getDate()
{
	return date;
}

void
ScrubIpsLogRowSchema::setDate(std::string  date)
{
	this->date = date;
}

std::string
ScrubIpsLogRowSchema::getFilter()
{
	return filter;
}

void
ScrubIpsLogRowSchema::setFilter(std::string  filter)
{
	this->filter = filter;
}

std::string
ScrubIpsLogRowSchema::getBlockedIp()
{
	return blocked_ip;
}

void
ScrubIpsLogRowSchema::setBlockedIp(std::string  blocked_ip)
{
	this->blocked_ip = blocked_ip;
}

std::string
ScrubIpsLogRowSchema::getTargetIp()
{
	return target_ip;
}

void
ScrubIpsLogRowSchema::setTargetIp(std::string  target_ip)
{
	this->target_ip = target_ip;
}

long long
ScrubIpsLogRowSchema::getTargetPort()
{
	return target_port;
}

void
ScrubIpsLogRowSchema::setTargetPort(long long  target_port)
{
	this->target_port = target_port;
}

std::string
ScrubIpsLogRowSchema::getProtocol()
{
	return protocol;
}

void
ScrubIpsLogRowSchema::setProtocol(std::string  protocol)
{
	this->protocol = protocol;
}

long long
ScrubIpsLogRowSchema::getByteCount()
{
	return byte_count;
}

void
ScrubIpsLogRowSchema::setByteCount(long long  byte_count)
{
	this->byte_count = byte_count;
}

std::string
ScrubIpsLogRowSchema::getXdpAction()
{
	return xdp_action;
}

void
ScrubIpsLogRowSchema::setXdpAction(std::string  xdp_action)
{
	this->xdp_action = xdp_action;
}


