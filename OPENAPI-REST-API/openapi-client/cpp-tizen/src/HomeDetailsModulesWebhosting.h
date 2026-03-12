/*
 * HomeDetailsModulesWebhosting.h
 *
 * Dashboard module configuration for webhosting services.
 */

#ifndef _HomeDetailsModulesWebhosting_H_
#define _HomeDetailsModulesWebhosting_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Dashboard module configuration for webhosting services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesWebhosting : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeDetailsModulesWebhosting();
	HomeDetailsModulesWebhosting(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeDetailsModulesWebhosting();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The icon for web hosting.
	 */
	std::string getIcon();

	/*! \brief Set The icon for web hosting.
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Link to view website.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view website.
	 */
	void setViewLink(std::string  view_link);
	/*! \brief Get Heading for web hosting.
	 */
	std::string getHeading();

	/*! \brief Set Heading for web hosting.
	 */
	void setHeading(std::string  heading);
	/*! \brief Get Link to order website.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order website.
	 */
	void setBuyLink(std::string  buy_link);
	/*! \brief Get Link to view websites list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view websites list.
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

#endif /* _HomeDetailsModulesWebhosting_H_ */
