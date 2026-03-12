#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "HomeServicesWebhostingLinks.h"

using namespace std;
using namespace Tizen::ArtikCloud;

HomeServicesWebhostingLinks::HomeServicesWebhostingLinks()
{
	//__init();
}

HomeServicesWebhostingLinks::~HomeServicesWebhostingLinks()
{
	//__cleanup();
}

void
HomeServicesWebhostingLinks::__init()
{
	//376359 = std::string();
	//376473 = std::string();
	//386218 = std::string();
}

void
HomeServicesWebhostingLinks::__cleanup()
{
	//if(376359 != NULL) {
	//
	//delete 376359;
	//376359 = NULL;
	//}
	//if(376473 != NULL) {
	//
	//delete 376473;
	//376473 = NULL;
	//}
	//if(386218 != NULL) {
	//
	//delete 386218;
	//386218 = NULL;
	//}
	//
}

void
HomeServicesWebhostingLinks::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *376359Key = "376359";
	node = json_object_get_member(pJsonObject, 376359Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&376359, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *376473Key = "376473";
	node = json_object_get_member(pJsonObject, 376473Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&376473, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *386218Key = "386218";
	node = json_object_get_member(pJsonObject, 386218Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&386218, node, "std::string", "");
		} else {
			
		}
	}
}

HomeServicesWebhostingLinks::HomeServicesWebhostingLinks(char* json)
{
	this->fromJson(json);
}

char*
HomeServicesWebhostingLinks::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get376359();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *376359Key = "376359";
	json_object_set_member(pJsonObject, 376359Key, node);
	if (isprimitive("std::string")) {
		std::string obj = get376473();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *376473Key = "376473";
	json_object_set_member(pJsonObject, 376473Key, node);
	if (isprimitive("std::string")) {
		std::string obj = get386218();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *386218Key = "386218";
	json_object_set_member(pJsonObject, 386218Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
HomeServicesWebhostingLinks::get376359()
{
	return 376359;
}

void
HomeServicesWebhostingLinks::set376359(std::string  376359)
{
	this->376359 = 376359;
}

std::string
HomeServicesWebhostingLinks::get376473()
{
	return 376473;
}

void
HomeServicesWebhostingLinks::set376473(std::string  376473)
{
	this->376473 = 376473;
}

std::string
HomeServicesWebhostingLinks::get386218()
{
	return 386218;
}

void
HomeServicesWebhostingLinks::set386218(std::string  386218)
{
	this->386218 = 386218;
}


