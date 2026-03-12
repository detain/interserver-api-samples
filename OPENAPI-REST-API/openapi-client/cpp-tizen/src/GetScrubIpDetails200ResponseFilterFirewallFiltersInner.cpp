#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetScrubIpDetails_200_response_filter_firewall_filters_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetScrubIpDetails_200_response_filter_firewall_filters_inner::GetScrubIpDetails_200_response_filter_firewall_filters_inner()
{
	//__init();
}

GetScrubIpDetails_200_response_filter_firewall_filters_inner::~GetScrubIpDetails_200_response_filter_firewall_filters_inner()
{
	//__cleanup();
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::__init()
{
	//daddr = std::string();
	//dest = std::string();
	//filter_name = std::string();
	//destination_ip = std::string();
	//filter = std::string();
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::__cleanup()
{
	//if(daddr != NULL) {
	//
	//delete daddr;
	//daddr = NULL;
	//}
	//if(dest != NULL) {
	//
	//delete dest;
	//dest = NULL;
	//}
	//if(filter_name != NULL) {
	//
	//delete filter_name;
	//filter_name = NULL;
	//}
	//if(destination_ip != NULL) {
	//
	//delete destination_ip;
	//destination_ip = NULL;
	//}
	//if(filter != NULL) {
	//
	//delete filter;
	//filter = NULL;
	//}
	//
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *daddrKey = "daddr";
	node = json_object_get_member(pJsonObject, daddrKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&daddr, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *destKey = "dest";
	node = json_object_get_member(pJsonObject, destKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&dest, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *filter_nameKey = "filter_name";
	node = json_object_get_member(pJsonObject, filter_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&filter_name, node, "std::string", "");
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
	const gchar *filterKey = "filter";
	node = json_object_get_member(pJsonObject, filterKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&filter, node, "std::string", "");
		} else {
			
		}
	}
}

GetScrubIpDetails_200_response_filter_firewall_filters_inner::GetScrubIpDetails_200_response_filter_firewall_filters_inner(char* json)
{
	this->fromJson(json);
}

char*
GetScrubIpDetails_200_response_filter_firewall_filters_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDaddr();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *daddrKey = "daddr";
	json_object_set_member(pJsonObject, daddrKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDest();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *destKey = "dest";
	json_object_set_member(pJsonObject, destKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFilterName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *filter_nameKey = "filter_name";
	json_object_set_member(pJsonObject, filter_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDestinationIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *destination_ipKey = "destination_ip";
	json_object_set_member(pJsonObject, destination_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getFilter();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *filterKey = "filter";
	json_object_set_member(pJsonObject, filterKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getDaddr()
{
	return daddr;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setDaddr(std::string  daddr)
{
	this->daddr = daddr;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getDest()
{
	return dest;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setDest(std::string  dest)
{
	this->dest = dest;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getFilterName()
{
	return filter_name;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setFilterName(std::string  filter_name)
{
	this->filter_name = filter_name;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getDestinationIp()
{
	return destination_ip;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setDestinationIp(std::string  destination_ip)
{
	this->destination_ip = destination_ip;
}

std::string
GetScrubIpDetails_200_response_filter_firewall_filters_inner::getFilter()
{
	return filter;
}

void
GetScrubIpDetails_200_response_filter_firewall_filters_inner::setFilter(std::string  filter)
{
	this->filter = filter;
}


