
/*
 * GetOrderDetail_200_response_ips_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetOrderDetail_200_response_ips_inner_H_
#define TINY_CPP_CLIENT_GetOrderDetail_200_response_ips_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetOrderDetail_200_response_ips_inner{
public:

    /*! \brief Constructor.
	 */
    GetOrderDetail_200_response_ips_inner();
    GetOrderDetail_200_response_ips_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetOrderDetail_200_response_ips_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	long getServiceId();

	/*! \brief Set 
	 */
	void setServiceId(long service_id);
	/*! \brief Get 
	 */
	std::string getServiceModule();

	/*! \brief Set 
	 */
	void setServiceModule(std::string service_module);
	/*! \brief Get 
	 */
	std::string getServiceHostname();

	/*! \brief Set 
	 */
	void setServiceHostname(std::string service_hostname);


    private:
    long service_id{};
    std::string service_module{};
    std::string service_hostname{};
};
}

#endif /* TINY_CPP_CLIENT_GetOrderDetail_200_response_ips_inner_H_ */
