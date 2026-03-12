#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "DnsNewDomain.h"

using namespace std;
using namespace Tizen::ArtikCloud;

DnsNewDomain::DnsNewDomain()
{
	//__init();
}

DnsNewDomain::~DnsNewDomain()
{
	//__cleanup();
}

void
DnsNewDomain::__init()
{
	//domain = std::string();
	//ip = std::string();
}

void
DnsNewDomain::__cleanup()
{
	//if(domain != NULL) {
	//
	//delete domain;
	//domain = NULL;
	//}
	//if(ip != NULL) {
	//
	//delete ip;
	//ip = NULL;
	//}
	//
}

void
DnsNewDomain::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *domainKey = "domain";
	node = json_object_get_member(pJsonObject, domainKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&domain, node, "std::string", "");
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

DnsNewDomain::DnsNewDomain(char* json)
{
	this->fromJson(json);
}

char*
DnsNewDomain::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDomain();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *domainKey = "domain";
	json_object_set_member(pJsonObject, domainKey, node);
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

std::string
DnsNewDomain::getDomain()
{
	return domain;
}

void
DnsNewDomain::setDomain(std::string  domain)
{
	this->domain = domain;
}

std::string
DnsNewDomain::getIp()
{
	return ip;
}

void
DnsNewDomain::setIp(std::string  ip)
{
	this->ip = ip;
}


