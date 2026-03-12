
/*
 * VpsTrafficHistorySectionResponse.h
 *
 * VPS Traffic History Hour and Day Sections
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficHistorySectionResponse_H_
#define TINY_CPP_CLIENT_VpsTrafficHistorySectionResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsTrafficHistorySectionDataResponse.h"
#include <list>

namespace Tiny {


/*! \brief VPS Traffic History Hour and Day Sections
 *
 *  \ingroup Models
 *
 */

class VpsTrafficHistorySectionResponse{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficHistorySectionResponse();
    VpsTrafficHistorySectionResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficHistorySectionResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::list<VpsTrafficHistorySectionDataResponse> getData();

	/*! \brief Set 
	 */
	void setData(std::list<VpsTrafficHistorySectionDataResponse> data);
	/*! \brief Get 
	 */
	std::list<std::string> getTimes();

	/*! \brief Set 
	 */
	void setTimes(std::list<std::string> times);


    private:
    std::list<VpsTrafficHistorySectionDataResponse> data;
    std::list<std::string> times;
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficHistorySectionResponse_H_ */
