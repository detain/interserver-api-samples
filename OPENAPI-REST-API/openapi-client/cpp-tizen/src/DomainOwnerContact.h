/*
 * DomainOwnerContact.h
 *
 * Contact details for the registered domain owner.
 */

#ifndef _DomainOwnerContact_H_
#define _DomainOwnerContact_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Contact details for the registered domain owner.
 *
 *  \ingroup Models
 *
 */

class DomainOwnerContact : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainOwnerContact();
	DomainOwnerContact(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainOwnerContact();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getPostalCode();

	/*! \brief Set 
	 */
	void setPostalCode(std::string  postal_code);
	/*! \brief Get 
	 */
	std::string getOrgName();

	/*! \brief Set 
	 */
	void setOrgName(std::string  org_name);
	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string  country);
	/*! \brief Get 
	 */
	std::string getStatus();

	/*! \brief Set 
	 */
	void setStatus(std::string  status);
	/*! \brief Get 
	 */
	std::string getState();

	/*! \brief Set 
	 */
	void setState(std::string  state);
	/*! \brief Get 
	 */
	std::string getFirstName();

	/*! \brief Set 
	 */
	void setFirstName(std::string  first_name);
	/*! \brief Get 
	 */
	std::string getLastName();

	/*! \brief Set 
	 */
	void setLastName(std::string  last_name);
	/*! \brief Get 
	 */
	std::string getAddress3();

	/*! \brief Set 
	 */
	void setAddress3(std::string  address3);
	/*! \brief Get 
	 */
	std::string getFax();

	/*! \brief Set 
	 */
	void setFax(std::string  fax);
	/*! \brief Get 
	 */
	std::string getAddress2();

	/*! \brief Set 
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string  email);
	/*! \brief Get 
	 */
	std::string getCity();

	/*! \brief Set 
	 */
	void setCity(std::string  city);
	/*! \brief Get 
	 */
	std::string getPhone();

	/*! \brief Set 
	 */
	void setPhone(std::string  phone);
	/*! \brief Get 
	 */
	std::string getAddress1();

	/*! \brief Set 
	 */
	void setAddress1(std::string  address1);

private:
	std::string postal_code;
	std::string org_name;
	std::string country;
	std::string status;
	std::string state;
	std::string first_name;
	std::string last_name;
	std::string address3;
	std::string fax;
	std::string address2;
	std::string email;
	std::string city;
	std::string phone;
	std::string address1;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainOwnerContact_H_ */
