#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupOrderPutRequest.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupOrderPutRequest::BackupOrderPutRequest()
{
	//__init();
}

BackupOrderPutRequest::~BackupOrderPutRequest()
{
	//__cleanup();
}

void
BackupOrderPutRequest::__init()
{
	//validateOnly = bool(false);
	//serviceType = int(0);
	//coupon = std::string();
}

void
BackupOrderPutRequest::__cleanup()
{
	//if(validateOnly != NULL) {
	//
	//delete validateOnly;
	//validateOnly = NULL;
	//}
	//if(serviceType != NULL) {
	//
	//delete serviceType;
	//serviceType = NULL;
	//}
	//if(coupon != NULL) {
	//
	//delete coupon;
	//coupon = NULL;
	//}
	//
}

void
BackupOrderPutRequest::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *validateOnlyKey = "validateOnly";
	node = json_object_get_member(pJsonObject, validateOnlyKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&validateOnly, node, "bool", "");
		} else {
			
		}
	}
	const gchar *serviceTypeKey = "serviceType";
	node = json_object_get_member(pJsonObject, serviceTypeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&serviceType, node, "int", "");
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
}

BackupOrderPutRequest::BackupOrderPutRequest(char* json)
{
	this->fromJson(json);
}

char*
BackupOrderPutRequest::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getValidateOnly();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *validateOnlyKey = "validateOnly";
	json_object_set_member(pJsonObject, validateOnlyKey, node);
	if (isprimitive("int")) {
		int obj = getServiceType();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *serviceTypeKey = "serviceType";
	json_object_set_member(pJsonObject, serviceTypeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *couponKey = "coupon";
	json_object_set_member(pJsonObject, couponKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
BackupOrderPutRequest::getValidateOnly()
{
	return validateOnly;
}

void
BackupOrderPutRequest::setValidateOnly(bool  validateOnly)
{
	this->validateOnly = validateOnly;
}

int
BackupOrderPutRequest::getServiceType()
{
	return serviceType;
}

void
BackupOrderPutRequest::setServiceType(int  serviceType)
{
	this->serviceType = serviceType;
}

std::string
BackupOrderPutRequest::getCoupon()
{
	return coupon;
}

void
BackupOrderPutRequest::setCoupon(std::string  coupon)
{
	this->coupon = coupon;
}


