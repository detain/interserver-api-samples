#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AffiliateDockSetup.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AffiliateDockSetup::AffiliateDockSetup()
{
	//__init();
}

AffiliateDockSetup::~AffiliateDockSetup()
{
	//__cleanup();
}

void
AffiliateDockSetup::__init()
{
	//affiliate_dock_title = std::string();
	//affiliate_dock_description = std::string();
	//referrer_coupon = std::string();
}

void
AffiliateDockSetup::__cleanup()
{
	//if(affiliate_dock_title != NULL) {
	//
	//delete affiliate_dock_title;
	//affiliate_dock_title = NULL;
	//}
	//if(affiliate_dock_description != NULL) {
	//
	//delete affiliate_dock_description;
	//affiliate_dock_description = NULL;
	//}
	//if(referrer_coupon != NULL) {
	//
	//delete referrer_coupon;
	//referrer_coupon = NULL;
	//}
	//
}

void
AffiliateDockSetup::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *affiliate_dock_titleKey = "affiliate_dock_title";
	node = json_object_get_member(pJsonObject, affiliate_dock_titleKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&affiliate_dock_title, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *affiliate_dock_descriptionKey = "affiliate_dock_description";
	node = json_object_get_member(pJsonObject, affiliate_dock_descriptionKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&affiliate_dock_description, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *referrer_couponKey = "referrer_coupon";
	node = json_object_get_member(pJsonObject, referrer_couponKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&referrer_coupon, node, "std::string", "");
		} else {
			
		}
	}
}

AffiliateDockSetup::AffiliateDockSetup(char* json)
{
	this->fromJson(json);
}

char*
AffiliateDockSetup::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getAffiliateDockTitle();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *affiliate_dock_titleKey = "affiliate_dock_title";
	json_object_set_member(pJsonObject, affiliate_dock_titleKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAffiliateDockDescription();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *affiliate_dock_descriptionKey = "affiliate_dock_description";
	json_object_set_member(pJsonObject, affiliate_dock_descriptionKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getReferrerCoupon();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *referrer_couponKey = "referrer_coupon";
	json_object_set_member(pJsonObject, referrer_couponKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AffiliateDockSetup::getAffiliateDockTitle()
{
	return affiliate_dock_title;
}

void
AffiliateDockSetup::setAffiliateDockTitle(std::string  affiliate_dock_title)
{
	this->affiliate_dock_title = affiliate_dock_title;
}

std::string
AffiliateDockSetup::getAffiliateDockDescription()
{
	return affiliate_dock_description;
}

void
AffiliateDockSetup::setAffiliateDockDescription(std::string  affiliate_dock_description)
{
	this->affiliate_dock_description = affiliate_dock_description;
}

std::string
AffiliateDockSetup::getReferrerCoupon()
{
	return referrer_coupon;
}

void
AffiliateDockSetup::setReferrerCoupon(std::string  referrer_coupon)
{
	this->referrer_coupon = referrer_coupon;
}


