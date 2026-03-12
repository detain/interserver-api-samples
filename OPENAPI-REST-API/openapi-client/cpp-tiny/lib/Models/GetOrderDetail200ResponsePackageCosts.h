
/*
 * GetOrderDetail_200_response_packageCosts.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetOrderDetail_200_response_packageCosts_H_
#define TINY_CPP_CLIENT_GetOrderDetail_200_response_packageCosts_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetOrderDetail_200_response_packageCosts{
public:

    /*! \brief Constructor.
	 */
    GetOrderDetail_200_response_packageCosts();
    GetOrderDetail_200_response_packageCosts(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetOrderDetail_200_response_packageCosts();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	long getPackageId();

	/*! \brief Set 
	 */
	void setPackageId(long package_id);
	/*! \brief Get 
	 */
	long getPackageCost();

	/*! \brief Set 
	 */
	void setPackageCost(long package_cost);
	/*! \brief Get 
	 */
	std::string getCurrency();

	/*! \brief Set 
	 */
	void setCurrency(std::string currency);
	/*! \brief Get 
	 */
	std::string getCurrencySymbol();

	/*! \brief Set 
	 */
	void setCurrencySymbol(std::string currencySymbol);


    private:
    long package_id{};
    long package_cost{};
    std::string currency{};
    std::string currencySymbol{};
};
}

#endif /* TINY_CPP_CLIENT_GetOrderDetail_200_response_packageCosts_H_ */
