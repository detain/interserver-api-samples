
/*
 * ServersBuyNowResponse.h
 *
 * Success response after placing a buy-it-now dedicated server order.
 */

#ifndef TINY_CPP_CLIENT_ServersBuyNowResponse_H_
#define TINY_CPP_CLIENT_ServersBuyNowResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServersBuyNowResponse_order_details.h"

namespace Tiny {


/*! \brief Success response after placing a buy-it-now dedicated server order.
 *
 *  \ingroup Models
 *
 */

class ServersBuyNowResponse{
public:

    /*! \brief Constructor.
	 */
    ServersBuyNowResponse();
    ServersBuyNowResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServersBuyNowResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Whether the order was placed successfully.
	 */
	bool isSuccess();

	/*! \brief Set Whether the order was placed successfully.
	 */
	void setSuccess(bool success);
	/*! \brief Get Human-readable status message.
	 */
	std::string getText();

	/*! \brief Set Human-readable status message.
	 */
	void setText(std::string text);
	/*! \brief Get 
	 */
	ServersBuyNowResponse_order_details getOrderDetails();

	/*! \brief Set 
	 */
	void setOrderDetails(ServersBuyNowResponse_order_details order_details);


    private:
    bool success{};
    std::string text{};
    ServersBuyNowResponse_order_details order_details;
};
}

#endif /* TINY_CPP_CLIENT_ServersBuyNowResponse_H_ */
