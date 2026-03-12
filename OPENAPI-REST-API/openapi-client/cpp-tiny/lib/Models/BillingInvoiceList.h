
/*
 * BillingInvoiceList.h
 *
 * Summary list of invoices for the account.
 */

#ifndef TINY_CPP_CLIENT_BillingInvoiceList_H_
#define TINY_CPP_CLIENT_BillingInvoiceList_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Object.h"
#include <list>

namespace Tiny {


/*! \brief Summary list of invoices for the account.
 *
 *  \ingroup Models
 *
 */

class BillingInvoiceList{
public:

    /*! \brief Constructor.
	 */
    BillingInvoiceList();
    BillingInvoiceList(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BillingInvoiceList();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Invoice rows returned for the account.
	 */
	std::list<Object> getRows();

	/*! \brief Set Invoice rows returned for the account.
	 */
	void setRows(std::list<Object> rows);
	/*! \brief Get Totals and summary data for the invoices list.
	 */
	Object getSummary();

	/*! \brief Set Totals and summary data for the invoices list.
	 */
	void setSummary(Object summary);


    private:
    std::list<Object> rows;
    Object summary;
};
}

#endif /* TINY_CPP_CLIENT_BillingInvoiceList_H_ */
