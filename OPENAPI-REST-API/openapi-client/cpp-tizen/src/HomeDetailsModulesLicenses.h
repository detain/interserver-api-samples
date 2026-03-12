/*
 * HomeDetailsModulesLicenses.h
 *
 * Dashboard module configuration for software license services.
 */

#ifndef _HomeDetailsModulesLicenses_H_
#define _HomeDetailsModulesLicenses_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Dashboard module configuration for software license services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesLicenses : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeDetailsModulesLicenses();
	HomeDetailsModulesLicenses(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeDetailsModulesLicenses();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The icon for licenses.
	 */
	std::string getIcon();

	/*! \brief Set The icon for licenses.
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Link to view license.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view license.
	 */
	void setViewLink(std::string  view_link);
	/*! \brief Get Heading for licenses.
	 */
	std::string getHeading();

	/*! \brief Set Heading for licenses.
	 */
	void setHeading(std::string  heading);
	/*! \brief Get Link to order license.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order license.
	 */
	void setBuyLink(std::string  buy_link);
	/*! \brief Get Link to view licenses list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view licenses list.
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

#endif /* _HomeDetailsModulesLicenses_H_ */
