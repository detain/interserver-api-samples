#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrder_templates.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrder_templates::VpsOrder_templates()
{
	//__init();
}

VpsOrder_templates::~VpsOrder_templates()
{
	//__cleanup();
}

void
VpsOrder_templates::__init()
{
	//hyperv = new VpsOrder_templates_hyperv();
}

void
VpsOrder_templates::__cleanup()
{
	//if(hyperv != NULL) {
	//
	//delete hyperv;
	//hyperv = NULL;
	//}
	//
}

void
VpsOrder_templates::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *hypervKey = "hyperv";
	node = json_object_get_member(pJsonObject, hypervKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsOrder_templates_hyperv")) {
			jsonToValue(&hyperv, node, "VpsOrder_templates_hyperv", "VpsOrder_templates_hyperv");
		} else {
			
			VpsOrder_templates_hyperv* obj = static_cast<VpsOrder_templates_hyperv*> (&hyperv);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsOrder_templates::VpsOrder_templates(char* json)
{
	this->fromJson(json);
}

char*
VpsOrder_templates::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsOrder_templates_hyperv")) {
		VpsOrder_templates_hyperv obj = getHyperv();
		node = converttoJson(&obj, "VpsOrder_templates_hyperv", "");
	}
	else {
		
		VpsOrder_templates_hyperv obj = static_cast<VpsOrder_templates_hyperv> (getHyperv());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *hypervKey = "hyperv";
	json_object_set_member(pJsonObject, hypervKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsOrder_templates_hyperv
VpsOrder_templates::getHyperv()
{
	return hyperv;
}

void
VpsOrder_templates::setHyperv(VpsOrder_templates_hyperv  hyperv)
{
	this->hyperv = hyperv;
}


