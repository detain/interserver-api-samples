
/*
 * VpsTrafficTotalsSectionResponse.h
 *
 * VPS Traffic Totals Secttions Data
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficTotalsSectionResponse_H_
#define TINY_CPP_CLIENT_VpsTrafficTotalsSectionResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief VPS Traffic Totals Secttions Data
 *
 *  \ingroup Models
 *
 */

class VpsTrafficTotalsSectionResponse{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficTotalsSectionResponse();
    VpsTrafficTotalsSectionResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficTotalsSectionResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	long getIn();

	/*! \brief Set 
	 */
	void setIn(long in);
	/*! \brief Get 
	 */
	long getOut();

	/*! \brief Set 
	 */
	void setOut(long out);


    private:
    long in{};
    long out{};
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficTotalsSectionResponse_H_ */
