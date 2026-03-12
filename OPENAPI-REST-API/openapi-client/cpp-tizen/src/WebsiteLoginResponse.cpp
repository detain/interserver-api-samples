#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsiteLoginResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsiteLoginResponse::WebsiteLoginResponse()
{
	//__init();
}

WebsiteLoginResponse::~WebsiteLoginResponse()
{
	//__cleanup();
}

void
WebsiteLoginResponse::__init()
{
	//type = std::string();
	//location = std::string();
}

void
WebsiteLoginResponse::__cleanup()
{
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(location != NULL) {
	//
	//delete location;
	//location = NULL;
	//}
	//
}

void
WebsiteLoginResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *locationKey = "location";
	node = json_object_get_member(pJsonObject, locationKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&location, node, "std::string", "");
		} else {
			
		}
	}
}

WebsiteLoginResponse::WebsiteLoginResponse(char* json)
{
	this->fromJson(json);
}

char*
WebsiteLoginResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLocation();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *locationKey = "location";
	json_object_set_member(pJsonObject, locationKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WebsiteLoginResponse::getType()
{
	return type;
}

void
WebsiteLoginResponse::setType(std::string  type)
{
	this->type = type;
}

std::string
WebsiteLoginResponse::getLocation()
{
	return location;
}

void
WebsiteLoginResponse::setLocation(std::string  location)
{
	this->location = location;
}


