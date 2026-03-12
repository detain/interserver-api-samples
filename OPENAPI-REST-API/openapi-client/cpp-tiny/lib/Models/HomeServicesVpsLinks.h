
/*
 * HomeServicesVpsLinks.h
 *
 * Map of VPS service IDs to their hostnames for the account dashboard.
 */

#ifndef TINY_CPP_CLIENT_HomeServicesVpsLinks_H_
#define TINY_CPP_CLIENT_HomeServicesVpsLinks_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Map of VPS service IDs to their hostnames for the account dashboard.
 *
 *  \ingroup Models
 *
 */

class HomeServicesVpsLinks{
public:

    /*! \brief Constructor.
	 */
    HomeServicesVpsLinks();
    HomeServicesVpsLinks(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HomeServicesVpsLinks();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Link to a VPS.
	 */
	std::string get465503();

	/*! \brief Set Link to a VPS.
	 */
	void set465503(std::string 465503);
	/*! \brief Get Link to a VPS.
	 */
	std::string get2500081();

	/*! \brief Set Link to a VPS.
	 */
	void set2500081(std::string 2500081);
	/*! \brief Get Link to a VPS.
	 */
	std::string get2578866();

	/*! \brief Set Link to a VPS.
	 */
	void set2578866(std::string 2578866);


    private:
    std::string 465503{};
    std::string 2500081{};
    std::string 2578866{};
};
}

#endif /* TINY_CPP_CLIENT_HomeServicesVpsLinks_H_ */
