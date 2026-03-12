/*
 * HostnameObject.h
 *
 * Request specifying the hostname.
 */

#ifndef _HostnameObject_H_
#define _HostnameObject_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request specifying the hostname.
 *
 *  \ingroup Models
 *
 */

class HostnameObject : public Object {
public:
	/*! \brief Constructor.
	 */
	HostnameObject();
	HostnameObject(char* str);

	/*! \brief Destructor.
	 */
	virtual ~HostnameObject();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getHostname();

	/*! \brief Set 
	 */
	void setHostname(std::string  hostname);

private:
	std::string hostname;
	void __init();
	void __cleanup();

};
}
}

#endif /* _HostnameObject_H_ */
