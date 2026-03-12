/*
 * GetOrderDetail_200_response_packageCosts.h
 *
 * 
 */

#ifndef _GetOrderDetail_200_response_packageCosts_H_
#define _GetOrderDetail_200_response_packageCosts_H_


#include <string>
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

class GetOrderDetail_200_response_packageCosts : public Object {
public:
	/*! \brief Constructor.
	 */
	GetOrderDetail_200_response_packageCosts();
	GetOrderDetail_200_response_packageCosts(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetOrderDetail_200_response_packageCosts();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getPackageId();

	/*! \brief Set 
	 */
	void setPackageId(long long  package_id);
	/*! \brief Get 
	 */
	long long getPackageCost();

	/*! \brief Set 
	 */
	void setPackageCost(long long  package_cost);
	/*! \brief Get 
	 */
	std::string getCurrency();

	/*! \brief Set 
	 */
	void setCurrency(std::string  currency);
	/*! \brief Get 
	 */
	std::string getCurrencySymbol();

	/*! \brief Set 
	 */
	void setCurrencySymbol(std::string  currencySymbol);

private:
	long long package_id;
	long long package_cost;
	std::string currency;
	std::string currencySymbol;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetOrderDetail_200_response_packageCosts_H_ */
