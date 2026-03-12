
/*
 * VpsTrafficHistorySectionDataResponse.h
 *
 * VPS Traffic Hisotrty Data Row of Hour/Day Section
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficHistorySectionDataResponse_H_
#define TINY_CPP_CLIENT_VpsTrafficHistorySectionDataResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VPSTrafficDataDataSectionResponse_inner.h"
#include <list>

namespace Tiny {


/*! \brief VPS Traffic Hisotrty Data Row of Hour/Day Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficHistorySectionDataResponse{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficHistorySectionDataResponse();
    VpsTrafficHistorySectionDataResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficHistorySectionDataResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficHistorySectionDataResponse_H_ */
