/*
 * ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value.h
 *
 * 
 */

#ifndef _ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value_H_
#define _ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value_H_


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

class ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value : public Object {
public:
	/*! \brief Constructor.
	 */
	ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value();
	ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getInvoicesId();

	/*! \brief Set 
	 */
	void setInvoicesId(long long  invoices_id);
	/*! \brief Get 
	 */
	std::string getInvoicesDescription();

	/*! \brief Set 
	 */
	void setInvoicesDescription(std::string  invoices_description);
	/*! \brief Get 
	 */
	long long getInvoicesAmount();

	/*! \brief Set 
	 */
	void setInvoicesAmount(long long  invoices_amount);
	/*! \brief Get 
	 */
	std::string getInvoicesDate();

	/*! \brief Set 
	 */
	void setInvoicesDate(std::string  invoices_date);
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

private:
	long long invoices_id;
	std::string invoices_description;
	long long invoices_amount;
	std::string invoices_date;
	std::string invoices_currency;
	std::string currency_symbol;
	std::string invoices_date_formatted;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChargeInvoiceRows_invoices_value_paid_invoices_value_refund_invoices_value_H_ */
