#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTemplateRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTemplateRow::VpsTemplateRow()
{
	//__init();
}

VpsTemplateRow::~VpsTemplateRow()
{
	//__cleanup();
}

void
VpsTemplateRow::__init()
{
	//template_id = std::string();
	//template_type = std::string();
	//template_os = std::string();
	//template_version = std::string();
	//template_bits = std::string();
	//template_file = std::string();
	//template_available = std::string();
	//template_name = std::string();
	//template_dir = std::string();
}

void
VpsTemplateRow::__cleanup()
{
	//if(template_id != NULL) {
	//
	//delete template_id;
	//template_id = NULL;
	//}
	//if(template_type != NULL) {
	//
	//delete template_type;
	//template_type = NULL;
	//}
	//if(template_os != NULL) {
	//
	//delete template_os;
	//template_os = NULL;
	//}
	//if(template_version != NULL) {
	//
	//delete template_version;
	//template_version = NULL;
	//}
	//if(template_bits != NULL) {
	//
	//delete template_bits;
	//template_bits = NULL;
	//}
	//if(template_file != NULL) {
	//
	//delete template_file;
	//template_file = NULL;
	//}
	//if(template_available != NULL) {
	//
	//delete template_available;
	//template_available = NULL;
	//}
	//if(template_name != NULL) {
	//
	//delete template_name;
	//template_name = NULL;
	//}
	//if(template_dir != NULL) {
	//
	//delete template_dir;
	//template_dir = NULL;
	//}
	//
}

void
VpsTemplateRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *template_idKey = "template_id";
	node = json_object_get_member(pJsonObject, template_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_typeKey = "template_type";
	node = json_object_get_member(pJsonObject, template_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_osKey = "template_os";
	node = json_object_get_member(pJsonObject, template_osKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_os, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_versionKey = "template_version";
	node = json_object_get_member(pJsonObject, template_versionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_version, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_bitsKey = "template_bits";
	node = json_object_get_member(pJsonObject, template_bitsKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_bits, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_fileKey = "template_file";
	node = json_object_get_member(pJsonObject, template_fileKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_file, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_availableKey = "template_available";
	node = json_object_get_member(pJsonObject, template_availableKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_available, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_nameKey = "template_name";
	node = json_object_get_member(pJsonObject, template_nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *template_dirKey = "template_dir";
	node = json_object_get_member(pJsonObject, template_dirKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&template_dir, node, "std::string", "");
		} else {
			
		}
	}
}

VpsTemplateRow::VpsTemplateRow(char* json)
{
	this->fromJson(json);
}

char*
VpsTemplateRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getTemplateId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_idKey = "template_id";
	json_object_set_member(pJsonObject, template_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_typeKey = "template_type";
	json_object_set_member(pJsonObject, template_typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateOs();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_osKey = "template_os";
	json_object_set_member(pJsonObject, template_osKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateVersion();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_versionKey = "template_version";
	json_object_set_member(pJsonObject, template_versionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateBits();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_bitsKey = "template_bits";
	json_object_set_member(pJsonObject, template_bitsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateFile();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_fileKey = "template_file";
	json_object_set_member(pJsonObject, template_fileKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateAvailable();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_availableKey = "template_available";
	json_object_set_member(pJsonObject, template_availableKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_nameKey = "template_name";
	json_object_set_member(pJsonObject, template_nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTemplateDir();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *template_dirKey = "template_dir";
	json_object_set_member(pJsonObject, template_dirKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsTemplateRow::getTemplateId()
{
	return template_id;
}

void
VpsTemplateRow::setTemplateId(std::string  template_id)
{
	this->template_id = template_id;
}

std::string
VpsTemplateRow::getTemplateType()
{
	return template_type;
}

void
VpsTemplateRow::setTemplateType(std::string  template_type)
{
	this->template_type = template_type;
}

std::string
VpsTemplateRow::getTemplateOs()
{
	return template_os;
}

void
VpsTemplateRow::setTemplateOs(std::string  template_os)
{
	this->template_os = template_os;
}

std::string
VpsTemplateRow::getTemplateVersion()
{
	return template_version;
}

void
VpsTemplateRow::setTemplateVersion(std::string  template_version)
{
	this->template_version = template_version;
}

std::string
VpsTemplateRow::getTemplateBits()
{
	return template_bits;
}

void
VpsTemplateRow::setTemplateBits(std::string  template_bits)
{
	this->template_bits = template_bits;
}

std::string
VpsTemplateRow::getTemplateFile()
{
	return template_file;
}

void
VpsTemplateRow::setTemplateFile(std::string  template_file)
{
	this->template_file = template_file;
}

std::string
VpsTemplateRow::getTemplateAvailable()
{
	return template_available;
}

void
VpsTemplateRow::setTemplateAvailable(std::string  template_available)
{
	this->template_available = template_available;
}

std::string
VpsTemplateRow::getTemplateName()
{
	return template_name;
}

void
VpsTemplateRow::setTemplateName(std::string  template_name)
{
	this->template_name = template_name;
}

std::string
VpsTemplateRow::getTemplateDir()
{
	return template_dir;
}

void
VpsTemplateRow::setTemplateDir(std::string  template_dir)
{
	this->template_dir = template_dir;
}


