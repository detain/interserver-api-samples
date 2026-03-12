/*
 * HomeServicesVpsLinks.h
 *
 * Map of VPS service IDs to their hostnames for the account dashboard.
 */

#ifndef _HomeServicesVpsLinks_H_
#define _HomeServicesVpsLinks_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Map of VPS service IDs to their hostnames for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesVpsLinks : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeServicesVpsLinks();
	HomeServicesVpsLinks(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeServicesVpsLinks();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Link to a VPS.
	 */
	std::string get465503();

	/*! \brief Set Link to a VPS.
	 */
	void set465503(std::string  465503);
	/*! \brief Get Link to a VPS.
	 */
	std::string get2500081();

	/*! \brief Set Link to a VPS.
	 */
	void set2500081(std::string  2500081);
	/*! \brief Get Link to a VPS.
	 */
	std::string get2578866();

	/*! \brief Set Link to a VPS.
	 */
	void set2578866(std::string  2578866);

private:
	std::string 465503;
	std::string 2500081;
	std::string 2578866;
	void __init();
	void __cleanup();

};
}
}

#endif /* _HomeServicesVpsLinks_H_ */
