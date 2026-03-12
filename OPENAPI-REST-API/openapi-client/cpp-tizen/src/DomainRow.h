/*
 * DomainRow.h
 *
 * A result row from the &#x60;Domains&#x60; &#x60;GET&#x60; request.
 */

#ifndef _DomainRow_H_
#define _DomainRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A result row from the `Domains` `GET` request.
 *
 *  \ingroup Models
 *
 */

class DomainRow : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainRow();
	DomainRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID number of the domain in our billing system.
	 */
	std::string getDomainId();

	/*! \brief Set The ID number of the domain in our billing system.
	 */
	void setDomainId(std::string  domain_id);
	/*! \brief Get The hostname of the domain.
	 */
	std::string getDomainHostname();

	/*! \brief Set The hostname of the domain.
	 */
	void setDomainHostname(std::string  domain_hostname);
	/*! \brief Get The expiration date of the domain.
	 */
	std::string getDomainExpireDate();

	/*! \brief Set The expiration date of the domain.
	 */
	void setDomainExpireDate(std::string  domain_expire_date);
	/*! \brief Get The cost of the domain.
	 */
	std::string getCost();

	/*! \brief Set The cost of the domain.
	 */
	void setCost(std::string  cost);
	/*! \brief Get The billing / registration status of the domain.
	 */
	std::string getDomainStatus();

	/*! \brief Set The billing / registration status of the domain.
	 */
	void setDomainStatus(std::string  domain_status);

private:
	std::string domain_id;
	std::string domain_hostname;
	std::string domain_expire_date;
	std::string cost;
	std::string domain_status;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainRow_H_ */
