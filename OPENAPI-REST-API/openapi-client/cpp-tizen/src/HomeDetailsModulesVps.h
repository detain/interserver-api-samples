/*
 * HomeDetailsModulesVps.h
 *
 * Dashboard module configuration for VPS services.
 */

#ifndef _HomeDetailsModulesVps_H_
#define _HomeDetailsModulesVps_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Dashboard module configuration for VPS services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesVps : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeDetailsModulesVps();
	HomeDetailsModulesVps(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeDetailsModulesVps();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The icon for VPS.
	 */
	std::string getIcon();

	/*! \brief Set The icon for VPS.
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Link to view VPS.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view VPS.
	 */
	void setViewLink(std::string  view_link);
	/*! \brief Get Heading for VPS.
	 */
	std::string getHeading();

	/*! \brief Set Heading for VPS.
	 */
	void setHeading(std::string  heading);
	/*! \brief Get Link to order VPS.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order VPS.
	 */
	void setBuyLink(std::string  buy_link);
	/*! \brief Get Link to view VPS list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view VPS list.
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

#endif /* _HomeDetailsModulesVps_H_ */
