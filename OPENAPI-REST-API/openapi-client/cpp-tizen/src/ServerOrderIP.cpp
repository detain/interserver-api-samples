#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrderIP.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrderIP::ServerOrderIP()
{
	//__init();
}

ServerOrderIP::~ServerOrderIP()
{
	//__cleanup();
}

void
ServerOrderIP::__init()
{
	//id = std::string();
	//price = int(0);
	//img = std::string();
	//short_desc = std::string();
	//long_desc = std::string();
	//qty = std::string();
	//monthly_price = int(0);
	//price_display = std::string();
	//monthly_price_display = std::string();
}

void
ServerOrderIP::__cleanup()
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
ServerOrderIP::fromJson(char* jsonStr)
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

ServerOrderIP::ServerOrderIP(char* json)
{
	this->fromJson(json);
}

char*
ServerOrderIP::toJson()
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
		std::string obj = getQty();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *qtyKey = "qty";
	json_object_set_member(pJsonObject, qtyKey, node);
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
ServerOrderIP::getId()
{
	return id;
}

void
ServerOrderIP::setId(std::string  id)
{
	this->id = id;
}

int
ServerOrderIP::getPrice()
{
	return price;
}

void
ServerOrderIP::setPrice(int  price)
{
	this->price = price;
}

std::string
ServerOrderIP::getImg()
{
	return img;
}

void
ServerOrderIP::setImg(std::string  img)
{
	this->img = img;
}

std::string
ServerOrderIP::getShortDesc()
{
	return short_desc;
}

void
ServerOrderIP::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderIP::getLongDesc()
{
	return long_desc;
}

void
ServerOrderIP::setLongDesc(std::string  long_desc)
{
	this->long_desc = long_desc;
}

std::string
ServerOrderIP::getQty()
{
	return qty;
}

void
ServerOrderIP::setQty(std::string  qty)
{
	this->qty = qty;
}

int
ServerOrderIP::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderIP::setMonthlyPrice(int  monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
ServerOrderIP::getPriceDisplay()
{
	return price_display;
}

void
ServerOrderIP::setPriceDisplay(std::string  price_display)
{
	this->price_display = price_display;
}

std::string
ServerOrderIP::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderIP::setMonthlyPriceDisplay(std::string  monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}


