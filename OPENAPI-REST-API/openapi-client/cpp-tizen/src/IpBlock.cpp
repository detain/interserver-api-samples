#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "IpBlock.h"

using namespace std;
using namespace Tizen::ArtikCloud;

IpBlock::IpBlock()
{
	//__init();
}

IpBlock::~IpBlock()
{
	//__cleanup();
}

void
IpBlock::__init()
{
	//id = int(0);
	//short_desc = std::string();
	//qty = std::string();
	//monthly_price = double(0);
}

void
IpBlock::__cleanup()
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
	//if(qty != NULL) {
	//
	//delete qty;
	//qty = NULL;
	//}
	//if(monthly_price != NULL) {
	//
	//delete monthly_price;
	//monthly_price = NULL;
	//}
	//
}

void
IpBlock::fromJson(char* jsonStr)
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
	const gchar *qtyKey = "qty";
	node = json_object_get_member(pJsonObject, qtyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&qty, node, "std::string", "");
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
}

IpBlock::IpBlock(char* json)
{
	this->fromJson(json);
}

char*
IpBlock::toJson()
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
	if (isprimitive("std::string")) {
		std::string obj = getQty();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qtyKey = "qty";
	json_object_set_member(pJsonObject, qtyKey, node);
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
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

int
IpBlock::getId()
{
	return id;
}

void
IpBlock::setId(int  id)
{
	this->id = id;
}

std::string
IpBlock::getShortDesc()
{
	return short_desc;
}

void
IpBlock::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

std::string
IpBlock::getQty()
{
	return qty;
}

void
IpBlock::setQty(std::string  qty)
{
	this->qty = qty;
}

long long
IpBlock::getMonthlyPrice()
{
	return monthly_price;
}

void
IpBlock::setMonthlyPrice(long long  monthly_price)
{
	this->monthly_price = monthly_price;
}


