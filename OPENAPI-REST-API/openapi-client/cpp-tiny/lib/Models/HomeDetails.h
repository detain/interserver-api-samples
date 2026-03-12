
/*
 * Home_details.h
 *
 * Users details.
 */

#ifndef TINY_CPP_CLIENT_Home_details_H_
#define TINY_CPP_CLIENT_Home_details_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Home_details_modules.h"

namespace Tiny {


/*! \brief Users details.
 *
 *  \ingroup Models
 *
 */

class Home_details{
public:

    /*! \brief Constructor.
	 */
    Home_details();
    Home_details(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home_details();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	Home_details_modules getModules();

	/*! \brief Set 
	 */
	void setModules(Home_details_modules modules);


    private:
    Home_details_modules modules;
};
}

#endif /* TINY_CPP_CLIENT_Home_details_H_ */
