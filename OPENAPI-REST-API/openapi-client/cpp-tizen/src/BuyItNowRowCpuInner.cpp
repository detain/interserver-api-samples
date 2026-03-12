#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BuyItNowRow_cpu_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BuyItNowRow_cpu_inner::BuyItNowRow_cpu_inner()
{
	//__init();
}

BuyItNowRow_cpu_inner::~BuyItNowRow_cpu_inner()
{
	//__cleanup();
}

void
BuyItNowRow_cpu_inner::__init()
{
	//img = std::string();
	//type = std::string();
	//speed = std::string();
	//num_cpus = std::string();
	//num_cores = std::string();
}

void
BuyItNowRow_cpu_inner::__cleanup()
{
	//if(img != NULL) {
	//
	//delete img;
	//img = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(speed != NULL) {
	//
	//delete speed;
	//speed = NULL;
	//}
	//if(num_cpus != NULL) {
	//
	//delete num_cpus;
	//num_cpus = NULL;
	//}
	//if(num_cores != NULL) {
	//
	//delete num_cores;
	//num_cores = NULL;
	//}
	//
}

void
BuyItNowRow_cpu_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *imgKey = "img";
	node = json_object_get_member(pJsonObject, imgKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&img, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *speedKey = "speed";
	node = json_object_get_member(pJsonObject, speedKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&speed, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *num_cpusKey = "num_cpus";
	node = json_object_get_member(pJsonObject, num_cpusKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&num_cpus, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *num_coresKey = "num_cores";
	node = json_object_get_member(pJsonObject, num_coresKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&num_cores, node, "std::string", "");
		} else {
			
		}
	}
}

BuyItNowRow_cpu_inner::BuyItNowRow_cpu_inner(char* json)
{
	this->fromJson(json);
}

char*
BuyItNowRow_cpu_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getImg();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *imgKey = "img";
	json_object_set_member(pJsonObject, imgKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSpeed();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *speedKey = "speed";
	json_object_set_member(pJsonObject, speedKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNumCpus();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *num_cpusKey = "num_cpus";
	json_object_set_member(pJsonObject, num_cpusKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getNumCores();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *num_coresKey = "num_cores";
	json_object_set_member(pJsonObject, num_coresKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BuyItNowRow_cpu_inner::getImg()
{
	return img;
}

void
BuyItNowRow_cpu_inner::setImg(std::string  img)
{
	this->img = img;
}

std::string
BuyItNowRow_cpu_inner::getType()
{
	return type;
}

void
BuyItNowRow_cpu_inner::setType(std::string  type)
{
	this->type = type;
}

std::string
BuyItNowRow_cpu_inner::getSpeed()
{
	return speed;
}

void
BuyItNowRow_cpu_inner::setSpeed(std::string  speed)
{
	this->speed = speed;
}

std::string
BuyItNowRow_cpu_inner::getNumCpus()
{
	return num_cpus;
}

void
BuyItNowRow_cpu_inner::setNumCpus(std::string  num_cpus)
{
	this->num_cpus = num_cpus;
}

std::string
BuyItNowRow_cpu_inner::getNumCores()
{
	return num_cores;
}

void
BuyItNowRow_cpu_inner::setNumCores(std::string  num_cores)
{
	this->num_cores = num_cores;
}


