
/*
 * HomeDetailsModulesWebhosting.h
 *
 * Dashboard module configuration for webhosting services.
 */

#ifndef TINY_CPP_CLIENT_HomeDetailsModulesWebhosting_H_
#define TINY_CPP_CLIENT_HomeDetailsModulesWebhosting_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Dashboard module configuration for webhosting services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesWebhosting{
public:

    /*! \brief Constructor.
	 */
    HomeDetailsModulesWebhosting();
    HomeDetailsModulesWebhosting(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeDetailsModulesWebhosting();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The icon for web hosting.
	 */
	std::string getIcon();

	/*! \brief Set The icon for web hosting.
	 */
	void setIcon(std::string icon);
	/*! \brief Get Link to view website.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view website.
	 */
	void setViewLink(std::string view_link);
	/*! \brief Get Heading for web hosting.
	 */
	std::string getHeading();

	/*! \brief Set Heading for web hosting.
	 */
	void setHeading(std::string heading);
	/*! \brief Get Link to order website.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order website.
	 */
	void setBuyLink(std::string buy_link);
	/*! \brief Get Link to view websites list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view websites list.
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

#endif /* TINY_CPP_CLIENT_HomeDetailsModulesWebhosting_H_ */
