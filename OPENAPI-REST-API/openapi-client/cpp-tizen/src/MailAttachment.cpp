#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailAttachment.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailAttachment::MailAttachment()
{
	//__init();
}

MailAttachment::~MailAttachment()
{
	//__cleanup();
}

void
MailAttachment::__init()
{
	//filename = std::string();
	//data = std::string();
}

void
MailAttachment::__cleanup()
{
	//if(filename != NULL) {
	//
	//delete filename;
	//filename = NULL;
	//}
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
	//}
	//
}

void
MailAttachment::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *filenameKey = "filename";
	node = json_object_get_member(pJsonObject, filenameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&filename, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&data, node, "std::string", "");
		} else {
			
		}
	}
}

MailAttachment::MailAttachment(char* json)
{
	this->fromJson(json);
}

char*
MailAttachment::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getFilename();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *filenameKey = "filename";
	json_object_set_member(pJsonObject, filenameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getData();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MailAttachment::getFilename()
{
	return filename;
}

void
MailAttachment::setFilename(std::string  filename)
{
	this->filename = filename;
}

std::string
MailAttachment::getData()
{
	return data;
}

void
MailAttachment::setData(std::string  data)
{
	this->data = data;
}


