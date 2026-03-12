
/*
 * AccountInfoMaxMindResponse.h
 *
 * MaxMind fraud detection scoring data for a credit card transaction.
 */

#ifndef TINY_CPP_CLIENT_AccountInfoMaxMindResponse_H_
#define TINY_CPP_CLIENT_AccountInfoMaxMindResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AccountInfoMaxMindResponse_riskScore.h"

namespace Tiny {


/*! \brief MaxMind fraud detection scoring data for a credit card transaction.
 *
 *  \ingroup Models
 *
 */

class AccountInfoMaxMindResponse{
public:

    /*! \brief Constructor.
	 */
    AccountInfoMaxMindResponse();
    AccountInfoMaxMindResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoMaxMindResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getDistance();

	/*! \brief Set 
	 */
	void setDistance(std::string distance);
	/*! \brief Get 
	 */
	std::string getCountryMatch();

	/*! \brief Set 
	 */
	void setCountryMatch(std::string countryMatch);
	/*! \brief Get 
	 */
	std::string getCountryCode();

	/*! \brief Set 
	 */
	void setCountryCode(std::string countryCode);
	/*! \brief Get 
	 */
	std::string getFreeMail();

	/*! \brief Set 
	 */
	void setFreeMail(std::string freeMail);
	/*! \brief Get 
	 */
	std::string getAnonymousProxy();

	/*! \brief Set 
	 */
	void setAnonymousProxy(std::string anonymousProxy);
	/*! \brief Get 
	 */
	std::string getScore();

	/*! \brief Set 
	 */
	void setScore(std::string score);
	/*! \brief Get 
	 */
	std::string getBinMatch();

	/*! \brief Set 
	 */
	void setBinMatch(std::string binMatch);
	/*! \brief Get 
	 */
	std::string getBinCountry();

	/*! \brief Set 
	 */
	void setBinCountry(std::string binCountry);
	/*! \brief Get 
	 */
	std::string getErr();

	/*! \brief Set 
	 */
	void setErr(std::string err);
	/*! \brief Get 
	 */
	std::string getProxyScore();

	/*! \brief Set 
	 */
	void setProxyScore(std::string proxyScore);
	/*! \brief Get 
	 */
	std::string getIpRegion();

	/*! \brief Set 
	 */
	void setIpRegion(std::string ip_region);
	/*! \brief Get 
	 */
	std::string getIpCity();

	/*! \brief Set 
	 */
	void setIpCity(std::string ip_city);
	/*! \brief Get 
	 */
	std::string getIpLatitude();

	/*! \brief Set 
	 */
	void setIpLatitude(std::string ip_latitude);
	/*! \brief Get 
	 */
	std::string getIpLongitude();

	/*! \brief Set 
	 */
	void setIpLongitude(std::string ip_longitude);
	/*! \brief Get 
	 */
	std::string getBinName();

	/*! \brief Set 
	 */
	void setBinName(std::string binName);
	/*! \brief Get 
	 */
	std::string getIpIsp();

	/*! \brief Set 
	 */
	void setIpIsp(std::string ip_isp);
	/*! \brief Get 
	 */
	std::string getIpOrg();

	/*! \brief Set 
	 */
	void setIpOrg(std::string ip_org);
	/*! \brief Get 
	 */
	std::string getBinNameMatch();

	/*! \brief Set 
	 */
	void setBinNameMatch(std::string binNameMatch);
	/*! \brief Get 
	 */
	std::string getBinPhoneMatch();

	/*! \brief Set 
	 */
	void setBinPhoneMatch(std::string binPhoneMatch);
	/*! \brief Get 
	 */
	std::string getBinPhone();

	/*! \brief Set 
	 */
	void setBinPhone(std::string binPhone);
	/*! \brief Get 
	 */
	std::string getCustPhoneInBillingLoc();

	/*! \brief Set 
	 */
	void setCustPhoneInBillingLoc(std::string custPhoneInBillingLoc);
	/*! \brief Get 
	 */
	std::string getHighRiskCountry();

	/*! \brief Set 
	 */
	void setHighRiskCountry(std::string highRiskCountry);
	/*! \brief Get 
	 */
	std::string getQueriesRemaining();

	/*! \brief Set 
	 */
	void setQueriesRemaining(std::string queriesRemaining);
	/*! \brief Get 
	 */
	std::string getCityPostalMatch();

	/*! \brief Set 
	 */
	void setCityPostalMatch(std::string cityPostalMatch);
	/*! \brief Get 
	 */
	std::string getShipCityPostalMatch();

	/*! \brief Set 
	 */
	void setShipCityPostalMatch(std::string shipCityPostalMatch);
	/*! \brief Get 
	 */
	std::string getMaxmindID();

	/*! \brief Set 
	 */
	void setMaxmindID(std::string maxmindID);
	/*! \brief Get 
	 */
	std::string getIpAsnum();

	/*! \brief Set 
	 */
	void setIpAsnum(std::string ip_asnum);
	/*! \brief Get 
	 */
	std::string getIpUserType();

	/*! \brief Set 
	 */
	void setIpUserType(std::string ip_userType);
	/*! \brief Get 
	 */
	std::string getIpCountryConf();

	/*! \brief Set 
	 */
	void setIpCountryConf(std::string ip_countryConf);
	/*! \brief Get 
	 */
	std::string getIpRegionConf();

	/*! \brief Set 
	 */
	void setIpRegionConf(std::string ip_regionConf);
	/*! \brief Get 
	 */
	std::string getIpCityConf();

