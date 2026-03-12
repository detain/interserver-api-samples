/*
 * ServerNetworkInfo_switchports.h
 *
 * Object containing switchport information.
 */

#ifndef _ServerNetworkInfo_switchports_H_
#define _ServerNetworkInfo_switchports_H_


#include <string>
#include "ServerSwitchport.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Object containing switchport information.
 *
 *  \ingroup Models
 *
 */

class ServerNetworkInfo_switchports : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerNetworkInfo_switchports();
	ServerNetworkInfo_switchports(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerNetworkInfo_switchports();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerSwitchport get10414();

	/*! \brief Set 
	 */
	void set10414(ServerSwitchport  10414);

private:
	ServerSwitchport 10414;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerNetworkInfo_switchports_H_ */
