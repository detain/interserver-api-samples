#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "LicensesOrderServiceCategories509.h"

using namespace std;
using namespace Tizen::ArtikCloud;

LicensesOrderServiceCategories509::LicensesOrderServiceCategories509()
{
	//__init();
}

LicensesOrderServiceCategories509::~LicensesOrderServiceCategories509()
{
	//__cleanup();
}

void
LicensesOrderServiceCategories509::__init()
{
	//category_id = std::string();
	//category_name = std::string();
	//category_tag = std::string();
	//category_module = std::string();
}

void
LicensesOrderServiceCategories509::__cleanup()
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
LicensesOrderServiceCategories509::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *category_idKey = "category_id";
	node = json_object_get_member(pJsonObject, category_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&category_id, node, "std::string", "");
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

LicensesOrderServiceCategories509::LicensesOrderServiceCategories509(char* json)
{
	this->fromJson(json);
}

char*
LicensesOrderServiceCategories509::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCategoryId();
		node = converttoJson(&obj, "std::string", "");
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

std::string
LicensesOrderServiceCategories509::getCategoryId()
{
	return category_id;
}

void
LicensesOrderServiceCategories509::setCategoryId(std::string  category_id)
{
	this->category_id = category_id;
}

std::string
LicensesOrderServiceCategories509::getCategoryName()
{
	return category_name;
}

void
LicensesOrderServiceCategories509::setCategoryName(std::string  category_name)
{
	this->category_name = category_name;
}

std::string
LicensesOrderServiceCategories509::getCategoryTag()
{
	return category_tag;
}

void
LicensesOrderServiceCategories509::setCategoryTag(std::string  category_tag)
{
	this->category_tag = category_tag;
}

std::string
LicensesOrderServiceCategories509::getCategoryModule()
{
	return category_module;
}

void
LicensesOrderServiceCategories509::setCategoryModule(std::string  category_module)
{
	this->category_module = category_module;
}


