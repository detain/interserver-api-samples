
/*
 * ChargeInvoiceRows_invoices_value_paid_invoices_value.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ChargeInvoiceRows_invoices_value_paid_invoices_value_H_
#define TINY_CPP_CLIENT_ChargeInvoiceRows_invoices_value_paid_invoices_value_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value.h"
#include <map>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ChargeInvoiceRows_invoices_value_paid_invoices_value{
public:

    /*! \brief Constructor.
	 */
    ChargeInvoiceRows_invoices_value_paid_invoices_value();
    ChargeInvoiceRows_invoices_value_paid_invoices_value(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ChargeInvoiceRows_invoices_value_paid_invoices_value();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getInvoicesId();

	/*! \brief Set 
	 */
	void setInvoicesId(std::string invoices_id);
	/*! \brief Get 
	 */
	std::string getInvoicesDescription();

	/*! \brief Set 
	 */
	void setInvoicesDescription(std::string invoices_description);
	/*! \brief Get 
	 */
	long getInvoicesAmount();

	/*! \brief Set 
	 */
	void setInvoicesAmount(long invoices_amount);
	/*! \brief Get 
	 */
	std::string getInvoicesDate();

	/*! \brief Set 
	 */
	void setInvoicesDate(std::string invoices_date);
	/*! \brief Get 
	 */
	std::string getInvoicesCurrency();

	/*! \brief Set 
	 */
	void setInvoicesCurrency(std::string invoices_currency);
	/*! \brief Get 
	 */
	std::string getCurrencySymbol();

	/*! \brief Set 
	 */
	void setCurrencySymbol(std::string currency_symbol);
	/*! \brief Get 
	 */
	std::string getInvoicesDateFormatted();

	/*! \brief Set 
	 */
	void setInvoicesDateFormatted(std::string invoices_date_formatted);
	/*! \brief Get 
	 */
	std::string getPaymentType();

	/*! \brief Set 
	 */
	void setPaymentType(std::string payment_type);
	/*! \brief Get This is optional when refund is present this will show
	 */
	std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value> getRefundInvoices();

	/*! \brief Set This is optional when refund is present this will show
	 */
	void setRefundInvoices(std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value> refund_invoices);


    private:
    std::string invoices_id{};
    std::string invoices_description{};
    long invoices_amount{};
    std::string invoices_date{};
    std::string invoices_currency{};
    std::string currency_symbol{};
    std::string invoices_date_formatted{};
    std::string payment_type{};
    std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value> refund_invoices;
};
}

#endif /* TINY_CPP_CLIENT_ChargeInvoiceRows_invoices_value_paid_invoices_value_H_ */
