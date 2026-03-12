
/*
 * ServerOrderIP.h
 *
 * An IP block option available when ordering a dedicated server.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderIP_H_
#define TINY_CPP_CLIENT_ServerOrderIP_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An IP block option available when ordering a dedicated server.
 *
 *  \ingroup Models
 *
 */

class ServerOrderIP{
public:

    /*! \brief Constructor.
	 */
    ServerOrderIP();
    ServerOrderIP(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderIP();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get IP ID.
	 */
	std::string getId();

	/*! \brief Set IP ID.
	 */
	void setId(std::string id);
	/*! \brief Get IP price.
	 */
	int getPrice();

	/*! \brief Set IP price.
	 */
	void setPrice(int price);
	/*! \brief Get IP image.
	 */
	std::string getImg();

	/*! \brief Set IP image.
	 */
	void setImg(std::string img);
	/*! \brief Get Short description of the IP.
	 */
	std::string getShortDesc();

	/*! \brief Set Short description of the IP.
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get Long description of the IP.
	 */
	std::string getLongDesc();

	/*! \brief Set Long description of the IP.
	 */
	void setLongDesc(std::string long_desc);
	/*! \brief Get Quantity of IPs.
	 */
	std::string getQty();

	/*! \brief Set Quantity of IPs.
	 */
	void setQty(std::string qty);
	/*! \brief Get Monthly price.
	 */
	int getMonthlyPrice();

	/*! \brief Set Monthly price.
	 */
	void setMonthlyPrice(int monthly_price);
	/*! \brief Get Display of IP price.
	 */
	std::string getPriceDisplay();

	/*! \brief Set Display of IP price.
	 */
	void setPriceDisplay(std::string price_display);
	/*! \brief Get Display of monthly IP price.
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set Display of monthly IP price.
	 */
	void setMonthlyPriceDisplay(std::string monthly_price_display);


    private:
    std::string id{};
    int price{};
    std::string img{};
    std::string short_desc{};
    std::string long_desc{};
    std::string qty{};
    int monthly_price{};
    std::string price_display{};
    std::string monthly_price_display{};
};
}

#endif /* TINY_CPP_CLIENT_ServerOrderIP_H_ */
