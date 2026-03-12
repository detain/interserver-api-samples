/*
 * WebsiteBillingDetails.h
 *
 * Billing information for a webhosting service including payment status, billing cycle, and cost.
 */

#ifndef _WebsiteBillingDetails_H_
#define _WebsiteBillingDetails_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Billing information for a webhosting service including payment status, billing cycle, and cost.
 *
 *  \ingroup Models
 *
 */

class WebsiteBillingDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteBillingDetails();
	WebsiteBillingDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteBillingDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Last invoice date for the service
	 */
	std::string getServiceLastInvoiceDate();

	/*! \brief Set Last invoice date for the service
	 */
	void setServiceLastInvoiceDate(std::string  service_last_invoice_date);
	/*! \brief Get Payment status for the service
	 */
	std::string getServicePaymentStatus();

	/*! \brief Set Payment status for the service
	 */
	void setServicePaymentStatus(std::string  service_payment_status);
	/*! \brief Get Frequency of the service
	 */
	std::string getServiceFrequency();

	/*! \brief Set Frequency of the service
	 */
	void setServiceFrequency(std::string  service_frequency);
	/*! \brief Get Next date for the service
	 */
	std::string getNextDate();

	/*! \brief Set Next date for the service
	 */
	void setNextDate(std::string  next_date);
	/*! \brief Get Next invoice date for the service
	 */
	std::string getServiceNextInvoiceDate();

	/*! \brief Set Next invoice date for the service
	 */
	void setServiceNextInvoiceDate(std::string  service_next_invoice_date);
	/*! \brief Get Currency for the service
	 */
	std::string getServiceCurrency();

	/*! \brief Set Currency for the service
	 */
	void setServiceCurrency(std::string  service_currency);
	/*! \brief Get Currency symbol for the service
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set Currency symbol for the service
	 */
	void setServiceCurrencySymbol(std::string  service_currency_symbol);
	/*! \brief Get Coupon for the service
	 */
	std::string getServiceCoupon();

	/*! \brief Set Coupon for the service
	 */
	void setServiceCoupon(std::string  service_coupon);
	/*! \brief Get Cost information for the service
	 */
	std::string getServiceCostInfo();

	/*! \brief Set Cost information for the service
	 */
	void setServiceCostInfo(std::string  service_cost_info);
	/*! \brief Get Extra information for the service
	 */
	std::string getServiceExtra();

	/*! \brief Set Extra information for the service
	 */
	void setServiceExtra(std::string  service_extra);
	/*! \brief Get Extra information in JSON format for the service
	 */
	std::string getServiceExtraJson();

	/*! \brief Set Extra information in JSON format for the service
	 */
	void setServiceExtraJson(std::string  service_extra_json);

private:
	std::string service_last_invoice_date;
	std::string service_payment_status;
	std::string service_frequency;
	std::string next_date;
	std::string service_next_invoice_date;
	std::string service_currency;
	std::string service_currency_symbol;
	std::string service_coupon;
	std::string service_cost_info;
	std::string service_extra;
	std::string service_extra_json;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsiteBillingDetails_H_ */
