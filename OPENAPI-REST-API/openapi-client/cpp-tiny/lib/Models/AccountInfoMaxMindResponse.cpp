

#include "AccountInfoMaxMindResponse.h"

using namespace Tiny;

AccountInfoMaxMindResponse::AccountInfoMaxMindResponse()
{
	distance = std::string();
	countryMatch = std::string();
	countryCode = std::string();
	freeMail = std::string();
	anonymousProxy = std::string();
	score = std::string();
	binMatch = std::string();
	binCountry = std::string();
	err = std::string();
	proxyScore = std::string();
	ip_region = std::string();
	ip_city = std::string();
	ip_latitude = std::string();
	ip_longitude = std::string();
	binName = std::string();
	ip_isp = std::string();
	ip_org = std::string();
	binNameMatch = std::string();
	binPhoneMatch = std::string();
	binPhone = std::string();
	custPhoneInBillingLoc = std::string();
	highRiskCountry = std::string();
	queriesRemaining = std::string();
	cityPostalMatch = std::string();
	shipCityPostalMatch = std::string();
	maxmindID = std::string();
	ip_asnum = std::string();
	ip_userType = std::string();
	ip_countryConf = std::string();
	ip_regionConf = std::string();
	ip_cityConf = std::string();
	ip_postalCode = std::string();
	ip_postalConf = std::string();
	ip_accuracyRadius = std::string();
	ip_netSpeedCell = std::string();
	ip_metroCode = std::string();
	ip_areaCode = std::string();
	ip_timeZone = std::string();
	ip_regionName = std::string();
	ip_domain = std::string();
	ip_countryName = std::string();
	ip_continentCode = std::string();
	ip_corporateProxy = std::string();
	carderEmail = std::string();
	highRiskUsername = std::string();
	highRiskPassword = std::string();
	riskScore = AccountInfoMaxMindResponse_riskScore();
	isTransProxy = std::string();
	prepaid = std::string();
	minfraud_version = std::string();
	service_level = std::string();
	explanation = std::string();
	female_name = std::string();
}

AccountInfoMaxMindResponse::AccountInfoMaxMindResponse(std::string jsonString)
{
	this->fromJson(jsonString);
}

AccountInfoMaxMindResponse::~AccountInfoMaxMindResponse()
{

}

