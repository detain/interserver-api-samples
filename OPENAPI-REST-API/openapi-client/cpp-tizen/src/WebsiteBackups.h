/*
 * WebsiteBackups.h
 *
 * List of available backups for a webhosting service with their names and sizes.
 */

#ifndef _WebsiteBackups_H_
#define _WebsiteBackups_H_


#include <string>
#include "WebsiteBackups_inner.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief List of available backups for a webhosting service with their names and sizes.
 *
 *  \ingroup Models
 *
 */

class WebsiteBackups : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteBackups();
	WebsiteBackups(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteBackups();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsiteBackups_H_ */
