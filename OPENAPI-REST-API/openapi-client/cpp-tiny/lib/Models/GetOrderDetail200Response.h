
/*
 * GetOrderDetail_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetOrderDetail_200_response_H_
#define TINY_CPP_CLIENT_GetOrderDetail_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "GetOrderDetail_200_response_ips_inner.h"
#include "GetOrderDetail_200_response_packageCosts.h"
#include "GetOrderDetail_200_response_serviceTypes_inner.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetOrderDetail_200_response{
public:

    /*! \brief Constructor.
	 */
    GetOrderDetail_200_response();
    GetOrderDetail_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetOrderDetail_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	GetOrderDetail_200_response_packageCosts getPackageCosts();

	/*! \brief Set 
	 */
	void setPackageCosts(GetOrderDetail_200_response_packageCosts packageCosts);
	/*! \brief Get 
	 */
	std::list<GetOrderDetail_200_response_serviceTypes_inner> getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(std::list<GetOrderDetail_200_response_serviceTypes_inner> serviceTypes);
	/*! \brief Get 
	 */
	std::list<GetOrderDetail_200_response_ips_inner> getIps();

	/*! \brief Set 
	 */
	void setIps(std::list<GetOrderDetail_200_response_ips_inner> ips);


    private:
    GetOrderDetail_200_response_packageCosts packageCosts;
    std::list<GetOrderDetail_200_response_serviceTypes_inner> serviceTypes;
    std::list<GetOrderDetail_200_response_ips_inner> ips;
};
}

#endif /* TINY_CPP_CLIENT_GetOrderDetail_200_response_H_ */
