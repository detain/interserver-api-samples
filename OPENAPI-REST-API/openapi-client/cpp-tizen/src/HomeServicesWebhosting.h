/*
 * Home_services_webhosting.h
 *
 * 
 */

#ifndef _Home_services_webhosting_H_
#define _Home_services_webhosting_H_


#include <string>
#include "HomeServicesWebhostingLinks.h"
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

class Home_services_webhosting : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_services_webhosting();
	Home_services_webhosting(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_services_webhosting();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	HomeServicesWebhostingLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesWebhostingLinks  links);
	/*! \brief Get Number of web hosting services.
	 */
	int getCount();

	/*! \brief Set Number of web hosting services.
	 */
	void setCount(int  count);

private:
	HomeServicesWebhostingLinks links;
	int count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_services_webhosting_H_ */
