#include <map>
#include <cstdlib>
#include <glib-object.h>
#include <json-glib/json-glib.h>
#include "Helpers.h"


#include "AccountInfo.h"

using namespace std;
using namespace Tizen::ArtikCloud;

AccountInfo::AccountInfo()
{
	//__init();
}

AccountInfo::~AccountInfo()
{
	//__cleanup();
}

void
AccountInfo::__init()
{
	//custid = std::string();
	//ima = std::string();
	//data = new AccountInfoData();
	//ip = std::string();
	//oauthproviders = new AccountInfo_oauthproviders();
	//oauthconfig = new AccountInfoOauthConfig();
	//new std::list()std::list> oauthadapters;
	//limits = new AccountInfoLimits();
	//language = std::string();
	//countryCurrencies = new AccountInfoCountryCurrencies();
	//enableLocales = bool(false);
	//enableCurrencies = bool(false);
	//gravatar = std::string();
}

void
AccountInfo::__cleanup()
{
	//if(custid != NULL) {
	//
	//delete custid;
	//custid = NULL;
	//}
	//if(ima != NULL) {
	//
	//delete ima;
	//ima = NULL;
	//}
	//if(data != NULL) {
	//
	//delete data;
	//data = NULL;
	//}
	//if(ip != NULL) {
	//
	//delete ip;
	//ip = NULL;
	//}
	//if(oauthproviders != NULL) {
	//
	//delete oauthproviders;
	//oauthproviders = NULL;
	//}
	//if(oauthconfig != NULL) {
	//
	//delete oauthconfig;
	//oauthconfig = NULL;
	//}
	//if(oauthadapters != NULL) {
	//oauthadapters.RemoveAll(true);
	//delete oauthadapters;
	//oauthadapters = NULL;
	//}
	//if(limits != NULL) {
	//
	//delete limits;
	//limits = NULL;
	//}
	//if(language != NULL) {
	//
	//delete language;
	//language = NULL;
	//}
	//if(countryCurrencies != NULL) {
	//
	//delete countryCurrencies;
	//countryCurrencies = NULL;
	//}
	//if(enableLocales != NULL) {
	//
	//delete enableLocales;
	//enableLocales = NULL;
	//}
	//if(enableCurrencies != NULL) {
	//
	//delete enableCurrencies;
	//enableCurrencies = NULL;
	//}
	//if(gravatar != NULL) {
	//
	//delete gravatar;
	//gravatar = NULL;
	//}
	//
}

