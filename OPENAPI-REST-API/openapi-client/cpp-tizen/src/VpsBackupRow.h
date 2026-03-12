/*
 * VpsBackupRow.h
 *
 * A single backed-up item and information about it.
 */

#ifndef _VpsBackupRow_H_
#define _VpsBackupRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A single backed-up item and information about it.
 *
 *  \ingroup Models
 *
 */

class VpsBackupRow : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsBackupRow();
	VpsBackupRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsBackupRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Backup Type
	 */
	std::string getType();

	/*! \brief Set Backup Type
	 */
	void setType(std::string  type);
	/*! \brief Get The service id such as vps  id.
	 */
	int getService();

	/*! \brief Set The service id such as vps  id.
	 */
	void setService(int  service);
	/*! \brief Get The name of the backup.
	 */
	std::string getName();

	/*! \brief Set The name of the backup.
	 */
	void setName(std::string  name);
	/*! \brief Get Size of the file in bytes
	 */
	int getSize();

	/*! \brief Set Size of the file in bytes
	 */
	void setSize(int  size);
	/*! \brief Get The creation date of the backup in a unix timestamp.
	 */
	int getDate();

	/*! \brief Set The creation date of the backup in a unix timestamp.
	 */
	void setDate(int  date);

private:
	std::string type;
	int service;
	std::string name;
	int size;
	int date;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsBackupRow_H_ */
