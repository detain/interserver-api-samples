
/*
 * VpsTrafficDataSectionResponse.h
 *
 * VPS Traffic Data Section Response
 */

#ifndef TINY_CPP_CLIENT_VpsTrafficDataSectionResponse_H_
#define TINY_CPP_CLIENT_VpsTrafficDataSectionResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VPSTrafficDataDataSectionResponse.h"
#include <list>

namespace Tiny {


/*! \brief VPS Traffic Data Section Response
 *
 *  \ingroup Models
 *
 */

class VpsTrafficDataSectionResponse{
public:

    /*! \brief Constructor.
	 */
    VpsTrafficDataSectionResponse();
    VpsTrafficDataSectionResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsTrafficDataSectionResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	std::list<VPSTrafficDataDataSectionResponse> getData();

	/*! \brief Set 
	 */
	void setData(std::list<VPSTrafficDataDataSectionResponse> data);


    private:
    std::string name{};
    std::list<VPSTrafficDataDataSectionResponse> data;
};
}

#endif /* TINY_CPP_CLIENT_VpsTrafficDataSectionResponse_H_ */
