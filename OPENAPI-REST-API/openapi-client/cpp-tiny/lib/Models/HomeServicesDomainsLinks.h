
/*
 * HomeServicesDomainsLinks.h
 *
 * Map of domain service IDs to their hostnames for the account dashboard.
 */

#ifndef TINY_CPP_CLIENT_HomeServicesDomainsLinks_H_
#define TINY_CPP_CLIENT_HomeServicesDomainsLinks_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Map of domain service IDs to their hostnames for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesDomainsLinks{
public:

    /*! \brief Constructor.
	 */
    HomeServicesDomainsLinks();
    HomeServicesDomainsLinks(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeServicesDomainsLinks();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Link to a domain.
	 */
	std::string get376114();

	/*! \brief Set Link to a domain.
	 */
	void set376114(std::string 376114);
	/*! \brief Get Link to a domain.
	 */
	std::string get376503();

	/*! \brief Set Link to a domain.
	 */
	void set376503(std::string 376503);
	/*! \brief Get Link to a domain.
	 */
	std::string get592337();

	/*! \brief Set Link to a domain.
	 */
	void set592337(std::string 592337);


    private:
    std::string 376114{};
    std::string 376503{};
    std::string 592337{};
};
}

#endif /* TINY_CPP_CLIENT_HomeServicesDomainsLinks_H_ */
