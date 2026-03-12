#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupsOrderPackageCosts.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupsOrderPackageCosts::BackupsOrderPackageCosts()
{
	//__init();
}

BackupsOrderPackageCosts::~BackupsOrderPackageCosts()
{
	//__cleanup();
}

void
BackupsOrderPackageCosts::__init()
{
	//11006 = int(0);
}

void
BackupsOrderPackageCosts::__cleanup()
{
	//if(11006 != NULL) {
	//
	//delete 11006;
	//11006 = NULL;
	//}
	//
}

void
BackupsOrderPackageCosts::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *11006Key = "11006";
	node = json_object_get_member(pJsonObject, 11006Key);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&11006, node, "int", "");
		} else {
			
		}
	}
}

BackupsOrderPackageCosts::BackupsOrderPackageCosts(char* json)
{
	this->fromJson(json);
}

char*
BackupsOrderPackageCosts::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = get11006();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *11006Key = "11006";
	json_object_set_member(pJsonObject, 11006Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
BackupsOrderPackageCosts::get11006()
{
	return 11006;
}

void
BackupsOrderPackageCosts::set11006(int  11006)
{
	this->11006 = 11006;
}


