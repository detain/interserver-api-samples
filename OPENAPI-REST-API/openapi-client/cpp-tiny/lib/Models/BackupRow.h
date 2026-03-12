
/*
 * BackupRow.h
 *
 * A result row from the &#x60;Backups&#x60; &#x60;GET&#x60; request.
 */

#ifndef TINY_CPP_CLIENT_BackupRow_H_
#define TINY_CPP_CLIENT_BackupRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A result row from the `Backups` `GET` request.
 *
 *  \ingroup Models
 *
 */

class BackupRow{
public:

    /*! \brief Constructor.
	 */
    BackupRow();
    BackupRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the backup.
	 */
	std::string getBackupId();

	/*! \brief Set The id of the backup.
	 */
	void setBackupId(std::string backup_id);
	/*! \brief Get The name of the backup.
	 */
	std::string getBackupName();

	/*! \brief Set The name of the backup.
	 */
	void setBackupName(std::string backup_name);
	/*! \brief Get The cost of the backup.
	 */
	std::string getBackupCost();

	/*! \brief Set The cost of the backup.
	 */
	void setBackupCost(std::string backup_cost);
	/*! \brief Get The username of the backup.
	 */
	std::string getBackupUsername();

	/*! \brief Set The username of the backup.
	 */
	void setBackupUsername(std::string backup_username);
	/*! \brief Get The status of the backup.
	 */
	std::string getBackupStatus();

	/*! \brief Set The status of the backup.
	 */
	void setBackupStatus(std::string backup_status);
	/*! \brief Get The services name of the backup.
	 */
	std::string getServicesName();

	/*! \brief Set The services name of the backup.
	 */
	void setServicesName(std::string services_name);


    private:
    std::string backup_id{};
    std::string backup_name{};
    std::string backup_cost{};
    std::string backup_username{};
    std::string backup_status{};
    std::string services_name{};
};
}

#endif /* TINY_CPP_CLIENT_BackupRow_H_ */
