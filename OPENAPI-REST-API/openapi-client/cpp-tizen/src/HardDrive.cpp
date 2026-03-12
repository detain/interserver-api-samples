#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "HardDrive.h"

using namespace std;
using namespace Tizen::ArtikCloud;

HardDrive::HardDrive()
{
	//__init();
}

HardDrive::~HardDrive()
{
	//__cleanup();
}

void
HardDrive::__init()
{
	//id = int(0);
	//short_desc = std::string();
	//size = std::string();
	//drive_type = std::string();
	//monthly_price = double(0);
	//monthly_price_display = std::string();
}

void
HardDrive::__cleanup()
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
	//if(size != NULL) {
	//
	//delete size;
	//size = NULL;
	//}
	//if(drive_type != NULL) {
	//
	//delete drive_type;
	//drive_type = NULL;
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
HardDrive::fromJson(char* jsonStr)
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
	const gchar *sizeKey = "size";
	node = json_object_get_member(pJsonObject, sizeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&size, node, "std::string", "");
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

HardDrive::HardDrive(char* json)
{
	this->fromJson(json);
}

char*
HardDrive::toJson()
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
		std::string obj = getSize();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *sizeKey = "size";
	json_object_set_member(pJsonObject, sizeKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getDriveType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *drive_typeKey = "drive_type";
	json_object_set_member(pJsonObject, drive_typeKey, node);
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
HardDrive::getId()
{
	return id;
}

void
HardDrive::setId(int  id)
{
	this->id = id;
}

std::string
HardDrive::getShortDesc()
{
	return short_desc;
}

void
HardDrive::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

std::string
HardDrive::getSize()
{
	return size;
}

void
HardDrive::setSize(std::string  size)
{
	this->size = size;
}

std::string
HardDrive::getDriveType()
{
	return drive_type;
}

void
HardDrive::setDriveType(std::string  drive_type)
{
	this->drive_type = drive_type;
}

long long
HardDrive::getMonthlyPrice()
{
	return monthly_price;
}

void
HardDrive::setMonthlyPrice(long long  monthly_price)
{
	this->monthly_price = monthly_price;
}

std::string
HardDrive::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
HardDrive::setMonthlyPriceDisplay(std::string  monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}


