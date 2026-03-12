/*
 * WebsitesOrderServiceOffer.h
 *
 * 
 */

#ifndef _WebsitesOrderServiceOffer_H_
#define _WebsitesOrderServiceOffer_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class WebsitesOrderServiceOffer : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrderServiceOffer();
	WebsitesOrderServiceOffer(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrderServiceOffer();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID of the service offer.
	 */
	std::string getServiceOfferId();

	/*! \brief Set The ID of the service offer.
	 */
	void setServiceOfferId(std::string  service_offer_id);
	/*! \brief Get The ID of the associated service.
	 */
	std::string getServiceId();

	/*! \brief Set The ID of the associated service.
	 */
	void setServiceId(std::string  service_id);
	/*! \brief Get The introductory cost of the service offer.
	 */
	std::string getIntroCost();

	/*! \brief Set The introductory cost of the service offer.
	 */
	void setIntroCost(std::string  intro_cost);
	/*! \brief Get The renewal cost of the service offer.
	 */
	std::string getRenewalCost();

	/*! \brief Set The renewal cost of the service offer.
	 */
	void setRenewalCost(std::string  renewal_cost);
	/*! \brief Get The introductory frequency of the service offer.
	 */
	std::string getIntroFrequency();

	/*! \brief Set The introductory frequency of the service offer.
	 */
	void setIntroFrequency(std::string  intro_frequency);
	/*! \brief Get The renewal frequency of the service offer.
	 */
	std::string getRenewalFrequency();

	/*! \brief Set The renewal frequency of the service offer.
	 */
	void setRenewalFrequency(std::string  renewal_frequency);
	/*! \brief Get Indicates if coupons are allowed (1 for yes, 0 for no).
	 */
	std::string getAllowCoupon();

	/*! \brief Set Indicates if coupons are allowed (1 for yes, 0 for no).
	 */
	void setAllowCoupon(std::string  allow_coupon);
	/*! \brief Get The module of the service offer.
	 */
	std::string getServiceModule();

	/*! \brief Set The module of the service offer.
	 */
	void setServiceModule(std::string  service_module);
	/*! \brief Get The creation timestamp of the service offer.
	 */
	std::string getCreatedAt();

	/*! \brief Set The creation timestamp of the service offer.
	 */
	void setCreatedAt(std::string  created_at);
	/*! \brief Get The update timestamp of the service offer.
	 */
	std::string getUpdatedAt();

	/*! \brief Set The update timestamp of the service offer.
	 */
	void setUpdatedAt(std::string  updated_at);
	/*! \brief Get The deletion timestamp of the service offer.
	 */
	std::string getDeletedAt();

	/*! \brief Set The deletion timestamp of the service offer.
	 */
	void setDeletedAt(std::string  deleted_at);

private:
	std::string service_offer_id;
	std::string service_id;
	std::string intro_cost;
	std::string renewal_cost;
	std::string intro_frequency;
	std::string renewal_frequency;
	std::string allow_coupon;
	std::string service_module;
	std::string created_at;
	std::string updated_at;
	std::string deleted_at;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrderServiceOffer_H_ */
