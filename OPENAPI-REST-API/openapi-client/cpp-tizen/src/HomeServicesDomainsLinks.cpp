#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "HomeServicesDomainsLinks.h"

using namespace std;
using namespace Tizen::ArtikCloud;

HomeServicesDomainsLinks::HomeServicesDomainsLinks()
{
	//__init();
}

HomeServicesDomainsLinks::~HomeServicesDomainsLinks()
{
	//__cleanup();
}

void
HomeServicesDomainsLinks::__init()
{
	//376114 = std::string();
	//376503 = std::string();
	//592337 = std::string();
}

void
HomeServicesDomainsLinks::__cleanup()
{
	//if(376114 != NULL) {
	//
	//delete 376114;
	//376114 = NULL;
	//}
	//if(376503 != NULL) {
	//
	//delete 376503;
	//376503 = NULL;
	//}
	//if(592337 != NULL) {
	//
	//delete 592337;
	//592337 = NULL;
	//}
	//
}

void
HomeServicesDomainsLinks::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *376114Key = "376114";
	node = json_object_get_member(pJsonObject, 376114Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&376114, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *376503Key = "376503";
	node = json_object_get_member(pJsonObject, 376503Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&376503, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *592337Key = "592337";
	node = json_object_get_member(pJsonObject, 592337Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&592337, node, "std::string", "");
		} else {
			
		}
	}
}

HomeServicesDomainsLinks::HomeServicesDomainsLinks(char* json)
{
	this->fromJson(json);
}

char*
HomeServicesDomainsLinks::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get376114();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *376114Key = "376114";
	json_object_set_member(pJsonObject, 376114Key, node);
	if (isprimitive("std::string")) {
		std::string obj = get376503();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *376503Key = "376503";
	json_object_set_member(pJsonObject, 376503Key, node);
	if (isprimitive("std::string")) {
		std::string obj = get592337();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *592337Key = "592337";
	json_object_set_member(pJsonObject, 592337Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
HomeServicesDomainsLinks::get376114()
{
	return 376114;
}

void
HomeServicesDomainsLinks::set376114(std::string  376114)
{
	this->376114 = 376114;
}

std::string
HomeServicesDomainsLinks::get376503()
{
	return 376503;
}

void
HomeServicesDomainsLinks::set376503(std::string  376503)
{
	this->376503 = 376503;
}

std::string
HomeServicesDomainsLinks::get592337()
{
	return 592337;
}

void
HomeServicesDomainsLinks::set592337(std::string  592337)
{
	this->592337 = 592337;
}


