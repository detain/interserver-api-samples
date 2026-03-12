#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsDALicense.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsDALicense::VpsDALicense()
{
	//__init();
}

VpsDALicense::~VpsDALicense()
{
	//__cleanup();
}

void
VpsDALicense::__init()
{
	//name = std::string();
	//sub_name = std::string();
	//cost = int(0);
	//img_disabled = std::string();
	//img_active = std::string();
}

void
VpsDALicense::__cleanup()
{
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(sub_name != NULL) {
	//
	//delete sub_name;
	//sub_name = NULL;
	//}
	//if(cost != NULL) {
	//
	//delete cost;
	//cost = NULL;
	//}
	//if(img_disabled != NULL) {
	//
	//delete img_disabled;
	//img_disabled = NULL;
	//}
	//if(img_active != NULL) {
	//
	//delete img_active;
	//img_active = NULL;
	//}
	//
}

void
VpsDALicense::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sub_nameKey = "sub_name";
	node = json_object_get_member(pJsonObject, sub_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&sub_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *costKey = "cost";
	node = json_object_get_member(pJsonObject, costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *img_disabledKey = "img_disabled";
	node = json_object_get_member(pJsonObject, img_disabledKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&img_disabled, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *img_activeKey = "img_active";
	node = json_object_get_member(pJsonObject, img_activeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&img_active, node, "std::string", "");
		} else {
			
		}
	}
}

VpsDALicense::VpsDALicense(char* json)
{
	this->fromJson(json);
}

char*
VpsDALicense::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSubName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sub_nameKey = "sub_name";
	json_object_set_member(pJsonObject, sub_nameKey, node);
	if (isprimitive("int")) {
		int obj = getCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *costKey = "cost";
	json_object_set_member(pJsonObject, costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getImgDisabled();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *img_disabledKey = "img_disabled";
	json_object_set_member(pJsonObject, img_disabledKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getImgActive();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *img_activeKey = "img_active";
	json_object_set_member(pJsonObject, img_activeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsDALicense::getName()
{
	return name;
}

void
VpsDALicense::setName(std::string  name)
{
	this->name = name;
}

std::string
VpsDALicense::getSubName()
{
	return sub_name;
}

void
VpsDALicense::setSubName(std::string  sub_name)
{
	this->sub_name = sub_name;
}

int
VpsDALicense::getCost()
{
	return cost;
}

void
VpsDALicense::setCost(int  cost)
{
	this->cost = cost;
}

std::string
VpsDALicense::getImgDisabled()
{
	return img_disabled;
}

void
VpsDALicense::setImgDisabled(std::string  img_disabled)
{
	this->img_disabled = img_disabled;
}

std::string
VpsDALicense::getImgActive()
{
	return img_active;
}

void
VpsDALicense::setImgActive(std::string  img_active)
{
	this->img_active = img_active;
}


