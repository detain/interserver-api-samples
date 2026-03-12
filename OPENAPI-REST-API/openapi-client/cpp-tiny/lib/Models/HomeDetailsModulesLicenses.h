
/*
 * HomeDetailsModulesLicenses.h
 *
 * Dashboard module configuration for software license services.
 */

#ifndef TINY_CPP_CLIENT_HomeDetailsModulesLicenses_H_
#define TINY_CPP_CLIENT_HomeDetailsModulesLicenses_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Dashboard module configuration for software license services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesLicenses{
public:

    /*! \brief Constructor.
	 */
    HomeDetailsModulesLicenses();
    HomeDetailsModulesLicenses(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeDetailsModulesLicenses();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The icon for licenses.
	 */
	std::string getIcon();

	/*! \brief Set The icon for licenses.
	 */
	void setIcon(std::string icon);
	/*! \brief Get Link to view license.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view license.
	 */
	void setViewLink(std::string view_link);
	/*! \brief Get Heading for licenses.
	 */
	std::string getHeading();

	/*! \brief Set Heading for licenses.
	 */
	void setHeading(std::string heading);
	/*! \brief Get Link to order license.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order license.
	 */
	void setBuyLink(std::string buy_link);
	/*! \brief Get Link to view licenses list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view licenses list.
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

#endif /* TINY_CPP_CLIENT_HomeDetailsModulesLicenses_H_ */
