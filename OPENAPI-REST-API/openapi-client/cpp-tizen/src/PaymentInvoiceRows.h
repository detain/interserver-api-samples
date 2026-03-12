/*
 * PaymentInvoiceRows.h
 *
 * 
 */

#ifndef _PaymentInvoiceRows_H_
#define _PaymentInvoiceRows_H_


#include <string>
#include "InvoiceRow.h"
#include <list>
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

class PaymentInvoiceRows : public Object {
public:
	/*! \brief Constructor.
	 */
	PaymentInvoiceRows();
	PaymentInvoiceRows(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PaymentInvoiceRows();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _PaymentInvoiceRows_H_ */
