/*
 * ChargeInvoiceRows_invoices_value.h
 *
 * 
 */

#ifndef _ChargeInvoiceRows_invoices_value_H_
#define _ChargeInvoiceRows_invoices_value_H_


#include <string>
#include "ChargeInvoiceRows_invoices_value_paid_invoices_value.h"
#include <map>
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

class ChargeInvoiceRows_invoices_value : public Object {
public:
	/*! \brief Constructor.
	 */
	ChargeInvoiceRows_invoices_value();
	ChargeInvoiceRows_invoices_value(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChargeInvoiceRows_invoices_value();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Unique invoice ID.
	 */
	long long getInvoicesId();

	/*! \brief Set Unique invoice ID.
	 */
	void setInvoicesId(long long  invoices_id);
	/*! \brief Get Description of the invoice charge.
	 */
	std::string getInvoicesDescription();

	/*! \brief Set Description of the invoice charge.
	 */
	void setInvoicesDescription(std::string  invoices_description);
	/*! \brief Get Invoice amount.
	 */
	long long getInvoicesAmount();

	/*! \brief Set Invoice amount.
	 */
	void setInvoicesAmount(long long  invoices_amount);
	/*! \brief Get Invoice date.
	 */
	std::string getInvoicesDate();

	/*! \brief Set Invoice date.
	 */
	void setInvoicesDate(std::string  invoices_date);
	/*! \brief Get 
	 */
	long long getInvoicesPaid();

	/*! \brief Set 
	 */
	void setInvoicesPaid(long long  invoices_paid);
	/*! \brief Get 
	 */
	std::string getInvoicesDueDate();

	/*! \brief Set 
	 */
	void setInvoicesDueDate(std::string  invoices_due_date);
	/*! \brief Get 
	 */
	std::string getInvoicesCurrency();

	/*! \brief Set 
	 */
	void setInvoicesCurrency(std::string  invoices_currency);
	/*! \brief Get 
	 */
	std::string getCurrencySymbol();

	/*! \brief Set 
	 */
	void setCurrencySymbol(std::string  currency_symbol);
	/*! \brief Get 
	 */
	std::string getInvoicesDateFormatted();

	/*! \brief Set 
	 */
	void setInvoicesDateFormatted(std::string  invoices_date_formatted);
	/*! \brief Get This is optional when invoices_paid = 1 this array will show
	 */
	std::map<std::string, std::string> getPaidInvoices();

	/*! \brief Set This is optional when invoices_paid = 1 this array will show
	 */
	void setPaidInvoices(std::map <std::string, std::string> paid_invoices);

private:
	long long invoices_id;
	std::string invoices_description;
	long long invoices_amount;
	std::string invoices_date;
	long long invoices_paid;
	std::string invoices_due_date;
	std::string invoices_currency;
	std::string currency_symbol;
	std::string invoices_date_formatted;
	std::map <std::string, std::string>paid_invoices;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChargeInvoiceRows_invoices_value_H_ */
