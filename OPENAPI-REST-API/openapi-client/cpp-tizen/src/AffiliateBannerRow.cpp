#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AffiliateBannerRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AffiliateBannerRow::AffiliateBannerRow()
{
	//__init();
}

AffiliateBannerRow::~AffiliateBannerRow()
{
	//__cleanup();
}

void
AffiliateBannerRow::__init()
{
	//image = std::string();
	//width = std::string();
	//height = std::string();
}

void
AffiliateBannerRow::__cleanup()
{
	//if(image != NULL) {
	//
	//delete image;
	//image = NULL;
	//}
	//if(width != NULL) {
	//
	//delete width;
	//width = NULL;
	//}
	//if(height != NULL) {
	//
	//delete height;
	//height = NULL;
	//}
	//
}

void
AffiliateBannerRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *imageKey = "image";
	node = json_object_get_member(pJsonObject, imageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&image, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *widthKey = "width";
	node = json_object_get_member(pJsonObject, widthKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&width, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *heightKey = "height";
	node = json_object_get_member(pJsonObject, heightKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&height, node, "std::string", "");
		} else {
			
		}
	}
}

AffiliateBannerRow::AffiliateBannerRow(char* json)
{
	this->fromJson(json);
}

char*
AffiliateBannerRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getImage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *imageKey = "image";
	json_object_set_member(pJsonObject, imageKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getWidth();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *widthKey = "width";
	json_object_set_member(pJsonObject, widthKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHeight();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *heightKey = "height";
	json_object_set_member(pJsonObject, heightKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AffiliateBannerRow::getImage()
{
	return image;
}

void
AffiliateBannerRow::setImage(std::string  image)
{
	this->image = image;
}

std::string
AffiliateBannerRow::getWidth()
{
	return width;
}

void
AffiliateBannerRow::setWidth(std::string  width)
{
	this->width = width;
}

std::string
AffiliateBannerRow::getHeight()
{
	return height;
}

void
AffiliateBannerRow::setHeight(std::string  height)
{
	this->height = height;
}


