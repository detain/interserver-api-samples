/*
 * ChargeInvoiceRows.h
 *
 * Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 */

#ifndef _ChargeInvoiceRows_H_
#define _ChargeInvoiceRows_H_


#include <string>
#include "ChargeInvoiceRows_invoices_value.h"
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 *
 *  \ingroup Models
 *
 */

class ChargeInvoiceRows : public Object {
public:
	/*! \brief Constructor.
	 */
	ChargeInvoiceRows();
	ChargeInvoiceRows(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ChargeInvoiceRows();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the invoice retrieval was successful.
	 */
	bool getSuccess();

	/*! \brief Set Whether the invoice retrieval was successful.
	 */
	void setSuccess(bool  success);
	/*! \brief Get List of invoices for the service.
	 */
	std::map<std::string, std::string> getInvoices();

	/*! \brief Set List of invoices for the service.
	 */
	void setInvoices(std::map <std::string, std::string> invoices);

private:
	bool success;
	std::map <std::string, std::string>invoices;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ChargeInvoiceRows_H_ */
