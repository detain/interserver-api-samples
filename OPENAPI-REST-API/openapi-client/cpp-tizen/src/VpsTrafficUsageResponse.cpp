#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTrafficUsageResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTrafficUsageResponse::VpsTrafficUsageResponse()
{
	//__init();
}

VpsTrafficUsageResponse::~VpsTrafficUsageResponse()
{
	//__cleanup();
}

void
VpsTrafficUsageResponse::__init()
{
	//current = new VpsTrafficTotalsSectionResponse();
	//peak = new VpsTrafficTotalsSectionResponse();
	//average = new VpsTrafficUsageAverageResponse();
}

void
VpsTrafficUsageResponse::__cleanup()
{
	//if(current != NULL) {
	//
	//delete current;
	//current = NULL;
	//}
	//if(peak != NULL) {
	//
	//delete peak;
	//peak = NULL;
	//}
	//if(average != NULL) {
	//
	//delete average;
	//average = NULL;
	//}
	//
}

void
VpsTrafficUsageResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *currentKey = "current";
	node = json_object_get_member(pJsonObject, currentKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficTotalsSectionResponse")) {
			jsonToValue(&current, node, "VpsTrafficTotalsSectionResponse", "VpsTrafficTotalsSectionResponse");
		} else {
			
			VpsTrafficTotalsSectionResponse* obj = static_cast<VpsTrafficTotalsSectionResponse*> (&current);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *peakKey = "peak";
	node = json_object_get_member(pJsonObject, peakKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficTotalsSectionResponse")) {
			jsonToValue(&peak, node, "VpsTrafficTotalsSectionResponse", "VpsTrafficTotalsSectionResponse");
		} else {
			
			VpsTrafficTotalsSectionResponse* obj = static_cast<VpsTrafficTotalsSectionResponse*> (&peak);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *averageKey = "average";
	node = json_object_get_member(pJsonObject, averageKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficUsageAverageResponse")) {
			jsonToValue(&average, node, "VpsTrafficUsageAverageResponse", "VpsTrafficUsageAverageResponse");
		} else {
			
			VpsTrafficUsageAverageResponse* obj = static_cast<VpsTrafficUsageAverageResponse*> (&average);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsTrafficUsageResponse::VpsTrafficUsageResponse(char* json)
{
	this->fromJson(json);
}

char*
VpsTrafficUsageResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsTrafficTotalsSectionResponse")) {
		VpsTrafficTotalsSectionResponse obj = getCurrent();
		node = converttoJson(&obj, "VpsTrafficTotalsSectionResponse", "");
	}
	else {
		
		VpsTrafficTotalsSectionResponse obj = static_cast<VpsTrafficTotalsSectionResponse> (getCurrent());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *currentKey = "current";
	json_object_set_member(pJsonObject, currentKey, node);
	if (isprimitive("VpsTrafficTotalsSectionResponse")) {
		VpsTrafficTotalsSectionResponse obj = getPeak();
		node = converttoJson(&obj, "VpsTrafficTotalsSectionResponse", "");
	}
	else {
		
		VpsTrafficTotalsSectionResponse obj = static_cast<VpsTrafficTotalsSectionResponse> (getPeak());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *peakKey = "peak";
	json_object_set_member(pJsonObject, peakKey, node);
	if (isprimitive("VpsTrafficUsageAverageResponse")) {
		VpsTrafficUsageAverageResponse obj = getAverage();
		node = converttoJson(&obj, "VpsTrafficUsageAverageResponse", "");
	}
	else {
		
		VpsTrafficUsageAverageResponse obj = static_cast<VpsTrafficUsageAverageResponse> (getAverage());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *averageKey = "average";
	json_object_set_member(pJsonObject, averageKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsTrafficTotalsSectionResponse
VpsTrafficUsageResponse::getCurrent()
{
	return current;
}

void
VpsTrafficUsageResponse::setCurrent(VpsTrafficTotalsSectionResponse  current)
{
	this->current = current;
}

VpsTrafficTotalsSectionResponse
VpsTrafficUsageResponse::getPeak()
{
	return peak;
}

void
VpsTrafficUsageResponse::setPeak(VpsTrafficTotalsSectionResponse  peak)
{
	this->peak = peak;
}

VpsTrafficUsageAverageResponse
VpsTrafficUsageResponse::getAverage()
{
	return average;
}

void
VpsTrafficUsageResponse::setAverage(VpsTrafficUsageAverageResponse  average)
{
	this->average = average;
}


