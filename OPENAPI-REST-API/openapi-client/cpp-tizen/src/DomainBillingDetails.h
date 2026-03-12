/*
 * DomainBillingDetails.h
 *
 * Billing information for a domain service including payment status, dates, and cost.
 */

#ifndef _DomainBillingDetails_H_
#define _DomainBillingDetails_H_


#include <string>
#include "DomainBillingExtra.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Billing information for a domain service including payment status, dates, and cost.
 *
 *  \ingroup Models
 *
 */

class DomainBillingDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainBillingDetails();
	DomainBillingDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainBillingDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Date of the last invoice for the domain.
	 */
	std::string getServiceLastInvoiceDate();

	/*! \brief Set Date of the last invoice for the domain.
	 */
	void setServiceLastInvoiceDate(std::string  service_last_invoice_date);
	/*! \brief Get Current payment status (e.g., Paid, Unpaid).
	 */
	std::string getServicePaymentStatus();

	/*! \brief Set Current payment status (e.g., Paid, Unpaid).
	 */
	void setServicePaymentStatus(std::string  service_payment_status);
	/*! \brief Get Billing frequency (e.g., Yearly, Monthly).
	 */
	std::string getServiceFrequency();

	/*! \brief Set Billing frequency (e.g., Yearly, Monthly).
	 */
	void setServiceFrequency(std::string  service_frequency);
	/*! \brief Get Next billing date (ISO 8601).
	 */
	std::string getNextDate();

	/*! \brief Set Next billing date (ISO 8601).
	 */
	void setNextDate(std::string  next_date);
	/*! \brief Get Human-readable next invoice date.
	 */
	std::string getServiceNextInvoiceDate();

	/*! \brief Set Human-readable next invoice date.
	 */
	void setServiceNextInvoiceDate(std::string  service_next_invoice_date);
	/*! \brief Get Billing currency code.
	 */
	std::string getServiceCurrency();

	/*! \brief Set Billing currency code.
	 */
	void setServiceCurrency(std::string  service_currency);
	/*! \brief Get Billing currency symbol.
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set Billing currency symbol.
	 */
	void setServiceCurrencySymbol(std::string  service_currency_symbol);
	/*! \brief Get Cost breakdown information.
	 */
	std::string getServiceCostInfo();

	/*! \brief Set Cost breakdown information.
	 */
	void setServiceCostInfo(std::string  service_cost_info);
	/*! \brief Get 
	 */
	DomainBillingExtra getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(DomainBillingExtra  service_extra);
	/*! \brief Get Raw JSON string of extra billing data.
	 */
	std::string getServiceExtraJson();

	/*! \brief Set Raw JSON string of extra billing data.
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
	DomainBillingExtra service_extra;
	std::string service_extra_json;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainBillingDetails_H_ */
