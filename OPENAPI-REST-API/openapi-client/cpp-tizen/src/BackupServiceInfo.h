/*
 * BackupServiceInfo.h
 *
 * Core service record for a backup storage service including ID, status, quota, and billing details.
 */

#ifndef _BackupServiceInfo_H_
#define _BackupServiceInfo_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Core service record for a backup storage service including ID, status, quota, and billing details.
 *
 *  \ingroup Models
 *
 */

class BackupServiceInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	BackupServiceInfo();
	BackupServiceInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BackupServiceInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Backup ID.
	 */
	std::string getBackupId();

	/*! \brief Set Backup ID.
	 */
	void setBackupId(std::string  backup_id);
	/*! \brief Get Backup server ID.
	 */
	std::string getBackupServer();

	/*! \brief Set Backup server ID.
	 */
	void setBackupServer(std::string  backup_server);
	/*! \brief Get Backup username.
	 */
	std::string getBackupUsername();

	/*! \brief Set Backup username.
	 */
	void setBackupUsername(std::string  backup_username);
	/*! \brief Get Backup type.
	 */
	std::string getBackupType();

	/*! \brief Set Backup type.
	 */
	void setBackupType(std::string  backup_type);
	/*! \brief Get Backup currency.
	 */
	std::string getBackupCurrency();

	/*! \brief Set Backup currency.
	 */
	void setBackupCurrency(std::string  backup_currency);
	/*! \brief Get Backup order date.
	 */
	std::string getBackupOrderDate();

	/*! \brief Set Backup order date.
	 */
	void setBackupOrderDate(std::string  backup_order_date);
	/*! \brief Get Backup customer ID.
	 */
	std::string getBackupCustid();

	/*! \brief Set Backup customer ID.
	 */
	void setBackupCustid(std::string  backup_custid);
	/*! \brief Get Backup quota.
	 */
	std::string getBackupQuota();

	/*! \brief Set Backup quota.
	 */
	void setBackupQuota(std::string  backup_quota);
	/*! \brief Get Backup IP address.
	 */
	std::string getBackupIp();

	/*! \brief Set Backup IP address.
	 */
	void setBackupIp(std::string  backup_ip);
	/*! \brief Get Backup status.
	 */
	std::string getBackupStatus();

	/*! \brief Set Backup status.
	 */
	void setBackupStatus(std::string  backup_status);
	/*! \brief Get Backup invoice.
	 */
	std::string getBackupInvoice();

	/*! \brief Set Backup invoice.
	 */
	void setBackupInvoice(std::string  backup_invoice);
	/*! \brief Get Backup coupon.
	 */
	std::string getBackupCoupon();

	/*! \brief Set Backup coupon.
	 */
	void setBackupCoupon(std::string  backup_coupon);
	/*! \brief Get Backup extra information.
	 */
	std::string getBackupExtra();

	/*! \brief Set Backup extra information.
	 */
	void setBackupExtra(std::string  backup_extra);
	/*! \brief Get Backup server status.
	 */
	std::string getBackupServerStatus();

	/*! \brief Set Backup server status.
	 */
	void setBackupServerStatus(std::string  backup_server_status);
	/*! \brief Get Backup comment.
	 */
	std::string getBackupComment();

	/*! \brief Set Backup comment.
	 */
	void setBackupComment(std::string  backup_comment);

private:
	std::string backup_id;
	std::string backup_server;
	std::string backup_username;
	std::string backup_type;
	std::string backup_currency;
	std::string backup_order_date;
	std::string backup_custid;
	std::string backup_quota;
	std::string backup_ip;
	std::string backup_status;
	std::string backup_invoice;
	std::string backup_coupon;
	std::string backup_extra;
	std::string backup_server_status;
	std::string backup_comment;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BackupServiceInfo_H_ */
