/*
 * Server_locations.h
 *
 * 
 */

#ifndef _Server_locations_H_
#define _Server_locations_H_


#include <string>
#include "ServerLocation1.h"
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

class Server_locations : public Object {
public:
	/*! \brief Constructor.
	 */
	Server_locations();
	Server_locations(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Server_locations();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerLocation1 get1();

	/*! \brief Set 
	 */
	void set1(ServerLocation1  1);

private:
	ServerLocation1 1;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Server_locations_H_ */