void
AccountInfoMaxMindResponse::fromJson(std::string jsonObj)
{
    bourne::json object = bourne::json::parse(jsonObj);

    const char *distanceKey = "distance";

    if(object.has_key(distanceKey))
    {
        bourne::json value = object[distanceKey];



        jsonToValue(&distance, value, "std::string");


    }

    const char *countryMatchKey = "countryMatch";

    if(object.has_key(countryMatchKey))
    {
        bourne::json value = object[countryMatchKey];



        jsonToValue(&countryMatch, value, "std::string");


    }

    const char *countryCodeKey = "countryCode";

    if(object.has_key(countryCodeKey))
    {
        bourne::json value = object[countryCodeKey];



        jsonToValue(&countryCode, value, "std::string");


    }

    const char *freeMailKey = "freeMail";

    if(object.has_key(freeMailKey))
    {
        bourne::json value = object[freeMailKey];



        jsonToValue(&freeMail, value, "std::string");


    }

    const char *anonymousProxyKey = "anonymousProxy";

    if(object.has_key(anonymousProxyKey))
    {
        bourne::json value = object[anonymousProxyKey];



        jsonToValue(&anonymousProxy, value, "std::string");


    }

    const char *scoreKey = "score";

    if(object.has_key(scoreKey))
    {
        bourne::json value = object[scoreKey];



        jsonToValue(&score, value, "std::string");


    }

    const char *binMatchKey = "binMatch";

    if(object.has_key(binMatchKey))
    {
        bourne::json value = object[binMatchKey];



        jsonToValue(&binMatch, value, "std::string");


    }

    const char *binCountryKey = "binCountry";

    if(object.has_key(binCountryKey))
    {
        bourne::json value = object[binCountryKey];



        jsonToValue(&binCountry, value, "std::string");


    }

    const char *errKey = "err";

    if(object.has_key(errKey))
    {
        bourne::json value = object[errKey];



        jsonToValue(&err, value, "std::string");


    }

    const char *proxyScoreKey = "proxyScore";

    if(object.has_key(proxyScoreKey))
    {
        bourne::json value = object[proxyScoreKey];



        jsonToValue(&proxyScore, value, "std::string");


    }

    const char *ip_regionKey = "ip_region";

    if(object.has_key(ip_regionKey))
    {
        bourne::json value = object[ip_regionKey];



        jsonToValue(&ip_region, value, "std::string");


    }

    const char *ip_cityKey = "ip_city";

    if(object.has_key(ip_cityKey))
    {
        bourne::json value = object[ip_cityKey];



        jsonToValue(&ip_city, value, "std::string");


    }

    const char *ip_latitudeKey = "ip_latitude";

    if(object.has_key(ip_latitudeKey))
    {
        bourne::json value = object[ip_latitudeKey];



        jsonToValue(&ip_latitude, value, "std::string");


    }

    const char *ip_longitudeKey = "ip_longitude";

    if(object.has_key(ip_longitudeKey))
    {
        bourne::json value = object[ip_longitudeKey];



        jsonToValue(&ip_longitude, value, "std::string");


    }

    const char *binNameKey = "binName";

    if(object.has_key(binNameKey))
    {
        bourne::json value = object[binNameKey];



        jsonToValue(&binName, value, "std::string");


    }

    const char *ip_ispKey = "ip_isp";

    if(object.has_key(ip_ispKey))
    {
        bourne::json value = object[ip_ispKey];



        jsonToValue(&ip_isp, value, "std::string");


    }

    const char *ip_orgKey = "ip_org";

    if(object.has_key(ip_orgKey))
    {
        bourne::json value = object[ip_orgKey];



        jsonToValue(&ip_org, value, "std::string");


    }

    const char *binNameMatchKey = "binNameMatch";

    if(object.has_key(binNameMatchKey))
    {
        bourne::json value = object[binNameMatchKey];



        jsonToValue(&binNameMatch, value, "std::string");


    }

    const char *binPhoneMatchKey = "binPhoneMatch";

    if(object.has_key(binPhoneMatchKey))
    {
        bourne::json value = object[binPhoneMatchKey];



        jsonToValue(&binPhoneMatch, value, "std::string");


    }

    const char *binPhoneKey = "binPhone";

    if(object.has_key(binPhoneKey))
    {
        bourne::json value = object[binPhoneKey];



        jsonToValue(&binPhone, value, "std::string");


    }

    const char *custPhoneInBillingLocKey = "custPhoneInBillingLoc";

    if(object.has_key(custPhoneInBillingLocKey))
    {
        bourne::json value = object[custPhoneInBillingLocKey];



        jsonToValue(&custPhoneInBillingLoc, value, "std::string");


    }

    const char *highRiskCountryKey = "highRiskCountry";

    if(object.has_key(highRiskCountryKey))
    {
        bourne::json value = object[highRiskCountryKey];



        jsonToValue(&highRiskCountry, value, "std::string");


    }

    const char *queriesRemainingKey = "queriesRemaining";

    if(object.has_key(queriesRemainingKey))
    {
        bourne::json value = object[queriesRemainingKey];



        jsonToValue(&queriesRemaining, value, "std::string");


    }

    const char *cityPostalMatchKey = "cityPostalMatch";

    if(object.has_key(cityPostalMatchKey))
    {
        bourne::json value = object[cityPostalMatchKey];



        jsonToValue(&cityPostalMatch, value, "std::string");


    }

    const char *shipCityPostalMatchKey = "shipCityPostalMatch";

    if(object.has_key(shipCityPostalMatchKey))
    {
        bourne::json value = object[shipCityPostalMatchKey];



        jsonToValue(&shipCityPostalMatch, value, "std::string");


    }

    const char *maxmindIDKey = "maxmindID";

    if(object.has_key(maxmindIDKey))
    {
        bourne::json value = object[maxmindIDKey];



        jsonToValue(&maxmindID, value, "std::string");


    }

    const char *ip_asnumKey = "ip_asnum";

    if(object.has_key(ip_asnumKey))
    {
        bourne::json value = object[ip_asnumKey];



        jsonToValue(&ip_asnum, value, "std::string");


    }

    const char *ip_userTypeKey = "ip_userType";

    if(object.has_key(ip_userTypeKey))
    {
        bourne::json value = object[ip_userTypeKey];



        jsonToValue(&ip_userType, value, "std::string");


    }

    const char *ip_countryConfKey = "ip_countryConf";

    if(object.has_key(ip_countryConfKey))
    {
        bourne::json value = object[ip_countryConfKey];



        jsonToValue(&ip_countryConf, value, "std::string");


    }

    const char *ip_regionConfKey = "ip_regionConf";

    if(object.has_key(ip_regionConfKey))
    {
        bourne::json value = object[ip_regionConfKey];



        jsonToValue(&ip_regionConf, value, "std::string");


    }

    const char *ip_cityConfKey = "ip_cityConf";

    if(object.has_key(ip_cityConfKey))
    {
        bourne::json value = object[ip_cityConfKey];



        jsonToValue(&ip_cityConf, value, "std::string");


    }

    const char *ip_postalCodeKey = "ip_postalCode";

    if(object.has_key(ip_postalCodeKey))
    {
        bourne::json value = object[ip_postalCodeKey];



        jsonToValue(&ip_postalCode, value, "std::string");


    }

    const char *ip_postalConfKey = "ip_postalConf";

    if(object.has_key(ip_postalConfKey))
    {
        bourne::json value = object[ip_postalConfKey];



        jsonToValue(&ip_postalConf, value, "std::string");


    }

    const char *ip_accuracyRadiusKey = "ip_accuracyRadius";

    if(object.has_key(ip_accuracyRadiusKey))
    {
        bourne::json value = object[ip_accuracyRadiusKey];



        jsonToValue(&ip_accuracyRadius, value, "std::string");


    }

    const char *ip_netSpeedCellKey = "ip_netSpeedCell";

    if(object.has_key(ip_netSpeedCellKey))
    {
        bourne::json value = object[ip_netSpeedCellKey];



        jsonToValue(&ip_netSpeedCell, value, "std::string");


    }

    const char *ip_metroCodeKey = "ip_metroCode";

    if(object.has_key(ip_metroCodeKey))
    {
        bourne::json value = object[ip_metroCodeKey];



        jsonToValue(&ip_metroCode, value, "std::string");


    }

    const char *ip_areaCodeKey = "ip_areaCode";

    if(object.has_key(ip_areaCodeKey))
    {
        bourne::json value = object[ip_areaCodeKey];



        jsonToValue(&ip_areaCode, value, "std::string");


    }

    const char *ip_timeZoneKey = "ip_timeZone";

    if(object.has_key(ip_timeZoneKey))
    {
        bourne::json value = object[ip_timeZoneKey];



        jsonToValue(&ip_timeZone, value, "std::string");


    }

    const char *ip_regionNameKey = "ip_regionName";

    if(object.has_key(ip_regionNameKey))
    {
        bourne::json value = object[ip_regionNameKey];



        jsonToValue(&ip_regionName, value, "std::string");


    }

    const char *ip_domainKey = "ip_domain";

    if(object.has_key(ip_domainKey))
    {
        bourne::json value = object[ip_domainKey];



        jsonToValue(&ip_domain, value, "std::string");


    }

    const char *ip_countryNameKey = "ip_countryName";

    if(object.has_key(ip_countryNameKey))
    {
        bourne::json value = object[ip_countryNameKey];



        jsonToValue(&ip_countryName, value, "std::string");


    }

    const char *ip_continentCodeKey = "ip_continentCode";

    if(object.has_key(ip_continentCodeKey))
    {
        bourne::json value = object[ip_continentCodeKey];



        jsonToValue(&ip_continentCode, value, "std::string");


    }

    const char *ip_corporateProxyKey = "ip_corporateProxy";

    if(object.has_key(ip_corporateProxyKey))
    {
        bourne::json value = object[ip_corporateProxyKey];



        jsonToValue(&ip_corporateProxy, value, "std::string");


    }

    const char *carderEmailKey = "carderEmail";

    if(object.has_key(carderEmailKey))
    {
        bourne::json value = object[carderEmailKey];



        jsonToValue(&carderEmail, value, "std::string");


    }

    const char *highRiskUsernameKey = "highRiskUsername";

    if(object.has_key(highRiskUsernameKey))
    {
        bourne::json value = object[highRiskUsernameKey];



        jsonToValue(&highRiskUsername, value, "std::string");


    }

    const char *highRiskPasswordKey = "highRiskPassword";

    if(object.has_key(highRiskPasswordKey))
    {
        bourne::json value = object[highRiskPasswordKey];



        jsonToValue(&highRiskPassword, value, "std::string");


    }

    const char *riskScoreKey = "riskScore";

    if(object.has_key(riskScoreKey))
    {
        bourne::json value = object[riskScoreKey];




        AccountInfoMaxMindResponse_riskScore* obj = &riskScore;
		obj->fromJson(value.dump());

    }

    const char *isTransProxyKey = "isTransProxy";

    if(object.has_key(isTransProxyKey))
    {
        bourne::json value = object[isTransProxyKey];



        jsonToValue(&isTransProxy, value, "std::string");


    }

    const char *prepaidKey = "prepaid";

    if(object.has_key(prepaidKey))
    {
        bourne::json value = object[prepaidKey];



        jsonToValue(&prepaid, value, "std::string");


    }

    const char *minfraud_versionKey = "minfraud_version";

    if(object.has_key(minfraud_versionKey))
    {
        bourne::json value = object[minfraud_versionKey];



        jsonToValue(&minfraud_version, value, "std::string");


    }

    const char *service_levelKey = "service_level";

    if(object.has_key(service_levelKey))
    {
        bourne::json value = object[service_levelKey];



        jsonToValue(&service_level, value, "std::string");


    }

    const char *explanationKey = "explanation";

    if(object.has_key(explanationKey))
    {
        bourne::json value = object[explanationKey];



        jsonToValue(&explanation, value, "std::string");


    }

    const char *female_nameKey = "female_name";

    if(object.has_key(female_nameKey))
    {
        bourne::json value = object[female_nameKey];



        jsonToValue(&female_name, value, "std::string");


    }


}

