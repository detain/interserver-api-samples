#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServiceCategory.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServiceCategory::ServiceCategory()
{
	//__init();
}

ServiceCategory::~ServiceCategory()
{
	//__cleanup();
}

void
ServiceCategory::__init()
{
	//category_id = int(0);
	//category_name = std::string();
	//category_tag = std::string();
	//category_module = std::string();
}

void
ServiceCategory::__cleanup()
{
	//if(category_id != NULL) {
	//
	//delete category_id;
	//category_id = NULL;
	//}
	//if(category_name != NULL) {
	//
	//delete category_name;
	//category_name = NULL;
	//}
	//if(category_tag != NULL) {
	//
	//delete category_tag;
	//category_tag = NULL;
	//}
	//if(category_module != NULL) {
	//
	//delete category_module;
	//category_module = NULL;
	//}
	//
}

void
ServiceCategory::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *category_idKey = "category_id";
	node = json_object_get_member(pJsonObject, category_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&category_id, node, "int", "");
		} else {
			
		}
	}
	const gchar *category_nameKey = "category_name";
	node = json_object_get_member(pJsonObject, category_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&category_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *category_tagKey = "category_tag";
	node = json_object_get_member(pJsonObject, category_tagKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&category_tag, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *category_moduleKey = "category_module";
	node = json_object_get_member(pJsonObject, category_moduleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&category_module, node, "std::string", "");
		} else {
			
		}
	}
}

ServiceCategory::ServiceCategory(char* json)
{
	this->fromJson(json);
}

char*
ServiceCategory::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getCategoryId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *category_idKey = "category_id";
	json_object_set_member(pJsonObject, category_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCategoryName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *category_nameKey = "category_name";
	json_object_set_member(pJsonObject, category_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCategoryTag();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *category_tagKey = "category_tag";
	json_object_set_member(pJsonObject, category_tagKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCategoryModule();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *category_moduleKey = "category_module";
	json_object_set_member(pJsonObject, category_moduleKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
ServiceCategory::getCategoryId()
{
	return category_id;
}

void
ServiceCategory::setCategoryId(int  category_id)
{
	this->category_id = category_id;
}

std::string
ServiceCategory::getCategoryName()
{
	return category_name;
}

void
ServiceCategory::setCategoryName(std::string  category_name)
{
	this->category_name = category_name;
}

std::string
ServiceCategory::getCategoryTag()
{
	return category_tag;
}

void
ServiceCategory::setCategoryTag(std::string  category_tag)
{
	this->category_tag = category_tag;
}

std::string
ServiceCategory::getCategoryModule()
{
	return category_module;
}

void
ServiceCategory::setCategoryModule(std::string  category_module)
{
	this->category_module = category_module;
}


