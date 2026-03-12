/*
 * HomeDetailsModulesDomains.h
 *
 * Dashboard module configuration for domain registration services.
 */

#ifndef _HomeDetailsModulesDomains_H_
#define _HomeDetailsModulesDomains_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Dashboard module configuration for domain registration services.
 *
 *  \ingroup Models
 *
 */

class HomeDetailsModulesDomains : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeDetailsModulesDomains();
	HomeDetailsModulesDomains(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeDetailsModulesDomains();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The icon for domains.
	 */
	std::string getIcon();

	/*! \brief Set The icon for domains.
	 */
	void setIcon(std::string  icon);
	/*! \brief Get Link to view domain.
	 */
	std::string getViewLink();

	/*! \brief Set Link to view domain.
	 */
	void setViewLink(std::string  view_link);
	/*! \brief Get Heading for domains.
	 */
	std::string getHeading();

	/*! \brief Set Heading for domains.
	 */
	void setHeading(std::string  heading);
	/*! \brief Get Link to order domain.
	 */
	std::string getBuyLink();

	/*! \brief Set Link to order domain.
	 */
	void setBuyLink(std::string  buy_link);
	/*! \brief Get Link to view domains list.
	 */
	std::string getListLink();

	/*! \brief Set Link to view domains list.
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

#endif /* _HomeDetailsModulesDomains_H_ */
