/*
 * License_extraInfoTables.h
 *
 * 
 */

#ifndef _License_extraInfoTables_H_
#define _License_extraInfoTables_H_


#include <string>
#include "LicenseIpInfo.h"
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

class License_extraInfoTables : public Object {
public:
	/*! \brief Constructor.
	 */
	License_extraInfoTables();
	License_extraInfoTables(char* str);

	/*! \brief Destructor.
	 */
	virtual ~License_extraInfoTables();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	LicenseIpInfo getIpInfo();

	/*! \brief Set 
	 */
	void setIpInfo(LicenseIpInfo  ip_info);

private:
	LicenseIpInfo ip_info;
	void __init();
	void __cleanup();

};
}
}

#endif /* _License_extraInfoTables_H_ */
