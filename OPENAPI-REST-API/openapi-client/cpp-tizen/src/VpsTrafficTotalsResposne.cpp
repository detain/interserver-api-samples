#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsTrafficTotalsResposne.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsTrafficTotalsResposne::VpsTrafficTotalsResposne()
{
	//__init();
}

VpsTrafficTotalsResposne::~VpsTrafficTotalsResposne()
{
	//__cleanup();
}

void
VpsTrafficTotalsResposne::__init()
{
	//day = new VpsTrafficTotalsSectionResponse();
	//month = new VpsTrafficTotalsSectionResponse();
	//year = new VpsTrafficTotalsSectionResponse();
	//all = new VpsTrafficTotalsSectionResponse();
}

void
VpsTrafficTotalsResposne::__cleanup()
{
	//if(day != NULL) {
	//
	//delete day;
	//day = NULL;
	//}
	//if(month != NULL) {
	//
	//delete month;
	//month = NULL;
	//}
	//if(year != NULL) {
	//
	//delete year;
	//year = NULL;
	//}
	//if(all != NULL) {
	//
	//delete all;
	//all = NULL;
	//}
	//
}

void
VpsTrafficTotalsResposne::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *dayKey = "day";
	node = json_object_get_member(pJsonObject, dayKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficTotalsSectionResponse")) {
			jsonToValue(&day, node, "VpsTrafficTotalsSectionResponse", "VpsTrafficTotalsSectionResponse");
		} else {
			
			VpsTrafficTotalsSectionResponse* obj = static_cast<VpsTrafficTotalsSectionResponse*> (&day);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *monthKey = "month";
	node = json_object_get_member(pJsonObject, monthKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficTotalsSectionResponse")) {
			jsonToValue(&month, node, "VpsTrafficTotalsSectionResponse", "VpsTrafficTotalsSectionResponse");
		} else {
			
			VpsTrafficTotalsSectionResponse* obj = static_cast<VpsTrafficTotalsSectionResponse*> (&month);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *yearKey = "year";
	node = json_object_get_member(pJsonObject, yearKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficTotalsSectionResponse")) {
			jsonToValue(&year, node, "VpsTrafficTotalsSectionResponse", "VpsTrafficTotalsSectionResponse");
		} else {
			
			VpsTrafficTotalsSectionResponse* obj = static_cast<VpsTrafficTotalsSectionResponse*> (&year);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *allKey = "all";
	node = json_object_get_member(pJsonObject, allKey);
	if (node !=NULL) {
	

		if (isprimitive("VpsTrafficTotalsSectionResponse")) {
			jsonToValue(&all, node, "VpsTrafficTotalsSectionResponse", "VpsTrafficTotalsSectionResponse");
		} else {
			
			VpsTrafficTotalsSectionResponse* obj = static_cast<VpsTrafficTotalsSectionResponse*> (&all);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

VpsTrafficTotalsResposne::VpsTrafficTotalsResposne(char* json)
{
	this->fromJson(json);
}

char*
VpsTrafficTotalsResposne::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("VpsTrafficTotalsSectionResponse")) {
		VpsTrafficTotalsSectionResponse obj = getDay();
		node = converttoJson(&obj, "VpsTrafficTotalsSectionResponse", "");
	}
	else {
		
		VpsTrafficTotalsSectionResponse obj = static_cast<VpsTrafficTotalsSectionResponse> (getDay());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *dayKey = "day";
	json_object_set_member(pJsonObject, dayKey, node);
	if (isprimitive("VpsTrafficTotalsSectionResponse")) {
		VpsTrafficTotalsSectionResponse obj = getMonth();
		node = converttoJson(&obj, "VpsTrafficTotalsSectionResponse", "");
	}
	else {
		
		VpsTrafficTotalsSectionResponse obj = static_cast<VpsTrafficTotalsSectionResponse> (getMonth());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *monthKey = "month";
	json_object_set_member(pJsonObject, monthKey, node);
	if (isprimitive("VpsTrafficTotalsSectionResponse")) {
		VpsTrafficTotalsSectionResponse obj = getYear();
		node = converttoJson(&obj, "VpsTrafficTotalsSectionResponse", "");
	}
	else {
		
		VpsTrafficTotalsSectionResponse obj = static_cast<VpsTrafficTotalsSectionResponse> (getYear());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *yearKey = "year";
	json_object_set_member(pJsonObject, yearKey, node);
	if (isprimitive("VpsTrafficTotalsSectionResponse")) {
		VpsTrafficTotalsSectionResponse obj = getAll();
		node = converttoJson(&obj, "VpsTrafficTotalsSectionResponse", "");
	}
	else {
		
		VpsTrafficTotalsSectionResponse obj = static_cast<VpsTrafficTotalsSectionResponse> (getAll());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *allKey = "all";
	json_object_set_member(pJsonObject, allKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

VpsTrafficTotalsSectionResponse
VpsTrafficTotalsResposne::getDay()
{
	return day;
}

void
VpsTrafficTotalsResposne::setDay(VpsTrafficTotalsSectionResponse  day)
{
	this->day = day;
}

VpsTrafficTotalsSectionResponse
VpsTrafficTotalsResposne::getMonth()
{
	return month;
}

void
VpsTrafficTotalsResposne::setMonth(VpsTrafficTotalsSectionResponse  month)
{
	this->month = month;
}

VpsTrafficTotalsSectionResponse
VpsTrafficTotalsResposne::getYear()
{
	return year;
}

void
VpsTrafficTotalsResposne::setYear(VpsTrafficTotalsSectionResponse  year)
{
	this->year = year;
}

VpsTrafficTotalsSectionResponse
VpsTrafficTotalsResposne::getAll()
{
	return all;
}

void
VpsTrafficTotalsResposne::setAll(VpsTrafficTotalsSectionResponse  all)
{
	this->all = all;
}


