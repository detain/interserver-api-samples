
/*
 * HomeServicesWebhostingLinks.h
 *
 * Map of webhosting service IDs to their hostnames for the account dashboard.
 */

#ifndef TINY_CPP_CLIENT_HomeServicesWebhostingLinks_H_
#define TINY_CPP_CLIENT_HomeServicesWebhostingLinks_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Map of webhosting service IDs to their hostnames for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesWebhostingLinks{
public:

    /*! \brief Constructor.
	 */
    HomeServicesWebhostingLinks();
    HomeServicesWebhostingLinks(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeServicesWebhostingLinks();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Link to a website.
	 */
	std::string get376359();

	/*! \brief Set Link to a website.
	 */
	void set376359(std::string 376359);
	/*! \brief Get Link to a website.
	 */
	std::string get376473();

	/*! \brief Set Link to a website.
	 */
	void set376473(std::string 376473);
	/*! \brief Get Link to a website.
	 */
	std::string get386218();

	/*! \brief Set Link to a website.
	 */
	void set386218(std::string 386218);


    private:
    std::string 376359{};
    std::string 376473{};
    std::string 386218{};
};
}

#endif /* TINY_CPP_CLIENT_HomeServicesWebhostingLinks_H_ */
