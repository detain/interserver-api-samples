#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "CreateFilter.h"

using namespace std;
using namespace Tizen::ArtikCloud;

CreateFilter::CreateFilter()
{
	//__init();
}

CreateFilter::~CreateFilter()
{
	//__cleanup();
}

void
CreateFilter::__init()
{
	//filter_type = std::string();
	//port = int(0);
}

void
CreateFilter::__cleanup()
{
	//if(filter_type != NULL) {
	//
	//delete filter_type;
	//filter_type = NULL;
	//}
	//if(port != NULL) {
	//
	//delete port;
	//port = NULL;
	//}
	//
}

void
CreateFilter::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *filter_typeKey = "filter_type";
	node = json_object_get_member(pJsonObject, filter_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&filter_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *portKey = "port";
	node = json_object_get_member(pJsonObject, portKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&port, node, "int", "");
		} else {
			
		}
	}
}

CreateFilter::CreateFilter(char* json)
{
	this->fromJson(json);
}

char*
CreateFilter::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getFilterType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *filter_typeKey = "filter_type";
	json_object_set_member(pJsonObject, filter_typeKey, node);
	if (isprimitive("int")) {
		int obj = getPort();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *portKey = "port";
	json_object_set_member(pJsonObject, portKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
CreateFilter::getFilterType()
{
	return filter_type;
}

void
CreateFilter::setFilterType(std::string  filter_type)
{
	this->filter_type = filter_type;
}

int
CreateFilter::getPort()
{
	return port;
}

void
CreateFilter::setPort(int  port)
{
	this->port = port;
}


