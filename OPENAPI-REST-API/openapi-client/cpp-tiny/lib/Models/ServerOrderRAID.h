
/*
 * ServerOrderRAID.h
 *
 * A RAID configuration option available when ordering a dedicated server.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderRAID_H_
#define TINY_CPP_CLIENT_ServerOrderRAID_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A RAID configuration option available when ordering a dedicated server.
 *
 *  \ingroup Models
 *
 */

class ServerOrderRAID{
public:

    /*! \brief Constructor.
	 */
    ServerOrderRAID();
    ServerOrderRAID(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderRAID();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get RAID ID.
	 */
	std::string getId();

	/*! \brief Set RAID ID.
	 */
	void setId(std::string id);
	/*! \brief Get RAID price.
	 */
	int getPrice();

	/*! \brief Set RAID price.
	 */
	void setPrice(int price);
	/*! \brief Get RAID image.
	 */
	std::string getImg();

	/*! \brief Set RAID image.
	 */
	void setImg(std::string img);
	/*! \brief Get Short description of the RAID.
	 */
	std::string getShortDesc();

	/*! \brief Set Short description of the RAID.
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get Long description of the RAID.
	 */
	std::string getLongDesc();

	/*! \brief Set Long description of the RAID.
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
	/*! \brief Get Display of RAID price.
	 */
	std::string getPriceDisplay();

	/*! \brief Set Display of RAID price.
	 */
	void setPriceDisplay(std::string price_display);
	/*! \brief Get Display of monthly RAID price.
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set Display of monthly RAID price.
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

#endif /* TINY_CPP_CLIENT_ServerOrderRAID_H_ */
