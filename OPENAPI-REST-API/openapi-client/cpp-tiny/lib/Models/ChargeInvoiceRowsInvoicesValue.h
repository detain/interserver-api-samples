
/*
 * ChargeInvoiceRows_invoices_value.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ChargeInvoiceRows_invoices_value_H_
#define TINY_CPP_CLIENT_ChargeInvoiceRows_invoices_value_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ChargeInvoiceRows_invoices_value_paid_invoices_value.h"
#include <map>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ChargeInvoiceRows_invoices_value{
public:

    /*! \brief Constructor.
	 */
    ChargeInvoiceRows_invoices_value();
    ChargeInvoiceRows_invoices_value(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ChargeInvoiceRows_invoices_value();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Unique invoice ID.
	 */
	long getInvoicesId();

	/*! \brief Set Unique invoice ID.
	 */
	void setInvoicesId(long invoices_id);
	/*! \brief Get Description of the invoice charge.
	 */
	std::string getInvoicesDescription();

	/*! \brief Set Description of the invoice charge.
	 */
	void setInvoicesDescription(std::string invoices_description);
	/*! \brief Get Invoice amount.
	 */
	long getInvoicesAmount();

	/*! \brief Set Invoice amount.
	 */
	void setInvoicesAmount(long invoices_amount);
	/*! \brief Get Invoice date.
	 */
	std::string getInvoicesDate();

	/*! \brief Set Invoice date.
	 */
	void setInvoicesDate(std::string invoices_date);
	/*! \brief Get 
	 */
	long getInvoicesPaid();

	/*! \brief Set 
	 */
	void setInvoicesPaid(long invoices_paid);
	/*! \brief Get 
	 */
	std::string getInvoicesDueDate();

	/*! \brief Set 
	 */
	void setInvoicesDueDate(std::string invoices_due_date);
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
	/*! \brief Get This is optional when invoices_paid = 1 this array will show
	 */
	std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value> getPaidInvoices();

	/*! \brief Set This is optional when invoices_paid = 1 this array will show
	 */
	void setPaidInvoices(std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value> paid_invoices);


    private:
    long invoices_id{};
    std::string invoices_description{};
    long invoices_amount{};
    std::string invoices_date{};
    long invoices_paid{};
    std::string invoices_due_date{};
    std::string invoices_currency{};
    std::string currency_symbol{};
    std::string invoices_date_formatted{};
    std::map<std::string, ChargeInvoiceRows_invoices_value_paid_invoices_value> paid_invoices;
};
}

#endif /* TINY_CPP_CLIENT_ChargeInvoiceRows_invoices_value_H_ */
