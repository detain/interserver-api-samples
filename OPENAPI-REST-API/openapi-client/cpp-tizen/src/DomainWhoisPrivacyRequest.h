/*
 * DomainWhoisPrivacyRequest.h
 *
 * Request payload for enabling or disabling Whois privacy.
 */

#ifndef _DomainWhoisPrivacyRequest_H_
#define _DomainWhoisPrivacyRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request payload for enabling or disabling Whois privacy.
 *
 *  \ingroup Models
 *
 */

class DomainWhoisPrivacyRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainWhoisPrivacyRequest();
	DomainWhoisPrivacyRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainWhoisPrivacyRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Action to perform (enable or disableCancel).
	 */
	std::string getFunc();

	/*! \brief Set Action to perform (enable or disableCancel).
	 */
	void setFunc(std::string  func);
	/*! \brief Get CSRF token if the API requires it for the account.
	 */
	std::string getCsrfToken();

	/*! \brief Set CSRF token if the API requires it for the account.
	 */
	void setCsrfToken(std::string  csrf_token);
	/*! \brief Get 
	 */
	std::string getDomainFirstname();

	/*! \brief Set 
	 */
	void setDomainFirstname(std::string  domain_firstname);
	/*! \brief Get 
	 */
	std::string getDomainLastname();

	/*! \brief Set 
	 */
	void setDomainLastname(std::string  domain_lastname);
	/*! \brief Get 
	 */
	std::string getDomainEmail();

	/*! \brief Set 
	 */
	void setDomainEmail(std::string  domain_email);
	/*! \brief Get 
	 */
	std::string getDomainAddress();

	/*! \brief Set 
	 */
	void setDomainAddress(std::string  domain_address);
	/*! \brief Get 
	 */
	std::string getDomainAddress2();

	/*! \brief Set 
	 */
	void setDomainAddress2(std::string  domain_address2);
	/*! \brief Get 
	 */
	std::string getDomainAddress3();

	/*! \brief Set 
	 */
	void setDomainAddress3(std::string  domain_address3);
	/*! \brief Get 
	 */
	std::string getDomainCity();

	/*! \brief Set 
	 */
	void setDomainCity(std::string  domain_city);
	/*! \brief Get 
	 */
	std::string getDomainState();

	/*! \brief Set 
	 */
	void setDomainState(std::string  domain_state);
	/*! \brief Get 
	 */
	std::string getDomainZip();

	/*! \brief Set 
	 */
	void setDomainZip(std::string  domain_zip);
	/*! \brief Get 
	 */
	std::string getDomainCountry();

	/*! \brief Set 
	 */
	void setDomainCountry(std::string  domain_country);
	/*! \brief Get 
	 */
	std::string getDomainPhone();

	/*! \brief Set 
	 */
	void setDomainPhone(std::string  domain_phone);
	/*! \brief Get 
	 */
	std::string getDomainFax();

	/*! \brief Set 
	 */
	void setDomainFax(std::string  domain_fax);
	/*! \brief Get 
	 */
	std::string getDomainCompany();

	/*! \brief Set 
	 */
	void setDomainCompany(std::string  domain_company);
	/*! \brief Get 
	 */
	std::string getDomainExtra();

	/*! \brief Set 
	 */
	void setDomainExtra(std::string  domain_extra);

private:
	std::string func;
	std::string csrf_token;
	std::string domain_firstname;
	std::string domain_lastname;
	std::string domain_email;
	std::string domain_address;
	std::string domain_address2;
	std::string domain_address3;
	std::string domain_city;
	std::string domain_state;
	std::string domain_zip;
	std::string domain_country;
	std::string domain_phone;
	std::string domain_fax;
	std::string domain_company;
	std::string domain_extra;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainWhoisPrivacyRequest_H_ */
