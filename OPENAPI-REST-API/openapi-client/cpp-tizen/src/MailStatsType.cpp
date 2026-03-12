#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "MailStatsType.h"

using namespace std;
using namespace Tizen::ArtikCloud;

MailStatsType::MailStatsType()
{
	//__init();
}

MailStatsType::~MailStatsType()
{
	//__cleanup();
}

void
MailStatsType::__init()
{
	//time = std::string();
	//usage = int(0);
	//currency = std::string();
	//currencySymbol = std::string();
	//cost = double(0);
	//received = int(0);
	//sent = int(0);
	//volume = new MailStatsType_volume();
}

void
MailStatsType::__cleanup()
{
	//if(time != NULL) {
	//
	//delete time;
	//time = NULL;
	//}
	//if(usage != NULL) {
	//
	//delete usage;
	//usage = NULL;
	//}
	//if(currency != NULL) {
	//
	//delete currency;
	//currency = NULL;
	//}
	//if(currencySymbol != NULL) {
	//
	//delete currencySymbol;
	//currencySymbol = NULL;
	//}
	//if(cost != NULL) {
	//
	//delete cost;
	//cost = NULL;
	//}
	//if(received != NULL) {
	//
	//delete received;
	//received = NULL;
	//}
	//if(sent != NULL) {
	//
	//delete sent;
	//sent = NULL;
	//}
	//if(volume != NULL) {
	//
	//delete volume;
	//volume = NULL;
	//}
	//
}

void
MailStatsType::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *timeKey = "time";
	node = json_object_get_member(pJsonObject, timeKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&time, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *usageKey = "usage";
	node = json_object_get_member(pJsonObject, usageKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&usage, node, "int", "");
		} else {
			
		}
	}
	const gchar *currencyKey = "currency";
	node = json_object_get_member(pJsonObject, currencyKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currency, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *currencySymbolKey = "currencySymbol";
	node = json_object_get_member(pJsonObject, currencySymbolKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&currencySymbol, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *costKey = "cost";
	node = json_object_get_member(pJsonObject, costKey);
	if (node !=NULL) {
	

		if (isprimitive("double")) {
			jsonToValue(&cost, node, "double", "");
		} else {
			
		}
	}
	const gchar *receivedKey = "received";
	node = json_object_get_member(pJsonObject, receivedKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&received, node, "int", "");
		} else {
			
		}
	}
	const gchar *sentKey = "sent";
	node = json_object_get_member(pJsonObject, sentKey);
	if (node !=NULL) {
	

		if (isprimitive("int")) {
			jsonToValue(&sent, node, "int", "");
		} else {
			
		}
	}
	const gchar *volumeKey = "volume";
	node = json_object_get_member(pJsonObject, volumeKey);
	if (node !=NULL) {
	

		if (isprimitive("MailStatsType_volume")) {
			jsonToValue(&volume, node, "MailStatsType_volume", "MailStatsType_volume");
		} else {
			
			MailStatsType_volume* obj = static_cast<MailStatsType_volume*> (&volume);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
}

MailStatsType::MailStatsType(char* json)
{
	this->fromJson(json);
}

char*
MailStatsType::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getTime();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *timeKey = "time";
	json_object_set_member(pJsonObject, timeKey, node);
	if (isprimitive("int")) {
		int obj = getUsage();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *usageKey = "usage";
	json_object_set_member(pJsonObject, usageKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrency();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencyKey = "currency";
	json_object_set_member(pJsonObject, currencyKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCurrencySymbol();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *currencySymbolKey = "currencySymbol";
	json_object_set_member(pJsonObject, currencySymbolKey, node);
	if (isprimitive("double")) {
		double obj = getCost();
		node = converttoJson(&obj, "double", "");
	}
	else {
		
	}
	const gchar *costKey = "cost";
	json_object_set_member(pJsonObject, costKey, node);
	if (isprimitive("int")) {
		int obj = getReceived();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *receivedKey = "received";
	json_object_set_member(pJsonObject, receivedKey, node);
	if (isprimitive("int")) {
		int obj = getSent();
		node = converttoJson(&obj, "int", "");
	}
	else {
		
	}
	const gchar *sentKey = "sent";
	json_object_set_member(pJsonObject, sentKey, node);
	if (isprimitive("MailStatsType_volume")) {
		MailStatsType_volume obj = getVolume();
		node = converttoJson(&obj, "MailStatsType_volume", "");
	}
	else {
		
		MailStatsType_volume obj = static_cast<MailStatsType_volume> (getVolume());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *volumeKey = "volume";
	json_object_set_member(pJsonObject, volumeKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
MailStatsType::getTime()
{
	return time;
}

void
MailStatsType::setTime(std::string  time)
{
	this->time = time;
}

int
MailStatsType::getUsage()
{
	return usage;
}

void
MailStatsType::setUsage(int  usage)
{
	this->usage = usage;
}

std::string
MailStatsType::getCurrency()
{
	return currency;
}

void
MailStatsType::setCurrency(std::string  currency)
{
	this->currency = currency;
}

std::string
MailStatsType::getCurrencySymbol()
{
	return currencySymbol;
}

void
MailStatsType::setCurrencySymbol(std::string  currencySymbol)
{
	this->currencySymbol = currencySymbol;
}

double
MailStatsType::getCost()
{
	return cost;
}

void
MailStatsType::setCost(double  cost)
{
	this->cost = cost;
}

int
MailStatsType::getReceived()
{
	return received;
}

void
MailStatsType::setReceived(int  received)
{
	this->received = received;
}

int
MailStatsType::getSent()
{
	return sent;
}

void
MailStatsType::setSent(int  sent)
{
	this->sent = sent;
}

MailStatsType_volume
MailStatsType::getVolume()
{
	return volume;
}

void
MailStatsType::setVolume(MailStatsType_volume  volume)
{
	this->volume = volume;
}


