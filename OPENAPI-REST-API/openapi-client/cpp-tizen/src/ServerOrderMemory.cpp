#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrderMemory.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrderMemory::ServerOrderMemory()
{
	//__init();
}

ServerOrderMemory::~ServerOrderMemory()
{
	//__cleanup();
}

void
ServerOrderMemory::__init()
{
	//id = std::string();
	//price = std::string();
	//img = std::string();
	//short_desc = std::string();
	//long_desc = std::string();
	//manu = std::string();
	//size = std::string();
	//type = std::string();
	//hidden = std::string();
	//monthly_price = int(0);
	//drive_type = std::string();
	//monthly_price_display = std::string();
}

void
ServerOrderMemory::__cleanup()
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
	//if(manu != NULL) {
	//
	//delete manu;
	//manu = NULL;
	//}
	//if(size != NULL) {
	//
	//delete size;
	//size = NULL;
	//}
	//if(type != NULL) {
	//
	//delete type;
	//type = NULL;
	//}
	//if(hidden != NULL) {
	//
	//delete hidden;
	//hidden = NULL;
	//}
	//if(monthly_price != NULL) {
	//
	//delete monthly_price;
	//monthly_price = NULL;
	//}
	//if(drive_type != NULL) {
	//
	//delete drive_type;
	//drive_type = NULL;
	//}
	//if(monthly_price_display != NULL) {
	//
	//delete monthly_price_display;
	//monthly_price_display = NULL;
	//}
	//
}

void
ServerOrderMemory::fromJson(char* jsonStr)
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
	

		if (isprimitive("std::string")) {
			jsonToValue(&price, node, "std::string", "");
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
	const gchar *manuKey = "manu";
	node = json_object_get_member(pJsonObject, manuKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&manu, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *sizeKey = "size";
	node = json_object_get_member(pJsonObject, sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&size, node, "std::string", "");
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
	const gchar *hiddenKey = "hidden";
	node = json_object_get_member(pJsonObject, hiddenKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&hidden, node, "std::string", "");
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
	const gchar *drive_typeKey = "drive_type";
	node = json_object_get_member(pJsonObject, drive_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&drive_type, node, "std::string", "");
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

ServerOrderMemory::ServerOrderMemory(char* json)
{
	this->fromJson(json);
}

char*
ServerOrderMemory::toJson()
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
		std::string obj = getPrice();
		node = converttoJson(&obj, "std::string", "");
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
		std::string obj = getManu();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *manuKey = "manu";
	json_object_set_member(pJsonObject, manuKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getSize();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sizeKey = "size";
	json_object_set_member(pJsonObject, sizeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *typeKey = "type";
	json_object_set_member(pJsonObject, typeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getHidden();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *hiddenKey = "hidden";
	json_object_set_member(pJsonObject, hiddenKey, node);
	if (isprimitive("int")) {
		int obj = getMonthlyPrice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *monthly_priceKey = "monthly_price";
	json_object_set_member(pJsonObject, monthly_priceKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDriveType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *drive_typeKey = "drive_type";
	json_object_set_member(pJsonObject, drive_typeKey, node);
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
ServerOrderMemory::getId()
{
	return id;
}

void
ServerOrderMemory::setId(std::string  id)
{
	this->id = id;
}

std::string
ServerOrderMemory::getPrice()
{
	return price;
}

void
ServerOrderMemory::setPrice(std::string  price)
{
	this->price = price;
}

std::string
ServerOrderMemory::getImg()
{
	return img;
}

void
ServerOrderMemory::setImg(std::string  img)
{
	this->img = img;
}

std::string
ServerOrderMemory::getShortDesc()
{
	return short_desc;
}

void
ServerOrderMemory::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderMemory::getLongDesc()
{
	return long_desc;
}

void
ServerOrderMemory::setLongDesc(std::string  long_desc)
{
	this->long_desc = long_desc;
}

std::string
ServerOrderMemory::getManu()
{
	return manu;
}

void
ServerOrderMemory::setManu(std::string  manu)
{
	this->manu = manu;
}

std::string
ServerOrderMemory::getSize()
{
	return size;
}

void
ServerOrderMemory::setSize(std::string  size)
{
	this->size = size;
}

std::string
ServerOrderMemory::getType()
{
	return type;
}

void
ServerOrderMemory::setType(std::string  type)
{
	this->type = type;
}

std::string
ServerOrderMemory::getHidden()
{
	return hidden;
}

void
ServerOrderMemory::setHidden(std::string  hidden)
{
	this->hidden = hidden;
}

int
ServerOrderMemory::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderMemory::setMonthlyPrice(int  monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
ServerOrderMemory::getDriveType()
{
	return drive_type;
}

void
ServerOrderMemory::setDriveType(std::string  drive_type)
{
	this->drive_type = drive_type;
}

std::string
ServerOrderMemory::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderMemory::setMonthlyPriceDisplay(std::string  monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}


