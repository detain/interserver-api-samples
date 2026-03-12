#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTrafficUsageAverageResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTrafficUsageAverageResponse::VpsTrafficUsageAverageResponse()
{
	//__init();
}

VpsTrafficUsageAverageResponse::~VpsTrafficUsageAverageResponse()
{
	//__cleanup();
}

void
VpsTrafficUsageAverageResponse::__init()
{
	//in = new VpsTrafficUsageAverageSectionResponse();
	//out = new VpsTrafficUsageAverageSectionResponse();
}

void
VpsTrafficUsageAverageResponse::__cleanup()
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
VpsTrafficUsageAverageResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *inKey = "in";
	node = json_object_get_member(pJsonObject, inKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficUsageAverageSectionResponse")) {
			jsonToValue(&in, node, "VpsTrafficUsageAverageSectionResponse", "VpsTrafficUsageAverageSectionResponse");
		} else {
			
			VpsTrafficUsageAverageSectionResponse* obj = static_cast<VpsTrafficUsageAverageSectionResponse*> (&in);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *outKey = "out";
	node = json_object_get_member(pJsonObject, outKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficUsageAverageSectionResponse")) {
			jsonToValue(&out, node, "VpsTrafficUsageAverageSectionResponse", "VpsTrafficUsageAverageSectionResponse");
		} else {
			
			VpsTrafficUsageAverageSectionResponse* obj = static_cast<VpsTrafficUsageAverageSectionResponse*> (&out);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsTrafficUsageAverageResponse::VpsTrafficUsageAverageResponse(char* json)
{
	this->fromJson(json);
}

char*
VpsTrafficUsageAverageResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsTrafficUsageAverageSectionResponse")) {
		VpsTrafficUsageAverageSectionResponse obj = getIn();
		node = converttoJson(&obj, "VpsTrafficUsageAverageSectionResponse", "");
	}
	else {
		
		VpsTrafficUsageAverageSectionResponse obj = static_cast<VpsTrafficUsageAverageSectionResponse> (getIn());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *inKey = "in";
	json_object_set_member(pJsonObject, inKey, node);
	if (isprimitive("VpsTrafficUsageAverageSectionResponse")) {
		VpsTrafficUsageAverageSectionResponse obj = getOut();
		node = converttoJson(&obj, "VpsTrafficUsageAverageSectionResponse", "");
	}
	else {
		
		VpsTrafficUsageAverageSectionResponse obj = static_cast<VpsTrafficUsageAverageSectionResponse> (getOut());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
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

VpsTrafficUsageAverageSectionResponse
VpsTrafficUsageAverageResponse::getIn()
{
	return in;
}

void
VpsTrafficUsageAverageResponse::setIn(VpsTrafficUsageAverageSectionResponse  in)
{
	this->in = in;
}

VpsTrafficUsageAverageSectionResponse
VpsTrafficUsageAverageResponse::getOut()
{
	return out;
}

void
VpsTrafficUsageAverageResponse::setOut(VpsTrafficUsageAverageSectionResponse  out)
{
	this->out = out;
}


