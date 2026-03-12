/*
 * Bandwidth.h
 *
 * A bandwidth option available for a dedicated server configuration.
 */

#ifndef _Bandwidth_H_
#define _Bandwidth_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A bandwidth option available for a dedicated server configuration.
 *
 *  \ingroup Models
 *
 */

class Bandwidth : public Object {
public:
	/*! \brief Constructor.
	 */
	Bandwidth();
	Bandwidth(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Bandwidth();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int  id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string  short_desc);
	/*! \brief Get 
	 */
	long long getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(long long  monthly_price);
	/*! \brief Get 
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set 
	 */
	void setMonthlyPriceDisplay(std::string  monthly_price_display);

private:
	int id;
	std::string short_desc;
	long long monthly_price;
	std::string monthly_price_display;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Bandwidth_H_ */
