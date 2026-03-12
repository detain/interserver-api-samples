
/*
 * DomainOrder.h
 *
 * Ordering metadata for domain registration and transfers.
 */

#ifndef TINY_CPP_CLIENT_DomainOrder_H_
#define TINY_CPP_CLIENT_DomainOrder_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DomainOrder_services.h"
#include "Object.h"

namespace Tiny {


/*! \brief Ordering metadata for domain registration and transfers.
 *
 *  \ingroup Models
 *
 */

class DomainOrder{
public:

    /*! \brief Constructor.
	 */
    DomainOrder();
    DomainOrder(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainOrder();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Cost of Whois Privacy
	 */
	std::string getWhoisPrivacyCost();

	/*! \brief Set Cost of Whois Privacy
	 */
	void setWhoisPrivacyCost(std::string whoisPrivacyCost);
	/*! \brief Get 
	 */
	DomainOrder_services getServices();

	/*! \brief Set 
	 */
	void setServices(DomainOrder_services services);
	/*! \brief Get Map of TLDs to domain service IDs.
	 */
	Object getTldServices();

	/*! \brief Set Map of TLDs to domain service IDs.
	 */
	void setTldServices(Object tldServices);


    private:
    std::string whoisPrivacyCost{};
    DomainOrder_services services;
    Object tldServices;
};
}

#endif /* TINY_CPP_CLIENT_DomainOrder_H_ */
