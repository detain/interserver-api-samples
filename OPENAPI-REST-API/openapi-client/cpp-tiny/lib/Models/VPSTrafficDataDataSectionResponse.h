
/*
 * VPSTrafficDataDataSectionResponse.h
 *
 * VPS Traffic Data section Data subsection Row Response
 */

#ifndef TINY_CPP_CLIENT_VPSTrafficDataDataSectionResponse_H_
#define TINY_CPP_CLIENT_VPSTrafficDataDataSectionResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VPSTrafficDataDataSectionResponse_inner.h"
#include <list>

namespace Tiny {


/*! \brief VPS Traffic Data section Data subsection Row Response
 *
 *  \ingroup Models
 *
 */

class VPSTrafficDataDataSectionResponse{
public:

    /*! \brief Constructor.
	 */
    VPSTrafficDataDataSectionResponse();
    VPSTrafficDataDataSectionResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VPSTrafficDataDataSectionResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_VPSTrafficDataDataSectionResponse_H_ */
