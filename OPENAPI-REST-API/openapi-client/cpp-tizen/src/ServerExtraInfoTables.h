/*
 * ServerExtraInfoTables.h
 *
 * 
 */

#ifndef _ServerExtraInfoTables_H_
#define _ServerExtraInfoTables_H_


#include <string>
#include "ServerAssets.h"
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

class ServerExtraInfoTables : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerExtraInfoTables();
	ServerExtraInfoTables(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerExtraInfoTables();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	ServerAssets getAssets();

	/*! \brief Set 
	 */
	void setAssets(ServerAssets  assets);

private:
	ServerAssets assets;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerExtraInfoTables_H_ */
