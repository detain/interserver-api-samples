
/*
 * ServersBuyNowResponse_order_details.h
 *
 * Details of the placed order.
 */

#ifndef TINY_CPP_CLIENT_ServersBuyNowResponse_order_details_H_
#define TINY_CPP_CLIENT_ServersBuyNowResponse_order_details_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Details of the placed order.
 *
 *  \ingroup Models
 *
 */

class ServersBuyNowResponse_order_details{
public:

    /*! \brief Constructor.
	 */
    ServersBuyNowResponse_order_details();
    ServersBuyNowResponse_order_details(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServersBuyNowResponse_order_details();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The newly created service ID for the ordered server.
	 */
	long getServiceId();

	/*! \brief Set The newly created service ID for the ordered server.
	 */
	void setServiceId(long service_id);
	/*! \brief Get The invoice ID generated for the order.
	 */
	long getInvoiceId();

	/*! \brief Set The invoice ID generated for the order.
	 */
	void setInvoiceId(long invoice_id);


    private:
    long service_id{};
    long invoice_id{};
};
}

#endif /* TINY_CPP_CLIENT_ServersBuyNowResponse_order_details_H_ */
