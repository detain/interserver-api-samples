
/*
 * VpsTrafficUsageResponse.h
 *
 * VPS Traffic Usage Section
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficUsageResponse_H_
#define TINY_CPP_CLIENT_VpsTrafficUsageResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsTrafficTotalsSectionResponse.h"
#include "VpsTrafficUsageAverageResponse.h"

namespace Tiny {


/*! \brief VPS Traffic Usage Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficUsageResponse{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficUsageResponse();
    VpsTrafficUsageResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficUsageResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getCurrent();

	/*! \brief Set 
	 */
	void setCurrent(VpsTrafficTotalsSectionResponse current);
	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getPeak();

	/*! \brief Set 
	 */
	void setPeak(VpsTrafficTotalsSectionResponse peak);
	/*! \brief Get 
	 */
	VpsTrafficUsageAverageResponse getAverage();

	/*! \brief Set 
	 */
	void setAverage(VpsTrafficUsageAverageResponse average);


    private:
    VpsTrafficTotalsSectionResponse current;
    VpsTrafficTotalsSectionResponse peak;
    VpsTrafficUsageAverageResponse average;
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficUsageResponse_H_ */
