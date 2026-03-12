/*
 * BackupRow.h
 *
 * A result row from the &#x60;Backups&#x60; &#x60;GET&#x60; request.
 */

#ifndef _BackupRow_H_
#define _BackupRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A result row from the `Backups` `GET` request.
 *
 *  \ingroup Models
 *
 */

class BackupRow : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupRow();
	BackupRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the backup.
	 */
	std::string getBackupId();

	/*! \brief Set The id of the backup.
	 */
	void setBackupId(std::string  backup_id);
	/*! \brief Get The name of the backup.
	 */
	std::string getBackupName();

	/*! \brief Set The name of the backup.
	 */
	void setBackupName(std::string  backup_name);
	/*! \brief Get The cost of the backup.
	 */
	std::string getBackupCost();

	/*! \brief Set The cost of the backup.
	 */
	void setBackupCost(std::string  backup_cost);
	/*! \brief Get The username of the backup.
	 */
	std::string getBackupUsername();

	/*! \brief Set The username of the backup.
	 */
	void setBackupUsername(std::string  backup_username);
	/*! \brief Get The status of the backup.
	 */
	std::string getBackupStatus();

	/*! \brief Set The status of the backup.
	 */
	void setBackupStatus(std::string  backup_status);
	/*! \brief Get The services name of the backup.
	 */
	std::string getServicesName();

	/*! \brief Set The services name of the backup.
	 */
	void setServicesName(std::string  services_name);

private:
	std::string backup_id;
	std::string backup_name;
	std::string backup_cost;
	std::string backup_username;
	std::string backup_status;
	std::string services_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupRow_H_ */
