#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ReplyTicketRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ReplyTicketRequest::ReplyTicketRequest()
{
	//__init();
}

ReplyTicketRequest::~ReplyTicketRequest()
{
	//__cleanup();
}

void
ReplyTicketRequest::__init()
{
	//content = std::string();
}

void
ReplyTicketRequest::__cleanup()
{
	//if(content != NULL) {
	//
	//delete content;
	//content = NULL;
	//}
	//
}

void
ReplyTicketRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *contentKey = "content";
	node = json_object_get_member(pJsonObject, contentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&content, node, "std::string", "");
		} else {
			
		}
	}
}

ReplyTicketRequest::ReplyTicketRequest(char* json)
{
	this->fromJson(json);
}

char*
ReplyTicketRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getContent();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *contentKey = "content";
	json_object_set_member(pJsonObject, contentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
ReplyTicketRequest::getContent()
{
	return content;
}

void
ReplyTicketRequest::setContent(std::string  content)
{
	this->content = content;
}


