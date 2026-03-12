
/*
 * WebsitesOrder.h
 *
 * Schema for the WebsitesOrder object
 */

#ifndef TINY_CPP_CLIENT_WebsitesOrder_H_
#define TINY_CPP_CLIENT_WebsitesOrder_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "WebsitesOrderJsonServiceOffers.h"
#include "WebsitesOrderJsonServices.h"
#include "WebsitesOrderPackages.h"
#include "WebsitesOrder_packges.h"
#include "WebsitesOrder_serviceOffers.h"
#include "WebsitesOrder_serviceTypes.h"

namespace Tiny {


/*! \brief Schema for the WebsitesOrder object
 *
 *  \ingroup Models
 *
 */

class WebsitesOrder{
public:

    /*! \brief Constructor.
	 */
    WebsitesOrder();
    WebsitesOrder(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsitesOrder();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Step description
	 */
	std::string getStep();

	/*! \brief Set Step description
	 */
	void setStep(std::string step);
	/*! \brief Get Website description
	 */
	std::string getWebsite();

	/*! \brief Set Website description
	 */
	void setWebsite(std::string website);
	/*! \brief Get Period description
	 */
	int getPeriod();

	/*! \brief Set Period description
	 */
	void setPeriod(int period);
	/*! \brief Get Service offer ID description
	 */
	int getServiceOfferId();

	/*! \brief Set Service offer ID description
	 */
	void setServiceOfferId(int serviceOfferId);
	/*! \brief Get 
	 */
	WebsitesOrderPackages getPackages();

	/*! \brief Set 
	 */
	void setPackages(WebsitesOrderPackages packages);
	/*! \brief Get Enable domain registering description
	 */
	bool isEnableDomainRegistering();

	/*! \brief Set Enable domain registering description
	 */
	void setEnableDomainRegistering(bool enableDomainRegistering);
	/*! \brief Get 
	 */
	WebsitesOrderJsonServices getJsonServices();

	/*! \brief Set 
	 */
	void setJsonServices(WebsitesOrderJsonServices jsonServices);
	/*! \brief Get 
	 */
	WebsitesOrderJsonServiceOffers getJsonServiceOffers();

	/*! \brief Set 
	 */
	void setJsonServiceOffers(WebsitesOrderJsonServiceOffers jsonServiceOffers);
	/*! \brief Get 
	 */
	WebsitesOrder_serviceTypes getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(WebsitesOrder_serviceTypes serviceTypes);
	/*! \brief Get 
	 */
	WebsitesOrder_serviceOffers getServiceOffers();

	/*! \brief Set 
	 */
	void setServiceOffers(WebsitesOrder_serviceOffers serviceOffers);
	/*! \brief Get 
	 */
	WebsitesOrder_packges getPackges();

	/*! \brief Set 
	 */
	void setPackges(WebsitesOrder_packges packges);


    private:
    std::string step{};
    std::string website{};
    int period{};
    int serviceOfferId{};
    WebsitesOrderPackages packages;
    bool enableDomainRegistering{};
    WebsitesOrderJsonServices jsonServices;
    WebsitesOrderJsonServiceOffers jsonServiceOffers;
    WebsitesOrder_serviceTypes serviceTypes;
    WebsitesOrder_serviceOffers serviceOffers;
    WebsitesOrder_packges packges;
};
}

#endif /* TINY_CPP_CLIENT_WebsitesOrder_H_ */
