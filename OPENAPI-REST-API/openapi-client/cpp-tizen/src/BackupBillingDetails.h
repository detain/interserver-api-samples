/*
 * BackupBillingDetails.h
 *
 * 
 */

#ifndef _BackupBillingDetails_H_
#define _BackupBillingDetails_H_


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

class BackupBillingDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupBillingDetails();
	BackupBillingDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupBillingDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Last invoice date of the service.
	 */
	std::string getServiceLastInvoiceDate();

	/*! \brief Set Last invoice date of the service.
	 */
	void setServiceLastInvoiceDate(std::string  service_last_invoice_date);
	/*! \brief Get Payment status of the service.
	 */
	std::string getServicePaymentStatus();

	/*! \brief Set Payment status of the service.
	 */
	void setServicePaymentStatus(std::string  service_payment_status);
	/*! \brief Get Billing frequency of the service.
	 */
	std::string getServiceFrequency();

	/*! \brief Set Billing frequency of the service.
	 */
	void setServiceFrequency(std::string  service_frequency);
	/*! \brief Get Next billing date of the service.
	 */
	std::string getNextDate();

	/*! \brief Set Next billing date of the service.
	 */
	void setNextDate(std::string  next_date);
	/*! \brief Get Next invoice date of the service.
	 */
	std::string getServiceNextInvoiceDate();

	/*! \brief Set Next invoice date of the service.
	 */
	void setServiceNextInvoiceDate(std::string  service_next_invoice_date);
	/*! \brief Get Currency of the service.
	 */
	std::string getServiceCurrency();

	/*! \brief Set Currency of the service.
	 */
	void setServiceCurrency(std::string  service_currency);
	/*! \brief Get Currency symbol of the service.
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set Currency symbol of the service.
	 */
	void setServiceCurrencySymbol(std::string  service_currency_symbol);
	/*! \brief Get Cost information of the service.
	 */
	std::string getServiceCostInfo();

	/*! \brief Set Cost information of the service.
	 */
	void setServiceCostInfo(std::string  service_cost_info);
	/*! \brief Get Service Extra Info
	 */
	std::string getServiceExtra();

	/*! \brief Set Service Extra Info
	 */
	void setServiceExtra(std::string  service_extra);
	/*! \brief Get JSON representation of extra service information.
	 */
	std::string getServiceExtraJson();

	/*! \brief Set JSON representation of extra service information.
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
	std::string service_extra;
	std::string service_extra_json;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupBillingDetails_H_ */
