#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "HomeServicesVpsLinks.h"

using namespace std;
using namespace Tizen::ArtikCloud;

HomeServicesVpsLinks::HomeServicesVpsLinks()
{
	//__init();
}

HomeServicesVpsLinks::~HomeServicesVpsLinks()
{
	//__cleanup();
}

void
HomeServicesVpsLinks::__init()
{
	//465503 = std::string();
	//2500081 = std::string();
	//2578866 = std::string();
}

void
HomeServicesVpsLinks::__cleanup()
{
	//if(465503 != NULL) {
	//
	//delete 465503;
	//465503 = NULL;
	//}
	//if(2500081 != NULL) {
	//
	//delete 2500081;
	//2500081 = NULL;
	//}
	//if(2578866 != NULL) {
	//
	//delete 2578866;
	//2578866 = NULL;
	//}
	//
}

void
HomeServicesVpsLinks::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *465503Key = "465503";
	node = json_object_get_member(pJsonObject, 465503Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&465503, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *2500081Key = "2500081";
	node = json_object_get_member(pJsonObject, 2500081Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&2500081, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *2578866Key = "2578866";
	node = json_object_get_member(pJsonObject, 2578866Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&2578866, node, "std::string", "");
		} else {
			
		}
	}
}

HomeServicesVpsLinks::HomeServicesVpsLinks(char* json)
{
	this->fromJson(json);
}

char*
HomeServicesVpsLinks::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get465503();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *465503Key = "465503";
	json_object_set_member(pJsonObject, 465503Key, node);
	if (isprimitive("std::string")) {
		std::string obj = get2500081();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *2500081Key = "2500081";
	json_object_set_member(pJsonObject, 2500081Key, node);
	if (isprimitive("std::string")) {
		std::string obj = get2578866();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *2578866Key = "2578866";
	json_object_set_member(pJsonObject, 2578866Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
HomeServicesVpsLinks::get465503()
{
	return 465503;
}

void
HomeServicesVpsLinks::set465503(std::string  465503)
{
	this->465503 = 465503;
}

std::string
HomeServicesVpsLinks::get2500081()
{
	return 2500081;
}

void
HomeServicesVpsLinks::set2500081(std::string  2500081)
{
	this->2500081 = 2500081;
}

std::string
HomeServicesVpsLinks::get2578866()
{
	return 2578866;
}

void
HomeServicesVpsLinks::set2578866(std::string  2578866)
{
	this->2578866 = 2578866;
}


