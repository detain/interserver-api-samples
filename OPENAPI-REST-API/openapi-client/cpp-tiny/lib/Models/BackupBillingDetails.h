
/*
 * BackupBillingDetails.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_BackupBillingDetails_H_
#define TINY_CPP_CLIENT_BackupBillingDetails_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BackupBillingDetails{
public:

    /*! \brief Constructor.
	 */
    BackupBillingDetails();
    BackupBillingDetails(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupBillingDetails();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Last invoice date of the service.
	 */
	std::string getServiceLastInvoiceDate();

	/*! \brief Set Last invoice date of the service.
	 */
	void setServiceLastInvoiceDate(std::string service_last_invoice_date);
	/*! \brief Get Payment status of the service.
	 */
	std::string getServicePaymentStatus();

	/*! \brief Set Payment status of the service.
	 */
	void setServicePaymentStatus(std::string service_payment_status);
	/*! \brief Get Billing frequency of the service.
	 */
	std::string getServiceFrequency();

	/*! \brief Set Billing frequency of the service.
	 */
	void setServiceFrequency(std::string service_frequency);
	/*! \brief Get Next billing date of the service.
	 */
	std::string getNextDate();

	/*! \brief Set Next billing date of the service.
	 */
	void setNextDate(std::string next_date);
	/*! \brief Get Next invoice date of the service.
	 */
	std::string getServiceNextInvoiceDate();

	/*! \brief Set Next invoice date of the service.
	 */
	void setServiceNextInvoiceDate(std::string service_next_invoice_date);
	/*! \brief Get Currency of the service.
	 */
	std::string getServiceCurrency();

	/*! \brief Set Currency of the service.
	 */
	void setServiceCurrency(std::string service_currency);
	/*! \brief Get Currency symbol of the service.
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set Currency symbol of the service.
	 */
	void setServiceCurrencySymbol(std::string service_currency_symbol);
	/*! \brief Get Cost information of the service.
	 */
	std::string getServiceCostInfo();

	/*! \brief Set Cost information of the service.
	 */
	void setServiceCostInfo(std::string service_cost_info);
	/*! \brief Get Service Extra Info
	 */
	std::string getServiceExtra();

	/*! \brief Set Service Extra Info
	 */
	void setServiceExtra(std::string service_extra);
	/*! \brief Get JSON representation of extra service information.
	 */
	std::string getServiceExtraJson();

	/*! \brief Set JSON representation of extra service information.
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
    std::string service_cost_info{};
    std::string service_extra{};
    std::string service_extra_json{};
};
}

#endif /* TINY_CPP_CLIENT_BackupBillingDetails_H_ */
