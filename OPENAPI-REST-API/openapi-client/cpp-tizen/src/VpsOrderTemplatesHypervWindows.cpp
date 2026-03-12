#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_templates_hyperv_windows.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_templates_hyperv_windows::VpsOrder_templates_hyperv_windows()
{
	//__init();
}

VpsOrder_templates_hyperv_windows::~VpsOrder_templates_hyperv_windows()
{
	//__cleanup();
}

void
VpsOrder_templates_hyperv_windows::__init()
{
	//windows2019Standard = std::string();
	//windows2022 = std::string();
}

void
VpsOrder_templates_hyperv_windows::__cleanup()
{
	//if(windows2019Standard != NULL) {
	//
	//delete windows2019Standard;
	//windows2019Standard = NULL;
	//}
	//if(windows2022 != NULL) {
	//
	//delete windows2022;
	//windows2022 = NULL;
	//}
	//
}

void
VpsOrder_templates_hyperv_windows::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *windows2019StandardKey = "Windows2019Standard";
	node = json_object_get_member(pJsonObject, windows2019StandardKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&windows2019Standard, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *windows2022Key = "Windows2022";
	node = json_object_get_member(pJsonObject, windows2022Key);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&windows2022, node, "std::string", "");
		} else {
			
		}
	}
}

VpsOrder_templates_hyperv_windows::VpsOrder_templates_hyperv_windows(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_templates_hyperv_windows::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getWindows2019Standard();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *windows2019StandardKey = "Windows2019Standard";
	json_object_set_member(pJsonObject, windows2019StandardKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWindows2022();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *windows2022Key = "Windows2022";
	json_object_set_member(pJsonObject, windows2022Key, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsOrder_templates_hyperv_windows::getWindows2019Standard()
{
	return windows2019Standard;
}

void
VpsOrder_templates_hyperv_windows::setWindows2019Standard(std::string  windows2019Standard)
{
	this->windows2019Standard = windows2019Standard;
}

std::string
VpsOrder_templates_hyperv_windows::getWindows2022()
{
	return windows2022;
}

void
VpsOrder_templates_hyperv_windows::setWindows2022(std::string  windows2022)
{
	this->windows2022 = windows2022;
}


