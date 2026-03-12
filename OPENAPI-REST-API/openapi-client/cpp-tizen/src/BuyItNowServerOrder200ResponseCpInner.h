/*
 * BuyItNowServerOrder_200_response_cp_inner.h
 *
 * 
 */

#ifndef _BuyItNowServerOrder_200_response_cp_inner_H_
#define _BuyItNowServerOrder_200_response_cp_inner_H_


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

class BuyItNowServerOrder_200_response_cp_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	BuyItNowServerOrder_200_response_cp_inner();
	BuyItNowServerOrder_200_response_cp_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BuyItNowServerOrder_200_response_cp_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string  short_desc);
	/*! \brief Get 
	 */
	std::string getLongDesc();

	/*! \brief Set 
	 */
	void setLongDesc(std::string  long_desc);
	/*! \brief Get 
	 */
	std::string getOsType();

	/*! \brief Set 
	 */
	void setOsType(std::string  os_type);
	/*! \brief Get 
	 */
	std::string getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(std::string  monthly_price);

private:
	std::string id;
	std::string short_desc;
	std::string long_desc;
	std::string os_type;
	std::string monthly_price;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BuyItNowServerOrder_200_response_cp_inner_H_ */
