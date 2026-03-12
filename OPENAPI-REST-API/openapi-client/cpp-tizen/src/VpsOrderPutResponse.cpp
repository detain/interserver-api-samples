#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "VpsOrderPutResponse.h"

using namespace std;
using namespace Tizen::ArtikCloud;

VpsOrderPutResponse::VpsOrderPutResponse()
{
	//__init();
}

VpsOrderPutResponse::~VpsOrderPutResponse()
{
	//__cleanup();
}

void
VpsOrderPutResponse::__init()
{
	//r_continue = bool(false);
	//new std::list()std::list> errors;
	//coupon_code = int(0);
	//service_cost = int(0);
	//slice_cost = int(0);
	//service_type = int(0);
	//repeat_slice_cost = int(0);
	//original_slice_cost = int(0);
	//original_cost = int(0);
	//repeat_service_cost = int(0);
	//monthly_service_cost = int(0);
	//custid = std::string();
	//os = std::string();
	//slices = std::string();
	//platform = std::string();
	//controlpanel = std::string();
	//period = int(0);
	//location = int(0);
	//version = std::string();
	//hostname = std::string();
	//coupon = std::string();
	//rootpass = std::string();
}

void
VpsOrderPutResponse::__cleanup()
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
	//if(coupon_code != NULL) {
	//
	//delete coupon_code;
	//coupon_code = NULL;
	//}
	//if(service_cost != NULL) {
	//
	//delete service_cost;
	//service_cost = NULL;
	//}
	//if(slice_cost != NULL) {
	//
	//delete slice_cost;
	//slice_cost = NULL;
	//}
	//if(service_type != NULL) {
	//
	//delete service_type;
	//service_type = NULL;
	//}
	//if(repeat_slice_cost != NULL) {
	//
	//delete repeat_slice_cost;
	//repeat_slice_cost = NULL;
	//}
	//if(original_slice_cost != NULL) {
	//
	//delete original_slice_cost;
	//original_slice_cost = NULL;
	//}
	//if(original_cost != NULL) {
	//
	//delete original_cost;
	//original_cost = NULL;
	//}
	//if(repeat_service_cost != NULL) {
	//
	//delete repeat_service_cost;
	//repeat_service_cost = NULL;
	//}
	//if(monthly_service_cost != NULL) {
	//
	//delete monthly_service_cost;
	//monthly_service_cost = NULL;
	//}
	//if(custid != NULL) {
	//
	//delete custid;
	//custid = NULL;
	//}
	//if(os != NULL) {
	//
	//delete os;
	//os = NULL;
	//}
	//if(slices != NULL) {
	//
	//delete slices;
	//slices = NULL;
	//}
	//if(platform != NULL) {
	//
	//delete platform;
	//platform = NULL;
	//}
	//if(controlpanel != NULL) {
	//
	//delete controlpanel;
	//controlpanel = NULL;
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
	//if(version != NULL) {
	//
	//delete version;
	//version = NULL;
	//}
	//if(hostname != NULL) {
	//
	//delete hostname;
	//hostname = NULL;
	//}
	//if(coupon != NULL) {
	//
	//delete coupon;
	//coupon = NULL;
	//}
	//if(rootpass != NULL) {
	//
	//delete rootpass;
	//rootpass = NULL;
	//}
	//
}

