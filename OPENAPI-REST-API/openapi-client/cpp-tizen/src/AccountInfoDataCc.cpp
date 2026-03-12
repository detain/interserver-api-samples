#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfoDataCc.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfoDataCc::AccountInfoDataCc()
{
	//__init();
}

AccountInfoDataCc::~AccountInfoDataCc()
{
	//__cleanup();
}

void
AccountInfoDataCc::__init()
{
	//cc = std::string();
	//cc_exp = std::string();
	//name = std::string();
	//address = std::string();
	//city = std::string();
	//state = std::string();
	//zip = std::string();
	//country = std::string();
	//maxmind_riskscore = std::string();
	//maxmind = new AccountInfoMaxMindResponse();
	//verified = bool(false);
}

void
AccountInfoDataCc::__cleanup()
{
	//if(cc != NULL) {
	//
	//delete cc;
	//cc = NULL;
	//}
	//if(cc_exp != NULL) {
	//
	//delete cc_exp;
	//cc_exp = NULL;
	//}
	//if(name != NULL) {
	//
	//delete name;
	//name = NULL;
	//}
	//if(address != NULL) {
	//
	//delete address;
	//address = NULL;
	//}
	//if(city != NULL) {
	//
	//delete city;
	//city = NULL;
	//}
	//if(state != NULL) {
	//
	//delete state;
	//state = NULL;
	//}
	//if(zip != NULL) {
	//
	//delete zip;
	//zip = NULL;
	//}
	//if(country != NULL) {
	//
	//delete country;
	//country = NULL;
	//}
	//if(maxmind_riskscore != NULL) {
	//
	//delete maxmind_riskscore;
	//maxmind_riskscore = NULL;
	//}
	//if(maxmind != NULL) {
	//
	//delete maxmind;
	//maxmind = NULL;
	//}
	//if(verified != NULL) {
	//
	//delete verified;
	//verified = NULL;
	//}
	//
}

void
AccountInfoDataCc::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *ccKey = "cc";
	node = json_object_get_member(pJsonObject, ccKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cc, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cc_expKey = "cc_exp";
	node = json_object_get_member(pJsonObject, cc_expKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&cc_exp, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *nameKey = "name";
	node = json_object_get_member(pJsonObject, nameKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&name, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *addressKey = "address";
	node = json_object_get_member(pJsonObject, addressKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&address, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *cityKey = "city";
	node = json_object_get_member(pJsonObject, cityKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&city, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *stateKey = "state";
	node = json_object_get_member(pJsonObject, stateKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&state, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *zipKey = "zip";
	node = json_object_get_member(pJsonObject, zipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&zip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *countryKey = "country";
	node = json_object_get_member(pJsonObject, countryKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&country, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *maxmind_riskscoreKey = "maxmind_riskscore";
	node = json_object_get_member(pJsonObject, maxmind_riskscoreKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&maxmind_riskscore, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *maxmindKey = "maxmind";
	node = json_object_get_member(pJsonObject, maxmindKey);
	if (node !=NULL) {
	

		if (isprimitive("AccountInfoMaxMindResponse")) {
			jsonToValue(&maxmind, node, "AccountInfoMaxMindResponse", "AccountInfoMaxMindResponse");
		} else {
			
			AccountInfoMaxMindResponse* obj = static_cast<AccountInfoMaxMindResponse*> (&maxmind);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *verifiedKey = "verified";
	node = json_object_get_member(pJsonObject, verifiedKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&verified, node, "bool", "");
		} else {
			
		}
	}
}

AccountInfoDataCc::AccountInfoDataCc(char* json)
{
	this->fromJson(json);
}

char*
AccountInfoDataCc::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCc();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ccKey = "cc";
	json_object_set_member(pJsonObject, ccKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCcExp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cc_expKey = "cc_exp";
	json_object_set_member(pJsonObject, cc_expKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getName();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *nameKey = "name";
	json_object_set_member(pJsonObject, nameKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getAddress();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *addressKey = "address";
	json_object_set_member(pJsonObject, addressKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCity();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *cityKey = "city";
	json_object_set_member(pJsonObject, cityKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getState();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *stateKey = "state";
	json_object_set_member(pJsonObject, stateKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getZip();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *zipKey = "zip";
	json_object_set_member(pJsonObject, zipKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getCountry();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *countryKey = "country";
	json_object_set_member(pJsonObject, countryKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getMaxmindRiskscore();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *maxmind_riskscoreKey = "maxmind_riskscore";
	json_object_set_member(pJsonObject, maxmind_riskscoreKey, node);
	if (isprimitive("AccountInfoMaxMindResponse")) {
		AccountInfoMaxMindResponse obj = getMaxmind();
		node = converttoJson(&obj, "AccountInfoMaxMindResponse", "");
	}
	else {
		
		AccountInfoMaxMindResponse obj = static_cast<AccountInfoMaxMindResponse> (getMaxmind());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *maxmindKey = "maxmind";
	json_object_set_member(pJsonObject, maxmindKey, node);
	if (isprimitive("bool")) {
		bool obj = getVerified();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *verifiedKey = "verified";
	json_object_set_member(pJsonObject, verifiedKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AccountInfoDataCc::getCc()
{
	return cc;
}

void
AccountInfoDataCc::setCc(std::string  cc)
{
	this->cc = cc;
}

std::string
AccountInfoDataCc::getCcExp()
{
	return cc_exp;
}

void
AccountInfoDataCc::setCcExp(std::string  cc_exp)
{
	this->cc_exp = cc_exp;
}

std::string
AccountInfoDataCc::getName()
{
	return name;
}

void
AccountInfoDataCc::setName(std::string  name)
{
	this->name = name;
}

std::string
AccountInfoDataCc::getAddress()
{
	return address;
}

void
AccountInfoDataCc::setAddress(std::string  address)
{
	this->address = address;
}

std::string
AccountInfoDataCc::getCity()
{
	return city;
}

void
AccountInfoDataCc::setCity(std::string  city)
{
	this->city = city;
}

std::string
AccountInfoDataCc::getState()
{
	return state;
}

void
AccountInfoDataCc::setState(std::string  state)
{
	this->state = state;
}

std::string
AccountInfoDataCc::getZip()
{
	return zip;
}

void
AccountInfoDataCc::setZip(std::string  zip)
{
	this->zip = zip;
}

std::string
AccountInfoDataCc::getCountry()
{
	return country;
}

void
AccountInfoDataCc::setCountry(std::string  country)
{
	this->country = country;
}

std::string
AccountInfoDataCc::getMaxmindRiskscore()
{
	return maxmind_riskscore;
}

void
AccountInfoDataCc::setMaxmindRiskscore(std::string  maxmind_riskscore)
{
	this->maxmind_riskscore = maxmind_riskscore;
}

AccountInfoMaxMindResponse
AccountInfoDataCc::getMaxmind()
{
	return maxmind;
}

void
AccountInfoDataCc::setMaxmind(AccountInfoMaxMindResponse  maxmind)
{
	this->maxmind = maxmind;
}

bool
AccountInfoDataCc::getVerified()
{
	return verified;
}

void
AccountInfoDataCc::setVerified(bool  verified)
{
	this->verified = verified;
}


