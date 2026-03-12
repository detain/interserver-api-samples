/*
 * VpsBackupRows.h
 *
 * The listing of the backups for your service.
 */

#ifndef _VpsBackupRows_H_
#define _VpsBackupRows_H_


#include <string>
#include "VpsBackupRow.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The listing of the backups for your service.
 *
 *  \ingroup Models
 *
 */

class VpsBackupRows : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsBackupRows();
	VpsBackupRows(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsBackupRows();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsBackupRows_H_ */
