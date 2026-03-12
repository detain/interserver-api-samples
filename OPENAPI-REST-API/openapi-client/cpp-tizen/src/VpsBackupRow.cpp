#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsBackupRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsBackupRow::VpsBackupRow()
{
	//__init();
}

VpsBackupRow::~VpsBackupRow()
{
	//__cleanup();
}

void
VpsBackupRow::__init()
{
	//type = std::string();
	//service = int(0);
	//name = std::string();
	//size = int(0);
	//date = int(0);
}

void
VpsBackupRow::__cleanup()
{
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(service != NULL) {
	//
	//delete service;
	//service = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(size != NULL) {
	//
	//delete size;
	//size = NULL;
	//}
	//if(date != NULL) {
	//
	//delete date;
	//date = NULL;
	//}
	//
}

void
VpsBackupRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *serviceKey = "service";
	node = json_object_get_member(pJsonObject, serviceKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&service, node, "int", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sizeKey = "size";
	node = json_object_get_member(pJsonObject, sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&size, node, "int", "");
		} else {
			
		}
	}
	const gchar *dateKey = "date";
	node = json_object_get_member(pJsonObject, dateKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&date, node, "int", "");
		} else {
			
		}
	}
}

VpsBackupRow::VpsBackupRow(char* json)
{
	this->fromJson(json);
}

char*
VpsBackupRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("int")) {
		int obj = getService();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *serviceKey = "service";
	json_object_set_member(pJsonObject, serviceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("int")) {
		int obj = getSize();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sizeKey = "size";
	json_object_set_member(pJsonObject, sizeKey, node);
	if (isprimitive("int")) {
		int obj = getDate();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *dateKey = "date";
	json_object_set_member(pJsonObject, dateKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsBackupRow::getType()
{
	return type;
}

void
VpsBackupRow::setType(std::string  type)
{
	this->type = type;
}

int
VpsBackupRow::getService()
{
	return service;
}

void
VpsBackupRow::setService(int  service)
{
	this->service = service;
}

std::string
VpsBackupRow::getName()
{
	return name;
}

void
VpsBackupRow::setName(std::string  name)
{
	this->name = name;
}

int
VpsBackupRow::getSize()
{
	return size;
}

void
VpsBackupRow::setSize(int  size)
{
	this->size = size;
}

int
VpsBackupRow::getDate()
{
	return date;
}

void
VpsBackupRow::setDate(int  date)
{
	this->date = date;
}


