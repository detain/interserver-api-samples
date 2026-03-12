/*
 * WebsitesOrderJsonServiceOffersItem.h
 *
 * 
 */

#ifndef _WebsitesOrderJsonServiceOffersItem_H_
#define _WebsitesOrderJsonServiceOffersItem_H_


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

class WebsitesOrderJsonServiceOffersItem : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsitesOrderJsonServiceOffersItem();
	WebsitesOrderJsonServiceOffersItem(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsitesOrderJsonServiceOffersItem();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Service offer ID
	 */
	std::string getServiceOfferId();

	/*! \brief Set Service offer ID
	 */
	void setServiceOfferId(std::string  service_offer_id);
	/*! \brief Get Service ID
	 */
	std::string getServiceId();

	/*! \brief Set Service ID
	 */
	void setServiceId(std::string  service_id);
	/*! \brief Get Introductory cost
	 */
	int getIntroCost();

	/*! \brief Set Introductory cost
	 */
	void setIntroCost(int  intro_cost);
	/*! \brief Get Renewal cost
	 */
	int getRenewalCost();

	/*! \brief Set Renewal cost
	 */
	void setRenewalCost(int  renewal_cost);
	/*! \brief Get Introductory frequency
	 */
	std::string getIntroFrequency();

	/*! \brief Set Introductory frequency
	 */
	void setIntroFrequency(std::string  intro_frequency);
	/*! \brief Get Renewal frequency
	 */
	std::string getRenewalFrequency();

	/*! \brief Set Renewal frequency
	 */
	void setRenewalFrequency(std::string  renewal_frequency);
	/*! \brief Get Allow coupon
	 */
	std::string getAllowCoupon();

	/*! \brief Set Allow coupon
	 */
	void setAllowCoupon(std::string  allow_coupon);
	/*! \brief Get Service module
	 */
	std::string getServiceModule();

	/*! \brief Set Service module
	 */
	void setServiceModule(std::string  service_module);
	/*! \brief Get Creation date
	 */
	std::string getCreatedAt();

	/*! \brief Set Creation date
	 */
	void setCreatedAt(std::string  created_at);
	/*! \brief Get Update date
	 */
	std::string getUpdatedAt();

	/*! \brief Set Update date
	 */
	void setUpdatedAt(std::string  updated_at);
	/*! \brief Get Deletion date
	 */
	std::string getDeletedAt();

	/*! \brief Set Deletion date
	 */
	void setDeletedAt(std::string  deleted_at);
	/*! \brief Get Currency symbol
	 */
	std::string getCurrencySymbol();

	/*! \brief Set Currency symbol
	 */
	void setCurrencySymbol(std::string  currencySymbol);

private:
	std::string service_offer_id;
	std::string service_id;
	int intro_cost;
	int renewal_cost;
	std::string intro_frequency;
	std::string renewal_frequency;
	std::string allow_coupon;
	std::string service_module;
	std::string created_at;
	std::string updated_at;
	std::string deleted_at;
	std::string currencySymbol;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsitesOrderJsonServiceOffersItem_H_ */
