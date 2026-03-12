
/*
 * HomeDetailsModulesBackups.h
 *
 * Dashboard module configuration for backup storage services.
 */

#ifndef TINY_CPP_CLIENT_HomeDetailsModulesBackups_H_
#define TINY_CPP_CLIENT_HomeDetailsModulesBackups_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Dashboard module configuration for backup storage services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesBackups{
public:

    /*! \brief Constructor.
	 */
    HomeDetailsModulesBackups();
    HomeDetailsModulesBackups(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeDetailsModulesBackups();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The icon for storages.
	 */
	std::string getIcon();

	/*! \brief Set The icon for storages.
	 */
	void setIcon(std::string icon);
	/*! \brief Get Link to view backup.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view backup.
	 */
	void setViewLink(std::string view_link);
	/*! \brief Get Heading for storages.
	 */
	std::string getHeading();

	/*! \brief Set Heading for storages.
	 */
	void setHeading(std::string heading);
	/*! \brief Get Link to order storage.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order storage.
	 */
	void setBuyLink(std::string buy_link);
	/*! \brief Get Link to view backups list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view backups list.
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

#endif /* TINY_CPP_CLIENT_HomeDetailsModulesBackups_H_ */
