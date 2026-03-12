#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "BuyItNowServerOrder_200_response_bandwidth_inner.h"

using namespace std;
using namespace Tizen::ArtikCloud;

BuyItNowServerOrder_200_response_bandwidth_inner::BuyItNowServerOrder_200_response_bandwidth_inner()
{
	//__init();
}

BuyItNowServerOrder_200_response_bandwidth_inner::~BuyItNowServerOrder_200_response_bandwidth_inner()
{
	//__cleanup();
}

void
BuyItNowServerOrder_200_response_bandwidth_inner::__init()
{
	//id = std::string();
	//short_desc = std::string();
	//long_desc = std::string();
	//monthly_price = std::string();
}

void
BuyItNowServerOrder_200_response_bandwidth_inner::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(short_desc != NULL) {
	//
	//delete short_desc;
	//short_desc = NULL;
	//}
	//if(long_desc != NULL) {
	//
	//delete long_desc;
	//long_desc = NULL;
	//}
	//if(monthly_price != NULL) {
	//
	//delete monthly_price;
	//monthly_price = NULL;
	//}
	//
}

void
BuyItNowServerOrder_200_response_bandwidth_inner::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&id, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *short_descKey = "short_desc";
	node = json_object_get_member(pJsonObject, short_descKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&short_desc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *long_descKey = "long_desc";
	node = json_object_get_member(pJsonObject, long_descKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&long_desc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *monthly_priceKey = "monthly_price";
	node = json_object_get_member(pJsonObject, monthly_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&monthly_price, node, "std::string", "");
		} else {
			
		}
	}
}

BuyItNowServerOrder_200_response_bandwidth_inner::BuyItNowServerOrder_200_response_bandwidth_inner(char* json)
{
	this->fromJson(json);
}

char*
BuyItNowServerOrder_200_response_bandwidth_inner::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getId();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *idKey = "id";
	json_object_set_member(pJsonObject, idKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getShortDesc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *short_descKey = "short_desc";
	json_object_set_member(pJsonObject, short_descKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLongDesc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *long_descKey = "long_desc";
	json_object_set_member(pJsonObject, long_descKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMonthlyPrice();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *monthly_priceKey = "monthly_price";
	json_object_set_member(pJsonObject, monthly_priceKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
BuyItNowServerOrder_200_response_bandwidth_inner::getId()
{
	return id;
}

void
BuyItNowServerOrder_200_response_bandwidth_inner::setId(std::string  id)
{
	this->id = id;
}

std::string
BuyItNowServerOrder_200_response_bandwidth_inner::getShortDesc()
{
	return short_desc;
}

void
BuyItNowServerOrder_200_response_bandwidth_inner::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

std::string
BuyItNowServerOrder_200_response_bandwidth_inner::getLongDesc()
{
	return long_desc;
}

void
BuyItNowServerOrder_200_response_bandwidth_inner::setLongDesc(std::string  long_desc)
{
	this->long_desc = long_desc;
}

std::string
BuyItNowServerOrder_200_response_bandwidth_inner::getMonthlyPrice()
{
	return monthly_price;
}

void
BuyItNowServerOrder_200_response_bandwidth_inner::setMonthlyPrice(std::string  monthly_price)
{
	this->monthly_price = monthly_price;
}


