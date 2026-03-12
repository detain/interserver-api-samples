/*
 * ServersBuyNowResponse.h
 *
 * Success response after placing a buy-it-now dedicated server order.
 */

#ifndef _ServersBuyNowResponse_H_
#define _ServersBuyNowResponse_H_


#include <string>
#include "ServersBuyNowResponse_order_details.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Success response after placing a buy-it-now dedicated server order.
 *
 *  \ingroup Models
 *
 */

class ServersBuyNowResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	ServersBuyNowResponse();
	ServersBuyNowResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServersBuyNowResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Whether the order was placed successfully.
	 */
	bool getSuccess();

	/*! \brief Set Whether the order was placed successfully.
	 */
	void setSuccess(bool  success);
	/*! \brief Get Human-readable status message.
	 */
	std::string getText();

	/*! \brief Set Human-readable status message.
	 */
	void setText(std::string  text);
	/*! \brief Get 
	 */
	ServersBuyNowResponse_order_details getOrderDetails();

	/*! \brief Set 
	 */
	void setOrderDetails(ServersBuyNowResponse_order_details  order_details);

private:
	bool success;
	std::string text;
	ServersBuyNowResponse_order_details order_details;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServersBuyNowResponse_H_ */