bourne::json
AccountInfoMaxMindResponse::toJson()
{
    bourne::json object = bourne::json::object();





    object["distance"] = getDistance();






    object["countryMatch"] = getCountryMatch();






    object["countryCode"] = getCountryCode();






    object["freeMail"] = getFreeMail();






    object["anonymousProxy"] = getAnonymousProxy();






    object["score"] = getScore();






    object["binMatch"] = getBinMatch();






    object["binCountry"] = getBinCountry();






    object["err"] = getErr();






    object["proxyScore"] = getProxyScore();






    object["ip_region"] = getIpRegion();






    object["ip_city"] = getIpCity();






    object["ip_latitude"] = getIpLatitude();






    object["ip_longitude"] = getIpLongitude();






    object["binName"] = getBinName();






    object["ip_isp"] = getIpIsp();






    object["ip_org"] = getIpOrg();






    object["binNameMatch"] = getBinNameMatch();






    object["binPhoneMatch"] = getBinPhoneMatch();






    object["binPhone"] = getBinPhone();






    object["custPhoneInBillingLoc"] = getCustPhoneInBillingLoc();






    object["highRiskCountry"] = getHighRiskCountry();






    object["queriesRemaining"] = getQueriesRemaining();






    object["cityPostalMatch"] = getCityPostalMatch();






    object["shipCityPostalMatch"] = getShipCityPostalMatch();






    object["maxmindID"] = getMaxmindID();






    object["ip_asnum"] = getIpAsnum();






    object["ip_userType"] = getIpUserType();






    object["ip_countryConf"] = getIpCountryConf();






    object["ip_regionConf"] = getIpRegionConf();






    object["ip_cityConf"] = getIpCityConf();






    object["ip_postalCode"] = getIpPostalCode();






    object["ip_postalConf"] = getIpPostalConf();






    object["ip_accuracyRadius"] = getIpAccuracyRadius();






    object["ip_netSpeedCell"] = getIpNetSpeedCell();






    object["ip_metroCode"] = getIpMetroCode();






    object["ip_areaCode"] = getIpAreaCode();






    object["ip_timeZone"] = getIpTimeZone();






    object["ip_regionName"] = getIpRegionName();






    object["ip_domain"] = getIpDomain();






    object["ip_countryName"] = getIpCountryName();






    object["ip_continentCode"] = getIpContinentCode();






    object["ip_corporateProxy"] = getIpCorporateProxy();






    object["carderEmail"] = getCarderEmail();






    object["highRiskUsername"] = getHighRiskUsername();






    object["highRiskPassword"] = getHighRiskPassword();







	object["riskScore"] = getRiskScore().toJson();





    object["isTransProxy"] = getIsTransProxy();






    object["prepaid"] = getPrepaid();






    object["minfraud_version"] = getMinfraudVersion();






    object["service_level"] = getServiceLevel();






    object["explanation"] = getExplanation();






    object["female_name"] = getFemaleName();



    return object;

}

