#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrderPostRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrderPostRequest::VpsOrderPostRequest()
{
	//__init();
}

VpsOrderPostRequest::~VpsOrderPostRequest()
{
	//__cleanup();
}

void
VpsOrderPostRequest::__init()
{
	//osDistro = std::string();
	//slices = int(0);
	//vpsPlatform = std::string();
	//period = int(0);
	//location = int(0);
	//osVersion = std::string();
	//hostname = std::string();
	//rootpass = std::string();
	//controlpanel = std::string();
	//coupon = std::string();
	//comment = std::string();
}

void
VpsOrderPostRequest::__cleanup()
{
	//if(osDistro != NULL) {
	//
	//delete osDistro;
	//osDistro = NULL;
	//}
	//if(slices != NULL) {
	//
	//delete slices;
	//slices = NULL;
	//}
	//if(vpsPlatform != NULL) {
	//
	//delete vpsPlatform;
	//vpsPlatform = NULL;
	//}
	//if(period != NULL) {
	//
	//delete period;
	//period = NULL;
	//}
	//if(location != NULL) {
	//
	//delete location;
	//location = NULL;
	//}
	//if(osVersion != NULL) {
	//
	//delete osVersion;
	//osVersion = NULL;
	//}
	//if(hostname != NULL) {
	//
	//delete hostname;
	//hostname = NULL;
	//}
	//if(rootpass != NULL) {
	//
	//delete rootpass;
	//rootpass = NULL;
	//}
	//if(controlpanel != NULL) {
	//
	//delete controlpanel;
	//controlpanel = NULL;
	//}
	//if(coupon != NULL) {
	//
	//delete coupon;
	//coupon = NULL;
	//}
	//if(comment != NULL) {
	//
	//delete comment;
	//comment = NULL;
	//}
	//
}

void
VpsOrderPostRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *osDistroKey = "osDistro";
	node = json_object_get_member(pJsonObject, osDistroKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&osDistro, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *slicesKey = "slices";
	node = json_object_get_member(pJsonObject, slicesKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&slices, node, "int", "");
		} else {
			
		}
	}
	const gchar *vpsPlatformKey = "vpsPlatform";
	node = json_object_get_member(pJsonObject, vpsPlatformKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&vpsPlatform, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *periodKey = "period";
	node = json_object_get_member(pJsonObject, periodKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&period, node, "int", "");
		} else {
			
		}
	}
	const gchar *locationKey = "location";
	node = json_object_get_member(pJsonObject, locationKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&location, node, "int", "");
		} else {
			
		}
	}
	const gchar *osVersionKey = "osVersion";
	node = json_object_get_member(pJsonObject, osVersionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&osVersion, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *hostnameKey = "hostname";
	node = json_object_get_member(pJsonObject, hostnameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hostname, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *rootpassKey = "rootpass";
	node = json_object_get_member(pJsonObject, rootpassKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&rootpass, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *controlpanelKey = "controlpanel";
	node = json_object_get_member(pJsonObject, controlpanelKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&controlpanel, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *couponKey = "coupon";
	node = json_object_get_member(pJsonObject, couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *commentKey = "comment";
	node = json_object_get_member(pJsonObject, commentKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&comment, node, "std::string", "");
		} else {
			
		}
	}
}

VpsOrderPostRequest::VpsOrderPostRequest(char* json)
{
	this->fromJson(json);
}

char*
VpsOrderPostRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getOsDistro();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *osDistroKey = "osDistro";
	json_object_set_member(pJsonObject, osDistroKey, node);
	if (isprimitive("int")) {
		int obj = getSlices();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *slicesKey = "slices";
	json_object_set_member(pJsonObject, slicesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getVpsPlatform();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *vpsPlatformKey = "vpsPlatform";
	json_object_set_member(pJsonObject, vpsPlatformKey, node);
	if (isprimitive("int")) {
		int obj = getPeriod();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *periodKey = "period";
	json_object_set_member(pJsonObject, periodKey, node);
	if (isprimitive("int")) {
		int obj = getLocation();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *locationKey = "location";
	json_object_set_member(pJsonObject, locationKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOsVersion();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *osVersionKey = "osVersion";
	json_object_set_member(pJsonObject, osVersionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hostnameKey = "hostname";
	json_object_set_member(pJsonObject, hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRootpass();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rootpassKey = "rootpass";
	json_object_set_member(pJsonObject, rootpassKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getControlpanel();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *controlpanelKey = "controlpanel";
	json_object_set_member(pJsonObject, controlpanelKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *couponKey = "coupon";
	json_object_set_member(pJsonObject, couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getComment();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *commentKey = "comment";
	json_object_set_member(pJsonObject, commentKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
VpsOrderPostRequest::getOsDistro()
{
	return osDistro;
}

void
VpsOrderPostRequest::setOsDistro(std::string  osDistro)
{
	this->osDistro = osDistro;
}

int
VpsOrderPostRequest::getSlices()
{
	return slices;
}

void
VpsOrderPostRequest::setSlices(int  slices)
{
	this->slices = slices;
}

std::string
VpsOrderPostRequest::getVpsPlatform()
{
	return vpsPlatform;
}

void
VpsOrderPostRequest::setVpsPlatform(std::string  vpsPlatform)
{
	this->vpsPlatform = vpsPlatform;
}

int
VpsOrderPostRequest::getPeriod()
{
	return period;
}

void
VpsOrderPostRequest::setPeriod(int  period)
{
	this->period = period;
}

int
VpsOrderPostRequest::getLocation()
{
	return location;
}

void
VpsOrderPostRequest::setLocation(int  location)
{
	this->location = location;
}

std::string
VpsOrderPostRequest::getOsVersion()
{
	return osVersion;
}

void
VpsOrderPostRequest::setOsVersion(std::string  osVersion)
{
	this->osVersion = osVersion;
}

std::string
VpsOrderPostRequest::getHostname()
{
	return hostname;
}

void
VpsOrderPostRequest::setHostname(std::string  hostname)
{
	this->hostname = hostname;
}

std::string
VpsOrderPostRequest::getRootpass()
{
	return rootpass;
}

void
VpsOrderPostRequest::setRootpass(std::string  rootpass)
{
	this->rootpass = rootpass;
}

std::string
VpsOrderPostRequest::getControlpanel()
{
	return controlpanel;
}

void
VpsOrderPostRequest::setControlpanel(std::string  controlpanel)
{
	this->controlpanel = controlpanel;
}

std::string
VpsOrderPostRequest::getCoupon()
{
	return coupon;
}

void
VpsOrderPostRequest::setCoupon(std::string  coupon)
{
	this->coupon = coupon;
}

std::string
VpsOrderPostRequest::getComment()
{
	return comment;
}

void
VpsOrderPostRequest::setComment(std::string  comment)
{
	this->comment = comment;
}


