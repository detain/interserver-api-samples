#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTemplatesList.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTemplatesList::VpsTemplatesList()
{
	//__init();
}

VpsTemplatesList::~VpsTemplatesList()
{
	//__cleanup();
}

void
VpsTemplatesList::__init()
{
	//new std::list()std::list> templates;
}

void
VpsTemplatesList::__cleanup()
{
	//if(templates != NULL) {
	//templates.RemoveAll(true);
	//delete templates;
	//templates = NULL;
	//}
	//
}

void
VpsTemplatesList::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *templatesKey = "templates";
	node = json_object_get_member(pJsonObject, templatesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<VpsTemplateRow> new_list;
			VpsTemplateRow inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("VpsTemplateRow")) {
					jsonToValue(&inst, temp_json, "VpsTemplateRow", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			templates = new_list;
		}
		
	}
}

VpsTemplatesList::VpsTemplatesList(char* json)
{
	this->fromJson(json);
}

char*
VpsTemplatesList::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsTemplateRow")) {
		list<VpsTemplateRow> new_list = static_cast<list <VpsTemplateRow> > (getTemplates());
		node = converttoJson(&new_list, "VpsTemplateRow", "array");
	} else {
		node = json_node_alloc();
		list<VpsTemplateRow> new_list = static_cast<list <VpsTemplateRow> > (getTemplates());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<VpsTemplateRow>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			VpsTemplateRow obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *templatesKey = "templates";
	json_object_set_member(pJsonObject, templatesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::list<VpsTemplateRow>
VpsTemplatesList::getTemplates()
{
	return templates;
}

void
VpsTemplatesList::setTemplates(std::list <VpsTemplateRow> templates)
{
	this->templates = templates;
}


