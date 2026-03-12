
/*
 * HomeDetailsModulesVps.h
 *
 * Dashboard module configuration for VPS services.
 */

#ifndef TINY_CPP_CLIENT_HomeDetailsModulesVps_H_
#define TINY_CPP_CLIENT_HomeDetailsModulesVps_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Dashboard module configuration for VPS services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesVps{
public:

    /*! \brief Constructor.
	 */
    HomeDetailsModulesVps();
    HomeDetailsModulesVps(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeDetailsModulesVps();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The icon for VPS.
	 */
	std::string getIcon();

	/*! \brief Set The icon for VPS.
	 */
	void setIcon(std::string icon);
	/*! \brief Get Link to view VPS.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view VPS.
	 */
	void setViewLink(std::string view_link);
	/*! \brief Get Heading for VPS.
	 */
	std::string getHeading();

	/*! \brief Set Heading for VPS.
	 */
	void setHeading(std::string heading);
	/*! \brief Get Link to order VPS.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order VPS.
	 */
	void setBuyLink(std::string buy_link);
	/*! \brief Get Link to view VPS list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view VPS list.
	 */
	void setListLink(std::string list_link);


    private:
    std::string icon{};
    std::string view_link{};
    std::string heading{};
    std::string buy_link{};
    std::string list_link{};
};
}

#endif /* TINY_CPP_CLIENT_HomeDetailsModulesVps_H_ */