std::string
AccountInfoMaxMindResponse::getDistance()
{
	return distance;
}

void
AccountInfoMaxMindResponse::setDistance(std::string distance)
{
	this->distance = distance;
}

std::string
AccountInfoMaxMindResponse::getCountryMatch()
{
	return countryMatch;
}

void
AccountInfoMaxMindResponse::setCountryMatch(std::string countryMatch)
{
	this->countryMatch = countryMatch;
}

std::string
AccountInfoMaxMindResponse::getCountryCode()
{
	return countryCode;
}

void
AccountInfoMaxMindResponse::setCountryCode(std::string countryCode)
{
	this->countryCode = countryCode;
}

std::string
AccountInfoMaxMindResponse::getFreeMail()
{
	return freeMail;
}

void
AccountInfoMaxMindResponse::setFreeMail(std::string freeMail)
{
	this->freeMail = freeMail;
}

std::string
AccountInfoMaxMindResponse::getAnonymousProxy()
{
	return anonymousProxy;
}

void
AccountInfoMaxMindResponse::setAnonymousProxy(std::string anonymousProxy)
{
	this->anonymousProxy = anonymousProxy;
}

std::string
AccountInfoMaxMindResponse::getScore()
{
	return score;
}

void
AccountInfoMaxMindResponse::setScore(std::string score)
{
	this->score = score;
}

