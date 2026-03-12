#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsServiceExtra.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsServiceExtra::VpsServiceExtra()
{
	//__init();
}

VpsServiceExtra::~VpsServiceExtra()
{
	//__cleanup();
}

void
VpsServiceExtra::__init()
{
	//spice = int(0);
	//new std::list()std::list> snapshots;
}

void
VpsServiceExtra::__cleanup()
{
	//if(spice != NULL) {
	//
	//delete spice;
	//spice = NULL;
	//}
	//if(snapshots != NULL) {
	//snapshots.RemoveAll(true);
	//delete snapshots;
	//snapshots = NULL;
	//}
	//
}

void
VpsServiceExtra::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *spiceKey = "spice";
	node = json_object_get_member(pJsonObject, spiceKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&spice, node, "int", "");
		} else {
			
		}
	}
	const gchar *snapshotsKey = "snapshots";
	node = json_object_get_member(pJsonObject, snapshotsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<VpsSnapshot> new_list;
			VpsSnapshot inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("VpsSnapshot")) {
					jsonToValue(&inst, temp_json, "VpsSnapshot", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			snapshots = new_list;
		}
		
	}
}

VpsServiceExtra::VpsServiceExtra(char* json)
{
	this->fromJson(json);
}

char*
VpsServiceExtra::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getSpice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *spiceKey = "spice";
	json_object_set_member(pJsonObject, spiceKey, node);
	if (isprimitive("VpsSnapshot")) {
		list<VpsSnapshot> new_list = static_cast<list <VpsSnapshot> > (getSnapshots());
		node = converttoJson(&new_list, "VpsSnapshot", "array");
	} else {
		node = json_node_alloc();
		list<VpsSnapshot> new_list = static_cast<list <VpsSnapshot> > (getSnapshots());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<VpsSnapshot>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			VpsSnapshot obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *snapshotsKey = "snapshots";
	json_object_set_member(pJsonObject, snapshotsKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
VpsServiceExtra::getSpice()
{
	return spice;
}

void
VpsServiceExtra::setSpice(int  spice)
{
	this->spice = spice;
}

std::list<VpsSnapshot>
VpsServiceExtra::getSnapshots()
{
	return snapshots;
}

void
VpsServiceExtra::setSnapshots(std::list <VpsSnapshot> snapshots)
{
	this->snapshots = snapshots;
}


