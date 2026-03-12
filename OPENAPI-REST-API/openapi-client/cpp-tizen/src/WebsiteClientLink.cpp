#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsiteClientLink.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsiteClientLink::WebsiteClientLink()
{
	//__init();
}

WebsiteClientLink::~WebsiteClientLink()
{
	//__cleanup();
}

void
WebsiteClientLink::__init()
{
	//label = std::string();
	//link = std::string();
	//icon = std::string();
	//icon_text = std::string();
	//help_text = std::string();
	//other_attr = std::string();
}

void
WebsiteClientLink::__cleanup()
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
	//if(other_attr != NULL) {
	//
	//delete other_attr;
	//other_attr = NULL;
	//}
	//
}

void
WebsiteClientLink::fromJson(char* jsonStr)
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
	const gchar *other_attrKey = "other_attr";
	node = json_object_get_member(pJsonObject, other_attrKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&other_attr, node, "std::string", "");
		} else {
			
		}
	}
}

WebsiteClientLink::WebsiteClientLink(char* json)
{
	this->fromJson(json);
}

char*
WebsiteClientLink::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getOtherAttr();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *other_attrKey = "other_attr";
	json_object_set_member(pJsonObject, other_attrKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WebsiteClientLink::getLabel()
{
	return label;
}

void
WebsiteClientLink::setLabel(std::string  label)
{
	this->label = label;
}

std::string
WebsiteClientLink::getLink()
{
	return link;
}

void
WebsiteClientLink::setLink(std::string  link)
{
	this->link = link;
}

std::string
WebsiteClientLink::getIcon()
{
	return icon;
}

void
WebsiteClientLink::setIcon(std::string  icon)
{
	this->icon = icon;
}

std::string
WebsiteClientLink::getIconText()
{
	return icon_text;
}

void
WebsiteClientLink::setIconText(std::string  icon_text)
{
	this->icon_text = icon_text;
}

std::string
WebsiteClientLink::getHelpText()
{
	return help_text;
}

void
WebsiteClientLink::setHelpText(std::string  help_text)
{
	this->help_text = help_text;
}

std::string
WebsiteClientLink::getOtherAttr()
{
	return other_attr;
}

void
WebsiteClientLink::setOtherAttr(std::string  other_attr)
{
	this->other_attr = other_attr;
}


