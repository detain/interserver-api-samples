#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "HomeDetailsModulesQuickservers.h"

using namespace std;
using namespace Tizen::ArtikCloud;

HomeDetailsModulesQuickservers::HomeDetailsModulesQuickservers()
{
	//__init();
}

HomeDetailsModulesQuickservers::~HomeDetailsModulesQuickservers()
{
	//__cleanup();
}

void
HomeDetailsModulesQuickservers::__init()
{
	//icon = std::string();
	//view_link = std::string();
	//heading = std::string();
	//buy_link = std::string();
	//list_link = std::string();
}

void
HomeDetailsModulesQuickservers::__cleanup()
{
	//if(icon != NULL) {
	//
	//delete icon;
	//icon = NULL;
	//}
	//if(view_link != NULL) {
	//
	//delete view_link;
	//view_link = NULL;
	//}
	//if(heading != NULL) {
	//
	//delete heading;
	//heading = NULL;
	//}
	//if(buy_link != NULL) {
	//
	//delete buy_link;
	//buy_link = NULL;
	//}
	//if(list_link != NULL) {
	//
	//delete list_link;
	//list_link = NULL;
	//}
	//
}

void
HomeDetailsModulesQuickservers::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *iconKey = "icon";
	node = json_object_get_member(pJsonObject, iconKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&icon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *view_linkKey = "view_link";
	node = json_object_get_member(pJsonObject, view_linkKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&view_link, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *headingKey = "heading";
	node = json_object_get_member(pJsonObject, headingKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&heading, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *buy_linkKey = "buy_link";
	node = json_object_get_member(pJsonObject, buy_linkKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&buy_link, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *list_linkKey = "list_link";
	node = json_object_get_member(pJsonObject, list_linkKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&list_link, node, "std::string", "");
		} else {
			
		}
	}
}

HomeDetailsModulesQuickservers::HomeDetailsModulesQuickservers(char* json)
{
	this->fromJson(json);
}

char*
HomeDetailsModulesQuickservers::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getIcon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *iconKey = "icon";
	json_object_set_member(pJsonObject, iconKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getViewLink();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *view_linkKey = "view_link";
	json_object_set_member(pJsonObject, view_linkKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHeading();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *headingKey = "heading";
	json_object_set_member(pJsonObject, headingKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getBuyLink();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *buy_linkKey = "buy_link";
	json_object_set_member(pJsonObject, buy_linkKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getListLink();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *list_linkKey = "list_link";
	json_object_set_member(pJsonObject, list_linkKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
HomeDetailsModulesQuickservers::getIcon()
{
	return icon;
}

void
HomeDetailsModulesQuickservers::setIcon(std::string  icon)
{
	this->icon = icon;
}

std::string
HomeDetailsModulesQuickservers::getViewLink()
{
	return view_link;
}

void
HomeDetailsModulesQuickservers::setViewLink(std::string  view_link)
{
	this->view_link = view_link;
}

std::string
HomeDetailsModulesQuickservers::getHeading()
{
	return heading;
}

void
HomeDetailsModulesQuickservers::setHeading(std::string  heading)
{
	this->heading = heading;
}

std::string
HomeDetailsModulesQuickservers::getBuyLink()
{
	return buy_link;
}

void
HomeDetailsModulesQuickservers::setBuyLink(std::string  buy_link)
{
	this->buy_link = buy_link;
}

std::string
HomeDetailsModulesQuickservers::getListLink()
{
	return list_link;
}

void
HomeDetailsModulesQuickservers::setListLink(std::string  list_link)
{
	this->list_link = list_link;
}


