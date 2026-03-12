
/*
 * Bandwidth.h
 *
 * A bandwidth option available for a dedicated server configuration.
 */

#ifndef TINY_CPP_CLIENT_Bandwidth_H_
#define TINY_CPP_CLIENT_Bandwidth_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A bandwidth option available for a dedicated server configuration.
 *
 *  \ingroup Models
 *
 */

class Bandwidth{
public:

    /*! \brief Constructor.
	 */
    Bandwidth();
    Bandwidth(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Bandwidth();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getId();

	/*! \brief Set 
	 */
	void setId(int id);
	/*! \brief Get 
	 */
	std::string getShortDesc();

	/*! \brief Set 
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get 
	 */
	long getMonthlyPrice();

	/*! \brief Set 
	 */
	void setMonthlyPrice(long monthly_price);
	/*! \brief Get 
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set 
	 */
	void setMonthlyPriceDisplay(std::string monthly_price_display);


    private:
    int id{};
    std::string short_desc{};
    long monthly_price{};
    std::string monthly_price_display{};
};
}

#endif /* TINY_CPP_CLIENT_Bandwidth_H_ */
