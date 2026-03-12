/*
 * DomainLookupResponse.h
 *
 * Availability, pricing, and order-field metadata for a domain lookup.
 */

#ifndef _DomainLookupResponse_H_
#define _DomainLookupResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Availability, pricing, and order-field metadata for a domain lookup.
 *
 *  \ingroup Models
 *
 */

class DomainLookupResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainLookupResponse();
	DomainLookupResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainLookupResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the domain is available to register.
	 */
	bool getAvailable();

	/*! \brief Set Whether the domain is available to register.
	 */
	void setAvailable(bool  available);
	/*! \brief Get Whether the domain is marked as premium by the registrar.
	 */
	bool getPremium();

	/*! \brief Set Whether the domain is marked as premium by the registrar.
	 */
	void setPremium(bool  premium);
	/*! \brief Get Indicates if the domain is already used by a website service.
	 */
	bool getWebsite();

	/*! \brief Set Indicates if the domain is already used by a website service.
	 */
	void setWebsite(bool  website);
	/*! \brief Get Indicates if the domain already exists as a domain service on the account.
	 */
	bool getDomainService();

	/*! \brief Set Indicates if the domain already exists as a domain service on the account.
	 */
	void setDomainService(bool  domain_service);
	/*! \brief Get Service catalog details for the domain's TLD.
	 */
	std::string getService();

	/*! \brief Set Service catalog details for the domain's TLD.
	 */
	void setService(std::string  service);
	/*! \brief Get Whether Whois privacy is available for the TLD.
	 */
	bool getWhoisPrivacy();

	/*! \brief Set Whether Whois privacy is available for the TLD.
	 */
	void setWhoisPrivacy(bool  whois_privacy);
	/*! \brief Get Calculated registration price, when available.
	 */
	std::string getRNew();

	/*! \brief Set Calculated registration price, when available.
	 */
	void setRNew(std::string  r_new);
	/*! \brief Get Calculated renewal price, when available.
	 */
	std::string getRenewal();

	/*! \brief Set Calculated renewal price, when available.
	 */
	void setRenewal(std::string  renewal);
	/*! \brief Get Calculated transfer price, when available.
	 */
	std::string getTransfer();

	/*! \brief Set Calculated transfer price, when available.
	 */
	void setTransfer(std::string  transfer);
	/*! \brief Get Registrar field requirements for this domain/TLD.
	 */
	std::string getFields();

	/*! \brief Set Registrar field requirements for this domain/TLD.
	 */
	void setFields(std::string  fields);
	/*! \brief Get Pricing information normalized to supported currencies.
	 */
	std::string getCurrencies();

	/*! \brief Set Pricing information normalized to supported currencies.
	 */
	void setCurrencies(std::string  currencies);

private:
	bool available;
	bool premium;
	bool website;
	bool domain_service;
	std::string service;
	bool whois_privacy;
	std::string r_new;
	std::string renewal;
	std::string transfer;
	std::string fields;
	std::string currencies;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainLookupResponse_H_ */
