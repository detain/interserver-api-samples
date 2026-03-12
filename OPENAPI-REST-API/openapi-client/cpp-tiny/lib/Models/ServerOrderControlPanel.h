
/*
 * ServerOrderControlPanel.h
 *
 * A control panel option available when ordering a dedicated server.
 */

#ifndef TINY_CPP_CLIENT_ServerOrderControlPanel_H_
#define TINY_CPP_CLIENT_ServerOrderControlPanel_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief A control panel option available when ordering a dedicated server.
 *
 *  \ingroup Models
 *
 */

class ServerOrderControlPanel{
public:

    /*! \brief Constructor.
	 */
    ServerOrderControlPanel();
    ServerOrderControlPanel(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrderControlPanel();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Control Panel ID.
	 */
	std::string getId();

	/*! \brief Set Control Panel ID.
	 */
	void setId(std::string id);
	/*! \brief Get Control Panel price.
	 */
	int getPrice();

	/*! \brief Set Control Panel price.
	 */
	void setPrice(int price);
	/*! \brief Get Control Panel image.
	 */
	std::string getImg();

	/*! \brief Set Control Panel image.
	 */
	void setImg(std::string img);
	/*! \brief Get Short description of the control panel.
	 */
	std::string getShortDesc();

	/*! \brief Set Short description of the control panel.
	 */
	void setShortDesc(std::string short_desc);
	/*! \brief Get Long description of the control panel.
	 */
	std::string getLongDesc();

	/*! \brief Set Long description of the control panel.
	 */
	void setLongDesc(std::string long_desc);
	/*! \brief Get OS types compatible with the control panel.
	 */
	std::string getOsType();

	/*! \brief Set OS types compatible with the control panel.
	 */
	void setOsType(std::string os_type);
	/*! \brief Get Monthly price.
	 */
	int getMonthlyPrice();

	/*! \brief Set Monthly price.
	 */
	void setMonthlyPrice(int monthly_price);
	/*! \brief Get List of types.
	 */
	std::list<std::string> getTypes();

	/*! \brief Set List of types.
	 */
	void setTypes(std::list<std::string> types);
	/*! \brief Get Display of control panel price.
	 */
	std::string getPriceDisplay();

	/*! \brief Set Display of control panel price.
	 */
	void setPriceDisplay(std::string price_display);
	/*! \brief Get Display of monthly control panel price.
	 */
	std::string getMonthlyPriceDisplay();

	/*! \brief Set Display of monthly control panel price.
	 */
	void setMonthlyPriceDisplay(std::string monthly_price_display);


    private:
    std::string id{};
    int price{};
    std::string img{};
    std::string short_desc{};
    std::string long_desc{};
    std::string os_type{};
    int monthly_price{};
    std::list<std::string> types;
    std::string price_display{};
    std::string monthly_price_display{};
};
}

#endif /* TINY_CPP_CLIENT_ServerOrderControlPanel_H_ */
