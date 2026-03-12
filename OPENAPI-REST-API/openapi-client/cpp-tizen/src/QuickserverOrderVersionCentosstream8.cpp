#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QuickserverOrderVersionCentosstream8.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QuickserverOrderVersionCentosstream8::QuickserverOrderVersionCentosstream8()
{
	//__init();
}

QuickserverOrderVersionCentosstream8::~QuickserverOrderVersionCentosstream8()
{
	//__cleanup();
}

void
QuickserverOrderVersionCentosstream8::__init()
{
	//centosstream8 = std::string();
}

void
QuickserverOrderVersionCentosstream8::__cleanup()
{
	//if(centosstream8 != NULL) {
	//
	//delete centosstream8;
	//centosstream8 = NULL;
	//}
	//
}

void
QuickserverOrderVersionCentosstream8::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *centosstream8Key = "centosstream-8";
	node = json_object_get_member(pJsonObject, centosstream8Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&centosstream8, node, "std::string", "");
		} else {
			
		}
	}
}

QuickserverOrderVersionCentosstream8::QuickserverOrderVersionCentosstream8(char* json)
{
	this->fromJson(json);
}

char*
QuickserverOrderVersionCentosstream8::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCentosstream8();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *centosstream8Key = "centosstream-8";
	json_object_set_member(pJsonObject, centosstream8Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
QuickserverOrderVersionCentosstream8::getCentosstream8()
{
	return centosstream8;
}

void
QuickserverOrderVersionCentosstream8::setCentosstream8(std::string  centosstream8)
{
	this->centosstream8 = centosstream8;
}


