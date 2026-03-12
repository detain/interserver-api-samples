/*
 * BackupExtraInfoTables.h
 *
 * Supplementary information tables for a backup service (IP info, etc.).
 */

#ifndef _BackupExtraInfoTables_H_
#define _BackupExtraInfoTables_H_


#include <string>
#include "BackupIPInfo.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Supplementary information tables for a backup service (IP info, etc.).
 *
 *  \ingroup Models
 *
 */

class BackupExtraInfoTables : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupExtraInfoTables();
	BackupExtraInfoTables(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupExtraInfoTables();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	BackupIPInfo getIpInfo();

	/*! \brief Set 
	 */
	void setIpInfo(BackupIPInfo  ip_info);

private:
	BackupIPInfo ip_info;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupExtraInfoTables_H_ */
