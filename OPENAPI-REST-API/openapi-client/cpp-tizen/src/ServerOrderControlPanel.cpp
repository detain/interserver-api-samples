#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "ServerOrderControlPanel.h"

using namespace std;
using namespace Tizen::ArtikCloud;

ServerOrderControlPanel::ServerOrderControlPanel()
{
	//__init();
}

ServerOrderControlPanel::~ServerOrderControlPanel()
{
	//__cleanup();
}

void
ServerOrderControlPanel::__init()
{
	//id = std::string();
	//price = int(0);
	//img = std::string();
	//short_desc = std::string();
	//long_desc = std::string();
	//os_type = std::string();
	//monthly_price = int(0);
	//new std::list()std::list> types;
	//price_display = std::string();
	//monthly_price_display = std::string();
}

void
ServerOrderControlPanel::__cleanup()
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
	//if(os_type != NULL) {
	//
	//delete os_type;
	//os_type = NULL;
	//}
	//if(monthly_price != NULL) {
	//
	//delete monthly_price;
	//monthly_price = NULL;
	//}
	//if(types != NULL) {
	//types.RemoveAll(true);
	//delete types;
	//types = NULL;
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
ServerOrderControlPanel::fromJson(char* jsonStr)
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
	const gchar *os_typeKey = "os_type";
	node = json_object_get_member(pJsonObject, os_typeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&os_type, node, "std::string", "");
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
	const gchar *typesKey = "types";
	node = json_object_get_member(pJsonObject, typesKey);
	if (node !=NULL) {
	
		{
			JsonArray* arr = json_node_get_array(node);
			JsonNode*  temp_json;
			list<std::string> new_list;
			std::string inst;
			for (guint i=0;i<json_array_get_length(arr);i++) {
				temp_json = json_array_get_element(arr,i);
				if (isprimitive("std::string")) {
					jsonToValue(&inst, temp_json, "std::string", "");
				} else {
					
				}
				new_list.push_back(inst);
			}
			types = new_list;
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

ServerOrderControlPanel::ServerOrderControlPanel(char* json)
{
	this->fromJson(json);
}

char*
ServerOrderControlPanel::toJson()
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
		std::string obj = getOsType();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *os_typeKey = "os_type";
	json_object_set_member(pJsonObject, os_typeKey, node);
	if (isprimitive("int")) {
		int obj = getMonthlyPrice();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *monthly_priceKey = "monthly_price";
	json_object_set_member(pJsonObject, monthly_priceKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getTypes());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getTypes());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *typesKey = "types";
	json_object_set_member(pJsonObject, typesKey, node);
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
ServerOrderControlPanel::getId()
{
	return id;
}

void
ServerOrderControlPanel::setId(std::string  id)
{
	this->id = id;
}

int
ServerOrderControlPanel::getPrice()
{
	return price;
}

void
ServerOrderControlPanel::setPrice(int  price)
{
	this->price = price;
}

std::string
ServerOrderControlPanel::getImg()
{
	return img;
}

void
ServerOrderControlPanel::setImg(std::string  img)
{
	this->img = img;
}

std::string
ServerOrderControlPanel::getShortDesc()
{
	return short_desc;
}

void
ServerOrderControlPanel::setShortDesc(std::string  short_desc)
{
	this->short_desc = short_desc;
}

std::string
ServerOrderControlPanel::getLongDesc()
{
	return long_desc;
}

void
ServerOrderControlPanel::setLongDesc(std::string  long_desc)
{
	this->long_desc = long_desc;
}

std::string
ServerOrderControlPanel::getOsType()
{
	return os_type;
}

void
ServerOrderControlPanel::setOsType(std::string  os_type)
{
	this->os_type = os_type;
}

int
ServerOrderControlPanel::getMonthlyPrice()
{
	return monthly_price;
}

void
ServerOrderControlPanel::setMonthlyPrice(int  monthly_price)
{
	this->monthly_price = monthly_price;
}

std::list<std::string>
ServerOrderControlPanel::getTypes()
{
	return types;
}

void
ServerOrderControlPanel::setTypes(std::list <std::string> types)
{
	this->types = types;
}

std::string
ServerOrderControlPanel::getPriceDisplay()
{
	return price_display;
}

void
ServerOrderControlPanel::setPriceDisplay(std::string  price_display)
{
	this->price_display = price_display;
}

std::string
ServerOrderControlPanel::getMonthlyPriceDisplay()
{
	return monthly_price_display;
}

void
ServerOrderControlPanel::setMonthlyPriceDisplay(std::string  monthly_price_display)
{
	this->monthly_price_display = monthly_price_display;
}


