
/*
 * AccountInfo.h
 *
 * Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 */

#ifndef TINY_CPP_CLIENT_AccountInfo_H_
#define TINY_CPP_CLIENT_AccountInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "AccountInfoCountryCurrencies.h"
#include "AccountInfoData.h"
#include "AccountInfoLimits.h"
#include "AccountInfoOauthConfig.h"
#include "AccountInfo_oauthproviders.h"
#include <list>

namespace Tiny {


/*! \brief Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 *
 *  \ingroup Models
 *
 */

class AccountInfo{
public:

    /*! \brief Constructor.
	 */
    AccountInfo();
    AccountInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getCustid();

	/*! \brief Set 
	 */
	void setCustid(std::string custid);
	/*! \brief Get 
	 */
	std::string getIma();

	/*! \brief Set 
	 */
	void setIma(std::string ima);
	/*! \brief Get 
	 */
	AccountInfoData getData();

	/*! \brief Set 
	 */
	void setData(AccountInfoData data);
	/*! \brief Get 
	 */
	std::string getIp();

	/*! \brief Set 
	 */
	void setIp(std::string ip);
	/*! \brief Get 
	 */
	AccountInfo_oauthproviders getOauthproviders();

	/*! \brief Set 
	 */
	void setOauthproviders(AccountInfo_oauthproviders oauthproviders);
	/*! \brief Get 
	 */
	AccountInfoOauthConfig getOauthconfig();

	/*! \brief Set 
	 */
	void setOauthconfig(AccountInfoOauthConfig oauthconfig);
	/*! \brief Get 
	 */
	std::list<std::string> getOauthadapters();

	/*! \brief Set 
	 */
	void setOauthadapters(std::list<std::string> oauthadapters);
	/*! \brief Get 
	 */
	AccountInfoLimits getLimits();

	/*! \brief Set 
	 */
	void setLimits(AccountInfoLimits limits);
	/*! \brief Get 
	 */
	std::string getLanguage();

	/*! \brief Set 
	 */
	void setLanguage(std::string language);
	/*! \brief Get 
	 */
	AccountInfoCountryCurrencies&lt;std::string, std::list&gt; getCountryCurrencies();

	/*! \brief Set 
	 */
	void setCountryCurrencies(AccountInfoCountryCurrencies&lt;std::string, std::list&gt; countryCurrencies);
	/*! \brief Get 
	 */
	bool isEnableLocales();

	/*! \brief Set 
	 */
	void setEnableLocales(bool enableLocales);
	/*! \brief Get 
	 */
	bool isEnableCurrencies();

	/*! \brief Set 
	 */
	void setEnableCurrencies(bool enableCurrencies);
	/*! \brief Get 
	 */
	std::string getGravatar();

	/*! \brief Set 
	 */
	void setGravatar(std::string gravatar);


    private:
    std::string custid{};
    std::string ima{};
    AccountInfoData data;
    std::string ip{};
    AccountInfo_oauthproviders oauthproviders;
    AccountInfoOauthConfig oauthconfig;
    std::list<std::string> oauthadapters;
    AccountInfoLimits limits;
    std::string language{};
    AccountInfoCountryCurrencies&lt;std::string, std::list&gt; countryCurrencies;
    bool enableLocales{};
    bool enableCurrencies{};
    std::string gravatar{};
};
}

#endif /* TINY_CPP_CLIENT_AccountInfo_H_ */
