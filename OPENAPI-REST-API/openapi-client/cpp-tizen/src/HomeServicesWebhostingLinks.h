/*
 * HomeServicesWebhostingLinks.h
 *
 * Map of webhosting service IDs to their hostnames for the account dashboard.
 */

#ifndef _HomeServicesWebhostingLinks_H_
#define _HomeServicesWebhostingLinks_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Map of webhosting service IDs to their hostnames for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesWebhostingLinks : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeServicesWebhostingLinks();
	HomeServicesWebhostingLinks(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeServicesWebhostingLinks();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Link to a website.
	 */
	std::string get376359();

	/*! \brief Set Link to a website.
	 */
	void set376359(std::string  376359);
	/*! \brief Get Link to a website.
	 */
	std::string get376473();

	/*! \brief Set Link to a website.
	 */
	void set376473(std::string  376473);
	/*! \brief Get Link to a website.
	 */
	std::string get386218();

	/*! \brief Set Link to a website.
	 */
	void set386218(std::string  386218);

private:
	std::string 376359;
	std::string 376473;
	std::string 386218;
	void __init();
	void __cleanup();

};
}
}

#endif /* _HomeServicesWebhostingLinks_H_ */
