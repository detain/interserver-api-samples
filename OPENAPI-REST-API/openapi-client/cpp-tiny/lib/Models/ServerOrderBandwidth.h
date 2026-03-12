
/*
 * ServerOrderBandwidth.h
 *
 * A bandwidth option available when ordering a dedicated server.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderBandwidth_H_
#define TINY_CPP_CLIENT_ServerOrderBandwidth_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A bandwidth option available when ordering a dedicated server.
 *
 *  \ingroup Models
 *
 */

class ServerOrderBandwidth{
public:

    /*! \brief Constructor.
	 */
    ServerOrderBandwidth();
    ServerOrderBandwidth(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderBandwidth();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Bandwidth ID.
	 */
	std::string getId();

	/*! \brief Set Bandwidth ID.
	 */
	void setId(std::string id);
	/*! \brief Get Bandwidth price.
	 */
	int getPrice();

	/*! \brief Set Bandwidth price.
	 */
	void setPrice(int price);
	/*! \brief Get Bandwidth image.
	 */
	std::string getImg();

	/*! \brief Set Bandwidth image.
	 */
	void setImg(std::string img);
	/*! \brief Get Short description of the bandwidth.
	 */
	std::string getShortDesc();

	/*! \brief Set Short description of the bandwidth.
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get Long description of the bandwidth.
	 */
	std::string getLongDesc();

	/*! \brief Set Long description of the bandwidth.
	 */
	void setLongDesc(std::string long_desc);
	/*! \brief Get Bandwidth type.
	 */
	std::string getType();

	/*! \brief Set Bandwidth type.
	 */
	void setType(std::string type);
	/*! \brief Get Quantity of bandwidth.
	 */
	std::string getQty();

	/*! \brief Set Quantity of bandwidth.
	 */
	void setQty(std::string qty);
	/*! \brief Get Active status.
	 */
	std::string getActive();

	/*! \brief Set Active status.
	 */
	void setActive(std::string active);
	/*! \brief Get Monthly price.
	 */
	int getMonthlyPrice();

	/*! \brief Set Monthly price.
	 */
	void setMonthlyPrice(int monthly_price);
	/*! \brief Get Display of bandwidth price.
	 */
	std::string getPriceDisplay();

	/*! \brief Set Display of bandwidth price.
	 */
	void setPriceDisplay(std::string price_display);
	/*! \brief Get Display of monthly bandwidth price.
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set Display of monthly bandwidth price.
	 */
	void setMonthlyPriceDisplay(std::string monthly_price_display);


    private:
    std::string id{};
    int price{};
    std::string img{};
    std::string short_desc{};
    std::string long_desc{};
    std::string type{};
    std::string qty{};
    std::string active{};
    int monthly_price{};
    std::string price_display{};
    std::string monthly_price_display{};
};
}

#endif /* TINY_CPP_CLIENT_ServerOrderBandwidth_H_ */
