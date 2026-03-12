#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfoData_extra.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfoData_extra::AccountInfoData_extra()
{
	//__init();
}

AccountInfoData_extra::~AccountInfoData_extra()
{
	//__cleanup();
}

void
AccountInfoData_extra::__init()
{
	//private_whois = std::string();
}

void
AccountInfoData_extra::__cleanup()
{
	//if(private_whois != NULL) {
	//
	//delete private_whois;
	//private_whois = NULL;
	//}
	//
}

void
AccountInfoData_extra::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *private_whoisKey = "private_whois";
	node = json_object_get_member(pJsonObject, private_whoisKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&private_whois, node, "std::string", "");
		} else {
			
		}
	}
}

AccountInfoData_extra::AccountInfoData_extra(char* json)
{
	this->fromJson(json);
}

char*
AccountInfoData_extra::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getPrivateWhois();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *private_whoisKey = "private_whois";
	json_object_set_member(pJsonObject, private_whoisKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AccountInfoData_extra::getPrivateWhois()
{
	return private_whois;
}

void
AccountInfoData_extra::setPrivateWhois(std::string  private_whois)
{
	this->private_whois = private_whois;
}