	/*! \brief Set 
	 */
	void setIpCityConf(std::string ip_cityConf);
	/*! \brief Get 
	 */
	std::string getIpPostalCode();

	/*! \brief Set 
	 */
	void setIpPostalCode(std::string ip_postalCode);
	/*! \brief Get 
	 */
	std::string getIpPostalConf();

	/*! \brief Set 
	 */
	void setIpPostalConf(std::string ip_postalConf);
	/*! \brief Get 
	 */
	std::string getIpAccuracyRadius();

	/*! \brief Set 
	 */
	void setIpAccuracyRadius(std::string ip_accuracyRadius);
	/*! \brief Get 
	 */
	std::string getIpNetSpeedCell();

	/*! \brief Set 
	 */
	void setIpNetSpeedCell(std::string ip_netSpeedCell);
	/*! \brief Get 
	 */
	std::string getIpMetroCode();

	/*! \brief Set 
	 */
	void setIpMetroCode(std::string ip_metroCode);
	/*! \brief Get 
	 */
	std::string getIpAreaCode();

	/*! \brief Set 
	 */
	void setIpAreaCode(std::string ip_areaCode);
	/*! \brief Get 
	 */
	std::string getIpTimeZone();

	/*! \brief Set 
	 */
	void setIpTimeZone(std::string ip_timeZone);
	/*! \brief Get 
	 */
	std::string getIpRegionName();

	/*! \brief Set 
	 */
	void setIpRegionName(std::string ip_regionName);
	/*! \brief Get 
	 */
	std::string getIpDomain();

	/*! \brief Set 
	 */
	void setIpDomain(std::string ip_domain);
	/*! \brief Get 
	 */
	std::string getIpCountryName();

	/*! \brief Set 
	 */
	void setIpCountryName(std::string ip_countryName);
	/*! \brief Get 
	 */
	std::string getIpContinentCode();

	/*! \brief Set 
	 */
	void setIpContinentCode(std::string ip_continentCode);
	/*! \brief Get 
	 */
	std::string getIpCorporateProxy();

	/*! \brief Set 
	 */
	void setIpCorporateProxy(std::string ip_corporateProxy);
	/*! \brief Get 
	 */
	std::string getCarderEmail();

	/*! \brief Set 
	 */
	void setCarderEmail(std::string carderEmail);
	/*! \brief Get 
	 */
	std::string getHighRiskUsername();

	/*! \brief Set 
	 */
	void setHighRiskUsername(std::string highRiskUsername);
	/*! \brief Get 
	 */
	std::string getHighRiskPassword();

	/*! \brief Set 
	 */
	void setHighRiskPassword(std::string highRiskPassword);
	/*! \brief Get 
	 */
	AccountInfoMaxMindResponse_riskScore getRiskScore();

	/*! \brief Set 
	 */
	void setRiskScore(AccountInfoMaxMindResponse_riskScore riskScore);
	/*! \brief Get 
	 */
	std::string getIsTransProxy();

	/*! \brief Set 
	 */
	void setIsTransProxy(std::string isTransProxy);
	/*! \brief Get 
	 */
	std::string getPrepaid();

	/*! \brief Set 
	 */
	void setPrepaid(std::string prepaid);
	/*! \brief Get 
	 */
	std::string getMinfraudVersion();

	/*! \brief Set 
	 */
	void setMinfraudVersion(std::string minfraud_version);
	/*! \brief Get 
	 */
	std::string getServiceLevel();

	/*! \brief Set 
	 */
	void setServiceLevel(std::string service_level);
	/*! \brief Get 
	 */
	std::string getExplanation();

	/*! \brief Set 
	 */
	void setExplanation(std::string explanation);
	/*! \brief Get 
	 */
	std::string getFemaleName();

	/*! \brief Set 
	 */
	void setFemaleName(std::string female_name);


    private:
    std::string distance{};
    std::string countryMatch{};
    std::string countryCode{};
    std::string freeMail{};
    std::string anonymousProxy{};
    std::string score{};
    std::string binMatch{};
    std::string binCountry{};
    std::string err{};
    std::string proxyScore{};
    std::string ip_region{};
    std::string ip_city{};
    std::string ip_latitude{};
    std::string ip_longitude{};
    std::string binName{};
    std::string ip_isp{};
    std::string ip_org{};
    std::string binNameMatch{};
    std::string binPhoneMatch{};
    std::string binPhone{};
    std::string custPhoneInBillingLoc{};
    std::string highRiskCountry{};
    std::string queriesRemaining{};
    std::string cityPostalMatch{};
    std::string shipCityPostalMatch{};
    std::string maxmindID{};
    std::string ip_asnum{};
    std::string ip_userType{};
    std::string ip_countryConf{};
    std::string ip_regionConf{};
    std::string ip_cityConf{};
    std::string ip_postalCode{};
    std::string ip_postalConf{};
    std::string ip_accuracyRadius{};
    std::string ip_netSpeedCell{};
    std::string ip_metroCode{};
    std::string ip_areaCode{};
    std::string ip_timeZone{};
    std::string ip_regionName{};
    std::string ip_domain{};
    std::string ip_countryName{};
    std::string ip_continentCode{};
    std::string ip_corporateProxy{};
    std::string carderEmail{};
    std::string highRiskUsername{};
    std::string highRiskPassword{};
    AccountInfoMaxMindResponse_riskScore riskScore;
    std::string isTransProxy{};
    std::string prepaid{};
    std::string minfraud_version{};
    std::string service_level{};
    std::string explanation{};
    std::string female_name{};
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoMaxMindResponse_H_ */
