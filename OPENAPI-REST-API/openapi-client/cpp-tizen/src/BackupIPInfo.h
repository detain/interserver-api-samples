/*
 * BackupIPInfo.h
 *
 * IP address information table for a backup service.
 */

#ifndef _BackupIPInfo_H_
#define _BackupIPInfo_H_


#include <string>
#include "BackupIPInfoRow.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief IP address information table for a backup service.
 *
 *  \ingroup Models
 *
 */

class BackupIPInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupIPInfo();
	BackupIPInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupIPInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Title of the IP information table.
	 */
	std::string getTitle();

	/*! \brief Set Title of the IP information table.
	 */
	void setTitle(std::string  title);
	/*! \brief Get 
	 */
	std::list<BackupIPInfoRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <BackupIPInfoRow> rows);

private:
	std::string title;
	std::list <BackupIPInfoRow>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupIPInfo_H_ */
