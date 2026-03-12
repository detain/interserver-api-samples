/*
 * QuickserverBillingDetails.h
 *
 * Billing information for a QuickServer service including payment status, billing cycle, and cost.
 */

#ifndef _QuickserverBillingDetails_H_
#define _QuickserverBillingDetails_H_


#include <string>
#include "QuickserverServiceExtra.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Billing information for a QuickServer service including payment status, billing cycle, and cost.
 *
 *  \ingroup Models
 *
 */

class QuickserverBillingDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverBillingDetails();
	QuickserverBillingDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverBillingDetails();

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
	/*! \brief Get Currency
	 */
	std::string getServiceCurrency();

	/*! \brief Set Currency
	 */
	void setServiceCurrency(std::string  service_currency);
	/*! \brief Get Currency symbol
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set Currency symbol
	 */
	void setServiceCurrencySymbol(std::string  service_currency_symbol);
	/*! \brief Get Cost information
	 */
	std::string getServiceCostInfo();

	/*! \brief Set Cost information
	 */
	void setServiceCostInfo(std::string  service_cost_info);
	/*! \brief Get 
	 */
	QuickserverServiceExtra getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(QuickserverServiceExtra  service_extra);
	/*! \brief Get Extra information (JSON format)
	 */
	std::string getServiceExtraJson();

	/*! \brief Set Extra information (JSON format)
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
	std::string service_cost_info;
	QuickserverServiceExtra service_extra;
	std::string service_extra_json;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverBillingDetails_H_ */
