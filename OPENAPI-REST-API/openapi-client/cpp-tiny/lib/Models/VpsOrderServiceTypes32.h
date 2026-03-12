
/*
 * VpsOrder_serviceTypes_32.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_VpsOrder_serviceTypes_32_H_
#define TINY_CPP_CLIENT_VpsOrder_serviceTypes_32_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsOrder_serviceTypes_32{
public:

    /*! \brief Constructor.
	 */
    VpsOrder_serviceTypes_32();
    VpsOrder_serviceTypes_32(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsOrder_serviceTypes_32();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getServicesId();

	/*! \brief Set 
	 */
	void setServicesId(std::string services_id);
	/*! \brief Get 
	 */
	std::string getServicesName();

	/*! \brief Set 
	 */
	void setServicesName(std::string services_name);
	/*! \brief Get 
	 */
	std::string getServicesCost();

	/*! \brief Set 
	 */
	void setServicesCost(std::string services_cost);
	/*! \brief Get 
	 */
	std::string getServicesCategory();

	/*! \brief Set 
	 */
	void setServicesCategory(std::string services_category);
	/*! \brief Get 
	 */
	std::string getServicesBuyable();

	/*! \brief Set 
	 */
	void setServicesBuyable(std::string services_buyable);
	/*! \brief Get 
	 */
	std::string getServicesType();

	/*! \brief Set 
	 */
	void setServicesType(std::string services_type);
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
    std::string services_id{};
    std::string services_name{};
    std::string services_cost{};
    std::string services_category{};
    std::string services_buyable{};
    std::string services_type{};
    std::string services_field1{};
    std::string services_field2{};
    std::string services_module{};
};
}

#endif /* TINY_CPP_CLIENT_VpsOrder_serviceTypes_32_H_ */
