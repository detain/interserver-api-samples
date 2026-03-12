#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AffiliateTrafficRow.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AffiliateTrafficRow::AffiliateTrafficRow()
{
	//__init();
}

AffiliateTrafficRow::~AffiliateTrafficRow()
{
	//__cleanup();
}

void
AffiliateTrafficRow::__init()
{
	//traffic_id = std::string();
	//traffic_ip = std::string();
	//traffic_url = std::string();
	//traffic_affiliate = std::string();
	//traffic_referrer = std::string();
	//traffic_timestamp = std::string();
}

void
AffiliateTrafficRow::__cleanup()
{
	//if(traffic_id != NULL) {
	//
	//delete traffic_id;
	//traffic_id = NULL;
	//}
	//if(traffic_ip != NULL) {
	//
	//delete traffic_ip;
	//traffic_ip = NULL;
	//}
	//if(traffic_url != NULL) {
	//
	//delete traffic_url;
	//traffic_url = NULL;
	//}
	//if(traffic_affiliate != NULL) {
	//
	//delete traffic_affiliate;
	//traffic_affiliate = NULL;
	//}
	//if(traffic_referrer != NULL) {
	//
	//delete traffic_referrer;
	//traffic_referrer = NULL;
	//}
	//if(traffic_timestamp != NULL) {
	//
	//delete traffic_timestamp;
	//traffic_timestamp = NULL;
	//}
	//
}

void
AffiliateTrafficRow::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *traffic_idKey = "traffic_id";
	node = json_object_get_member(pJsonObject, traffic_idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&traffic_id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *traffic_ipKey = "traffic_ip";
	node = json_object_get_member(pJsonObject, traffic_ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&traffic_ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *traffic_urlKey = "traffic_url";
	node = json_object_get_member(pJsonObject, traffic_urlKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&traffic_url, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *traffic_affiliateKey = "traffic_affiliate";
	node = json_object_get_member(pJsonObject, traffic_affiliateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&traffic_affiliate, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *traffic_referrerKey = "traffic_referrer";
	node = json_object_get_member(pJsonObject, traffic_referrerKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&traffic_referrer, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *traffic_timestampKey = "traffic_timestamp";
	node = json_object_get_member(pJsonObject, traffic_timestampKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&traffic_timestamp, node, "std::string", "");
		} else {
			
		}
	}
}

AffiliateTrafficRow::AffiliateTrafficRow(char* json)
{
	this->fromJson(json);
}

char*
AffiliateTrafficRow::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getTrafficId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *traffic_idKey = "traffic_id";
	json_object_set_member(pJsonObject, traffic_idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTrafficIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *traffic_ipKey = "traffic_ip";
	json_object_set_member(pJsonObject, traffic_ipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTrafficUrl();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *traffic_urlKey = "traffic_url";
	json_object_set_member(pJsonObject, traffic_urlKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTrafficAffiliate();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *traffic_affiliateKey = "traffic_affiliate";
	json_object_set_member(pJsonObject, traffic_affiliateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTrafficReferrer();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *traffic_referrerKey = "traffic_referrer";
	json_object_set_member(pJsonObject, traffic_referrerKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getTrafficTimestamp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *traffic_timestampKey = "traffic_timestamp";
	json_object_set_member(pJsonObject, traffic_timestampKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AffiliateTrafficRow::getTrafficId()
{
	return traffic_id;
}

void
AffiliateTrafficRow::setTrafficId(std::string  traffic_id)
{
	this->traffic_id = traffic_id;
}

std::string
AffiliateTrafficRow::getTrafficIp()
{
	return traffic_ip;
}

void
AffiliateTrafficRow::setTrafficIp(std::string  traffic_ip)
{
	this->traffic_ip = traffic_ip;
}

std::string
AffiliateTrafficRow::getTrafficUrl()
{
	return traffic_url;
}

void
AffiliateTrafficRow::setTrafficUrl(std::string  traffic_url)
{
	this->traffic_url = traffic_url;
}

std::string
AffiliateTrafficRow::getTrafficAffiliate()
{
	return traffic_affiliate;
}

void
AffiliateTrafficRow::setTrafficAffiliate(std::string  traffic_affiliate)
{
	this->traffic_affiliate = traffic_affiliate;
}

std::string
AffiliateTrafficRow::getTrafficReferrer()
{
	return traffic_referrer;
}

void
AffiliateTrafficRow::setTrafficReferrer(std::string  traffic_referrer)
{
	this->traffic_referrer = traffic_referrer;
}

std::string
AffiliateTrafficRow::getTrafficTimestamp()
{
	return traffic_timestamp;
}

void
AffiliateTrafficRow::setTrafficTimestamp(std::string  traffic_timestamp)
{
	this->traffic_timestamp = traffic_timestamp;
}


