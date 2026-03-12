
/*
 * Services.h
 *
 * The list of service packages.
 */

#ifndef TINY_CPP_CLIENT_Services_H_
#define TINY_CPP_CLIENT_Services_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Service.h"
#include <map>

namespace Tiny {


/*! \brief The list of service packages.
 *
 *  \ingroup Models
 *
 */

class Services{
public:

    /*! \brief Constructor.
	 */
    Services();
    Services(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Services();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_Services_H_ */
