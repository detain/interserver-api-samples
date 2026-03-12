#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailTutorialsTableRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailTutorialsTableRow::MailTutorialsTableRow()
{
	//__init();
}

MailTutorialsTableRow::~MailTutorialsTableRow()
{
	//__cleanup();
}

void
MailTutorialsTableRow::__init()
{
	//desc = std::string();
	//value = std::string();
}

void
MailTutorialsTableRow::__cleanup()
{
	//if(desc != NULL) {
	//
	//delete desc;
	//desc = NULL;
	//}
	//if(value != NULL) {
	//
	//delete value;
	//value = NULL;
	//}
	//
}

void
MailTutorialsTableRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *descKey = "desc";
	node = json_object_get_member(pJsonObject, descKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&desc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *valueKey = "value";
	node = json_object_get_member(pJsonObject, valueKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&value, node, "std::string", "");
		} else {
			
		}
	}
}

MailTutorialsTableRow::MailTutorialsTableRow(char* json)
{
	this->fromJson(json);
}

char*
MailTutorialsTableRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getDesc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *descKey = "desc";
	json_object_set_member(pJsonObject, descKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getValue();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *valueKey = "value";
	json_object_set_member(pJsonObject, valueKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MailTutorialsTableRow::getDesc()
{
	return desc;
}

void
MailTutorialsTableRow::setDesc(std::string  desc)
{
	this->desc = desc;
}

std::string
MailTutorialsTableRow::getValue()
{
	return value;
}

void
MailTutorialsTableRow::setValue(std::string  value)
{
	this->value = value;
}


