#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "Home_details.h"

using namespace std;
using namespace Tizen::ArtikCloud;

Home_details::Home_details()
{
	//__init();
}

Home_details::~Home_details()
{
	//__cleanup();
}

void
Home_details::__init()
{
	//modules = new Home_details_modules();
}

void
Home_details::__cleanup()
{
	//if(modules != NULL) {
	//
	//delete modules;
	//modules = NULL;
	//}
	//
}

void
Home_details::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *modulesKey = "modules";
	node = json_object_get_member(pJsonObject, modulesKey);
	if (node !=NULL) {
	

		if (isprimitive("Home_details_modules")) {
			jsonToValue(&modules, node, "Home_details_modules", "Home_details_modules");
		} else {
			
			Home_details_modules* obj = static_cast<Home_details_modules*> (&modules);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

Home_details::Home_details(char* json)
{
	this->fromJson(json);
}

char*
Home_details::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("Home_details_modules")) {
		Home_details_modules obj = getModules();
		node = converttoJson(&obj, "Home_details_modules", "");
	}
	else {
		
		Home_details_modules obj = static_cast<Home_details_modules> (getModules());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *modulesKey = "modules";
	json_object_set_member(pJsonObject, modulesKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

Home_details_modules
Home_details::getModules()
{
	return modules;
}

void
Home_details::setModules(Home_details_modules  modules)
{
	this->modules = modules;
}


