/*
 * WebsitesOrder.h
 *
 * Schema for the WebsitesOrder object
 */

#ifndef _WebsitesOrder_H_
#define _WebsitesOrder_H_


#include <string>
#include "WebsitesOrderJsonServiceOffers.h"
#include "WebsitesOrderJsonServices.h"
#include "WebsitesOrderPackages.h"
#include "WebsitesOrder_packges.h"
#include "WebsitesOrder_serviceOffers.h"
#include "WebsitesOrder_serviceTypes.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Schema for the WebsitesOrder object
 *
 *  \ingroup Models
 *
 */

class WebsitesOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrder();
	WebsitesOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Step description
	 */
	std::string getStep();

	/*! \brief Set Step description
	 */
	void setStep(std::string  step);
	/*! \brief Get Website description
	 */
	std::string getWebsite();

	/*! \brief Set Website description
	 */
	void setWebsite(std::string  website);
	/*! \brief Get Period description
	 */
	int getPeriod();

	/*! \brief Set Period description
	 */
	void setPeriod(int  period);
	/*! \brief Get Service offer ID description
	 */
	int getServiceOfferId();

	/*! \brief Set Service offer ID description
	 */
	void setServiceOfferId(int  serviceOfferId);
	/*! \brief Get 
	 */
	WebsitesOrderPackages getPackages();

	/*! \brief Set 
	 */
	void setPackages(WebsitesOrderPackages  packages);
	/*! \brief Get Enable domain registering description
	 */
	bool getEnableDomainRegistering();

	/*! \brief Set Enable domain registering description
	 */
	void setEnableDomainRegistering(bool  enableDomainRegistering);
	/*! \brief Get 
	 */
	WebsitesOrderJsonServices getJsonServices();

	/*! \brief Set 
	 */
	void setJsonServices(WebsitesOrderJsonServices  jsonServices);
	/*! \brief Get 
	 */
	WebsitesOrderJsonServiceOffers getJsonServiceOffers();

	/*! \brief Set 
	 */
	void setJsonServiceOffers(WebsitesOrderJsonServiceOffers  jsonServiceOffers);
	/*! \brief Get 
	 */
	WebsitesOrder_serviceTypes getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(WebsitesOrder_serviceTypes  serviceTypes);
	/*! \brief Get 
	 */
	WebsitesOrder_serviceOffers getServiceOffers();

	/*! \brief Set 
	 */
	void setServiceOffers(WebsitesOrder_serviceOffers  serviceOffers);
	/*! \brief Get 
	 */
	WebsitesOrder_packges getPackges();

	/*! \brief Set 
	 */
	void setPackges(WebsitesOrder_packges  packges);

private:
	std::string step;
	std::string website;
	int period;
	int serviceOfferId;
	WebsitesOrderPackages packages;
	bool enableDomainRegistering;
	WebsitesOrderJsonServices jsonServices;
	WebsitesOrderJsonServiceOffers jsonServiceOffers;
	WebsitesOrder_serviceTypes serviceTypes;
	WebsitesOrder_serviceOffers serviceOffers;
	WebsitesOrder_packges packges;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrder_H_ */
