/*
 * Home_services_domains.h
 *
 * 
 */

#ifndef _Home_services_domains_H_
#define _Home_services_domains_H_


#include <string>
#include "HomeServicesDomainsLinks.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_services_domains : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_services_domains();
	Home_services_domains(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_services_domains();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	HomeServicesDomainsLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesDomainsLinks  links);
	/*! \brief Get Number of domains.
	 */
	int getCount();

	/*! \brief Set Number of domains.
	 */
	void setCount(int  count);

private:
	HomeServicesDomainsLinks links;
	int count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_services_domains_H_ */
