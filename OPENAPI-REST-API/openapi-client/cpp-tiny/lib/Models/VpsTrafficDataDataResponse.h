
/*
 * VpsTrafficDataDataResponse.h
 *
 * VPS Traffic Data section Data subsection response
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficDataDataResponse_H_
#define TINY_CPP_CLIENT_VpsTrafficDataDataResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VPSTrafficDataDataSectionResponse.h"
#include <list>

namespace Tiny {


/*! \brief VPS Traffic Data section Data subsection response
 *
 *  \ingroup Models
 *
 */

class VpsTrafficDataDataResponse{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficDataDataResponse();
    VpsTrafficDataDataResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficDataDataResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficDataDataResponse_H_ */
