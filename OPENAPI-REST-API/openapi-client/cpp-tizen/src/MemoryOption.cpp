#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MemoryOption.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MemoryOption::MemoryOption()
{
	//__init();
}

MemoryOption::~MemoryOption()
{
	//__cleanup();
}

void
MemoryOption::__init()
{
	//id = int(0);
	//short_desc = std::string();
	//monthly_price = double(0);
	//monthly_price_display = std::string();
}

void
MemoryOption::__cleanup()
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
	//if(monthly_price != NULL) {
	//
	//delete monthly_price;
	//monthly_price = NULL;
	//}
	//if(monthly_price_display != NULL) {
	//
	//delete monthly_price_display;
	//monthly_price_display = NULL;
	//}
	//
}

void
MemoryOption::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *idKey = "id";
	node = json_object_get_member(pJsonObject, idKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&id, node, "int", "");
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
	const gchar *monthly_priceKey = "monthly_price";
	node = json_object_get_member(pJsonObject, monthly_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("long long")) {
			jsonToValue(&monthly_price, node, "long long", "");
		} else {
			
			long long* obj = static_cast<long long*> (&monthly_price);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *monthly_price_displayKey = "monthly_price_display";
	node = json_object_get_member(pJsonObject, monthly_price_displayKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&monthly_price_display, node, "std::string", "");
		} else {
			
		}
	}
}

MemoryOption::MemoryOption(char* json)
{
	this->fromJson(json);
}

char*
MemoryOption::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("int")) {
		int obj = getId();
		node = converttoJson(&obj, "int", "");
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
	if (isprimitive("long long")) {
		long long obj = getMonthlyPrice();
		node = converttoJson(&obj, "long long", "");
	}
	else {
		
		long long obj = static_cast<long long> (getMonthlyPrice());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *monthly_priceKey = "monthly_price";
	json_object_set_member(pJsonObject, monthly_priceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMonthlyPriceDisplay();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *monthly_price_displayKey = "monthly_price_display";
	json_object_set_member(pJsonObject, monthly_price_displayKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
MemoryOption::getId()
{
	return id;
}

void
MemoryOption::setId(int  id)
{
	this->id = id;
}

std::string
MemoryOption::getShortDesc()
{
	return short_desc;
}

void
MemoryOption::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

long long
MemoryOption::getMonthlyPrice()
{
	return monthly_price;
}

void
MemoryOption::setMonthlyPrice(long long  monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
MemoryOption::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
MemoryOption::setMonthlyPriceDisplay(std::string  monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}


