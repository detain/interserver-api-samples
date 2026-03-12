
/*
 * GetScrubIpDetails_200_response_billingDetails.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetScrubIpDetails_200_response_billingDetails_H_
#define TINY_CPP_CLIENT_GetScrubIpDetails_200_response_billingDetails_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetScrubIpDetails_200_response_billingDetails{
public:

    /*! \brief Constructor.
	 */
    GetScrubIpDetails_200_response_billingDetails();
    GetScrubIpDetails_200_response_billingDetails(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetScrubIpDetails_200_response_billingDetails();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getServiceLastInvoiceDate();

	/*! \brief Set 
	 */
	void setServiceLastInvoiceDate(std::string service_last_invoice_date);
	/*! \brief Get 
	 */
	std::string getServicePaymentStatus();

	/*! \brief Set 
	 */
	void setServicePaymentStatus(std::string service_payment_status);
	/*! \brief Get 
	 */
	std::string getServiceFrequency();

	/*! \brief Set 
	 */
	void setServiceFrequency(std::string service_frequency);
	/*! \brief Get 
	 */
	std::string getNextDate();

	/*! \brief Set 
	 */
	void setNextDate(std::string next_date);
	/*! \brief Get 
	 */
	std::string getServiceNextInvoiceDate();

	/*! \brief Set 
	 */
	void setServiceNextInvoiceDate(std::string service_next_invoice_date);
	/*! \brief Get 
	 */
	std::string getServiceCurrency();

	/*! \brief Set 
	 */
	void setServiceCurrency(std::string service_currency);
	/*! \brief Get 
	 */
	std::string getServiceCurrencySymbol();

	/*! \brief Set 
	 */
	void setServiceCurrencySymbol(std::string service_currency_symbol);
	/*! \brief Get 
	 */
	std::string getServiceCostInfo();

	/*! \brief Set 
	 */
	void setServiceCostInfo(std::string service_cost_info);


    private:
    std::string service_last_invoice_date{};
    std::string service_payment_status{};
    std::string service_frequency{};
    std::string next_date{};
    std::string service_next_invoice_date{};
    std::string service_currency{};
    std::string service_currency_symbol{};
    std::string service_cost_info{};
};
}

#endif /* TINY_CPP_CLIENT_GetScrubIpDetails_200_response_billingDetails_H_ */
