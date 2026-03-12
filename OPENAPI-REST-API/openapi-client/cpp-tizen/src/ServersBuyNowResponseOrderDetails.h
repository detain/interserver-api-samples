/*
 * ServersBuyNowResponse_order_details.h
 *
 * Details of the placed order.
 */

#ifndef _ServersBuyNowResponse_order_details_H_
#define _ServersBuyNowResponse_order_details_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Details of the placed order.
 *
 *  \ingroup Models
 *
 */

class ServersBuyNowResponse_order_details : public Object {
public:
	/*! \brief Constructor.
	 */
	ServersBuyNowResponse_order_details();
	ServersBuyNowResponse_order_details(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServersBuyNowResponse_order_details();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The newly created service ID for the ordered server.
	 */
	long long getServiceId();

	/*! \brief Set The newly created service ID for the ordered server.
	 */
	void setServiceId(long long  service_id);
	/*! \brief Get The invoice ID generated for the order.
	 */
	long long getInvoiceId();

	/*! \brief Set The invoice ID generated for the order.
	 */
	void setInvoiceId(long long  invoice_id);

private:
	long long service_id;
	long long invoice_id;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServersBuyNowResponse_order_details_H_ */
