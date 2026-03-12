/*
 * ServerLease.h
 *
 * 
 */

#ifndef _ServerLease_H_
#define _ServerLease_H_


#include <string>
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

class ServerLease : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerLease();
	ServerLease(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerLease();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get MAC address associated with the lease.
	 */
	std::string getMac();

	/*! \brief Set MAC address associated with the lease.
	 */
	void setMac(std::string  mac);
	/*! \brief Get Indicates if the lease is authenticated.
	 */
	bool getAuthenticated();

	/*! \brief Set Indicates if the lease is authenticated.
	 */
	void setAuthenticated(bool  authenticated);
	/*! \brief Get Group identifier for the lease.
	 */
	std::string getGroup();

	/*! \brief Set Group identifier for the lease.
	 */
	void setGroup(std::string  group);

private:
	std::string mac;
	bool authenticated;
	std::string group;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerLease_H_ */
