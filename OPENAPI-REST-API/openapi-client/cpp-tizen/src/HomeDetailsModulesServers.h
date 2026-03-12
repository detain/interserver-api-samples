/*
 * HomeDetailsModulesServers.h
 *
 * Dashboard module configuration for dedicated server services.
 */

#ifndef _HomeDetailsModulesServers_H_
#define _HomeDetailsModulesServers_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Dashboard module configuration for dedicated server services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesServers : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeDetailsModulesServers();
	HomeDetailsModulesServers(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeDetailsModulesServers();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The icon for dedicated servers.
	 */
	std::string getIcon();

	/*! \brief Set The icon for dedicated servers.
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Link to view server.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view server.
	 */
	void setViewLink(std::string  view_link);
	/*! \brief Get Heading for dedicated servers.
	 */
	std::string getHeading();

	/*! \brief Set Heading for dedicated servers.
	 */
	void setHeading(std::string  heading);
	/*! \brief Get Link to order server.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order server.
	 */
	void setBuyLink(std::string  buy_link);
	/*! \brief Get Link to view servers list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view servers list.
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

#endif /* _HomeDetailsModulesServers_H_ */
