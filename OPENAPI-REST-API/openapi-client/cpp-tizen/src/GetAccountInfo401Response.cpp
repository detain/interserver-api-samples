#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "GetAccountInfo_401_response.h"

using namespace std;
using namespace Tizen::ArtikCloud;

GetAccountInfo_401_response::GetAccountInfo_401_response()
{
	//__init();
}

GetAccountInfo_401_response::~GetAccountInfo_401_response()
{
	//__cleanup();
}

void
GetAccountInfo_401_response::__init()
{
	//code = int(0);
	//message = std::string();
}

void
GetAccountInfo_401_response::__cleanup()
{
	//if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//if(message != NULL) {
	//
	//delete message;
	//message = NULL;
	//}
	//
}

void
GetAccountInfo_401_response::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *codeKey = "code";
	node = json_object_get_member(pJsonObject, codeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&code, node, "int", "");
		} else {
			
		}
	}
	const gchar *messageKey = "message";
	node = json_object_get_member(pJsonObject, messageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&message, node, "std::string", "");
		} else {
			
		}
	}
}

GetAccountInfo_401_response::GetAccountInfo_401_response(char* json)
{
	this->fromJson(json);
}

char*
GetAccountInfo_401_response::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getCode();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *codeKey = "code";
	json_object_set_member(pJsonObject, codeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMessage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *messageKey = "message";
	json_object_set_member(pJsonObject, messageKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
GetAccountInfo_401_response::getCode()
{
	return code;
}

void
GetAccountInfo_401_response::setCode(int  code)
{
	this->code = code;
}

std::string
GetAccountInfo_401_response::getMessage()
{
	return message;
}

void
GetAccountInfo_401_response::setMessage(std::string  message)
{
	this->message = message;
}


