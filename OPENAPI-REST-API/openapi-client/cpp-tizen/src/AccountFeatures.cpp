#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountFeatures.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountFeatures::AccountFeatures()
{
	//__init();
}

AccountFeatures::~AccountFeatures()
{
	//__cleanup();
}

void
AccountFeatures::__init()
{
	//disable_reset = int(0);
	//disable_reinstall = int(0);
}

void
AccountFeatures::__cleanup()
{
	//if(disable_reset != NULL) {
	//
	//delete disable_reset;
	//disable_reset = NULL;
	//}
	//if(disable_reinstall != NULL) {
	//
	//delete disable_reinstall;
	//disable_reinstall = NULL;
	//}
	//
}

void
AccountFeatures::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *disable_resetKey = "disable_reset";
	node = json_object_get_member(pJsonObject, disable_resetKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&disable_reset, node, "int", "");
		} else {
			
		}
	}
	const gchar *disable_reinstallKey = "disable_reinstall";
	node = json_object_get_member(pJsonObject, disable_reinstallKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&disable_reinstall, node, "int", "");
		} else {
			
		}
	}
}

AccountFeatures::AccountFeatures(char* json)
{
	this->fromJson(json);
}

char*
AccountFeatures::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getDisableReset();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *disable_resetKey = "disable_reset";
	json_object_set_member(pJsonObject, disable_resetKey, node);
	if (isprimitive("int")) {
		int obj = getDisableReinstall();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *disable_reinstallKey = "disable_reinstall";
	json_object_set_member(pJsonObject, disable_reinstallKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
AccountFeatures::getDisableReset()
{
	return disable_reset;
}

void
AccountFeatures::setDisableReset(int  disable_reset)
{
	this->disable_reset = disable_reset;
}

int
AccountFeatures::getDisableReinstall()
{
	return disable_reinstall;
}

void
AccountFeatures::setDisableReinstall(int  disable_reinstall)
{
	this->disable_reinstall = disable_reinstall;
}


