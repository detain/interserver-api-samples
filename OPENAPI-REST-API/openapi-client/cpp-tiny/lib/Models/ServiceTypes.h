
/*
 * ServiceTypes.h
 *
 * The listing of service types
 */

#ifndef TINY_CPP_CLIENT_ServiceTypes_H_
#define TINY_CPP_CLIENT_ServiceTypes_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServiceType.h"
#include <map>

namespace Tiny {


/*! \brief The listing of service types
 *
 *  \ingroup Models
 *
 */

class ServiceTypes{
public:

    /*! \brief Constructor.
	 */
    ServiceTypes();
    ServiceTypes(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServiceTypes();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_ServiceTypes_H_ */
