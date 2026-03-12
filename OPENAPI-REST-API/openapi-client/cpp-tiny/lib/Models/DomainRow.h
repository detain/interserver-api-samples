
/*
 * DomainRow.h
 *
 * A result row from the &#x60;Domains&#x60; &#x60;GET&#x60; request.
 */

#ifndef TINY_CPP_CLIENT_DomainRow_H_
#define TINY_CPP_CLIENT_DomainRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A result row from the `Domains` `GET` request.
 *
 *  \ingroup Models
 *
 */

class DomainRow{
public:

    /*! \brief Constructor.
	 */
    DomainRow();
    DomainRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The ID number of the domain in our billing system.
	 */
	std::string getDomainId();

	/*! \brief Set The ID number of the domain in our billing system.
	 */
	void setDomainId(std::string domain_id);
	/*! \brief Get The hostname of the domain.
	 */
	std::string getDomainHostname();

	/*! \brief Set The hostname of the domain.
	 */
	void setDomainHostname(std::string domain_hostname);
	/*! \brief Get The expiration date of the domain.
	 */
	std::string getDomainExpireDate();

	/*! \brief Set The expiration date of the domain.
	 */
	void setDomainExpireDate(std::string domain_expire_date);
	/*! \brief Get The cost of the domain.
	 */
	std::string getCost();

	/*! \brief Set The cost of the domain.
	 */
	void setCost(std::string cost);
	/*! \brief Get The billing / registration status of the domain.
	 */
	std::string getDomainStatus();

	/*! \brief Set The billing / registration status of the domain.
	 */
	void setDomainStatus(std::string domain_status);


    private:
    std::string domain_id{};
    std::string domain_hostname{};
    std::string domain_expire_date{};
    std::string cost{};
    std::string domain_status{};
};
}

#endif /* TINY_CPP_CLIENT_DomainRow_H_ */
