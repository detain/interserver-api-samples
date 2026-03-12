#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ReplyTicketResponseSchema.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ReplyTicketResponseSchema::ReplyTicketResponseSchema()
{
	//__init();
}

ReplyTicketResponseSchema::~ReplyTicketResponseSchema()
{
	//__cleanup();
}

void
ReplyTicketResponseSchema::__init()
{
	//success = bool(false);
	//post_id = int(0);
}

void
ReplyTicketResponseSchema::__cleanup()
{
	//if(success != NULL) {
	//
	//delete success;
	//success = NULL;
	//}
	//if(post_id != NULL) {
	//
	//delete post_id;
	//post_id = NULL;
	//}
	//
}

void
ReplyTicketResponseSchema::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *successKey = "success";
	node = json_object_get_member(pJsonObject, successKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&success, node, "bool", "");
		} else {
			
		}
	}
	const gchar *post_idKey = "post_id";
	node = json_object_get_member(pJsonObject, post_idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&post_id, node, "int", "");
		} else {
			
		}
	}
}

ReplyTicketResponseSchema::ReplyTicketResponseSchema(char* json)
{
	this->fromJson(json);
}

char*
ReplyTicketResponseSchema::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getSuccess();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *successKey = "success";
	json_object_set_member(pJsonObject, successKey, node);
	if (isprimitive("int")) {
		int obj = getPostId();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *post_idKey = "post_id";
	json_object_set_member(pJsonObject, post_idKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
ReplyTicketResponseSchema::getSuccess()
{
	return success;
}

void
ReplyTicketResponseSchema::setSuccess(bool  success)
{
	this->success = success;
}

int
ReplyTicketResponseSchema::getPostId()
{
	return post_id;
}

void
ReplyTicketResponseSchema::setPostId(int  post_id)
{
	this->post_id = post_id;
}