void
VpsOrderPutResponse::fromJson(char* jsonStr)
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
			list<AnyType> new_list;
			AnyType inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("AnyType")) {
					jsonToValue(&inst, temp_json, "AnyType", "");
				} else {
					
					inst.fromJson(json_to_string(temp_json, false));
					
				}
				new_list.push_back(inst);
			}
			errors = new_list;
		}
		
	}
	const gchar *coupon_codeKey = "coupon_code";
	node = json_object_get_member(pJsonObject, coupon_codeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&coupon_code, node, "int", "");
		} else {
			
		}
	}
	const gchar *service_costKey = "service_cost";
	node = json_object_get_member(pJsonObject, service_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&service_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *slice_costKey = "slice_cost";
	node = json_object_get_member(pJsonObject, slice_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&slice_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *service_typeKey = "service_type";
	node = json_object_get_member(pJsonObject, service_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&service_type, node, "int", "");
		} else {
			
		}
	}
	const gchar *repeat_slice_costKey = "repeat_slice_cost";
	node = json_object_get_member(pJsonObject, repeat_slice_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&repeat_slice_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *original_slice_costKey = "original_slice_cost";
	node = json_object_get_member(pJsonObject, original_slice_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&original_slice_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *original_costKey = "original_cost";
	node = json_object_get_member(pJsonObject, original_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&original_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *repeat_service_costKey = "repeat_service_cost";
	node = json_object_get_member(pJsonObject, repeat_service_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&repeat_service_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *monthly_service_costKey = "monthly_service_cost";
	node = json_object_get_member(pJsonObject, monthly_service_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&monthly_service_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *custidKey = "custid";
	node = json_object_get_member(pJsonObject, custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *osKey = "os";
	node = json_object_get_member(pJsonObject, osKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&os, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *slicesKey = "slices";
	node = json_object_get_member(pJsonObject, slicesKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&slices, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *platformKey = "platform";
	node = json_object_get_member(pJsonObject, platformKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&platform, node, "std::string", "");
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
	const gchar *versionKey = "version";
	node = json_object_get_member(pJsonObject, versionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&version, node, "std::string", "");
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
	const gchar *couponKey = "coupon";
	node = json_object_get_member(pJsonObject, couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&coupon, node, "std::string", "");
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
}

VpsOrderPutResponse::VpsOrderPutResponse(char* json)
{
	this->fromJson(json);
}

char*
VpsOrderPutResponse::toJson()
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
	if (isprimitive("AnyType")) {
		list<AnyType> new_list = static_cast<list <AnyType> > (getErrors());
		node = converttoJson(&new_list, "AnyType", "array");
	} else {
		node = json_node_alloc();
		list<AnyType> new_list = static_cast<list <AnyType> > (getErrors());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
		for (list<AnyType>::iterator it = new_list.begin(); it != new_list.end(); it++) {
			mygerror = NULL;
			AnyType obj = *it;
			JsonNode *node_temp = json_from_string(obj.toJson(), &mygerror);
			json_array_add_element(json_array, node_temp);
			g_clear_error(&mygerror);
		}
		json_node_init_array(node, json_array);
		json_array_unref(json_array);
		
	}


	
	const gchar *errorsKey = "errors";
	json_object_set_member(pJsonObject, errorsKey, node);
	if (isprimitive("int")) {
		int obj = getCouponCode();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *coupon_codeKey = "coupon_code";
	json_object_set_member(pJsonObject, coupon_codeKey, node);
	if (isprimitive("int")) {
		int obj = getServiceCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *service_costKey = "service_cost";
	json_object_set_member(pJsonObject, service_costKey, node);
	if (isprimitive("int")) {
		int obj = getSliceCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *slice_costKey = "slice_cost";
	json_object_set_member(pJsonObject, slice_costKey, node);
	if (isprimitive("int")) {
		int obj = getServiceType();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *service_typeKey = "service_type";
	json_object_set_member(pJsonObject, service_typeKey, node);
	if (isprimitive("int")) {
		int obj = getRepeatSliceCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *repeat_slice_costKey = "repeat_slice_cost";
	json_object_set_member(pJsonObject, repeat_slice_costKey, node);
	if (isprimitive("int")) {
		int obj = getOriginalSliceCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *original_slice_costKey = "original_slice_cost";
	json_object_set_member(pJsonObject, original_slice_costKey, node);
	if (isprimitive("int")) {
		int obj = getOriginalCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *original_costKey = "original_cost";
	json_object_set_member(pJsonObject, original_costKey, node);
	if (isprimitive("int")) {
		int obj = getRepeatServiceCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *repeat_service_costKey = "repeat_service_cost";
	json_object_set_member(pJsonObject, repeat_service_costKey, node);
	if (isprimitive("int")) {
		int obj = getMonthlyServiceCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *monthly_service_costKey = "monthly_service_cost";
	json_object_set_member(pJsonObject, monthly_service_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *custidKey = "custid";
	json_object_set_member(pJsonObject, custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getOs();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *osKey = "os";
	json_object_set_member(pJsonObject, osKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSlices();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *slicesKey = "slices";
	json_object_set_member(pJsonObject, slicesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPlatform();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *platformKey = "platform";
	json_object_set_member(pJsonObject, platformKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getControlpanel();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *controlpanelKey = "controlpanel";
	json_object_set_member(pJsonObject, controlpanelKey, node);
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
		std::string obj = getVersion();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *versionKey = "version";
	json_object_set_member(pJsonObject, versionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHostname();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hostnameKey = "hostname";
	json_object_set_member(pJsonObject, hostnameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *couponKey = "coupon";
	json_object_set_member(pJsonObject, couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRootpass();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *rootpassKey = "rootpass";
	json_object_set_member(pJsonObject, rootpassKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

bool
VpsOrderPutResponse::getRContinue()
{
	return r_continue;
}

void
VpsOrderPutResponse::setRContinue(bool  r_continue)
{
	this->r_continue = r_continue;
}

std::list<AnyType>
VpsOrderPutResponse::getErrors()
{
	return errors;
}

void
VpsOrderPutResponse::setErrors(std::list <AnyType> errors)
{
	this->errors = errors;
}

int
VpsOrderPutResponse::getCouponCode()
{
	return coupon_code;
}

void
VpsOrderPutResponse::setCouponCode(int  coupon_code)
{
	this->coupon_code = coupon_code;
}

int
VpsOrderPutResponse::getServiceCost()
{
	return service_cost;
}

void
VpsOrderPutResponse::setServiceCost(int  service_cost)
{
	this->service_cost = service_cost;
}

int
VpsOrderPutResponse::getSliceCost()
{
	return slice_cost;
}

void
VpsOrderPutResponse::setSliceCost(int  slice_cost)
{
	this->slice_cost = slice_cost;
}

int
VpsOrderPutResponse::getServiceType()
{
	return service_type;
}

void
VpsOrderPutResponse::setServiceType(int  service_type)
{
	this->service_type = service_type;
}

int
VpsOrderPutResponse::getRepeatSliceCost()
{
	return repeat_slice_cost;
}

void
VpsOrderPutResponse::setRepeatSliceCost(int  repeat_slice_cost)
{
	this->repeat_slice_cost = repeat_slice_cost;
}

int
VpsOrderPutResponse::getOriginalSliceCost()
{
	return original_slice_cost;
}

void
VpsOrderPutResponse::setOriginalSliceCost(int  original_slice_cost)
{
	this->original_slice_cost = original_slice_cost;
}

int
VpsOrderPutResponse::getOriginalCost()
{
	return original_cost;
}

void
VpsOrderPutResponse::setOriginalCost(int  original_cost)
{
	this->original_cost = original_cost;
}

int
VpsOrderPutResponse::getRepeatServiceCost()
{
	return repeat_service_cost;
}

void
VpsOrderPutResponse::setRepeatServiceCost(int  repeat_service_cost)
{
	this->repeat_service_cost = repeat_service_cost;
}

int
VpsOrderPutResponse::getMonthlyServiceCost()
{
	return monthly_service_cost;
}

void
VpsOrderPutResponse::setMonthlyServiceCost(int  monthly_service_cost)
{
	this->monthly_service_cost = monthly_service_cost;
}

std::string
VpsOrderPutResponse::getCustid()
{
	return custid;
}

void
VpsOrderPutResponse::setCustid(std::string  custid)
{
	this->custid = custid;
}

std::string
VpsOrderPutResponse::getOs()
{
	return os;
}

void
VpsOrderPutResponse::setOs(std::string  os)
{
	this->os = os;
}

std::string
VpsOrderPutResponse::getSlices()
{
	return slices;
}

void
VpsOrderPutResponse::setSlices(std::string  slices)
{
	this->slices = slices;
}

std::string
VpsOrderPutResponse::getPlatform()
{
	return platform;
}

void
VpsOrderPutResponse::setPlatform(std::string  platform)
{
	this->platform = platform;
}

std::string
VpsOrderPutResponse::getControlpanel()
{
	return controlpanel;
}

void
VpsOrderPutResponse::setControlpanel(std::string  controlpanel)
{
	this->controlpanel = controlpanel;
}

int
VpsOrderPutResponse::getPeriod()
{
	return period;
}

void
VpsOrderPutResponse::setPeriod(int  period)
{
	this->period = period;
}

int
VpsOrderPutResponse::getLocation()
{
	return location;
}

void
VpsOrderPutResponse::setLocation(int  location)
{
	this->location = location;
}

std::string
VpsOrderPutResponse::getVersion()
{
	return version;
}

void
VpsOrderPutResponse::setVersion(std::string  version)
{
	this->version = version;
}

std::string
VpsOrderPutResponse::getHostname()
{
	return hostname;
}

void
VpsOrderPutResponse::setHostname(std::string  hostname)
{
	this->hostname = hostname;
}

std::string
VpsOrderPutResponse::getCoupon()
{
	return coupon;
}

void
VpsOrderPutResponse::setCoupon(std::string  coupon)
{
	this->coupon = coupon;
}

std::string
VpsOrderPutResponse::getRootpass()
{
	return rootpass;
}

void
VpsOrderPutResponse::setRootpass(std::string  rootpass)
{
	this->rootpass = rootpass;
}


