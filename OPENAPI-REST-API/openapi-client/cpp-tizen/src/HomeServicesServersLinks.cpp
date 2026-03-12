#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "HomeServicesServersLinks.h"

using namespace std;
using namespace Tizen::ArtikCloud;

HomeServicesServersLinks::HomeServicesServersLinks()
{
	//__init();
}

HomeServicesServersLinks::~HomeServicesServersLinks()
{
	//__cleanup();
}

void
HomeServicesServersLinks::__init()
{
	//16058 = std::string();
}

void
HomeServicesServersLinks::__cleanup()
{
	//if(16058 != NULL) {
	//
	//delete 16058;
	//16058 = NULL;
	//}
	//
}

void
HomeServicesServersLinks::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *16058Key = "16058";
	node = json_object_get_member(pJsonObject, 16058Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&16058, node, "std::string", "");
		} else {
			
		}
	}
}

HomeServicesServersLinks::HomeServicesServersLinks(char* json)
{
	this->fromJson(json);
}

char*
HomeServicesServersLinks::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = get16058();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *16058Key = "16058";
	json_object_set_member(pJsonObject, 16058Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
HomeServicesServersLinks::get16058()
{
	return 16058;
}

void
HomeServicesServersLinks::set16058(std::string  16058)
{
	this->16058 = 16058;
}


