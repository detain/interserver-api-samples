/*
 * DomainOrder.h
 *
 * Ordering metadata for domain registration and transfers.
 */

#ifndef _DomainOrder_H_
#define _DomainOrder_H_


#include <string>
#include "DomainOrder_services.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Ordering metadata for domain registration and transfers.
 *
 *  \ingroup Models
 *
 */

class DomainOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainOrder();
	DomainOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Cost of Whois Privacy
	 */
	std::string getWhoisPrivacyCost();

	/*! \brief Set Cost of Whois Privacy
	 */
	void setWhoisPrivacyCost(std::string  whoisPrivacyCost);
	/*! \brief Get 
	 */
	DomainOrder_services getServices();

	/*! \brief Set 
	 */
	void setServices(DomainOrder_services  services);
	/*! \brief Get Map of TLDs to domain service IDs.
	 */
	std::string getTldServices();

	/*! \brief Set Map of TLDs to domain service IDs.
	 */
	void setTldServices(std::string  tldServices);

private:
	std::string whoisPrivacyCost;
	DomainOrder_services services;
	std::string tldServices;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainOrder_H_ */
