#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_templates_hyperv.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_templates_hyperv::VpsOrder_templates_hyperv()
{
	//__init();
}

VpsOrder_templates_hyperv::~VpsOrder_templates_hyperv()
{
	//__cleanup();
}

void
VpsOrder_templates_hyperv::__init()
{
	//windows = new VpsOrder_templates_hyperv_windows();
}

void
VpsOrder_templates_hyperv::__cleanup()
{
	//if(windows != NULL) {
	//
	//delete windows;
	//windows = NULL;
	//}
	//
}

void
VpsOrder_templates_hyperv::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *windowsKey = "windows";
	node = json_object_get_member(pJsonObject, windowsKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_templates_hyperv_windows")) {
			jsonToValue(&windows, node, "VpsOrder_templates_hyperv_windows", "VpsOrder_templates_hyperv_windows");
		} else {
			
			VpsOrder_templates_hyperv_windows* obj = static_cast<VpsOrder_templates_hyperv_windows*> (&windows);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsOrder_templates_hyperv::VpsOrder_templates_hyperv(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_templates_hyperv::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsOrder_templates_hyperv_windows")) {
		VpsOrder_templates_hyperv_windows obj = getWindows();
		node = converttoJson(&obj, "VpsOrder_templates_hyperv_windows", "");
	}
	else {
		
		VpsOrder_templates_hyperv_windows obj = static_cast<VpsOrder_templates_hyperv_windows> (getWindows());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *windowsKey = "windows";
	json_object_set_member(pJsonObject, windowsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsOrder_templates_hyperv_windows
VpsOrder_templates_hyperv::getWindows()
{
	return windows;
}

void
VpsOrder_templates_hyperv::setWindows(VpsOrder_templates_hyperv_windows  windows)
{
	this->windows = windows;
}


