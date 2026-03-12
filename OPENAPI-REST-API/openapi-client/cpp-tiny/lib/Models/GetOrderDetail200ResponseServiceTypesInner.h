
/*
 * GetOrderDetail_200_response_serviceTypes_inner.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_GetOrderDetail_200_response_serviceTypes_inner_H_
#define TINY_CPP_CLIENT_GetOrderDetail_200_response_serviceTypes_inner_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class GetOrderDetail_200_response_serviceTypes_inner{
public:

    /*! \brief Constructor.
	 */
    GetOrderDetail_200_response_serviceTypes_inner();
    GetOrderDetail_200_response_serviceTypes_inner(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~GetOrderDetail_200_response_serviceTypes_inner();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getServicesId();

	/*! \brief Set 
	 */
	void setServicesId(int services_id);
	/*! \brief Get 
	 */
	std::string getServicesName();

	/*! \brief Set 
	 */
	void setServicesName(std::string services_name);
	/*! \brief Get 
	 */
	int getServicesCost();

	/*! \brief Set 
	 */
	void setServicesCost(int services_cost);
	/*! \brief Get 
	 */
	std::string getServicesField1();

	/*! \brief Set 
	 */
	void setServicesField1(std::string services_field1);
	/*! \brief Get 
	 */
	std::string getServicesField2();

	/*! \brief Set 
	 */
	void setServicesField2(std::string services_field2);
	/*! \brief Get 
	 */
	std::string getServicesModule();

	/*! \brief Set 
	 */
	void setServicesModule(std::string services_module);


    private:
    int services_id{};
    std::string services_name{};
    int services_cost{};
    std::string services_field1{};
    std::string services_field2{};
    std::string services_module{};
};
}

#endif /* TINY_CPP_CLIENT_GetOrderDetail_200_response_serviceTypes_inner_H_ */
