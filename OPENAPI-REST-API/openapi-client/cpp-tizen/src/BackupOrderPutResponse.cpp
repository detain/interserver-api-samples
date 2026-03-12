#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BackupOrderPutResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BackupOrderPutResponse::BackupOrderPutResponse()
{
	//__init();
}

BackupOrderPutResponse::~BackupOrderPutResponse()
{
	//__cleanup();
}

void
BackupOrderPutResponse::__init()
{
	//r_continue = bool(false);
	//new std::list()std::list> errors;
	//serviceType = int(0);
	//serviceCost = std::string();
	//originalCost = std::string();
	//repeatServiceCost = std::string();
	//hostname = std::string();
	//password = std::string();
	//coupon = std::string();
	//couponCode = int(0);
}

void
BackupOrderPutResponse::__cleanup()
{
	//if(r_continue != NULL) {
	//
	//delete r_continue;
	//r_continue = NULL;
	//}
	//if(errors != NULL) {
	//errors.RemoveAll(true);
	//delete errors;
	//errors = NULL;
	//}
	//if(serviceType != NULL) {
	//
	//delete serviceType;
	//serviceType = NULL;
	//}
	//if(serviceCost != NULL) {
	//
	//delete serviceCost;
	//serviceCost = NULL;
	//}
	//if(originalCost != NULL) {
	//
	//delete originalCost;
	//originalCost = NULL;
	//}
	//if(repeatServiceCost != NULL) {
	//
	//delete repeatServiceCost;
	//repeatServiceCost = NULL;
	//}
	//if(hostname != NULL) {
	//
	//delete hostname;
	//hostname = NULL;
	//}
	//if(password != NULL) {
	//
	//delete password;
	//password = NULL;
	//}
	//if(coupon != NULL) {
	//
	//delete coupon;
	//coupon = NULL;
	//}
	//if(couponCode != NULL) {
	//
	//delete couponCode;
	//couponCode = NULL;
	//}
	//
}

void
BackupOrderPutResponse::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *r_continueKey = "continue";
	node = json_object_get_member(pJsonObject, r_continueKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&r_continue, node, "bool", "");
		} else {
			
		}
	}
	const gchar *errorsKey = "errors";
	node = json_object_get_member(pJsonObject, errorsKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			errors = new_list;
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
	const gchar *serviceCostKey = "serviceCost";
	node = json_object_get_member(pJsonObject, serviceCostKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&serviceCost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *originalCostKey = "originalCost";
	node = json_object_get_member(pJsonObject, originalCostKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&originalCost, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *repeatServiceCostKey = "repeatServiceCost";
	node = json_object_get_member(pJsonObject, repeatServiceCostKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&repeatServiceCost, node, "std::string", "");
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
	const gchar *passwordKey = "password";
	node = json_object_get_member(pJsonObject, passwordKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&password, node, "std::string", "");
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
	const gchar *couponCodeKey = "couponCode";
	node = json_object_get_member(pJsonObject, couponCodeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&couponCode, node, "int", "");
		} else {
			
		}
	}
}

BackupOrderPutResponse::BackupOrderPutResponse(char* json)
{
	this->fromJson(json);
}

char*
BackupOrderPutResponse::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("bool")) {
		bool obj = getRContinue();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *r_continueKey = "continue";
	json_object_set_member(pJsonObject, r_continueKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getErrors());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getErrors());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *errorsKey = "errors";
	json_object_set_member(pJsonObject, errorsKey, node);
	if (isprimitive("int")) {
		int obj = getServiceType();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *serviceTypeKey = "serviceType";
	json_object_set_member(pJsonObject, serviceTypeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *serviceCostKey = "serviceCost";
	json_object_set_member(pJsonObject, serviceCostKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOriginalCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *originalCostKey = "originalCost";
	json_object_set_member(pJsonObject, originalCostKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRepeatServiceCost();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *repeatServiceCostKey = "repeatServiceCost";
	json_object_set_member(pJsonObject, repeatServiceCostKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hostnameKey = "hostname";
	json_object_set_member(pJsonObject, hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPassword();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *passwordKey = "password";
	json_object_set_member(pJsonObject, passwordKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *couponKey = "coupon";
	json_object_set_member(pJsonObject, couponKey, node);
	if (isprimitive("int")) {
		int obj = getCouponCode();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *couponCodeKey = "couponCode";
	json_object_set_member(pJsonObject, couponCodeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
BackupOrderPutResponse::getRContinue()
{
	return r_continue;
}

void
BackupOrderPutResponse::setRContinue(bool  r_continue)
{
	this->r_continue = r_continue;
}

std::list<std::string>
BackupOrderPutResponse::getErrors()
{
	return errors;
}

void
BackupOrderPutResponse::setErrors(std::list <std::string> errors)
{
	this->errors = errors;
}

int
BackupOrderPutResponse::getServiceType()
{
	return serviceType;
}

void
BackupOrderPutResponse::setServiceType(int  serviceType)
{
	this->serviceType = serviceType;
}

std::string
BackupOrderPutResponse::getServiceCost()
{
	return serviceCost;
}

void
BackupOrderPutResponse::setServiceCost(std::string  serviceCost)
{
	this->serviceCost = serviceCost;
}

std::string
BackupOrderPutResponse::getOriginalCost()
{
	return originalCost;
}

void
BackupOrderPutResponse::setOriginalCost(std::string  originalCost)
{
	this->originalCost = originalCost;
}

std::string
BackupOrderPutResponse::getRepeatServiceCost()
{
	return repeatServiceCost;
}

void
BackupOrderPutResponse::setRepeatServiceCost(std::string  repeatServiceCost)
{
	this->repeatServiceCost = repeatServiceCost;
}

std::string
BackupOrderPutResponse::getHostname()
{
	return hostname;
}

void
BackupOrderPutResponse::setHostname(std::string  hostname)
{
	this->hostname = hostname;
}

std::string
BackupOrderPutResponse::getPassword()
{
	return password;
}

void
BackupOrderPutResponse::setPassword(std::string  password)
{
	this->password = password;
}

std::string
BackupOrderPutResponse::getCoupon()
{
	return coupon;
}

void
BackupOrderPutResponse::setCoupon(std::string  coupon)
{
	this->coupon = coupon;
}

int
BackupOrderPutResponse::getCouponCode()
{
	return couponCode;
}

void
BackupOrderPutResponse::setCouponCode(int  couponCode)
{
	this->couponCode = couponCode;
}


