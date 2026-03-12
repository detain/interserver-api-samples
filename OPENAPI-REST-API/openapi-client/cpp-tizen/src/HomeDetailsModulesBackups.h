/*
 * HomeDetailsModulesBackups.h
 *
 * Dashboard module configuration for backup storage services.
 */

#ifndef _HomeDetailsModulesBackups_H_
#define _HomeDetailsModulesBackups_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Dashboard module configuration for backup storage services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesBackups : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeDetailsModulesBackups();
	HomeDetailsModulesBackups(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeDetailsModulesBackups();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The icon for storages.
	 */
	std::string getIcon();

	/*! \brief Set The icon for storages.
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Link to view backup.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view backup.
	 */
	void setViewLink(std::string  view_link);
	/*! \brief Get Heading for storages.
	 */
	std::string getHeading();

	/*! \brief Set Heading for storages.
	 */
	void setHeading(std::string  heading);
	/*! \brief Get Link to order storage.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order storage.
	 */
	void setBuyLink(std::string  buy_link);
	/*! \brief Get Link to view backups list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view backups list.
	 */
	void setListLink(std::string  list_link);

private:
	std::string icon;
	std::string view_link;
	std::string heading;
	std::string buy_link;
	std::string list_link;
	void __init();
	void __cleanup();

};
}
}

#endif /* _HomeDetailsModulesBackups_H_ */