std::string
AccountInfoMaxMindResponse::getBinMatch()
{
	return binMatch;
}

void
AccountInfoMaxMindResponse::setBinMatch(std::string binMatch)
{
	this->binMatch = binMatch;
}

std::string
AccountInfoMaxMindResponse::getBinCountry()
{
	return binCountry;
}

void
AccountInfoMaxMindResponse::setBinCountry(std::string binCountry)
{
	this->binCountry = binCountry;
}

std::string
AccountInfoMaxMindResponse::getErr()
{
	return err;
}

void
AccountInfoMaxMindResponse::setErr(std::string err)
{
	this->err = err;
}

std::string
AccountInfoMaxMindResponse::getProxyScore()
{
	return proxyScore;
}

void
AccountInfoMaxMindResponse::setProxyScore(std::string proxyScore)
{
	this->proxyScore = proxyScore;
}

std::string
AccountInfoMaxMindResponse::getIpRegion()
{
	return ip_region;
}

void
AccountInfoMaxMindResponse::setIpRegion(std::string ip_region)
{
	this->ip_region = ip_region;
}

std::string
AccountInfoMaxMindResponse::getIpCity()
{
	return ip_city;
}

void
AccountInfoMaxMindResponse::setIpCity(std::string ip_city)
{
	this->ip_city = ip_city;
}

