
/*
 * BuyItNowServerOrder_200_response_bandwidth_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_BuyItNowServerOrder_200_response_bandwidth_inner_H_
#define TINY_CPP_CLIENT_BuyItNowServerOrder_200_response_bandwidth_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BuyItNowServerOrder_200_response_bandwidth_inner{
public:

    /*! \brief Constructor.
	 */
    BuyItNowServerOrder_200_response_bandwidth_inner();
    BuyItNowServerOrder_200_response_bandwidth_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BuyItNowServerOrder_200_response_bandwidth_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get 
	 */
	std::string getLongDesc();

	/*! \brief Set 
	 */
	void setLongDesc(std::string long_desc);
	/*! \brief Get 
	 */
	std::string getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(std::string monthly_price);


    private:
    std::string id{};
    std::string short_desc{};
    std::string long_desc{};
    std::string monthly_price{};
};
}

#endif /* TINY_CPP_CLIENT_BuyItNowServerOrder_200_response_bandwidth_inner_H_ */
