/*
 * IpObject.h
 *
 * IP Address
 */

#ifndef _IpObject_H_
#define _IpObject_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief IP Address
 *
 *  \ingroup Models
 *
 */

class IpObject : public Object {
public:
	/*! \brief Constructor.
	 */
	IpObject();
	IpObject(char* str);

	/*! \brief Destructor.
	 */
	virtual ~IpObject();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get IP Address
	 */
	std::string getIp();

	/*! \brief Set IP Address
	 */
	void setIp(std::string  ip);

private:
	std::string ip;
	void __init();
	void __cleanup();

};
}
}

#endif /* _IpObject_H_ */
