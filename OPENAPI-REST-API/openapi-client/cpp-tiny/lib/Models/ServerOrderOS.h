
/*
 * ServerOrderOS.h
 *
 * An operating system option available when ordering a dedicated server.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderOS_H_
#define TINY_CPP_CLIENT_ServerOrderOS_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An operating system option available when ordering a dedicated server.
 *
 *  \ingroup Models
 *
 */

class ServerOrderOS{
public:

    /*! \brief Constructor.
	 */
    ServerOrderOS();
    ServerOrderOS(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderOS();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Operating System ID.
	 */
	std::string getId();

	/*! \brief Set Operating System ID.
	 */
	void setId(std::string id);
	/*! \brief Get Operating System price.
	 */
	int getPrice();

	/*! \brief Set Operating System price.
	 */
	void setPrice(int price);
	/*! \brief Get Operating System image.
	 */
	std::string getImg();

	/*! \brief Set Operating System image.
	 */
	void setImg(std::string img);
	/*! \brief Get Short description of the OS.
	 */
	std::string getShortDesc();

	/*! \brief Set Short description of the OS.
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get Long description of the OS.
	 */
	std::string getLongDesc();

	/*! \brief Set Long description of the OS.
	 */
	void setLongDesc(std::string long_desc);
	/*! \brief Get Monthly price.
	 */
	int getMonthlyPrice();

	/*! \brief Set Monthly price.
	 */
	void setMonthlyPrice(int monthly_price);
	/*! \brief Get Active status.
	 */
	std::string getActive();

	/*! \brief Set Active status.
	 */
	void setActive(std::string active);
	/*! \brief Get Display of OS price.
	 */
	std::string getPriceDisplay();

	/*! \brief Set Display of OS price.
	 */
	void setPriceDisplay(std::string price_display);
	/*! \brief Get Display of monthly OS price.
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set Display of monthly OS price.
	 */
	void setMonthlyPriceDisplay(std::string monthly_price_display);


    private:
    std::string id{};
    int price{};
    std::string img{};
    std::string short_desc{};
    std::string long_desc{};
    int monthly_price{};
    std::string active{};
    std::string price_display{};
    std::string monthly_price_display{};
};
}

#endif /* TINY_CPP_CLIENT_ServerOrderOS_H_ */
