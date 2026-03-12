
/*
 * PlaceScrubOrder_201_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PlaceScrubOrder_201_response_H_
#define TINY_CPP_CLIENT_PlaceScrubOrder_201_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "PlaceScrubOrder_201_response_order_details.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PlaceScrubOrder_201_response{
public:

    /*! \brief Constructor.
	 */
    PlaceScrubOrder_201_response();
    PlaceScrubOrder_201_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PlaceScrubOrder_201_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	bool isSuccess();

	/*! \brief Set 
	 */
	void setSuccess(bool success);
	/*! \brief Get 
	 */
	std::string getText();

	/*! \brief Set 
	 */
	void setText(std::string text);
	/*! \brief Get 
	 */
	PlaceScrubOrder_201_response_order_details getOrderDetails();

	/*! \brief Set 
	 */
	void setOrderDetails(PlaceScrubOrder_201_response_order_details order_details);


    private:
    bool success{};
    std::string text{};
    PlaceScrubOrder_201_response_order_details order_details;
};
}

#endif /* TINY_CPP_CLIENT_PlaceScrubOrder_201_response_H_ */
