/*
 * VpsExtraInfoTables.h
 *
 * Additional informational tables displayed for a VPS service.
 */

#ifndef _VpsExtraInfoTables_H_
#define _VpsExtraInfoTables_H_


#include <string>
#include "VpsIPInfo.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Additional informational tables displayed for a VPS service.
 *
 *  \ingroup Models
 *
 */

class VpsExtraInfoTables : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsExtraInfoTables();
	VpsExtraInfoTables(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsExtraInfoTables();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsIPInfo getIpInfo();

	/*! \brief Set 
	 */
	void setIpInfo(VpsIPInfo  ip_info);

private:
	VpsIPInfo ip_info;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsExtraInfoTables_H_ */
