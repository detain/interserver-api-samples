
/*
 * HomeDetailsModulesServers.h
 *
 * Dashboard module configuration for dedicated server services.
 */

#ifndef TINY_CPP_CLIENT_HomeDetailsModulesServers_H_
#define TINY_CPP_CLIENT_HomeDetailsModulesServers_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Dashboard module configuration for dedicated server services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesServers{
public:

    /*! \brief Constructor.
	 */
    HomeDetailsModulesServers();
    HomeDetailsModulesServers(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeDetailsModulesServers();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The icon for dedicated servers.
	 */
	std::string getIcon();

	/*! \brief Set The icon for dedicated servers.
	 */
	void setIcon(std::string icon);
	/*! \brief Get Link to view server.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view server.
	 */
	void setViewLink(std::string view_link);
	/*! \brief Get Heading for dedicated servers.
	 */
	std::string getHeading();

	/*! \brief Set Heading for dedicated servers.
	 */
	void setHeading(std::string heading);
	/*! \brief Get Link to order server.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order server.
	 */
	void setBuyLink(std::string buy_link);
	/*! \brief Get Link to view servers list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view servers list.
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

#endif /* TINY_CPP_CLIENT_HomeDetailsModulesServers_H_ */
