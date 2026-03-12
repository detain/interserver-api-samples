/*
 * LicenseServiceInfo.h
 *
 * 
 */

#ifndef _LicenseServiceInfo_H_
#define _LicenseServiceInfo_H_


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

class LicenseServiceInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	LicenseServiceInfo();
	LicenseServiceInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicenseServiceInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get License ID
	 */
	std::string getLicenseId();

	/*! \brief Set License ID
	 */
	void setLicenseId(std::string  license_id);
	/*! \brief Get License type
	 */
	std::string getLicenseType();

	/*! \brief Set License type
	 */
	void setLicenseType(std::string  license_type);
	/*! \brief Get License currency
	 */
	std::string getLicenseCurrency();

	/*! \brief Set License currency
	 */
	void setLicenseCurrency(std::string  license_currency);
	/*! \brief Get License order date
	 */
	std::string getLicenseOrderDate();

	/*! \brief Set License order date
	 */
	void setLicenseOrderDate(std::string  license_order_date);
	/*! \brief Get Customer ID
	 */
	std::string getLicenseCustid();

	/*! \brief Set Customer ID
	 */
	void setLicenseCustid(std::string  license_custid);
	/*! \brief Get License IP
	 */
	std::string getLicenseIp();

	/*! \brief Set License IP
	 */
	void setLicenseIp(std::string  license_ip);
	/*! \brief Get License status
	 */
	std::string getLicenseStatus();

	/*! \brief Set License status
	 */
	void setLicenseStatus(std::string  license_status);
	/*! \brief Get License invoice
	 */
	std::string getLicenseInvoice();

	/*! \brief Set License invoice
	 */
	void setLicenseInvoice(std::string  license_invoice);
	/*! \brief Get License coupon
	 */
	std::string getLicenseCoupon();

	/*! \brief Set License coupon
	 */
	void setLicenseCoupon(std::string  license_coupon);
	/*! \brief Get License hostname
	 */
	std::string getLicenseHostname();

	/*! \brief Set License hostname
	 */
	void setLicenseHostname(std::string  license_hostname);
	/*! \brief Get License key
	 */
	std::string getLicenseKey();

	/*! \brief Set License key
	 */
	void setLicenseKey(std::string  license_key);
	/*! \brief Get Additional license information
	 */
	std::string getLicenseExtra();

	/*! \brief Set Additional license information
	 */
	void setLicenseExtra(std::string  license_extra);

private:
	std::string license_id;
	std::string license_type;
	std::string license_currency;
	std::string license_order_date;
	std::string license_custid;
	std::string license_ip;
	std::string license_status;
	std::string license_invoice;
	std::string license_coupon;
	std::string license_hostname;
	std::string license_key;
	std::string license_extra;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicenseServiceInfo_H_ */
