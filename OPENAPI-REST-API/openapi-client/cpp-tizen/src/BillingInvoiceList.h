/*
 * BillingInvoiceList.h
 *
 * Summary list of invoices for the account.
 */

#ifndef _BillingInvoiceList_H_
#define _BillingInvoiceList_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Summary list of invoices for the account.
 *
 *  \ingroup Models
 *
 */

class BillingInvoiceList : public Object {
public:
	/*! \brief Constructor.
	 */
	BillingInvoiceList();
	BillingInvoiceList(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BillingInvoiceList();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Invoice rows returned for the account.
	 */
	std::list<std::string> getRows();

	/*! \brief Set Invoice rows returned for the account.
	 */
	void setRows(std::list <std::string> rows);
	/*! \brief Get Totals and summary data for the invoices list.
	 */
	std::string getSummary();

	/*! \brief Set Totals and summary data for the invoices list.
	 */
	void setSummary(std::string  summary);

private:
	std::list <std::string>rows;
	std::string summary;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BillingInvoiceList_H_ */
