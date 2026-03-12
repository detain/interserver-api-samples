
/*
 * LicenseServiceInfo.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_LicenseServiceInfo_H_
#define TINY_CPP_CLIENT_LicenseServiceInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class LicenseServiceInfo{
public:

    /*! \brief Constructor.
	 */
    LicenseServiceInfo();
    LicenseServiceInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicenseServiceInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get License ID
	 */
	std::string getLicenseId();

	/*! \brief Set License ID
	 */
	void setLicenseId(std::string license_id);
	/*! \brief Get License type
	 */
	std::string getLicenseType();

	/*! \brief Set License type
	 */
	void setLicenseType(std::string license_type);
	/*! \brief Get License currency
	 */
	std::string getLicenseCurrency();

	/*! \brief Set License currency
	 */
	void setLicenseCurrency(std::string license_currency);
	/*! \brief Get License order date
	 */
	std::string getLicenseOrderDate();

	/*! \brief Set License order date
	 */
	void setLicenseOrderDate(std::string license_order_date);
	/*! \brief Get Customer ID
	 */
	std::string getLicenseCustid();

	/*! \brief Set Customer ID
	 */
	void setLicenseCustid(std::string license_custid);
	/*! \brief Get License IP
	 */
	std::string getLicenseIp();

	/*! \brief Set License IP
	 */
	void setLicenseIp(std::string license_ip);
	/*! \brief Get License status
	 */
	std::string getLicenseStatus();

	/*! \brief Set License status
	 */
	void setLicenseStatus(std::string license_status);
	/*! \brief Get License invoice
	 */
	std::string getLicenseInvoice();

	/*! \brief Set License invoice
	 */
	void setLicenseInvoice(std::string license_invoice);
	/*! \brief Get License coupon
	 */
	std::string getLicenseCoupon();

	/*! \brief Set License coupon
	 */
	void setLicenseCoupon(std::string license_coupon);
	/*! \brief Get License hostname
	 */
	std::string getLicenseHostname();

	/*! \brief Set License hostname
	 */
	void setLicenseHostname(std::string license_hostname);
	/*! \brief Get License key
	 */
	std::string getLicenseKey();

	/*! \brief Set License key
	 */
	void setLicenseKey(std::string license_key);
	/*! \brief Get Additional license information
	 */
	std::string getLicenseExtra();

	/*! \brief Set Additional license information
	 */
	void setLicenseExtra(std::string license_extra);


    private:
    std::string license_id{};
    std::string license_type{};
    std::string license_currency{};
    std::string license_order_date{};
    std::string license_custid{};
    std::string license_ip{};
    std::string license_status{};
    std::string license_invoice{};
    std::string license_coupon{};
    std::string license_hostname{};
    std::string license_key{};
    std::string license_extra{};
};
}

#endif /* TINY_CPP_CLIENT_LicenseServiceInfo_H_ */
