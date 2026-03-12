#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "QueueResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

QueueResponse::QueueResponse()
{
	//__init();
}

QueueResponse::~QueueResponse()
{
	//__cleanup();
}

void
QueueResponse::__init()
{
	//text = std::string();
	//queueId = int(0);
}

void
QueueResponse::__cleanup()
{
	//if(text != NULL) {
	//
	//delete text;
	//text = NULL;
	//}
	//if(queueId != NULL) {
	//
	//delete queueId;
	//queueId = NULL;
	//}
	//
}

void
QueueResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *textKey = "text";
	node = json_object_get_member(pJsonObject, textKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&text, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *queueIdKey = "queueId";
	node = json_object_get_member(pJsonObject, queueIdKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&queueId, node, "int", "");
		} else {
			
		}
	}
}

QueueResponse::QueueResponse(char* json)
{
	this->fromJson(json);
}

char*
QueueResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getText();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *textKey = "text";
	json_object_set_member(pJsonObject, textKey, node);
	if (isprimitive("int")) {
		int obj = getQueueId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *queueIdKey = "queueId";
	json_object_set_member(pJsonObject, queueIdKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
QueueResponse::getText()
{
	return text;
}

void
QueueResponse::setText(std::string  text)
{
	this->text = text;
}

int
QueueResponse::getQueueId()
{
	return queueId;
}

void
QueueResponse::setQueueId(int  queueId)
{
	this->queueId = queueId;
}


