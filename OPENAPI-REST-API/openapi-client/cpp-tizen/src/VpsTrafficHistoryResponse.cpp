#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTrafficHistoryResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTrafficHistoryResponse::VpsTrafficHistoryResponse()
{
	//__init();
}

VpsTrafficHistoryResponse::~VpsTrafficHistoryResponse()
{
	//__cleanup();
}

void
VpsTrafficHistoryResponse::__init()
{
	//hour = new VpsTrafficHistorySectionResponse();
	//day = new VpsTrafficHistorySectionResponse();
}

void
VpsTrafficHistoryResponse::__cleanup()
{
	//if(hour != NULL) {
	//
	//delete hour;
	//hour = NULL;
	//}
	//if(day != NULL) {
	//
	//delete day;
	//day = NULL;
	//}
	//
}

void
VpsTrafficHistoryResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *hourKey = "hour";
	node = json_object_get_member(pJsonObject, hourKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficHistorySectionResponse")) {
			jsonToValue(&hour, node, "VpsTrafficHistorySectionResponse", "VpsTrafficHistorySectionResponse");
		} else {
			
			VpsTrafficHistorySectionResponse* obj = static_cast<VpsTrafficHistorySectionResponse*> (&hour);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *dayKey = "day";
	node = json_object_get_member(pJsonObject, dayKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficHistorySectionResponse")) {
			jsonToValue(&day, node, "VpsTrafficHistorySectionResponse", "VpsTrafficHistorySectionResponse");
		} else {
			
			VpsTrafficHistorySectionResponse* obj = static_cast<VpsTrafficHistorySectionResponse*> (&day);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsTrafficHistoryResponse::VpsTrafficHistoryResponse(char* json)
{
	this->fromJson(json);
}

char*
VpsTrafficHistoryResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsTrafficHistorySectionResponse")) {
		VpsTrafficHistorySectionResponse obj = getHour();
		node = converttoJson(&obj, "VpsTrafficHistorySectionResponse", "");
	}
	else {
		
		VpsTrafficHistorySectionResponse obj = static_cast<VpsTrafficHistorySectionResponse> (getHour());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *hourKey = "hour";
	json_object_set_member(pJsonObject, hourKey, node);
	if (isprimitive("VpsTrafficHistorySectionResponse")) {
		VpsTrafficHistorySectionResponse obj = getDay();
		node = converttoJson(&obj, "VpsTrafficHistorySectionResponse", "");
	}
	else {
		
		VpsTrafficHistorySectionResponse obj = static_cast<VpsTrafficHistorySectionResponse> (getDay());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *dayKey = "day";
	json_object_set_member(pJsonObject, dayKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsTrafficHistorySectionResponse
VpsTrafficHistoryResponse::getHour()
{
	return hour;
}

void
VpsTrafficHistoryResponse::setHour(VpsTrafficHistorySectionResponse  hour)
{
	this->hour = hour;
}

VpsTrafficHistorySectionResponse
VpsTrafficHistoryResponse::getDay()
{
	return day;
}

void
VpsTrafficHistoryResponse::setDay(VpsTrafficHistorySectionResponse  day)
{
	this->day = day;
}


