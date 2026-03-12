
/*
 * HomeServicesServersLinks.h
 *
 * Map of dedicated server service IDs to their hostnames for the account dashboard.
 */

#ifndef TINY_CPP_CLIENT_HomeServicesServersLinks_H_
#define TINY_CPP_CLIENT_HomeServicesServersLinks_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Map of dedicated server service IDs to their hostnames for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesServersLinks{
public:

    /*! \brief Constructor.
	 */
    HomeServicesServersLinks();
    HomeServicesServersLinks(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeServicesServersLinks();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Link to a server.
	 */
	std::string get16058();

	/*! \brief Set Link to a server.
	 */
	void set16058(std::string 16058);


    private:
    std::string 16058{};
};
}

#endif /* TINY_CPP_CLIENT_HomeServicesServersLinks_H_ */
