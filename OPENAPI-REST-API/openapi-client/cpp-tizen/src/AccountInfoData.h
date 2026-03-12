/*
 * AccountInfoData.h
 *
 * Detailed account profile data including contact info, billing, API keys, and security settings.
 */

#ifndef _AccountInfoData_H_
#define _AccountInfoData_H_


#include <string>
#include "AccountInfoDataCcs.h"
#include "AccountInfoData_email_settings.h"
#include "AccountInfoData_extra.h"
#include "AccountInfoData_fraudrecord.h"
#include "AccountInfoMaxMindResponse.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Detailed account profile data including contact info, billing, API keys, and security settings.
 *
 *  \ingroup Models
 *
 */

class AccountInfoData : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoData();
	AccountInfoData(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoData();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getGroup();

	/*! \brief Set 
	 */
	void setGroup(std::string  group);
	/*! \brief Get 
	 */
	std::string getAddress();

	/*! \brief Set 
	 */
	void setAddress(std::string  address);
	/*! \brief Get 
	 */
	std::string getCity();

	/*! \brief Set 
	 */
	void setCity(std::string  city);
	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string  country);
	/*! \brief Get 
	 */
	std::string getDisableCc();

	/*! \brief Set 
	 */
	void setDisableCc(std::string  disable_cc);
	/*! \brief Get 
	 */
	std::string getFraudrecordScore();

	/*! \brief Set 
	 */
	void setFraudrecordScore(std::string  fraudrecord_score);
	/*! \brief Get 
	 */
	std::string getIma();

	/*! \brief Set 
	 */
	void setIma(std::string  ima);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getPaymentMethod();

	/*! \brief Set 
	 */
	void setPaymentMethod(std::string  payment_method);
	/*! \brief Get 
	 */
	std::string getPhone();

	/*! \brief Set 
	 */
	void setPhone(std::string  phone);
	/*! \brief Get 
	 */
	std::string getPin();

	/*! \brief Set 
	 */
	void setPin(std::string  pin);
	/*! \brief Get 
	 */
	std::string getState();

	/*! \brief Set 
	 */
	void setState(std::string  state);
	/*! \brief Get 
	 */
	std::string getStatus();

	/*! \brief Set 
	 */
	void setStatus(std::string  status);
	/*! \brief Get 
	 */
	std::string getZip();

	/*! \brief Set 
	 */
	void setZip(std::string  zip);
	/*! \brief Get 
	 */
	std::string getAccountId();

	/*! \brief Set 
	 */
	void setAccountId(std::string  account_id);
	/*! \brief Get 
	 */
	std::string getAccountLid();

	/*! \brief Set 
	 */
	void setAccountLid(std::string  account_lid);
	/*! \brief Get 
	 */
	std::string getAddress2();

	/*! \brief Set 
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get 
	 */
	std::string getAffiliateDockDescription();

	/*! \brief Set 
	 */
	void setAffiliateDockDescription(std::string  affiliate_dock_description);
	/*! \brief Get 
	 */
	std::string getAffiliateDockTitle();

	/*! \brief Set 
	 */
	void setAffiliateDockTitle(std::string  affiliate_dock_title);
	/*! \brief Get 
	 */
	std::string getAffiliatePaymentMethod();

	/*! \brief Set 
	 */
	void setAffiliatePaymentMethod(std::string  affiliate_payment_method);
	/*! \brief Get 
	 */
	std::string getAffiliatePaypal();

	/*! \brief Set 
	 */
	void setAffiliatePaypal(std::string  affiliate_paypal);
	/*! \brief Get 
	 */
	std::string getCc();

	/*! \brief Set 
	 */
	void setCc(std::string  cc);
	/*! \brief Get 
	 */
	std::string getCcAuto();

	/*! \brief Set 
	 */
	void setCcAuto(std::string  cc_auto);
	/*! \brief Get 
	 */
	std::string getCcExp();

	/*! \brief Set 
	 */
	void setCcExp(std::string  cc_exp);
	/*! \brief Get 
	 */
	std::string getCcType();

	/*! \brief Set 
	 */
	void setCcType(std::string  cc_type);
	/*! \brief Get 
	 */
	std::string getCcWhitelist();

	/*! \brief Set 
	 */
	void setCcWhitelist(std::string  cc_whitelist);
	/*! \brief Get 
	 */
	AccountInfoDataCcs getCcs();

	/*! \brief Set 
	 */
	void setCcs(AccountInfoDataCcs  ccs);
	/*! \brief Get 
	 */
	std::string getCcsAdded();

	/*! \brief Set 
	 */
	void setCcsAdded(std::string  ccs_added);
	/*! \brief Get 
	 */
	std::string getCompany();

	/*! \brief Set 
	 */
	void setCompany(std::string  company);
	/*! \brief Get 
	 */
	std::string getCurrency();

	/*! \brief Set 
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get 
	 */
	std::string getDisableReinstall();

	/*! \brief Set 
	 */
	void setDisableReinstall(std::string  disable_reinstall);
	/*! \brief Get 
	 */
	std::string getDisableReset();

	/*! \brief Set 
	 */
	void setDisableReset(std::string  disable_reset);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string  email);
	/*! \brief Get 
	 */
	std::string getEmailAbuse();

	/*! \brief Set 
	 */
	void setEmailAbuse(std::string  email_abuse);
	/*! \brief Get 
	 */
	AccountInfoData_email_settings getEmailSettings();

	/*! \brief Set 
	 */
	void setEmailSettings(AccountInfoData_email_settings  email_settings);
	/*! \brief Get 
	 */
	AccountInfoData_extra getExtra();

	/*! \brief Set 
	 */
	void setExtra(AccountInfoData_extra  extra);
	/*! \brief Get 
	 */
	std::string getFacebookId();

	/*! \brief Set 
	 */
	void setFacebookId(std::string  facebook_id);
	/*! \brief Get 
	 */
	std::string getFacebookUrl();

	/*! \brief Set 
	 */
	void setFacebookUrl(std::string  facebook_url);
	/*! \brief Get 
	 */
	std::string getFirstname();

	/*! \brief Set 
	 */
	void setFirstname(std::string  firstname);
	/*! \brief Get 
	 */
	AccountInfoData_fraudrecord getFraudrecord();

	/*! \brief Set 
	 */
	void setFraudrecord(AccountInfoData_fraudrecord  fraudrecord);
	/*! \brief Get 
	 */
	std::string getGithubId();

	/*! \brief Set 
	 */
	void setGithubId(std::string  github_id);
	/*! \brief Get 
	 */
	std::string getGithubUrl();

	/*! \brief Set 
	 */
	void setGithubUrl(std::string  github_url);
	/*! \brief Get 
	 */
	std::string getGoogleId();

	/*! \brief Set 
	 */
	void setGoogleId(std::string  google_id);
	/*! \brief Get 
	 */
	std::string getGoogleUrl();

	/*! \brief Set 
	 */
	void setGoogleUrl(std::string  google_url);
	/*! \brief Get 
	 */
	std::string getInnertellId();

	/*! \brief Set 
	 */
	void setInnertellId(std::string  innertell_id);
	/*! \brief Get 
	 */
	std::string getLastname();

	/*! \brief Set 
	 */
	void setLastname(std::string  lastname);
	/*! \brief Get 
	 */
	std::string getLocale();

	/*! \brief Set 
	 */
	void setLocale(std::string  locale);
	/*! \brief Get 
	 */
	AccountInfoMaxMindResponse getMaxmind();

	/*! \brief Set 
	 */
	void setMaxmind(AccountInfoMaxMindResponse  maxmind);
	/*! \brief Get 
	 */
	std::string getMaxmindScore();

	/*! \brief Set 
	 */
	void setMaxmindScore(std::string  maxmind_score);
	/*! \brief Get 
	 */
	std::string getMbId();

	/*! \brief Set 
	 */
	void setMbId(std::string  mb_id);
	/*! \brief Get 
	 */
	std::string getModernbillId();

	/*! \brief Set 
	 */
	void setModernbillId(std::string  modernbill_id);
	/*! \brief Get 
	 */
	std::string getPicture();

	/*! \brief Set 
	 */
	void setPicture(std::string  picture);
	/*! \brief Get 
	 */
	std::string getReferrerCoupon();

	/*! \brief Set 
	 */
	void setReferrerCoupon(std::string  referrer_coupon);
	/*! \brief Get 
	 */
	std::string getResellerMarkup();

	/*! \brief Set 
	 */
	void setResellerMarkup(std::string  reseller_markup);
	/*! \brief Get 
	 */
	std::string getUsername();

	/*! \brief Set 
	 */
	void setUsername(std::string  username);
	/*! \brief Get 
	 */
	std::string getSshKey();

	/*! \brief Set 
	 */
	void setSshKey(std::string  ssh_key);
	/*! \brief Get 
	 */
	std::string getSshKeyWrapped();

	/*! \brief Set 
	 */
	void setSshKeyWrapped(std::string  ssh_key_wrapped);
	/*! \brief Get 
	 */
	std::string getApiKey();

	/*! \brief Set 
	 */
	void setApiKey(std::string  api_key);
	/*! \brief Get 
	 */
	std::string getApiKeyWrapped();

	/*! \brief Set 
	 */
	void setApiKeyWrapped(std::string  api_key_wrapped);
	/*! \brief Get 
	 */
	std::string get2faGoogleKey();

	/*! \brief Set 
	 */
	void set2faGoogleKey(std::string  2fa_google_key);
	/*! \brief Get 
	 */
	bool get2faGoogleEnabled();

	/*! \brief Set 
	 */
	void set2faGoogleEnabled(bool  2fa_google_enabled);
	/*! \brief Get 
	 */
	int get2faGoogle();

	/*! \brief Set 
	 */
	void set2faGoogle(int  2fa_google);
	/*! \brief Get 
	 */
	std::string get2faGoogleSplit();

	/*! \brief Set 
	 */
	void set2faGoogleSplit(std::string  2fa_google_split);
	/*! \brief Get 
	 */
	std::string get2faGoogleQr();

	/*! \brief Set 
	 */
	void set2faGoogleQr(std::string  2fa_google_qr);

