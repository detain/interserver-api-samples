#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTrafficTotalsSectionResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTrafficTotalsSectionResponse::VpsTrafficTotalsSectionResponse()
{
	//__init();
}

VpsTrafficTotalsSectionResponse::~VpsTrafficTotalsSectionResponse()
{
	//__cleanup();
}

void
VpsTrafficTotalsSectionResponse::__init()
{
	//in = long(0);
	//out = long(0);
}

void
VpsTrafficTotalsSectionResponse::__cleanup()
{
	//if(in != NULL) {
	//
	//delete in;
	//in = NULL;
	//}
	//if(out != NULL) {
	//
	//delete out;
	//out = NULL;
	//}
	//
}

void
VpsTrafficTotalsSectionResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *inKey = "in";
	node = json_object_get_member(pJsonObject, inKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&in, node, "long long", "");
		} else {
			
		}
	}
	const gchar *outKey = "out";
	node = json_object_get_member(pJsonObject, outKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&out, node, "long long", "");
		} else {
			
		}
	}
}

VpsTrafficTotalsSectionResponse::VpsTrafficTotalsSectionResponse(char* json)
{
	this->fromJson(json);
}

char*
VpsTrafficTotalsSectionResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("long long")) {
		long long obj = getIn();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *inKey = "in";
	json_object_set_member(pJsonObject, inKey, node);
	if (isprimitive("long long")) {
		long long obj = getOut();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
	}
	const gchar *outKey = "out";
	json_object_set_member(pJsonObject, outKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

long long
VpsTrafficTotalsSectionResponse::getIn()
{
	return in;
}

void
VpsTrafficTotalsSectionResponse::setIn(long long  in)
{
	this->in = in;
}

long long
VpsTrafficTotalsSectionResponse::getOut()
{
	return out;
}

void
VpsTrafficTotalsSectionResponse::setOut(long long  out)
{
	this->out = out;
}


