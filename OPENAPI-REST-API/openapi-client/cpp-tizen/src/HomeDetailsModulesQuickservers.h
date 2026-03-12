/*
 * HomeDetailsModulesQuickservers.h
 *
 * Dashboard module configuration for QuickServer services.
 */

#ifndef _HomeDetailsModulesQuickservers_H_
#define _HomeDetailsModulesQuickservers_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Dashboard module configuration for QuickServer services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesQuickservers : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeDetailsModulesQuickservers();
	HomeDetailsModulesQuickservers(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeDetailsModulesQuickservers();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The icon for quick servers.
	 */
	std::string getIcon();

	/*! \brief Set The icon for quick servers.
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Link to view quick servers.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view quick servers.
	 */
	void setViewLink(std::string  view_link);
	/*! \brief Get Heading for quick servers.
	 */
	std::string getHeading();

	/*! \brief Set Heading for quick servers.
	 */
	void setHeading(std::string  heading);
	/*! \brief Get Link to order quick server.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order quick server.
	 */
	void setBuyLink(std::string  buy_link);
	/*! \brief Get Link to view quick servers list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view quick servers list.
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

#endif /* _HomeDetailsModulesQuickservers_H_ */
