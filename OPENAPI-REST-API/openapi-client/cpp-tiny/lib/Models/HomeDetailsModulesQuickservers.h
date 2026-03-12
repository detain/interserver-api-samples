
/*
 * HomeDetailsModulesQuickservers.h
 *
 * Dashboard module configuration for QuickServer services.
 */

#ifndef TINY_CPP_CLIENT_HomeDetailsModulesQuickservers_H_
#define TINY_CPP_CLIENT_HomeDetailsModulesQuickservers_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Dashboard module configuration for QuickServer services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesQuickservers{
public:

    /*! \brief Constructor.
	 */
    HomeDetailsModulesQuickservers();
    HomeDetailsModulesQuickservers(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeDetailsModulesQuickservers();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The icon for quick servers.
	 */
	std::string getIcon();

	/*! \brief Set The icon for quick servers.
	 */
	void setIcon(std::string icon);
	/*! \brief Get Link to view quick servers.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view quick servers.
	 */
	void setViewLink(std::string view_link);
	/*! \brief Get Heading for quick servers.
	 */
	std::string getHeading();

	/*! \brief Set Heading for quick servers.
	 */
	void setHeading(std::string heading);
	/*! \brief Get Link to order quick server.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order quick server.
	 */
	void setBuyLink(std::string buy_link);
	/*! \brief Get Link to view quick servers list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view quick servers list.
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

#endif /* TINY_CPP_CLIENT_HomeDetailsModulesQuickservers_H_ */
