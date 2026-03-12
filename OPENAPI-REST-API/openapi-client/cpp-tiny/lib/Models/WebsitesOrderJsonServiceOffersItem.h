
/*
 * WebsitesOrderJsonServiceOffersItem.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_WebsitesOrderJsonServiceOffersItem_H_
#define TINY_CPP_CLIENT_WebsitesOrderJsonServiceOffersItem_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class WebsitesOrderJsonServiceOffersItem{
public:

    /*! \brief Constructor.
	 */
    WebsitesOrderJsonServiceOffersItem();
    WebsitesOrderJsonServiceOffersItem(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsitesOrderJsonServiceOffersItem();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Service offer ID
	 */
	std::string getServiceOfferId();

	/*! \brief Set Service offer ID
	 */
	void setServiceOfferId(std::string service_offer_id);
	/*! \brief Get Service ID
	 */
	std::string getServiceId();

	/*! \brief Set Service ID
	 */
	void setServiceId(std::string service_id);
	/*! \brief Get Introductory cost
	 */
	int getIntroCost();

	/*! \brief Set Introductory cost
	 */
	void setIntroCost(int intro_cost);
	/*! \brief Get Renewal cost
	 */
	int getRenewalCost();

	/*! \brief Set Renewal cost
	 */
	void setRenewalCost(int renewal_cost);
	/*! \brief Get Introductory frequency
	 */
	std::string getIntroFrequency();

	/*! \brief Set Introductory frequency
	 */
	void setIntroFrequency(std::string intro_frequency);
	/*! \brief Get Renewal frequency
	 */
	std::string getRenewalFrequency();

	/*! \brief Set Renewal frequency
	 */
	void setRenewalFrequency(std::string renewal_frequency);
	/*! \brief Get Allow coupon
	 */
	std::string getAllowCoupon();

	/*! \brief Set Allow coupon
	 */
	void setAllowCoupon(std::string allow_coupon);
	/*! \brief Get Service module
	 */
	std::string getServiceModule();

	/*! \brief Set Service module
	 */
	void setServiceModule(std::string service_module);
	/*! \brief Get Creation date
	 */
	std::string getCreatedAt();

	/*! \brief Set Creation date
	 */
	void setCreatedAt(std::string created_at);
	/*! \brief Get Update date
	 */
	std::string getUpdatedAt();

	/*! \brief Set Update date
	 */
	void setUpdatedAt(std::string updated_at);
	/*! \brief Get Deletion date
	 */
	std::string getDeletedAt();

	/*! \brief Set Deletion date
	 */
	void setDeletedAt(std::string deleted_at);
	/*! \brief Get Currency symbol
	 */
	std::string getCurrencySymbol();

	/*! \brief Set Currency symbol
	 */
	void setCurrencySymbol(std::string currencySymbol);


    private:
    std::string service_offer_id{};
    std::string service_id{};
    int intro_cost{};
    int renewal_cost{};
    std::string intro_frequency{};
    std::string renewal_frequency{};
    std::string allow_coupon{};
    std::string service_module{};
    std::string created_at{};
    std::string updated_at{};
    std::string deleted_at{};
    std::string currencySymbol{};
};
}

#endif /* TINY_CPP_CLIENT_WebsitesOrderJsonServiceOffersItem_H_ */
