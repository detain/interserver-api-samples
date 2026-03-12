/*
 * BackupServiceMaster.h
 *
 * 
 */

#ifndef _BackupServiceMaster_H_
#define _BackupServiceMaster_H_


#include <string>
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

class BackupServiceMaster : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupServiceMaster();
	BackupServiceMaster(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupServiceMaster();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Backup ID of the service master.
	 */
	int getBackupId();

	/*! \brief Set Backup ID of the service master.
	 */
	void setBackupId(int  backup_id);
	/*! \brief Get Name of the backup service.
	 */
	std::string getBackupName();

	/*! \brief Set Name of the backup service.
	 */
	void setBackupName(std::string  backup_name);
	/*! \brief Get IP address of the backup service.
	 */
	std::string getBackupIp();

	/*! \brief Set IP address of the backup service.
	 */
	void setBackupIp(std::string  backup_ip);
	/*! \brief Get Type of the backup service.
	 */
	int getBackupType();

	/*! \brief Set Type of the backup service.
	 */
	void setBackupType(int  backup_type);
	/*! \brief Get Size of the backup service's hard drive.
	 */
	int getBackupHdsize();

	/*! \brief Set Size of the backup service's hard drive.
	 */
	void setBackupHdsize(int  backup_hdsize);
	/*! \brief Get Amount of free space on the backup service's hard drive.
	 */
	int getBackupHdfree();

	/*! \brief Set Amount of free space on the backup service's hard drive.
	 */
	void setBackupHdfree(int  backup_hdfree);
	/*! \brief Get Last update timestamp of the backup service.
	 */
	std::string getBackupLastUpdate();

	/*! \brief Set Last update timestamp of the backup service.
	 */
	void setBackupLastUpdate(std::string  backup_last_update);
	/*! \brief Get Availability status of the backup service.
	 */
	int getBackupAvailable();

	/*! \brief Set Availability status of the backup service.
	 */
	void setBackupAvailable(int  backup_available);
	/*! \brief Get I/O wait status of the backup service.
	 */
	int getBackupIowait();

	/*! \brief Set I/O wait status of the backup service.
	 */
	void setBackupIowait(int  backup_iowait);
	/*! \brief Get Order associated with the backup service.
	 */
	int getBackupOrder();

	/*! \brief Set Order associated with the backup service.
	 */
	void setBackupOrder(int  backup_order);

private:
	int backup_id;
	std::string backup_name;
	std::string backup_ip;
	int backup_type;
	int backup_hdsize;
	int backup_hdfree;
	std::string backup_last_update;
	int backup_available;
	int backup_iowait;
	int backup_order;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupServiceMaster_H_ */
