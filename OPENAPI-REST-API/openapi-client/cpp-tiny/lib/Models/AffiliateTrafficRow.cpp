

#include "AffiliateTrafficRow.h"

using namespace Tiny;

AffiliateTrafficRow::AffiliateTrafficRow()
{
	traffic_id = std::string();
	traffic_ip = std::string();
	traffic_url = std::string();
	traffic_affiliate = std::string();
	traffic_referrer = std::string();
	traffic_timestamp = std::string();
}

AffiliateTrafficRow::AffiliateTrafficRow(std::string jsonString)
{
	this->fromJson(jsonString);
}

AffiliateTrafficRow::~AffiliateTrafficRow()
{

}

void
AffiliateTrafficRow::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *traffic_idKey = "traffic_id";

    if(object.has_key(traffic_idKey))
    {
        bourne::json value = object[traffic_idKey];



        jsonToValue(&traffic_id, value, "std::string");


    }

    const char *traffic_ipKey = "traffic_ip";

    if(object.has_key(traffic_ipKey))
    {
        bourne::json value = object[traffic_ipKey];



        jsonToValue(&traffic_ip, value, "std::string");


    }

    const char *traffic_urlKey = "traffic_url";

    if(object.has_key(traffic_urlKey))
    {
        bourne::json value = object[traffic_urlKey];



        jsonToValue(&traffic_url, value, "std::string");


    }

    const char *traffic_affiliateKey = "traffic_affiliate";

    if(object.has_key(traffic_affiliateKey))
    {
        bourne::json value = object[traffic_affiliateKey];



        jsonToValue(&traffic_affiliate, value, "std::string");


    }

    const char *traffic_referrerKey = "traffic_referrer";

    if(object.has_key(traffic_referrerKey))
    {
        bourne::json value = object[traffic_referrerKey];



        jsonToValue(&traffic_referrer, value, "std::string");


    }

    const char *traffic_timestampKey = "traffic_timestamp";

    if(object.has_key(traffic_timestampKey))
    {
        bourne::json value = object[traffic_timestampKey];



        jsonToValue(&traffic_timestamp, value, "std::string");


    }


}

bourne::json
AffiliateTrafficRow::toJson()
{
    bourne::json object = bourne::json::object();





    object["traffic_id"] = getTrafficId();






    object["traffic_ip"] = getTrafficIp();






    object["traffic_url"] = getTrafficUrl();






    object["traffic_affiliate"] = getTrafficAffiliate();






    object["traffic_referrer"] = getTrafficReferrer();






    object["traffic_timestamp"] = getTrafficTimestamp();



    return object;

}

std::string
AffiliateTrafficRow::getTrafficId()
{
	return traffic_id;
}

void
AffiliateTrafficRow::setTrafficId(std::string traffic_id)
{
	this->traffic_id = traffic_id;
}

std::string
AffiliateTrafficRow::getTrafficIp()
{
	return traffic_ip;
}

void
AffiliateTrafficRow::setTrafficIp(std::string traffic_ip)
{
	this->traffic_ip = traffic_ip;
}

std::string
AffiliateTrafficRow::getTrafficUrl()
{
	return traffic_url;
}

void
AffiliateTrafficRow::setTrafficUrl(std::string traffic_url)
{
	this->traffic_url = traffic_url;
}

std::string
AffiliateTrafficRow::getTrafficAffiliate()
{
	return traffic_affiliate;
}

void
AffiliateTrafficRow::setTrafficAffiliate(std::string traffic_affiliate)
{
	this->traffic_affiliate = traffic_affiliate;
}

std::string
AffiliateTrafficRow::getTrafficReferrer()
{
	return traffic_referrer;
}

void
AffiliateTrafficRow::setTrafficReferrer(std::string traffic_referrer)
{
	this->traffic_referrer = traffic_referrer;
}

std::string
AffiliateTrafficRow::getTrafficTimestamp()
{
	return traffic_timestamp;
}

void
AffiliateTrafficRow::setTrafficTimestamp(std::string traffic_timestamp)
{
	this->traffic_timestamp = traffic_timestamp;
}



