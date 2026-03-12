
/*
 * HomeDetailsModulesDomains.h
 *
 * Dashboard module configuration for domain registration services.
 */

#ifndef TINY_CPP_CLIENT_HomeDetailsModulesDomains_H_
#define TINY_CPP_CLIENT_HomeDetailsModulesDomains_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Dashboard module configuration for domain registration services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesDomains{
public:

    /*! \brief Constructor.
	 */
    HomeDetailsModulesDomains();
    HomeDetailsModulesDomains(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeDetailsModulesDomains();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The icon for domains.
	 */
	std::string getIcon();

	/*! \brief Set The icon for domains.
	 */
	void setIcon(std::string icon);
	/*! \brief Get Link to view domain.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view domain.
	 */
	void setViewLink(std::string view_link);
	/*! \brief Get Heading for domains.
	 */
	std::string getHeading();

	/*! \brief Set Heading for domains.
	 */
	void setHeading(std::string heading);
	/*! \brief Get Link to order domain.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order domain.
	 */
	void setBuyLink(std::string buy_link);
	/*! \brief Get Link to view domains list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view domains list.
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

#endif /* TINY_CPP_CLIENT_HomeDetailsModulesDomains_H_ */