std::string
AccountInfoMaxMindResponse::getIpLatitude()
{
	return ip_latitude;
}

void
AccountInfoMaxMindResponse::setIpLatitude(std::string ip_latitude)
{
	this->ip_latitude = ip_latitude;
}

std::string
AccountInfoMaxMindResponse::getIpLongitude()
{
	return ip_longitude;
}

void
AccountInfoMaxMindResponse::setIpLongitude(std::string ip_longitude)
{
	this->ip_longitude = ip_longitude;
}

std::string
AccountInfoMaxMindResponse::getBinName()
{
	return binName;
}

void
AccountInfoMaxMindResponse::setBinName(std::string binName)
{
	this->binName = binName;
}

std::string
AccountInfoMaxMindResponse::getIpIsp()
{
	return ip_isp;
}

void
AccountInfoMaxMindResponse::setIpIsp(std::string ip_isp)
{
	this->ip_isp = ip_isp;
}

std::string
AccountInfoMaxMindResponse::getIpOrg()
{
	return ip_org;
}

void
AccountInfoMaxMindResponse::setIpOrg(std::string ip_org)
{
	this->ip_org = ip_org;
}

std::string
AccountInfoMaxMindResponse::getBinNameMatch()
{
	return binNameMatch;
}

void
AccountInfoMaxMindResponse::setBinNameMatch(std::string binNameMatch)
{
	this->binNameMatch = binNameMatch;
}

std::string
AccountInfoMaxMindResponse::getBinPhoneMatch()
{
	return binPhoneMatch;
}

void
AccountInfoMaxMindResponse::setBinPhoneMatch(std::string binPhoneMatch)
{
	this->binPhoneMatch = binPhoneMatch;
}

std::string
AccountInfoMaxMindResponse::getBinPhone()
{
	return binPhone;
}

void
AccountInfoMaxMindResponse::setBinPhone(std::string binPhone)
{
	this->binPhone = binPhone;
}

std::string
AccountInfoMaxMindResponse::getCustPhoneInBillingLoc()
{
	return custPhoneInBillingLoc;
}

void
AccountInfoMaxMindResponse::setCustPhoneInBillingLoc(std::string custPhoneInBillingLoc)
{
	this->custPhoneInBillingLoc = custPhoneInBillingLoc;
}

std::string
AccountInfoMaxMindResponse::getHighRiskCountry()
{
	return highRiskCountry;
}

void
AccountInfoMaxMindResponse::setHighRiskCountry(std::string highRiskCountry)
{
	this->highRiskCountry = highRiskCountry;
}

std::string
AccountInfoMaxMindResponse::getQueriesRemaining()
{
	return queriesRemaining;
}

void
AccountInfoMaxMindResponse::setQueriesRemaining(std::string queriesRemaining)
{
	this->queriesRemaining = queriesRemaining;
}

std::string
AccountInfoMaxMindResponse::getCityPostalMatch()
{
	return cityPostalMatch;
}

