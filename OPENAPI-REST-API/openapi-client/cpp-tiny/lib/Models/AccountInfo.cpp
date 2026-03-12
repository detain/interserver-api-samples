

#include "AccountInfo.h"

using namespace Tiny;

AccountInfo::AccountInfo()
{
	custid = std::string();
	ima = std::string();
	data = AccountInfoData();
	ip = std::string();
	oauthproviders = AccountInfo_oauthproviders();
	oauthconfig = AccountInfoOauthConfig();
	oauthadapters = std::list<std::string>();
	limits = AccountInfoLimits();
	language = std::string();
	countryCurrencies = AccountInfoCountryCurrencies();
	enableLocales = bool(false);
	enableCurrencies = bool(false);
	gravatar = std::string();
}

AccountInfo::AccountInfo(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfo::~AccountInfo()
{

}

void
AccountInfo::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *custidKey = "custid";

    if(object.has_key(custidKey))
    {
        bourne::json value = object[custidKey];



        jsonToValue(&custid, value, "std::string");


    }

    const char *imaKey = "ima";

    if(object.has_key(imaKey))
    {
        bourne::json value = object[imaKey];



        jsonToValue(&ima, value, "std::string");


    }

    const char *dataKey = "data";

    if(object.has_key(dataKey))
    {
        bourne::json value = object[dataKey];




        AccountInfoData* obj = &data;
		obj->fromJson(value.dump());

    }

    const char *ipKey = "ip";

    if(object.has_key(ipKey))
    {
        bourne::json value = object[ipKey];



        jsonToValue(&ip, value, "std::string");


    }

    const char *oauthprovidersKey = "oauthproviders";

    if(object.has_key(oauthprovidersKey))
    {
        bourne::json value = object[oauthprovidersKey];




        AccountInfo_oauthproviders* obj = &oauthproviders;
		obj->fromJson(value.dump());

    }

    const char *oauthconfigKey = "oauthconfig";

    if(object.has_key(oauthconfigKey))
    {
        bourne::json value = object[oauthconfigKey];




        AccountInfoOauthConfig* obj = &oauthconfig;
		obj->fromJson(value.dump());

    }

    const char *oauthadaptersKey = "oauthadapters";

    if(object.has_key(oauthadaptersKey))
    {
        bourne::json value = object[oauthadaptersKey];


        std::list<std::string> oauthadapters_list;
        std::string element;
        for(auto& var : value.array_range())
        {

            jsonToValue(&element, var, "std::string");


            oauthadapters_list.push_back(element);
        }
        oauthadapters = oauthadapters_list;


    }

    const char *limitsKey = "limits";

    if(object.has_key(limitsKey))
    {
        bourne::json value = object[limitsKey];




        AccountInfoLimits* obj = &limits;
		obj->fromJson(value.dump());

    }

    const char *languageKey = "language";

    if(object.has_key(languageKey))
    {
        bourne::json value = object[languageKey];



        jsonToValue(&language, value, "std::string");


    }

    const char *countryCurrenciesKey = "countryCurrencies";

    if(object.has_key(countryCurrenciesKey))
    {
        bourne::json value = object[countryCurrenciesKey];




        AccountInfoCountryCurrencies* obj = &countryCurrencies;
		obj->fromJson(value.dump());

    }

    const char *enableLocalesKey = "enableLocales";

    if(object.has_key(enableLocalesKey))
    {
        bourne::json value = object[enableLocalesKey];



        jsonToValue(&enableLocales, value, "bool");


    }

    const char *enableCurrenciesKey = "enableCurrencies";

    if(object.has_key(enableCurrenciesKey))
    {
        bourne::json value = object[enableCurrenciesKey];



        jsonToValue(&enableCurrencies, value, "bool");


    }

    const char *gravatarKey = "gravatar";

    if(object.has_key(gravatarKey))
    {
        bourne::json value = object[gravatarKey];



        jsonToValue(&gravatar, value, "std::string");


    }


}

bourne::json
AccountInfo::toJson()
{
    bourne::json object = bourne::json::object();





    object["custid"] = getCustid();






    object["ima"] = getIma();







	object["data"] = getData().toJson();





    object["ip"] = getIp();







	object["oauthproviders"] = getOauthproviders().toJson();






	object["oauthconfig"] = getOauthconfig().toJson();




    std::list<std::string> oauthadapters_list = getOauthadapters();
    bourne::json oauthadapters_arr = bourne::json::array();

    for(auto& var : oauthadapters_list)
    {
        oauthadapters_arr.append(var);
    }
    object["oauthadapters"] = oauthadapters_arr;










	object["limits"] = getLimits().toJson();





    object["language"] = getLanguage();







	object["countryCurrencies"] = getCountryCurrencies().toJson();





    object["enableLocales"] = isEnableLocales();






    object["enableCurrencies"] = isEnableCurrencies();






    object["gravatar"] = getGravatar();



    return object;

}

std::string
AccountInfo::getCustid()
{
	return custid;
}

void
AccountInfo::setCustid(std::string custid)
{
	this->custid = custid;
}

std::string
AccountInfo::getIma()
{
	return ima;
}

void
AccountInfo::setIma(std::string ima)
{
	this->ima = ima;
}

AccountInfoData
AccountInfo::getData()
{
	return data;
}

void
AccountInfo::setData(AccountInfoData data)
{
	this->data = data;
}

std::string
AccountInfo::getIp()
{
	return ip;
}

void
AccountInfo::setIp(std::string ip)
{
	this->ip = ip;
}

AccountInfo_oauthproviders
AccountInfo::getOauthproviders()
{
	return oauthproviders;
}

void
AccountInfo::setOauthproviders(AccountInfo_oauthproviders oauthproviders)
{
	this->oauthproviders = oauthproviders;
}

AccountInfoOauthConfig
AccountInfo::getOauthconfig()
{
	return oauthconfig;
}

void
AccountInfo::setOauthconfig(AccountInfoOauthConfig oauthconfig)
{
	this->oauthconfig = oauthconfig;
}

std::list<std::string>
AccountInfo::getOauthadapters()
{
	return oauthadapters;
}

void
AccountInfo::setOauthadapters(std::list<std::string> oauthadapters)
{
	this->oauthadapters = oauthadapters;
}

AccountInfoLimits
AccountInfo::getLimits()
{
	return limits;
}

void
AccountInfo::setLimits(AccountInfoLimits limits)
{
	this->limits = limits;
}

std::string
AccountInfo::getLanguage()
{
	return language;
}

void
AccountInfo::setLanguage(std::string language)
{
	this->language = language;
}

AccountInfoCountryCurrencies&lt;std::string, std::list&gt;
AccountInfo::getCountryCurrencies()
{
	return countryCurrencies;
}

void
AccountInfo::setCountryCurrencies(AccountInfoCountryCurrencies&lt;std::string, std::list&gt; countryCurrencies)
{
	this->countryCurrencies = countryCurrencies;
}

bool
AccountInfo::isEnableLocales()
{
	return enableLocales;
}

void
AccountInfo::setEnableLocales(bool enableLocales)
{
	this->enableLocales = enableLocales;
}

bool
AccountInfo::isEnableCurrencies()
{
	return enableCurrencies;
}

void
AccountInfo::setEnableCurrencies(bool enableCurrencies)
{
	this->enableCurrencies = enableCurrencies;
}

std::string
AccountInfo::getGravatar()
{
	return gravatar;
}

void
AccountInfo::setGravatar(std::string gravatar)
{
	this->gravatar = gravatar;
}



