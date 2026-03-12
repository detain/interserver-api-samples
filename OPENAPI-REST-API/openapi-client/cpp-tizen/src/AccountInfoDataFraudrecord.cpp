#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfoData_fraudrecord.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfoData_fraudrecord::AccountInfoData_fraudrecord()
{
	//__init();
}

AccountInfoData_fraudrecord::~AccountInfoData_fraudrecord()
{
	//__cleanup();
}

void
AccountInfoData_fraudrecord::__init()
{
	//score = std::string();
	//count = std::string();
	//reliability = std::string();
	//code = std::string();
}

void
AccountInfoData_fraudrecord::__cleanup()
{
	//if(score != NULL) {
	//
	//delete score;
	//score = NULL;
	//}
	//if(count != NULL) {
	//
	//delete count;
	//count = NULL;
	//}
	//if(reliability != NULL) {
	//
	//delete reliability;
	//reliability = NULL;
	//}
	//if(code != NULL) {
	//
	//delete code;
	//code = NULL;
	//}
	//
}

void
AccountInfoData_fraudrecord::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *scoreKey = "score";
	node = json_object_get_member(pJsonObject, scoreKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&score, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *countKey = "count";
	node = json_object_get_member(pJsonObject, countKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&count, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *reliabilityKey = "reliability";
	node = json_object_get_member(pJsonObject, reliabilityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&reliability, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *codeKey = "code";
	node = json_object_get_member(pJsonObject, codeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&code, node, "std::string", "");
		} else {
			
		}
	}
}

AccountInfoData_fraudrecord::AccountInfoData_fraudrecord(char* json)
{
	this->fromJson(json);
}

char*
AccountInfoData_fraudrecord::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getScore();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *scoreKey = "score";
	json_object_set_member(pJsonObject, scoreKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCount();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *countKey = "count";
	json_object_set_member(pJsonObject, countKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReliability();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *reliabilityKey = "reliability";
	json_object_set_member(pJsonObject, reliabilityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCode();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *codeKey = "code";
	json_object_set_member(pJsonObject, codeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AccountInfoData_fraudrecord::getScore()
{
	return score;
}

void
AccountInfoData_fraudrecord::setScore(std::string  score)
{
	this->score = score;
}

std::string
AccountInfoData_fraudrecord::getCount()
{
	return count;
}

void
AccountInfoData_fraudrecord::setCount(std::string  count)
{
	this->count = count;
}

std::string
AccountInfoData_fraudrecord::getReliability()
{
	return reliability;
}

void
AccountInfoData_fraudrecord::setReliability(std::string  reliability)
{
	this->reliability = reliability;
}

std::string
AccountInfoData_fraudrecord::getCode()
{
	return code;
}

void
AccountInfoData_fraudrecord::setCode(std::string  code)
{
	this->code = code;
}


