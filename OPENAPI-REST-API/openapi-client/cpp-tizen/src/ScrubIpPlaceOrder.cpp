#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ScrubIpPlaceOrder.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ScrubIpPlaceOrder::ScrubIpPlaceOrder()
{
	//__init();
}

ScrubIpPlaceOrder::~ScrubIpPlaceOrder()
{
	//__cleanup();
}

void
ScrubIpPlaceOrder::__init()
{
	//service_type = int(0);
	//ip = std::string();
}

void
ScrubIpPlaceOrder::__cleanup()
{
	//if(service_type != NULL) {
	//
	//delete service_type;
	//service_type = NULL;
	//}
	//if(ip != NULL) {
	//
	//delete ip;
	//ip = NULL;
	//}
	//
}

void
ScrubIpPlaceOrder::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *service_typeKey = "service_type";
	node = json_object_get_member(pJsonObject, service_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&service_type, node, "int", "");
		} else {
			
		}
	}
	const gchar *ipKey = "ip";
	node = json_object_get_member(pJsonObject, ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ip, node, "std::string", "");
		} else {
			
		}
	}
}

ScrubIpPlaceOrder::ScrubIpPlaceOrder(char* json)
{
	this->fromJson(json);
}

char*
ScrubIpPlaceOrder::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getServiceType();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *service_typeKey = "service_type";
	json_object_set_member(pJsonObject, service_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipKey = "ip";
	json_object_set_member(pJsonObject, ipKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ScrubIpPlaceOrder::getServiceType()
{
	return service_type;
}

void
ScrubIpPlaceOrder::setServiceType(int  service_type)
{
	this->service_type = service_type;
}

std::string
ScrubIpPlaceOrder::getIp()
{
	return ip;
}

void
ScrubIpPlaceOrder::setIp(std::string  ip)
{
	this->ip = ip;
}


