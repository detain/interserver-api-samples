#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "WebsitesOrderJsonServiceOffersItem.h"

using namespace std;
using namespace Tizen::ArtikCloud;

WebsitesOrderJsonServiceOffersItem::WebsitesOrderJsonServiceOffersItem()
{
	//__init();
}

WebsitesOrderJsonServiceOffersItem::~WebsitesOrderJsonServiceOffersItem()
{
	//__cleanup();
}

void
WebsitesOrderJsonServiceOffersItem::__init()
{
	//service_offer_id = std::string();
	//service_id = std::string();
	//intro_cost = int(0);
	//renewal_cost = int(0);
	//intro_frequency = std::string();
	//renewal_frequency = std::string();
	//allow_coupon = std::string();
	//service_module = std::string();
	//created_at = std::string();
	//updated_at = std::string();
	//deleted_at = std::string();
	//currencySymbol = std::string();
}

void
WebsitesOrderJsonServiceOffersItem::__cleanup()
{
	//if(service_offer_id != NULL) {
	//
	//delete service_offer_id;
	//service_offer_id = NULL;
	//}
	//if(service_id != NULL) {
	//
	//delete service_id;
	//service_id = NULL;
	//}
	//if(intro_cost != NULL) {
	//
	//delete intro_cost;
	//intro_cost = NULL;
	//}
	//if(renewal_cost != NULL) {
	//
	//delete renewal_cost;
	//renewal_cost = NULL;
	//}
	//if(intro_frequency != NULL) {
	//
	//delete intro_frequency;
	//intro_frequency = NULL;
	//}
	//if(renewal_frequency != NULL) {
	//
	//delete renewal_frequency;
	//renewal_frequency = NULL;
	//}
	//if(allow_coupon != NULL) {
	//
	//delete allow_coupon;
	//allow_coupon = NULL;
	//}
	//if(service_module != NULL) {
	//
	//delete service_module;
	//service_module = NULL;
	//}
	//if(created_at != NULL) {
	//
	//delete created_at;
	//created_at = NULL;
	//}
	//if(updated_at != NULL) {
	//
	//delete updated_at;
	//updated_at = NULL;
	//}
	//if(deleted_at != NULL) {
	//
	//delete deleted_at;
	//deleted_at = NULL;
	//}
	//if(currencySymbol != NULL) {
	//
	//delete currencySymbol;
	//currencySymbol = NULL;
	//}
	//
}

