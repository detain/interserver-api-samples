/*
 * ServerNetworkInfo_assets.h
 *
 * Object containing asset information.
 */

#ifndef _ServerNetworkInfo_assets_H_
#define _ServerNetworkInfo_assets_H_


#include <string>
#include "ServerAsset.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Object containing asset information.
 *
 *  \ingroup Models
 *
 */

class ServerNetworkInfo_assets : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerNetworkInfo_assets();
	ServerNetworkInfo_assets(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerNetworkInfo_assets();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerAsset get3497();

	/*! \brief Set 
	 */
	void set3497(ServerAsset  3497);

private:
	ServerAsset 3497;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerNetworkInfo_assets_H_ */