void
AccountInfo::fromJson(char* jsonStr)
{
	JsonObject *pJsonObject = json_node_get_object(json_from_string(jsonStr,NULL));
	JsonNode *node;
	const gchar *custidKey = "custid";
	node = json_object_get_member(pJsonObject, custidKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&custid, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *imaKey = "ima";
	node = json_object_get_member(pJsonObject, imaKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ima, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *dataKey = "data";
	node = json_object_get_member(pJsonObject, dataKey);
	if (node !=NULL) {
	

		if (isprimitive("AccountInfoData")) {
			jsonToValue(&data, node, "AccountInfoData", "AccountInfoData");
		} else {
			
			AccountInfoData* obj = static_cast<AccountInfoData*> (&data);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *ipKey = "ip";
	node = json_object_get_member(pJsonObject, ipKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&ip, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *oauthprovidersKey = "oauthproviders";
	node = json_object_get_member(pJsonObject, oauthprovidersKey);
	if (node !=NULL) {
	

		if (isprimitive("AccountInfo_oauthproviders")) {
			jsonToValue(&oauthproviders, node, "AccountInfo_oauthproviders", "AccountInfo_oauthproviders");
		} else {
			
			AccountInfo_oauthproviders* obj = static_cast<AccountInfo_oauthproviders*> (&oauthproviders);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *oauthconfigKey = "oauthconfig";
	node = json_object_get_member(pJsonObject, oauthconfigKey);
	if (node !=NULL) {
	

		if (isprimitive("AccountInfoOauthConfig")) {
			jsonToValue(&oauthconfig, node, "AccountInfoOauthConfig", "AccountInfoOauthConfig");
		} else {
			
			AccountInfoOauthConfig* obj = static_cast<AccountInfoOauthConfig*> (&oauthconfig);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *oauthadaptersKey = "oauthadapters";
	node = json_object_get_member(pJsonObject, oauthadaptersKey);
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
			oauthadapters = new_list;
		}
		
	}
	const gchar *limitsKey = "limits";
	node = json_object_get_member(pJsonObject, limitsKey);
	if (node !=NULL) {
	

		if (isprimitive("AccountInfoLimits")) {
			jsonToValue(&limits, node, "AccountInfoLimits", "AccountInfoLimits");
		} else {
			
			AccountInfoLimits* obj = static_cast<AccountInfoLimits*> (&limits);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *languageKey = "language";
	node = json_object_get_member(pJsonObject, languageKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&language, node, "std::string", "");
		} else {
			
		}
	}
	const gchar *countryCurrenciesKey = "countryCurrencies";
	node = json_object_get_member(pJsonObject, countryCurrenciesKey);
	if (node !=NULL) {
	

		if (isprimitive("AccountInfoCountryCurrencies")) {
			jsonToValue(&countryCurrencies, node, "AccountInfoCountryCurrencies", "AccountInfoCountryCurrencies");
		} else {
			
			AccountInfoCountryCurrencies* obj = static_cast<AccountInfoCountryCurrencies*> (&countryCurrencies);
			obj->fromJson(json_to_string(node, false));
			
		}
	}
	const gchar *enableLocalesKey = "enableLocales";
	node = json_object_get_member(pJsonObject, enableLocalesKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&enableLocales, node, "bool", "");
		} else {
			
		}
	}
	const gchar *enableCurrenciesKey = "enableCurrencies";
	node = json_object_get_member(pJsonObject, enableCurrenciesKey);
	if (node !=NULL) {
	

		if (isprimitive("bool")) {
			jsonToValue(&enableCurrencies, node, "bool", "");
		} else {
			
		}
	}
	const gchar *gravatarKey = "gravatar";
	node = json_object_get_member(pJsonObject, gravatarKey);
	if (node !=NULL) {
	

		if (isprimitive("std::string")) {
			jsonToValue(&gravatar, node, "std::string", "");
		} else {
			
		}
	}
}

AccountInfo::AccountInfo(char* json)
{
	this->fromJson(json);
}

char*
AccountInfo::toJson()
{
	JsonObject *pJsonObject = json_object_new();
	JsonNode *node;
	if (isprimitive("std::string")) {
		std::string obj = getCustid();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *custidKey = "custid";
	json_object_set_member(pJsonObject, custidKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIma();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *imaKey = "ima";
	json_object_set_member(pJsonObject, imaKey, node);
	if (isprimitive("AccountInfoData")) {
		AccountInfoData obj = getData();
		node = converttoJson(&obj, "AccountInfoData", "");
	}
	else {
		
		AccountInfoData obj = static_cast<AccountInfoData> (getData());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *dataKey = "data";
	json_object_set_member(pJsonObject, dataKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getIp();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *ipKey = "ip";
	json_object_set_member(pJsonObject, ipKey, node);
	if (isprimitive("AccountInfo_oauthproviders")) {
		AccountInfo_oauthproviders obj = getOauthproviders();
		node = converttoJson(&obj, "AccountInfo_oauthproviders", "");
	}
	else {
		
		AccountInfo_oauthproviders obj = static_cast<AccountInfo_oauthproviders> (getOauthproviders());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *oauthprovidersKey = "oauthproviders";
	json_object_set_member(pJsonObject, oauthprovidersKey, node);
	if (isprimitive("AccountInfoOauthConfig")) {
		AccountInfoOauthConfig obj = getOauthconfig();
		node = converttoJson(&obj, "AccountInfoOauthConfig", "");
	}
	else {
		
		AccountInfoOauthConfig obj = static_cast<AccountInfoOauthConfig> (getOauthconfig());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *oauthconfigKey = "oauthconfig";
	json_object_set_member(pJsonObject, oauthconfigKey, node);
	if (isprimitive("std::string")) {
		list<std::string> new_list = static_cast<list <std::string> > (getOauthadapters());
		node = converttoJson(&new_list, "std::string", "array");
	} else {
		node = json_node_alloc();
		list<std::string> new_list = static_cast<list <std::string> > (getOauthadapters());
		JsonArray* json_array = json_array_new();
		GError *mygerror;
		
	}


	
	const gchar *oauthadaptersKey = "oauthadapters";
	json_object_set_member(pJsonObject, oauthadaptersKey, node);
	if (isprimitive("AccountInfoLimits")) {
		AccountInfoLimits obj = getLimits();
		node = converttoJson(&obj, "AccountInfoLimits", "");
	}
	else {
		
		AccountInfoLimits obj = static_cast<AccountInfoLimits> (getLimits());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *limitsKey = "limits";
	json_object_set_member(pJsonObject, limitsKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getLanguage();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *languageKey = "language";
	json_object_set_member(pJsonObject, languageKey, node);
	if (isprimitive("AccountInfoCountryCurrencies")) {
		AccountInfoCountryCurrencies obj = getCountryCurrencies();
		node = converttoJson(&obj, "AccountInfoCountryCurrencies", "");
	}
	else {
		
		AccountInfoCountryCurrencies obj = static_cast<AccountInfoCountryCurrencies> (getCountryCurrencies());
		GError *mygerror;
		mygerror = NULL;
		node = json_from_string(obj.toJson(), &mygerror);
		
	}
	const gchar *countryCurrenciesKey = "countryCurrencies";
	json_object_set_member(pJsonObject, countryCurrenciesKey, node);
	if (isprimitive("bool")) {
		bool obj = getEnableLocales();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *enableLocalesKey = "enableLocales";
	json_object_set_member(pJsonObject, enableLocalesKey, node);
	if (isprimitive("bool")) {
		bool obj = getEnableCurrencies();
		node = converttoJson(&obj, "bool", "");
	}
	else {
		
	}
	const gchar *enableCurrenciesKey = "enableCurrencies";
	json_object_set_member(pJsonObject, enableCurrenciesKey, node);
	if (isprimitive("std::string")) {
		std::string obj = getGravatar();
		node = converttoJson(&obj, "std::string", "");
	}
	else {
		
	}
	const gchar *gravatarKey = "gravatar";
	json_object_set_member(pJsonObject, gravatarKey, node);
	node = json_node_alloc();
	json_node_init(node, JSON_NODE_OBJECT);
	json_node_take_object(node, pJsonObject);
	char * ret = json_to_string(node, false);
	json_node_free(node);
	return ret;
}

std::string
AccountInfo::getCustid()
{
	return custid;
}

void
AccountInfo::setCustid(std::string  custid)
{
	this->custid = custid;
}

std::string
AccountInfo::getIma()
{
	return ima;
}

void
AccountInfo::setIma(std::string  ima)
{
	this->ima = ima;
}

AccountInfoData
AccountInfo::getData()
{
	return data;
}

void
AccountInfo::setData(AccountInfoData  data)
{
	this->data = data;
}

std::string
AccountInfo::getIp()
{
	return ip;
}

void
AccountInfo::setIp(std::string  ip)
{
	this->ip = ip;
}

AccountInfo_oauthproviders
AccountInfo::getOauthproviders()
{
	return oauthproviders;
}

void
AccountInfo::setOauthproviders(AccountInfo_oauthproviders  oauthproviders)
{
	this->oauthproviders = oauthproviders;
}

AccountInfoOauthConfig
AccountInfo::getOauthconfig()
{
	return oauthconfig;
}

void
AccountInfo::setOauthconfig(AccountInfoOauthConfig  oauthconfig)
{
	this->oauthconfig = oauthconfig;
}

std::list<std::string>
AccountInfo::getOauthadapters()
{
	return oauthadapters;
}

void
AccountInfo::setOauthadapters(std::list <std::string> oauthadapters)
{
	this->oauthadapters = oauthadapters;
}

AccountInfoLimits
AccountInfo::getLimits()
{
	return limits;
}

void
AccountInfo::setLimits(AccountInfoLimits  limits)
{
	this->limits = limits;
}

std::string
AccountInfo::getLanguage()
{
	return language;
}

void
AccountInfo::setLanguage(std::string  language)
{
	this->language = language;
}

AccountInfoCountryCurrencies
AccountInfo::getCountryCurrencies()
{
	return countryCurrencies;
}

void
AccountInfo::setCountryCurrencies(AccountInfoCountryCurrencies  countryCurrencies)
{
	this->countryCurrencies = countryCurrencies;
}

bool
AccountInfo::getEnableLocales()
{
	return enableLocales;
}

void
AccountInfo::setEnableLocales(bool  enableLocales)
{
	this->enableLocales = enableLocales;
}

bool
AccountInfo::getEnableCurrencies()
{
	return enableCurrencies;
}

void
AccountInfo::setEnableCurrencies(bool  enableCurrencies)
{
	this->enableCurrencies = enableCurrencies;
}

std::string
AccountInfo::getGravatar()
{
	return gravatar;
}

void
AccountInfo::setGravatar(std::string  gravatar)
{
	this->gravatar = gravatar;
}


