
/*
 * DomainOrderServices10001.h
 *
 * Example schema for a domain service catalog entry.
 */

#ifndef TINY_CPP_CLIENT_DomainOrderServices10001_H_
#define TINY_CPP_CLIENT_DomainOrderServices10001_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Example schema for a domain service catalog entry.
 *
 *  \ingroup Models
 *
 */

class DomainOrderServices10001{
public:

    /*! \brief Constructor.
	 */
    DomainOrderServices10001();
    DomainOrderServices10001(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainOrderServices10001();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Service ID
	 */
	std::string getServicesId();

	/*! \brief Set Service ID
	 */
	void setServicesId(std::string services_id);
	/*! \brief Get Service Name
	 */
	std::string getServicesName();

	/*! \brief Set Service Name
	 */
	void setServicesName(std::string services_name);
	/*! \brief Get Service Cost
	 */
	std::string getServicesCost();

	/*! \brief Set Service Cost
	 */
	void setServicesCost(std::string services_cost);
	/*! \brief Get Currency of Service Cost
	 */
	std::string getServicesCurrency();

	/*! \brief Set Currency of Service Cost
	 */
	void setServicesCurrency(std::string services_currency);
	/*! \brief Get Service Category
	 */
	std::string getServicesCategory();

	/*! \brief Set Service Category
	 */
	void setServicesCategory(std::string services_category);
	/*! \brief Get Buyable flag for Service
	 */
	std::string getServicesBuyable();

	/*! \brief Set Buyable flag for Service
	 */
	void setServicesBuyable(std::string services_buyable);
	/*! \brief Get Service Type
	 */
	std::string getServicesType();

	/*! \brief Set Service Type
	 */
	void setServicesType(std::string services_type);
	/*! \brief Get Field 1 of Service
	 */
	std::string getServicesField1();

	/*! \brief Set Field 1 of Service
	 */
	void setServicesField1(std::string services_field1);
	/*! \brief Get Field 2 of Service
	 */
	std::string getServicesField2();

	/*! \brief Set Field 2 of Service
	 */
	void setServicesField2(std::string services_field2);
	/*! \brief Get Module of Service
	 */
	std::string getServicesModule();

	/*! \brief Set Module of Service
	 */
	void setServicesModule(std::string services_module);
	/*! \brief Get Hidden flag for Service
	 */
	std::string getServicesHidden();

	/*! \brief Set Hidden flag for Service
	 */
	void setServicesHidden(std::string services_hidden);


    private:
    std::string services_id{};
    std::string services_name{};
    std::string services_cost{};
    std::string services_currency{};
    std::string services_category{};
    std::string services_buyable{};
    std::string services_type{};
    std::string services_field1{};
    std::string services_field2{};
    std::string services_module{};
    std::string services_hidden{};
};
}

#endif /* TINY_CPP_CLIENT_DomainOrderServices10001_H_ */
