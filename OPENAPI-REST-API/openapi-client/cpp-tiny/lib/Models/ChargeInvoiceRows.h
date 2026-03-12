
/*
 * ChargeInvoiceRows.h
 *
 * Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 */

#ifndef TINY_CPP_CLIENT_ChargeInvoiceRows_H_
#define TINY_CPP_CLIENT_ChargeInvoiceRows_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ChargeInvoiceRows_invoices_value.h"
#include <map>

namespace Tiny {


/*! \brief Billing invoices associated with a service, including invoice IDs, descriptions, amounts, and payment status.
 *
 *  \ingroup Models
 *
 */

class ChargeInvoiceRows{
public:

    /*! \brief Constructor.
	 */
    ChargeInvoiceRows();
    ChargeInvoiceRows(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ChargeInvoiceRows();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Whether the invoice retrieval was successful.
	 */
	bool isSuccess();

	/*! \brief Set Whether the invoice retrieval was successful.
	 */
	void setSuccess(bool success);
	/*! \brief Get List of invoices for the service.
	 */
	std::map<std::string, ChargeInvoiceRows_invoices_value> getInvoices();

	/*! \brief Set List of invoices for the service.
	 */
	void setInvoices(std::map<std::string, ChargeInvoiceRows_invoices_value> invoices);


    private:
    bool success{};
    std::map<std::string, ChargeInvoiceRows_invoices_value> invoices;
};
}

#endif /* TINY_CPP_CLIENT_ChargeInvoiceRows_H_ */
