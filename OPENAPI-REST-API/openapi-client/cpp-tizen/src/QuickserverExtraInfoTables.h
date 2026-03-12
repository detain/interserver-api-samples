/*
 * Quickserver_extraInfoTables.h
 *
 * 
 */

#ifndef _Quickserver_extraInfoTables_H_
#define _Quickserver_extraInfoTables_H_


#include <string>
#include "QuickserverAddons.h"
#include "QuickserverIpInfo.h"
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

class Quickserver_extraInfoTables : public Object {
public:
	/*! \brief Constructor.
	 */
	Quickserver_extraInfoTables();
	Quickserver_extraInfoTables(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Quickserver_extraInfoTables();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	QuickserverIpInfo getIpInfo();

	/*! \brief Set 
	 */
	void setIpInfo(QuickserverIpInfo  ip_info);
	/*! \brief Get 
	 */
	QuickserverAddons getAddons();

	/*! \brief Set 
	 */
	void setAddons(QuickserverAddons  addons);

private:
	QuickserverIpInfo ip_info;
	QuickserverAddons addons;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Quickserver_extraInfoTables_H_ */