void
AccountInfoMaxMindResponse::setCityPostalMatch(std::string cityPostalMatch)
{
	this->cityPostalMatch = cityPostalMatch;
}

std::string
AccountInfoMaxMindResponse::getShipCityPostalMatch()
{
	return shipCityPostalMatch;
}

void
AccountInfoMaxMindResponse::setShipCityPostalMatch(std::string shipCityPostalMatch)
{
	this->shipCityPostalMatch = shipCityPostalMatch;
}

std::string
AccountInfoMaxMindResponse::getMaxmindID()
{
	return maxmindID;
}

void
AccountInfoMaxMindResponse::setMaxmindID(std::string maxmindID)
{
	this->maxmindID = maxmindID;
}

std::string
AccountInfoMaxMindResponse::getIpAsnum()
{
	return ip_asnum;
}

void
AccountInfoMaxMindResponse::setIpAsnum(std::string ip_asnum)
{
	this->ip_asnum = ip_asnum;
}

std::string
AccountInfoMaxMindResponse::getIpUserType()
{
	return ip_userType;
}

void
AccountInfoMaxMindResponse::setIpUserType(std::string ip_userType)
{
	this->ip_userType = ip_userType;
}

std::string
AccountInfoMaxMindResponse::getIpCountryConf()
{
	return ip_countryConf;
}

void
AccountInfoMaxMindResponse::setIpCountryConf(std::string ip_countryConf)
{
	this->ip_countryConf = ip_countryConf;
}

std::string
AccountInfoMaxMindResponse::getIpRegionConf()
{
	return ip_regionConf;
}

void
AccountInfoMaxMindResponse::setIpRegionConf(std::string ip_regionConf)
{
	this->ip_regionConf = ip_regionConf;
}

std::string
AccountInfoMaxMindResponse::getIpCityConf()
{
	return ip_cityConf;
}

void
AccountInfoMaxMindResponse::setIpCityConf(std::string ip_cityConf)
{
	this->ip_cityConf = ip_cityConf;
}

std::string
AccountInfoMaxMindResponse::getIpPostalCode()
{
	return ip_postalCode;
}

void
AccountInfoMaxMindResponse::setIpPostalCode(std::string ip_postalCode)
{
	this->ip_postalCode = ip_postalCode;
}

std::string
AccountInfoMaxMindResponse::getIpPostalConf()
{
	return ip_postalConf;
}

void
AccountInfoMaxMindResponse::setIpPostalConf(std::string ip_postalConf)
{
	this->ip_postalConf = ip_postalConf;
}

std::string
AccountInfoMaxMindResponse::getIpAccuracyRadius()
{
	return ip_accuracyRadius;
}

void
AccountInfoMaxMindResponse::setIpAccuracyRadius(std::string ip_accuracyRadius)
{
	this->ip_accuracyRadius = ip_accuracyRadius;
}

std::string
AccountInfoMaxMindResponse::getIpNetSpeedCell()
{
	return ip_netSpeedCell;
}

void
AccountInfoMaxMindResponse::setIpNetSpeedCell(std::string ip_netSpeedCell)
{
	this->ip_netSpeedCell = ip_netSpeedCell;
}

std::string
AccountInfoMaxMindResponse::getIpMetroCode()
{
	return ip_metroCode;
}

void
AccountInfoMaxMindResponse::setIpMetroCode(std::string ip_metroCode)
{
	this->ip_metroCode = ip_metroCode;
}

std::string
AccountInfoMaxMindResponse::getIpAreaCode()
{
	return ip_areaCode;
}

void
AccountInfoMaxMindResponse::setIpAreaCode(std::string ip_areaCode)
{
	this->ip_areaCode = ip_areaCode;
}

std::string
AccountInfoMaxMindResponse::getIpTimeZone()
{
	return ip_timeZone;
}

