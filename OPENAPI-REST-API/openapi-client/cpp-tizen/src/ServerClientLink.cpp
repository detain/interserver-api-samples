#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerClientLink.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerClientLink::ServerClientLink()
{
	//__init();
}

ServerClientLink::~ServerClientLink()
{
	//__cleanup();
}

void
ServerClientLink::__init()
{
	//label = std::string();
	//link = std::string();
	//icon = std::string();
	//icon_text = std::string();
	//help_text = std::string();
}

void
ServerClientLink::__cleanup()
{
	//if(label != NULL) {
	//
	//delete label;
	//label = NULL;
	//}
	//if(link != NULL) {
	//
	//delete link;
	//link = NULL;
	//}
	//if(icon != NULL) {
	//
	//delete icon;
	//icon = NULL;
	//}
	//if(icon_text != NULL) {
	//
	//delete icon_text;
	//icon_text = NULL;
	//}
	//if(help_text != NULL) {
	//
	//delete help_text;
	//help_text = NULL;
	//}
	//
}

void
ServerClientLink::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *labelKey = "label";
	node = json_object_get_member(pJsonObject, labelKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&label, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *linkKey = "link";
	node = json_object_get_member(pJsonObject, linkKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&link, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *iconKey = "icon";
	node = json_object_get_member(pJsonObject, iconKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&icon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *icon_textKey = "icon_text";
	node = json_object_get_member(pJsonObject, icon_textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&icon_text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *help_textKey = "help_text";
	node = json_object_get_member(pJsonObject, help_textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&help_text, node, "std::string", "");
		} else {
			
		}
	}
}

ServerClientLink::ServerClientLink(char* json)
{
	this->fromJson(json);
}

char*
ServerClientLink::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getLabel();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *labelKey = "label";
	json_object_set_member(pJsonObject, labelKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLink();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *linkKey = "link";
	json_object_set_member(pJsonObject, linkKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIcon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *iconKey = "icon";
	json_object_set_member(pJsonObject, iconKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIconText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *icon_textKey = "icon_text";
	json_object_set_member(pJsonObject, icon_textKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHelpText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *help_textKey = "help_text";
	json_object_set_member(pJsonObject, help_textKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ServerClientLink::getLabel()
{
	return label;
}

void
ServerClientLink::setLabel(std::string  label)
{
	this->label = label;
}

std::string
ServerClientLink::getLink()
{
	return link;
}

void
ServerClientLink::setLink(std::string  link)
{
	this->link = link;
}

std::string
ServerClientLink::getIcon()
{
	return icon;
}

void
ServerClientLink::setIcon(std::string  icon)
{
	this->icon = icon;
}

std::string
ServerClientLink::getIconText()
{
	return icon_text;
}

void
ServerClientLink::setIconText(std::string  icon_text)
{
	this->icon_text = icon_text;
}

std::string
ServerClientLink::getHelpText()
{
	return help_text;
}

void
ServerClientLink::setHelpText(std::string  help_text)
{
	this->help_text = help_text;
}


