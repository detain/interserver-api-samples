
/*
 * VpsBillingDetails.h
 *
 * Billing information for a VPS service including payment status, billing cycle, and cost.
 */

#ifndef TINY_CPP_CLIENT_VpsBillingDetails_H_
#define TINY_CPP_CLIENT_VpsBillingDetails_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsServiceExtra.h"

namespace Tiny {


/*! \brief Billing information for a VPS service including payment status, billing cycle, and cost.
 *
 *  \ingroup Models
 *
 */

class VpsBillingDetails{
public:

    /*! \brief Constructor.
	 */
    VpsBillingDetails();
    VpsBillingDetails(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsBillingDetails();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Last invoice date
	 */
	std::string getServiceLastInvoiceDate();

	/*! \brief Set Last invoice date
	 */
	void setServiceLastInvoiceDate(std::string service_last_invoice_date);
	/*! \brief Get Payment status
	 */
	std::string getServicePaymentStatus();

	/*! \brief Set Payment status
	 */
	void setServicePaymentStatus(std::string service_payment_status);
	/*! \brief Get Billing frequency
	 */
	std::string getServiceFrequency();

	/*! \brief Set Billing frequency
	 */
	void setServiceFrequency(std::string service_frequency);
	/*! \brief Get Next billing date
	 */
	std::string getNextDate();

	/*! \brief Set Next billing date
	 */
	void setNextDate(std::string next_date);
	/*! \brief Get Next invoice date
	 */
	std::string getServiceNextInvoiceDate();

	/*! \brief Set Next invoice date
	 */
	void setServiceNextInvoiceDate(std::string service_next_invoice_date);
	/*! \brief Get Currency used for billing
	 */
	std::string getServiceCurrency();

	/*! \brief Set Currency used for billing
	 */
	void setServiceCurrency(std::string service_currency);
	/*! \brief Get Currency symbol
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set Currency symbol
	 */
	void setServiceCurrencySymbol(std::string service_currency_symbol);
	/*! \brief Get Billing coupon code
	 */
	std::string getServiceCoupon();

	/*! \brief Set Billing coupon code
	 */
	void setServiceCoupon(std::string service_coupon);
	/*! \brief Get Cost information
	 */
	std::string getServiceCostInfo();

	/*! \brief Set Cost information
	 */
	void setServiceCostInfo(std::string service_cost_info);
	/*! \brief Get 
	 */
	VpsServiceExtra getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(VpsServiceExtra service_extra);
	/*! \brief Get Additional information in JSON format
	 */
	std::string getServiceExtraJson();

	/*! \brief Set Additional information in JSON format
	 */
	void setServiceExtraJson(std::string service_extra_json);


    private:
    std::string service_last_invoice_date{};
    std::string service_payment_status{};
    std::string service_frequency{};
    std::string next_date{};
    std::string service_next_invoice_date{};
    std::string service_currency{};
    std::string service_currency_symbol{};
    std::string service_coupon{};
    std::string service_cost_info{};
    VpsServiceExtra service_extra;
    std::string service_extra_json{};
};
}

#endif /* TINY_CPP_CLIENT_VpsBillingDetails_H_ */