void
WebsitesOrderJsonServiceOffersItem::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *service_offer_idKey = "service_offer_id";
	node = json_object_get_member(pJsonObject, service_offer_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_offer_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_idKey = "service_id";
	node = json_object_get_member(pJsonObject, service_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *intro_costKey = "intro_cost";
	node = json_object_get_member(pJsonObject, intro_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&intro_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *renewal_costKey = "renewal_cost";
	node = json_object_get_member(pJsonObject, renewal_costKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&renewal_cost, node, "int", "");
		} else {
			
		}
	}
	const gchar *intro_frequencyKey = "intro_frequency";
	node = json_object_get_member(pJsonObject, intro_frequencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&intro_frequency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *renewal_frequencyKey = "renewal_frequency";
	node = json_object_get_member(pJsonObject, renewal_frequencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&renewal_frequency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *allow_couponKey = "allow_coupon";
	node = json_object_get_member(pJsonObject, allow_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&allow_coupon, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *service_moduleKey = "service_module";
	node = json_object_get_member(pJsonObject, service_moduleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&service_module, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *created_atKey = "created_at";
	node = json_object_get_member(pJsonObject, created_atKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&created_at, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *updated_atKey = "updated_at";
	node = json_object_get_member(pJsonObject, updated_atKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&updated_at, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *deleted_atKey = "deleted_at";
	node = json_object_get_member(pJsonObject, deleted_atKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&deleted_at, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currencySymbolKey = "currencySymbol";
	node = json_object_get_member(pJsonObject, currencySymbolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currencySymbol, node, "std::string", "");
		} else {
			
		}
	}
}

WebsitesOrderJsonServiceOffersItem::WebsitesOrderJsonServiceOffersItem(char* json)
{
	this->fromJson(json);
}

char*
WebsitesOrderJsonServiceOffersItem::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getServiceOfferId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_offer_idKey = "service_offer_id";
	json_object_set_member(pJsonObject, service_offer_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_idKey = "service_id";
	json_object_set_member(pJsonObject, service_idKey, node);
	if (isprimitive("int")) {
		int obj = getIntroCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *intro_costKey = "intro_cost";
	json_object_set_member(pJsonObject, intro_costKey, node);
	if (isprimitive("int")) {
		int obj = getRenewalCost();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *renewal_costKey = "renewal_cost";
	json_object_set_member(pJsonObject, renewal_costKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIntroFrequency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *intro_frequencyKey = "intro_frequency";
	json_object_set_member(pJsonObject, intro_frequencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getRenewalFrequency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *renewal_frequencyKey = "renewal_frequency";
	json_object_set_member(pJsonObject, renewal_frequencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAllowCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *allow_couponKey = "allow_coupon";
	json_object_set_member(pJsonObject, allow_couponKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getServiceModule();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *service_moduleKey = "service_module";
	json_object_set_member(pJsonObject, service_moduleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCreatedAt();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *created_atKey = "created_at";
	json_object_set_member(pJsonObject, created_atKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getUpdatedAt();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *updated_atKey = "updated_at";
	json_object_set_member(pJsonObject, updated_atKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDeletedAt();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *deleted_atKey = "deleted_at";
	json_object_set_member(pJsonObject, deleted_atKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencySymbol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencySymbolKey = "currencySymbol";
	json_object_set_member(pJsonObject, currencySymbolKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
WebsitesOrderJsonServiceOffersItem::getServiceOfferId()
{
	return service_offer_id;
}

void
WebsitesOrderJsonServiceOffersItem::setServiceOfferId(std::string  service_offer_id)
{
	this->service_offer_id = service_offer_id;
}

std::string
WebsitesOrderJsonServiceOffersItem::getServiceId()
{
	return service_id;
}

void
WebsitesOrderJsonServiceOffersItem::setServiceId(std::string  service_id)
{
	this->service_id = service_id;
}

int
WebsitesOrderJsonServiceOffersItem::getIntroCost()
{
	return intro_cost;
}

void
WebsitesOrderJsonServiceOffersItem::setIntroCost(int  intro_cost)
{
	this->intro_cost = intro_cost;
}

int
WebsitesOrderJsonServiceOffersItem::getRenewalCost()
{
	return renewal_cost;
}

void
WebsitesOrderJsonServiceOffersItem::setRenewalCost(int  renewal_cost)
{
	this->renewal_cost = renewal_cost;
}

std::string
WebsitesOrderJsonServiceOffersItem::getIntroFrequency()
{
	return intro_frequency;
}

void
WebsitesOrderJsonServiceOffersItem::setIntroFrequency(std::string  intro_frequency)
{
	this->intro_frequency = intro_frequency;
}

std::string
WebsitesOrderJsonServiceOffersItem::getRenewalFrequency()
{
	return renewal_frequency;
}

void
WebsitesOrderJsonServiceOffersItem::setRenewalFrequency(std::string  renewal_frequency)
{
	this->renewal_frequency = renewal_frequency;
}

std::string
WebsitesOrderJsonServiceOffersItem::getAllowCoupon()
{
	return allow_coupon;
}

void
WebsitesOrderJsonServiceOffersItem::setAllowCoupon(std::string  allow_coupon)
{
	this->allow_coupon = allow_coupon;
}

std::string
WebsitesOrderJsonServiceOffersItem::getServiceModule()
{
	return service_module;
}

void
WebsitesOrderJsonServiceOffersItem::setServiceModule(std::string  service_module)
{
	this->service_module = service_module;
}

std::string
WebsitesOrderJsonServiceOffersItem::getCreatedAt()
{
	return created_at;
}

void
WebsitesOrderJsonServiceOffersItem::setCreatedAt(std::string  created_at)
{
	this->created_at = created_at;
}

std::string
WebsitesOrderJsonServiceOffersItem::getUpdatedAt()
{
	return updated_at;
}

void
WebsitesOrderJsonServiceOffersItem::setUpdatedAt(std::string  updated_at)
{
	this->updated_at = updated_at;
}

std::string
WebsitesOrderJsonServiceOffersItem::getDeletedAt()
{
	return deleted_at;
}

void
WebsitesOrderJsonServiceOffersItem::setDeletedAt(std::string  deleted_at)
{
	this->deleted_at = deleted_at;
}

std::string
WebsitesOrderJsonServiceOffersItem::getCurrencySymbol()
{
	return currencySymbol;
}

void
WebsitesOrderJsonServiceOffersItem::setCurrencySymbol(std::string  currencySymbol)
{
	this->currencySymbol = currencySymbol;
}


