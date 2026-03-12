
/*
 * DomainLookupResponse.h
 *
 * Availability, pricing, and order-field metadata for a domain lookup.
 */

#ifndef TINY_CPP_CLIENT_DomainLookupResponse_H_
#define TINY_CPP_CLIENT_DomainLookupResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Object.h"

namespace Tiny {


/*! \brief Availability, pricing, and order-field metadata for a domain lookup.
 *
 *  \ingroup Models
 *
 */

class DomainLookupResponse{
public:

    /*! \brief Constructor.
	 */
    DomainLookupResponse();
    DomainLookupResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainLookupResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Whether the domain is available to register.
	 */
	bool isAvailable();

	/*! \brief Set Whether the domain is available to register.
	 */
	void setAvailable(bool available);
	/*! \brief Get Whether the domain is marked as premium by the registrar.
	 */
	bool isPremium();

	/*! \brief Set Whether the domain is marked as premium by the registrar.
	 */
	void setPremium(bool premium);
	/*! \brief Get Indicates if the domain is already used by a website service.
	 */
	bool isWebsite();

	/*! \brief Set Indicates if the domain is already used by a website service.
	 */
	void setWebsite(bool website);
	/*! \brief Get Indicates if the domain already exists as a domain service on the account.
	 */
	bool isDomainService();

	/*! \brief Set Indicates if the domain already exists as a domain service on the account.
	 */
	void setDomainService(bool domain_service);
	/*! \brief Get Service catalog details for the domain's TLD.
	 */
	Object getService();

	/*! \brief Set Service catalog details for the domain's TLD.
	 */
	void setService(Object service);
	/*! \brief Get Whether Whois privacy is available for the TLD.
	 */
	bool isWhoisPrivacy();

	/*! \brief Set Whether Whois privacy is available for the TLD.
	 */
	void setWhoisPrivacy(bool whois_privacy);
	/*! \brief Get Calculated registration price, when available.
	 */
	std::string getRNew();

	/*! \brief Set Calculated registration price, when available.
	 */
	void setRNew(std::string r_new);
	/*! \brief Get Calculated renewal price, when available.
	 */
	std::string getRenewal();

	/*! \brief Set Calculated renewal price, when available.
	 */
	void setRenewal(std::string renewal);
	/*! \brief Get Calculated transfer price, when available.
	 */
	std::string getTransfer();

	/*! \brief Set Calculated transfer price, when available.
	 */
	void setTransfer(std::string transfer);
	/*! \brief Get Registrar field requirements for this domain/TLD.
	 */
	Object getFields();

	/*! \brief Set Registrar field requirements for this domain/TLD.
	 */
	void setFields(Object fields);
	/*! \brief Get Pricing information normalized to supported currencies.
	 */
	Object getCurrencies();

	/*! \brief Set Pricing information normalized to supported currencies.
	 */
	void setCurrencies(Object currencies);


    private:
    bool available{};
    bool premium{};
    bool website{};
    bool domain_service{};
    Object service;
    bool whois_privacy{};
    std::string r_new{};
    std::string renewal{};
    std::string transfer{};
    Object fields;
    Object currencies;
};
}

#endif /* TINY_CPP_CLIENT_DomainLookupResponse_H_ */