void
AccountInfoMaxMindResponse::setIpTimeZone(std::string ip_timeZone)
{
	this->ip_timeZone = ip_timeZone;
}

std::string
AccountInfoMaxMindResponse::getIpRegionName()
{
	return ip_regionName;
}

void
AccountInfoMaxMindResponse::setIpRegionName(std::string ip_regionName)
{
	this->ip_regionName = ip_regionName;
}

std::string
AccountInfoMaxMindResponse::getIpDomain()
{
	return ip_domain;
}

void
AccountInfoMaxMindResponse::setIpDomain(std::string ip_domain)
{
	this->ip_domain = ip_domain;
}

std::string
AccountInfoMaxMindResponse::getIpCountryName()
{
	return ip_countryName;
}

void
AccountInfoMaxMindResponse::setIpCountryName(std::string ip_countryName)
{
	this->ip_countryName = ip_countryName;
}

std::string
AccountInfoMaxMindResponse::getIpContinentCode()
{
	return ip_continentCode;
}

void
AccountInfoMaxMindResponse::setIpContinentCode(std::string ip_continentCode)
{
	this->ip_continentCode = ip_continentCode;
}

std::string
AccountInfoMaxMindResponse::getIpCorporateProxy()
{
	return ip_corporateProxy;
}

void
AccountInfoMaxMindResponse::setIpCorporateProxy(std::string ip_corporateProxy)
{
	this->ip_corporateProxy = ip_corporateProxy;
}

std::string
AccountInfoMaxMindResponse::getCarderEmail()
{
	return carderEmail;
}

void
AccountInfoMaxMindResponse::setCarderEmail(std::string carderEmail)
{
	this->carderEmail = carderEmail;
}

std::string
AccountInfoMaxMindResponse::getHighRiskUsername()
{
	return highRiskUsername;
}

void
AccountInfoMaxMindResponse::setHighRiskUsername(std::string highRiskUsername)
{
	this->highRiskUsername = highRiskUsername;
}

std::string
AccountInfoMaxMindResponse::getHighRiskPassword()
{
	return highRiskPassword;
}

void
AccountInfoMaxMindResponse::setHighRiskPassword(std::string highRiskPassword)
{
	this->highRiskPassword = highRiskPassword;
}

AccountInfoMaxMindResponse_riskScore
AccountInfoMaxMindResponse::getRiskScore()
{
	return riskScore;
}

void
AccountInfoMaxMindResponse::setRiskScore(AccountInfoMaxMindResponse_riskScore riskScore)
{
	this->riskScore = riskScore;
}

std::string
AccountInfoMaxMindResponse::getIsTransProxy()
{
	return isTransProxy;
}

void
AccountInfoMaxMindResponse::setIsTransProxy(std::string isTransProxy)
{
	this->isTransProxy = isTransProxy;
}

std::string
AccountInfoMaxMindResponse::getPrepaid()
{
	return prepaid;
}

void
AccountInfoMaxMindResponse::setPrepaid(std::string prepaid)
{
	this->prepaid = prepaid;
}

std::string
AccountInfoMaxMindResponse::getMinfraudVersion()
{
	return minfraud_version;
}

void
AccountInfoMaxMindResponse::setMinfraudVersion(std::string minfraud_version)
{
	this->minfraud_version = minfraud_version;
}

std::string
AccountInfoMaxMindResponse::getServiceLevel()
{
	return service_level;
}

void
AccountInfoMaxMindResponse::setServiceLevel(std::string service_level)
{
	this->service_level = service_level;
}

std::string
AccountInfoMaxMindResponse::getExplanation()
{
	return explanation;
}

void
AccountInfoMaxMindResponse::setExplanation(std::string explanation)
{
	this->explanation = explanation;
}

std::string
AccountInfoMaxMindResponse::getFemaleName()
{
	return female_name;
}

void
AccountInfoMaxMindResponse::setFemaleName(std::string female_name)
{
	this->female_name = female_name;
}



