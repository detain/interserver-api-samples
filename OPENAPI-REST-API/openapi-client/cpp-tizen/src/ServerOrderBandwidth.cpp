#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrderBandwidth.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrderBandwidth::ServerOrderBandwidth()
{
	//__init();
}

ServerOrderBandwidth::~ServerOrderBandwidth()
{
	//__cleanup();
}

void
ServerOrderBandwidth::__init()
{
	//id = std::string();
	//price = int(0);
	//img = std::string();
	//short_desc = std::string();
	//long_desc = std::string();
	//type = std::string();
	//qty = std::string();
	//active = std::string();
	//monthly_price = int(0);
	//price_display = std::string();
	//monthly_price_display = std::string();
}

void
ServerOrderBandwidth::__cleanup()
{
	//if(id != NULL) {
	//
	//delete id;
	//id = NULL;
	//}
	//if(price != NULL) {
	//
	//delete price;
	//price = NULL;
	//}
	//if(img != NULL) {
	//
	//delete img;
	//img = NULL;
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
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(qty != NULL) {
	//
	//delete qty;
	//qty = NULL;
	//}
	//if(active != NULL) {
	//
	//delete active;
	//active = NULL;
	//}
	//if(monthly_price != NULL) {
	//
	//delete monthly_price;
	//monthly_price = NULL;
	//}
	//if(price_display != NULL) {
	//
	//delete price_display;
	//price_display = NULL;
	//}
	//if(monthly_price_display != NULL) {
	//
	//delete monthly_price_display;
	//monthly_price_display = NULL;
	//}
	//
}

void
ServerOrderBandwidth::fromJson(char* jsonStr)
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
	const gchar *priceKey = "price";
	node = json_object_get_member(pJsonObject, priceKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&price, node, "int", "");
		} else {
			
		}
	}
	const gchar *imgKey = "img";
	node = json_object_get_member(pJsonObject, imgKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&img, node, "std::string", "");
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
	const gchar *typeKey = "type";
	node = json_object_get_member(pJsonObject, typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&type, node, "std::string", "");
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
	const gchar *activeKey = "active";
	node = json_object_get_member(pJsonObject, activeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&active, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *monthly_priceKey = "monthly_price";
	node = json_object_get_member(pJsonObject, monthly_priceKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&monthly_price, node, "int", "");
		} else {
			
		}
	}
	const gchar *price_displayKey = "price_display";
	node = json_object_get_member(pJsonObject, price_displayKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&price_display, node, "std::string", "");
		} else {
			
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

ServerOrderBandwidth::ServerOrderBandwidth(char* json)
{
	this->fromJson(json);
}

char*
ServerOrderBandwidth::toJson()
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
	if (isprimitive("int")) {
		int obj = getPrice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *priceKey = "price";
	json_object_set_member(pJsonObject, priceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getImg();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *imgKey = "img";
	json_object_set_member(pJsonObject, imgKey, node);
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
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getQty();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qtyKey = "qty";
	json_object_set_member(pJsonObject, qtyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getActive();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *activeKey = "active";
	json_object_set_member(pJsonObject, activeKey, node);
	if (isprimitive("int")) {
		int obj = getMonthlyPrice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *monthly_priceKey = "monthly_price";
	json_object_set_member(pJsonObject, monthly_priceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getPriceDisplay();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *price_displayKey = "price_display";
	json_object_set_member(pJsonObject, price_displayKey, node);
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

std::string
ServerOrderBandwidth::getId()
{
	return id;
}

void
ServerOrderBandwidth::setId(std::string  id)
{
	this->id = id;
}

int
ServerOrderBandwidth::getPrice()
{
	return price;
}

void
ServerOrderBandwidth::setPrice(int  price)
{
	this->price = price;
}

std::string
ServerOrderBandwidth::getImg()
{
	return img;
}

void
ServerOrderBandwidth::setImg(std::string  img)
{
	this->img = img;
}

std::string
ServerOrderBandwidth::getShortDesc()
{
	return short_desc;
}

void
ServerOrderBandwidth::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderBandwidth::getLongDesc()
{
	return long_desc;
}

void
ServerOrderBandwidth::setLongDesc(std::string  long_desc)
{
	this->long_desc = long_desc;
}

std::string
ServerOrderBandwidth::getType()
{
	return type;
}

void
ServerOrderBandwidth::setType(std::string  type)
{
	this->type = type;
}

std::string
ServerOrderBandwidth::getQty()
{
	return qty;
}

void
ServerOrderBandwidth::setQty(std::string  qty)
{
	this->qty = qty;
}

std::string
ServerOrderBandwidth::getActive()
{
	return active;
}

void
ServerOrderBandwidth::setActive(std::string  active)
{
	this->active = active;
}

int
ServerOrderBandwidth::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderBandwidth::setMonthlyPrice(int  monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
ServerOrderBandwidth::getPriceDisplay()
{
	return price_display;
}

void
ServerOrderBandwidth::setPriceDisplay(std::string  price_display)
{
	this->price_display = price_display;
}

std::string
ServerOrderBandwidth::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderBandwidth::setMonthlyPriceDisplay(std::string  monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}


