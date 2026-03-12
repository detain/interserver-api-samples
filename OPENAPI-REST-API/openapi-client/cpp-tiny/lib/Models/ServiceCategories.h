
/*
 * ServiceCategories.h
 *
 * The listing of the categories for the services.
 */

#ifndef TINY_CPP_CLIENT_ServiceCategories_H_
#define TINY_CPP_CLIENT_ServiceCategories_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServiceCategory.h"
#include <map>

namespace Tiny {


/*! \brief The listing of the categories for the services.
 *
 *  \ingroup Models
 *
 */

class ServiceCategories{
public:

    /*! \brief Constructor.
	 */
    ServiceCategories();
    ServiceCategories(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServiceCategories();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_ServiceCategories_H_ */
