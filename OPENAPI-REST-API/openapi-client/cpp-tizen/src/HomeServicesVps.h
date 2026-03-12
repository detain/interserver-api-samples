/*
 * Home_services_vps.h
 *
 * 
 */

#ifndef _Home_services_vps_H_
#define _Home_services_vps_H_


#include <string>
#include "HomeServicesVpsLinks.h"
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

class Home_services_vps : public Object {
public:
	/*! \brief Constructor.
	 */
	Home_services_vps();
	Home_services_vps(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Home_services_vps();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	HomeServicesVpsLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesVpsLinks  links);
	/*! \brief Get Number of VPS services.
	 */
	int getCount();

	/*! \brief Set Number of VPS services.
	 */
	void setCount(int  count);

private:
	HomeServicesVpsLinks links;
	int count;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Home_services_vps_H_ */
