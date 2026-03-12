
/*
 * LicenseRow.h
 *
 * A result row from the &#x60;Licenses&#x60; &#x60;GET&#x60; request.
 */

#ifndef TINY_CPP_CLIENT_LicenseRow_H_
#define TINY_CPP_CLIENT_LicenseRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A result row from the `Licenses` `GET` request.
 *
 *  \ingroup Models
 *
 */

class LicenseRow{
public:

    /*! \brief Constructor.
	 */
    LicenseRow();
    LicenseRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~LicenseRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the license.
	 */
	std::string getLicenseId();

	/*! \brief Set The id of the license.
	 */
	void setLicenseId(std::string license_id);
	/*! \brief Get The hostname of the license.
	 */
	std::string getLicenseHostname();

	/*! \brief Set The hostname of the license.
	 */
	void setLicenseHostname(std::string license_hostname);
	/*! \brief Get The ip of the license.
	 */
	std::string getLicenseIp();

	/*! \brief Set The ip of the license.
	 */
	void setLicenseIp(std::string license_ip);
	/*! \brief Get The services name of the license.
	 */
	std::string getServicesName();

	/*! \brief Set The services name of the license.
	 */
	void setServicesName(std::string services_name);
	/*! \brief Get The cost of the license.
	 */
	std::string getCost();

	/*! \brief Set The cost of the license.
	 */
	void setCost(std::string cost);
	/*! \brief Get The status of the license.
	 */
	std::string getLicenseStatus();

	/*! \brief Set The status of the license.
	 */
	void setLicenseStatus(std::string license_status);
	/*! \brief Get The invoices paid of the license.
	 */
	std::string getInvoicesPaid();

	/*! \brief Set The invoices paid of the license.
	 */
	void setInvoicesPaid(std::string invoices_paid);
	/*! \brief Get The invoices date of the license.
	 */
	std::string getInvoicesDate();

	/*! \brief Set The invoices date of the license.
	 */
	void setInvoicesDate(std::string invoices_date);


    private:
    std::string license_id{};
    std::string license_hostname{};
    std::string license_ip{};
    std::string services_name{};
    std::string cost{};
    std::string license_status{};
    std::string invoices_paid{};
    std::string invoices_date{};
};
}

#endif /* TINY_CPP_CLIENT_LicenseRow_H_ */
