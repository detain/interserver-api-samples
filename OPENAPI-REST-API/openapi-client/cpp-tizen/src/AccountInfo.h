/*
 * AccountInfo.h
 *
 * Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 */

#ifndef _AccountInfo_H_
#define _AccountInfo_H_


#include <string>
#include "AccountInfoCountryCurrencies.h"
#include "AccountInfoData.h"
#include "AccountInfoLimits.h"
#include "AccountInfoOauthConfig.h"
#include "AccountInfo_oauthproviders.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Contains the full account profile including personal info, billing details, OAuth connections, and security settings.
 *
 *  \ingroup Models
 *
 */

class AccountInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfo();
	AccountInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCustid();

	/*! \brief Set 
	 */
	void setCustid(std::string  custid);
	/*! \brief Get 
	 */
	std::string getIma();

	/*! \brief Set 
	 */
	void setIma(std::string  ima);
	/*! \brief Get 
	 */
	AccountInfoData getData();

	/*! \brief Set 
	 */
	void setData(AccountInfoData  data);
	/*! \brief Get 
	 */
	std::string getIp();

	/*! \brief Set 
	 */
	void setIp(std::string  ip);
	/*! \brief Get 
	 */
	AccountInfo_oauthproviders getOauthproviders();

	/*! \brief Set 
	 */
	void setOauthproviders(AccountInfo_oauthproviders  oauthproviders);
	/*! \brief Get 
	 */
	AccountInfoOauthConfig getOauthconfig();

	/*! \brief Set 
	 */
	void setOauthconfig(AccountInfoOauthConfig  oauthconfig);
	/*! \brief Get 
	 */
	std::list<std::string> getOauthadapters();

	/*! \brief Set 
	 */
	void setOauthadapters(std::list <std::string> oauthadapters);
	/*! \brief Get 
	 */
	AccountInfoLimits getLimits();

	/*! \brief Set 
	 */
	void setLimits(AccountInfoLimits  limits);
	/*! \brief Get 
	 */
	std::string getLanguage();

	/*! \brief Set 
	 */
	void setLanguage(std::string  language);
	/*! \brief Get 
	 */
	AccountInfoCountryCurrencies getCountryCurrencies();

	/*! \brief Set 
	 */
	void setCountryCurrencies(AccountInfoCountryCurrencies  countryCurrencies);
	/*! \brief Get 
	 */
	bool getEnableLocales();

	/*! \brief Set 
	 */
	void setEnableLocales(bool  enableLocales);
	/*! \brief Get 
	 */
	bool getEnableCurrencies();

	/*! \brief Set 
	 */
	void setEnableCurrencies(bool  enableCurrencies);
	/*! \brief Get 
	 */
	std::string getGravatar();

	/*! \brief Set 
	 */
	void setGravatar(std::string  gravatar);

private:
	std::string custid;
	std::string ima;
	AccountInfoData data;
	std::string ip;
	AccountInfo_oauthproviders oauthproviders;
	AccountInfoOauthConfig oauthconfig;
	std::list <std::string>oauthadapters;
	AccountInfoLimits limits;
	std::string language;
	AccountInfoCountryCurrencies countryCurrencies;
	bool enableLocales;
	bool enableCurrencies;
	std::string gravatar;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfo_H_ */
