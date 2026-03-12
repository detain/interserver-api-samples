
/*
 * Home_services_licenses.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Home_services_licenses_H_
#define TINY_CPP_CLIENT_Home_services_licenses_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "HomeServicesLicensesLinks.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home_services_licenses{
public:

    /*! \brief Constructor.
	 */
    Home_services_licenses();
    Home_services_licenses(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_services_licenses();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	HomeServicesLicensesLinks getLinks();

	/*! \brief Set 
	 */
	void setLinks(HomeServicesLicensesLinks links);
	/*! \brief Get Number of licenses.
	 */
	int getCount();

	/*! \brief Set Number of licenses.
	 */
	void setCount(int count);


    private:
    HomeServicesLicensesLinks links;
    int count{};
};
}

#endif /* TINY_CPP_CLIENT_Home_services_licenses_H_ */