private:
	std::string group;
	std::string address;
	std::string city;
	std::string country;
	std::string disable_cc;
	std::string fraudrecord_score;
	std::string ima;
	std::string name;
	std::string payment_method;
	std::string phone;
	std::string pin;
	std::string state;
	std::string status;
	std::string zip;
	std::string account_id;
	std::string account_lid;
	std::string address2;
	std::string affiliate_dock_description;
	std::string affiliate_dock_title;
	std::string affiliate_payment_method;
	std::string affiliate_paypal;
	std::string cc;
	std::string cc_auto;
	std::string cc_exp;
	std::string cc_type;
	std::string cc_whitelist;
	AccountInfoDataCcs ccs;
	std::string ccs_added;
	std::string company;
	std::string currency;
	std::string disable_reinstall;
	std::string disable_reset;
	std::string email;
	std::string email_abuse;
	AccountInfoData_email_settings email_settings;
	AccountInfoData_extra extra;
	std::string facebook_id;
	std::string facebook_url;
	std::string firstname;
	AccountInfoData_fraudrecord fraudrecord;
	std::string github_id;
	std::string github_url;
	std::string google_id;
	std::string google_url;
	std::string innertell_id;
	std::string lastname;
	std::string locale;
	AccountInfoMaxMindResponse maxmind;
	std::string maxmind_score;
	std::string mb_id;
	std::string modernbill_id;
	std::string picture;
	std::string referrer_coupon;
	std::string reseller_markup;
	std::string username;
	std::string ssh_key;
	std::string ssh_key_wrapped;
	std::string api_key;
	std::string api_key_wrapped;
	std::string 2fa_google_key;
	bool 2fa_google_enabled;
	int 2fa_google;
	std::string 2fa_google_split;
	std::string 2fa_google_qr;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoData_H_ */
