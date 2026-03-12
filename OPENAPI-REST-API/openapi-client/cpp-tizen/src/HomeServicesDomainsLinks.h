/*
 * HomeServicesDomainsLinks.h
 *
 * Map of domain service IDs to their hostnames for the account dashboard.
 */

#ifndef _HomeServicesDomainsLinks_H_
#define _HomeServicesDomainsLinks_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Map of domain service IDs to their hostnames for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesDomainsLinks : public Object {
public:
	/*! \brief Constructor.
	 */
	HomeServicesDomainsLinks();
	HomeServicesDomainsLinks(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HomeServicesDomainsLinks();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Link to a domain.
	 */
	std::string get376114();

	/*! \brief Set Link to a domain.
	 */
	void set376114(std::string  376114);
	/*! \brief Get Link to a domain.
	 */
	std::string get376503();

	/*! \brief Set Link to a domain.
	 */
	void set376503(std::string  376503);
	/*! \brief Get Link to a domain.
	 */
	std::string get592337();

	/*! \brief Set Link to a domain.
	 */
	void set592337(std::string  592337);

private:
	std::string 376114;
	std::string 376503;
	std::string 592337;
	void __init();
	void __cleanup();

};
}
}

#endif /* _HomeServicesDomainsLinks_H_ */
