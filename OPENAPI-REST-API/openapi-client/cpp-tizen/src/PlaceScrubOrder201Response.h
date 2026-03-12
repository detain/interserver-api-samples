/*
 * PlaceScrubOrder_201_response.h
 *
 * 
 */

#ifndef _PlaceScrubOrder_201_response_H_
#define _PlaceScrubOrder_201_response_H_


#include <string>
#include "PlaceScrubOrder_201_response_order_details.h"
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

class PlaceScrubOrder_201_response : public Object {
public:
	/*! \brief Constructor.
	 */
	PlaceScrubOrder_201_response();
	PlaceScrubOrder_201_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~PlaceScrubOrder_201_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	bool getSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool  success);
	/*! \brief Get 
	 */
	std::string getText();

	/*! \brief Set 
	 */
	void setText(std::string  text);
	/*! \brief Get 
	 */
	PlaceScrubOrder_201_response_order_details getOrderDetails();

	/*! \brief Set 
	 */
	void setOrderDetails(PlaceScrubOrder_201_response_order_details  order_details);

private:
	bool success;
	std::string text;
	PlaceScrubOrder_201_response_order_details order_details;
	void __init();
	void __cleanup();

};
}
}

#endif /* _PlaceScrubOrder_201_response_H_ */
