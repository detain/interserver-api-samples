#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsiteBackups_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsiteBackups_inner::WebsiteBackups_inner()
{
	//__init();
}

WebsiteBackups_inner::~WebsiteBackups_inner()
{
	//__cleanup();
}

void
WebsiteBackups_inner::__init()
{
	//name = std::string();
	//size = int(0);
}

void
WebsiteBackups_inner::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(size != NULL) {
	//
	//delete size;
	//size = NULL;
	//}
	//
}

void
WebsiteBackups_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sizeKey = "size";
	node = json_object_get_member(pJsonObject, sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&size, node, "int", "");
		} else {
			
		}
	}
}

WebsiteBackups_inner::WebsiteBackups_inner(char* json)
{
	this->fromJson(json);
}

char*
WebsiteBackups_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("int")) {
		int obj = getSize();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sizeKey = "size";
	json_object_set_member(pJsonObject, sizeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WebsiteBackups_inner::getName()
{
	return name;
}

void
WebsiteBackups_inner::setName(std::string  name)
{
	this->name = name;
}

int
WebsiteBackups_inner::getSize()
{
	return size;
}

void
WebsiteBackups_inner::setSize(int  size)
{
	this->size = size;
}


