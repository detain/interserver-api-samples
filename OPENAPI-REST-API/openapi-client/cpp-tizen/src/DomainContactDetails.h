/*
 * DomainContactDetails.h
 *
 * Contact details used for domain registrant/admin/technical/billing records.
 */

#ifndef _DomainContactDetails_H_
#define _DomainContactDetails_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Contact details used for domain registrant/admin/technical/billing records.
 *
 *  \ingroup Models
 *
 */

class DomainContactDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainContactDetails();
	DomainContactDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainContactDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Contact status reported by the registrar.
	 */
	std::string getStatus();

	/*! \brief Set Contact status reported by the registrar.
	 */
	void setStatus(std::string  status);
	/*! \brief Get State or region for the contact address.
	 */
	std::string getState();

	/*! \brief Set State or region for the contact address.
	 */
	void setState(std::string  state);
	/*! \brief Get Organization name for the contact.
	 */
	std::string getOrgName();

	/*! \brief Set Organization name for the contact.
	 */
	void setOrgName(std::string  org_name);
	/*! \brief Get Two-letter country code for the contact.
	 */
	std::string getCountry();

	/*! \brief Set Two-letter country code for the contact.
	 */
	void setCountry(std::string  country);
	/*! \brief Get Postal or ZIP code for the contact address.
	 */
	std::string getPostalCode();

	/*! \brief Set Postal or ZIP code for the contact address.
	 */
	void setPostalCode(std::string  postal_code);
	/*! \brief Get Email address for the contact.
	 */
	std::string getEmail();

	/*! \brief Set Email address for the contact.
	 */
	void setEmail(std::string  email);
	/*! \brief Get Fax number for the contact, if available.
	 */
	std::string getFax();

	/*! \brief Set Fax number for the contact, if available.
	 */
	void setFax(std::string  fax);
	/*! \brief Get Secondary street address line.
	 */
	std::string getAddress2();

	/*! \brief Set Secondary street address line.
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get Tertiary street address line.
	 */
	std::string getAddress3();

	/*! \brief Set Tertiary street address line.
	 */
	void setAddress3(std::string  address3);
	/*! \brief Get Primary street address line.
	 */
	std::string getAddress1();

	/*! \brief Set Primary street address line.
	 */
	void setAddress1(std::string  address1);
	/*! \brief Get City for the contact address.
	 */
	std::string getCity();

	/*! \brief Set City for the contact address.
	 */
	void setCity(std::string  city);
	/*! \brief Get Phone number for the contact.
	 */
	std::string getPhone();

	/*! \brief Set Phone number for the contact.
	 */
	void setPhone(std::string  phone);
	/*! \brief Get First name for the contact.
	 */
	std::string getFirstName();

	/*! \brief Set First name for the contact.
	 */
	void setFirstName(std::string  first_name);
	/*! \brief Get Last name for the contact.
	 */
	std::string getLastName();

	/*! \brief Set Last name for the contact.
	 */
	void setLastName(std::string  last_name);

private:
	std::string status;
	std::string state;
	std::string org_name;
	std::string country;
	std::string postal_code;
	std::string email;
	std::string fax;
	std::string address2;
	std::string address3;
	std::string address1;
	std::string city;
	std::string phone;
	std::string first_name;
	std::string last_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainContactDetails_H_ */
