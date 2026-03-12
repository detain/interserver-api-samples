/*
 * ServerBillingDetails.h
 *
 * Billing information for a dedicated server service including payment status, billing cycle, and cost.
 */

#ifndef _ServerBillingDetails_H_
#define _ServerBillingDetails_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Billing information for a dedicated server service including payment status, billing cycle, and cost.
 *
 *  \ingroup Models
 *
 */

class ServerBillingDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerBillingDetails();
	ServerBillingDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerBillingDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getServiceLastInvoiceDate();

	/*! \brief Set 
	 */
	void setServiceLastInvoiceDate(std::string  service_last_invoice_date);
	/*! \brief Get 
	 */
	std::string getServicePaymentStatus();

	/*! \brief Set 
	 */
	void setServicePaymentStatus(std::string  service_payment_status);
	/*! \brief Get 
	 */
	std::string getServiceFrequency();

	/*! \brief Set 
	 */
	void setServiceFrequency(std::string  service_frequency);
	/*! \brief Get 
	 */
	std::string getNextDate();

	/*! \brief Set 
	 */
	void setNextDate(std::string  next_date);
	/*! \brief Get 
	 */
	std::string getServiceNextInvoiceDate();

	/*! \brief Set 
	 */
	void setServiceNextInvoiceDate(std::string  service_next_invoice_date);
	/*! \brief Get 
	 */
	std::string getServiceCurrency();

	/*! \brief Set 
	 */
	void setServiceCurrency(std::string  service_currency);
	/*! \brief Get 
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set 
	 */
	void setServiceCurrencySymbol(std::string  service_currency_symbol);
	/*! \brief Get 
	 */
	std::string getServiceCostInfo();

	/*! \brief Set 
	 */
	void setServiceCostInfo(std::string  service_cost_info);
	/*! \brief Get 
	 */
	std::list<std::string> getServiceExtra();

	/*! \brief Set 
	 */
	void setServiceExtra(std::list <std::string> service_extra);
	/*! \brief Get 
	 */
	std::string getServiceExtraJson();

	/*! \brief Set 
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
	std::list <std::string>service_extra;
	std::string service_extra_json;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerBillingDetails_H_ */
