
/*
 * VPSTrafficDataDataSectionResponse_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_VPSTrafficDataDataSectionResponse_inner_H_
#define TINY_CPP_CLIENT_VPSTrafficDataDataSectionResponse_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VPSTrafficDataDataSectionResponse_inner{
public:

    /*! \brief Constructor.
	 */
    VPSTrafficDataDataSectionResponse_inner();
    VPSTrafficDataDataSectionResponse_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VPSTrafficDataDataSectionResponse_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_VPSTrafficDataDataSectionResponse_inner_H_ */
