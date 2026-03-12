
/*
 * MailBillingDetails.h
 *
 * Billing information for a mail service including payment status, billing cycle, and cost.
 */

#ifndef TINY_CPP_CLIENT_MailBillingDetails_H_
#define TINY_CPP_CLIENT_MailBillingDetails_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief Billing information for a mail service including payment status, billing cycle, and cost.
 *
 *  \ingroup Models
 *
 */

class MailBillingDetails{
public:

    /*! \brief Constructor.
	 */
    MailBillingDetails();
    MailBillingDetails(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailBillingDetails();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The last invoice date of the service.
	 */
	std::string getServiceLastInvoiceDate();

	/*! \brief Set The last invoice date of the service.
	 */
	void setServiceLastInvoiceDate(std::string service_last_invoice_date);
	/*! \brief Get The payment status of the service.
	 */
	std::string getServicePaymentStatus();

	/*! \brief Set The payment status of the service.
	 */
	void setServicePaymentStatus(std::string service_payment_status);
	/*! \brief Get The frequency of the service payment.
	 */
	std::string getServiceFrequency();

	/*! \brief Set The frequency of the service payment.
	 */
	void setServiceFrequency(std::string service_frequency);
	/*! \brief Get The next payment date of the service.
	 */
	std::string getNextDate();

	/*! \brief Set The next payment date of the service.
	 */
	void setNextDate(std::string next_date);
	/*! \brief Get The next invoice date of the service.
	 */
	std::string getServiceNextInvoiceDate();

	/*! \brief Set The next invoice date of the service.
	 */
	void setServiceNextInvoiceDate(std::string service_next_invoice_date);
	/*! \brief Get The currency of the service.
	 */
	std::string getServiceCurrency();

	/*! \brief Set The currency of the service.
	 */
	void setServiceCurrency(std::string service_currency);
	/*! \brief Get The currency symbol of the service.
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set The currency symbol of the service.
	 */
	void setServiceCurrencySymbol(std::string service_currency_symbol);
	/*! \brief Get The cost information of the service.
	 */
	std::string getServiceCostInfo();

	/*! \brief Set The cost information of the service.
	 */
	void setServiceCostInfo(std::string service_cost_info);
	/*! \brief Get Extra information for the service.
	 */
	std::list<std::string> getServiceExtra();

	/*! \brief Set Extra information for the service.
	 */
	void setServiceExtra(std::list<std::string> service_extra);
	/*! \brief Get Extra JSON information for the service.
	 */
	std::string getServiceExtraJson();

	/*! \brief Set Extra JSON information for the service.
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
    std::list<std::string> service_extra;
    std::string service_extra_json{};
};
}

#endif /* TINY_CPP_CLIENT_MailBillingDetails_H_ */
