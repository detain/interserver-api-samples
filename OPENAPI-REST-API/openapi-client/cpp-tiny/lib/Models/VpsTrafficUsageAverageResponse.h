
/*
 * VpsTrafficUsageAverageResponse.h
 *
 * VPS Traffic Usage Average Section
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficUsageAverageResponse_H_
#define TINY_CPP_CLIENT_VpsTrafficUsageAverageResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsTrafficUsageAverageSectionResponse.h"

namespace Tiny {


/*! \brief VPS Traffic Usage Average Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficUsageAverageResponse{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficUsageAverageResponse();
    VpsTrafficUsageAverageResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficUsageAverageResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsTrafficUsageAverageSectionResponse getIn();

	/*! \brief Set 
	 */
	void setIn(VpsTrafficUsageAverageSectionResponse in);
	/*! \brief Get 
	 */
	VpsTrafficUsageAverageSectionResponse getOut();

	/*! \brief Set 
	 */
	void setOut(VpsTrafficUsageAverageSectionResponse out);


    private:
    VpsTrafficUsageAverageSectionResponse in;
    VpsTrafficUsageAverageSectionResponse out;
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficUsageAverageResponse_H_ */
