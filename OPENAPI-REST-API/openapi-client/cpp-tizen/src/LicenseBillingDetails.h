/*
 * LicenseBillingDetails.h
 *
 * Billing information for a software license including payment status, billing cycle, and cost.
 */

#ifndef _LicenseBillingDetails_H_
#define _LicenseBillingDetails_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Billing information for a software license including payment status, billing cycle, and cost.
 *
 *  \ingroup Models
 *
 */

class LicenseBillingDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	LicenseBillingDetails();
	LicenseBillingDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicenseBillingDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Last invoice date
	 */
	std::string getServiceLastInvoiceDate();

	/*! \brief Set Last invoice date
	 */
	void setServiceLastInvoiceDate(std::string  service_last_invoice_date);
	/*! \brief Get Payment status
	 */
	std::string getServicePaymentStatus();

	/*! \brief Set Payment status
	 */
	void setServicePaymentStatus(std::string  service_payment_status);
	/*! \brief Get Service frequency
	 */
	std::string getServiceFrequency();

	/*! \brief Set Service frequency
	 */
	void setServiceFrequency(std::string  service_frequency);
	/*! \brief Get Next date
	 */
	std::string getNextDate();

	/*! \brief Set Next date
	 */
	void setNextDate(std::string  next_date);
	/*! \brief Get Next invoice date
	 */
	std::string getServiceNextInvoiceDate();

	/*! \brief Set Next invoice date
	 */
	void setServiceNextInvoiceDate(std::string  service_next_invoice_date);
	/*! \brief Get Service currency
	 */
	std::string getServiceCurrency();

	/*! \brief Set Service currency
	 */
	void setServiceCurrency(std::string  service_currency);
	/*! \brief Get Service currency symbol
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set Service currency symbol
	 */
	void setServiceCurrencySymbol(std::string  service_currency_symbol);
	/*! \brief Get Service coupon
	 */
	std::string getServiceCoupon();

	/*! \brief Set Service coupon
	 */
	void setServiceCoupon(std::string  service_coupon);
	/*! \brief Get Service cost information
	 */
	std::string getServiceCostInfo();

	/*! \brief Set Service cost information
	 */
	void setServiceCostInfo(std::string  service_cost_info);
	/*! \brief Get Additional service information
	 */
	std::list<std::string> getServiceExtra();

	/*! \brief Set Additional service information
	 */
	void setServiceExtra(std::list <std::string> service_extra);
	/*! \brief Get Additional service information in JSON format
	 */
	std::string getServiceExtraJson();

	/*! \brief Set Additional service information in JSON format
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
	std::list <std::string>service_extra;
	std::string service_extra_json;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicenseBillingDetails_H_ */
