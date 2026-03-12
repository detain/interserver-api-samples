
/*
 * DomainAdminContact.h
 *
 * Administrative contact information for a domain registration.
 */

#ifndef TINY_CPP_CLIENT_DomainAdminContact_H_
#define TINY_CPP_CLIENT_DomainAdminContact_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Administrative contact information for a domain registration.
 *
 *  \ingroup Models
 *
 */

class DomainAdminContact{
public:

    /*! \brief Constructor.
	 */
    DomainAdminContact();
    DomainAdminContact(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainAdminContact();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getStatus();

	/*! \brief Set 
	 */
	void setStatus(std::string status);
	/*! \brief Get 
	 */
	std::string getState();

	/*! \brief Set 
	 */
	void setState(std::string state);
	/*! \brief Get 
	 */
	std::string getOrgName();

	/*! \brief Set 
	 */
	void setOrgName(std::string org_name);
	/*! \brief Get 
	 */
	std::string getCountry();

	/*! \brief Set 
	 */
	void setCountry(std::string country);
	/*! \brief Get 
	 */
	std::string getPostalCode();

	/*! \brief Set 
	 */
	void setPostalCode(std::string postal_code);
	/*! \brief Get 
	 */
	std::string getEmail();

	/*! \brief Set 
	 */
	void setEmail(std::string email);
	/*! \brief Get 
	 */
	std::string getFax();

	/*! \brief Set 
	 */
	void setFax(std::string fax);
	/*! \brief Get 
	 */
	std::string getAddress2();

	/*! \brief Set 
	 */
	void setAddress2(std::string address2);
	/*! \brief Get 
	 */
	std::string getAddress3();

	/*! \brief Set 
	 */
	void setAddress3(std::string address3);
	/*! \brief Get 
	 */
	std::string getAddress1();

	/*! \brief Set 
	 */
	void setAddress1(std::string address1);
	/*! \brief Get 
	 */
	std::string getCity();

	/*! \brief Set 
	 */
	void setCity(std::string city);
	/*! \brief Get 
	 */
	std::string getPhone();

	/*! \brief Set 
	 */
	void setPhone(std::string phone);
	/*! \brief Get 
	 */
	std::string getFirstName();

	/*! \brief Set 
	 */
	void setFirstName(std::string first_name);
	/*! \brief Get 
	 */
	std::string getLastName();

	/*! \brief Set 
	 */
	void setLastName(std::string last_name);


    private:
    std::string status{};
    std::string state{};
    std::string org_name{};
    std::string country{};
    std::string postal_code{};
    std::string email{};
    std::string fax{};
    std::string address2{};
    std::string address3{};
    std::string address1{};
    std::string city{};
    std::string phone{};
    std::string first_name{};
    std::string last_name{};
};
}

#endif /* TINY_CPP_CLIENT_DomainAdminContact_H_ */
