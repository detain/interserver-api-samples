/*
 * BillingInvoiceDetail.h
 *
 * Detailed invoice data payload returned for a single invoice.
 */

#ifndef _BillingInvoiceDetail_H_
#define _BillingInvoiceDetail_H_


#include <string>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Detailed invoice data payload returned for a single invoice.
 *
 *  \ingroup Models
 *
 */

class BillingInvoiceDetail : public Object {
public:
	/*! \brief Constructor.
	 */
	BillingInvoiceDetail();
	BillingInvoiceDetail(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BillingInvoiceDetail();

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

#endif /* _BillingInvoiceDetail_H_ */
