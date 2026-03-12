
/*
 * DomainServiceType.h
 *
 * Service type definition for a domain registration, including name, pricing, and category.
 */

#ifndef TINY_CPP_CLIENT_DomainServiceType_H_
#define TINY_CPP_CLIENT_DomainServiceType_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Service type definition for a domain registration, including name, pricing, and category.
 *
 *  \ingroup Models
 *
 */

class DomainServiceType{
public:

    /*! \brief Constructor.
	 */
    DomainServiceType();
    DomainServiceType(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainServiceType();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Service type ID.
	 */
	std::string getServicesId();

	/*! \brief Set Service type ID.
	 */
	void setServicesId(std::string services_id);
	/*! \brief Get Service type name (e.g., .com Registration).
	 */
	std::string getServicesName();

	/*! \brief Set Service type name (e.g., .com Registration).
	 */
	void setServicesName(std::string services_name);
	/*! \brief Get Service cost per billing period.
	 */
	std::string getServicesCost();

	/*! \brief Set Service cost per billing period.
	 */
	void setServicesCost(std::string services_cost);
	/*! \brief Get Service category ID.
	 */
	std::string getServicesCategory();

	/*! \brief Set Service category ID.
	 */
	void setServicesCategory(std::string services_category);
	/*! \brief Get Whether this service type is available for purchase.
	 */
	std::string getServicesBuyable();

	/*! \brief Set Whether this service type is available for purchase.
	 */
	void setServicesBuyable(std::string services_buyable);
	/*! \brief Get Internal service type identifier.
	 */
	std::string getServicesType();

	/*! \brief Set Internal service type identifier.
	 */
	void setServicesType(std::string services_type);
	/*! \brief Get TLD or first configurable field for the service type.
	 */
	std::string getServicesField1();

	/*! \brief Set TLD or first configurable field for the service type.
	 */
	void setServicesField1(std::string services_field1);
	/*! \brief Get Second configurable field for the service type.
	 */
	std::string getServicesField2();

	/*! \brief Set Second configurable field for the service type.
	 */
	void setServicesField2(std::string services_field2);
	/*! \brief Get Backend module handling this service type.
	 */
	std::string getServicesModule();

	/*! \brief Set Backend module handling this service type.
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

#endif /* TINY_CPP_CLIENT_DomainServiceType_H_ */
