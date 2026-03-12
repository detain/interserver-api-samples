#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailDelistRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailDelistRequest::MailDelistRequest()
{
	//__init();
}

MailDelistRequest::~MailDelistRequest()
{
	//__cleanup();
}

void
MailDelistRequest::__init()
{
	//unblock = std::string();
}

void
MailDelistRequest::__cleanup()
{
	//if(unblock != NULL) {
	//
	//delete unblock;
	//unblock = NULL;
	//}
	//
}

void
MailDelistRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *unblockKey = "unblock";
	node = json_object_get_member(pJsonObject, unblockKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&unblock, node, "std::string", "");
		} else {
			
		}
	}
}

MailDelistRequest::MailDelistRequest(char* json)
{
	this->fromJson(json);
}

char*
MailDelistRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getUnblock();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *unblockKey = "unblock";
	json_object_set_member(pJsonObject, unblockKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MailDelistRequest::getUnblock()
{
	return unblock;
}

void
MailDelistRequest::setUnblock(std::string  unblock)
{
	this->unblock = unblock;
}


