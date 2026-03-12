/*
 * Home_services_servers.h
 *
 * 
 */

#ifndef _Home_services_servers_H_
#define _Home_services_servers_H_


#include <string>
#include "HomeServicesServersLinks.h"
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

class Home_services_servers : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_services_servers();
	Home_services_servers(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_services_servers();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	HomeServicesServersLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesServersLinks  links);
	/*! \brief Get Number of servers.
	 */
	int getCount();

	/*! \brief Set Number of servers.
	 */
	void setCount(int  count);

private:
	HomeServicesServersLinks links;
	int count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_services_servers_H_ */
