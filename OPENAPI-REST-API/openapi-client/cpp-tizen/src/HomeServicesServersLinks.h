/*
 * HomeServicesServersLinks.h
 *
 * Map of dedicated server service IDs to their hostnames for the account dashboard.
 */

#ifndef _HomeServicesServersLinks_H_
#define _HomeServicesServersLinks_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Map of dedicated server service IDs to their hostnames for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesServersLinks : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeServicesServersLinks();
	HomeServicesServersLinks(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeServicesServersLinks();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Link to a server.
	 */
	std::string get16058();

	/*! \brief Set Link to a server.
	 */
	void set16058(std::string  16058);

private:
	std::string 16058;
	void __init();
	void __cleanup();

};
}
}

#endif /* _HomeServicesServersLinks_H_ */
