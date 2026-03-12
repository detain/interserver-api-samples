
/*
 * Service.h
 *
 * An individual package tied to one of our services.
 */

#ifndef TINY_CPP_CLIENT_Service_H_
#define TINY_CPP_CLIENT_Service_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An individual package tied to one of our services.
 *
 *  \ingroup Models
 *
 */

class Service{
public:

    /*! \brief Constructor.
	 */
    Service();
    Service(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Service();


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
	long getServicesCost();

	/*! \brief Set 
	 */
	void setServicesCost(long services_cost);
	/*! \brief Get 
	 */
	std::string getServicesCurrency();

	/*! \brief Set 
	 */
	void setServicesCurrency(std::string services_currency);
	/*! \brief Get 
	 */
	int getServicesCategory();

	/*! \brief Set 
	 */
	void setServicesCategory(int services_category);
	/*! \brief Get 
	 */
	bool isServicesBuyable();

	/*! \brief Set 
	 */
	void setServicesBuyable(bool services_buyable);
	/*! \brief Get 
	 */
	int getServicesType();

	/*! \brief Set 
	 */
	void setServicesType(int services_type);
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
    long services_cost{};
    std::string services_currency{};
    int services_category{};
    bool services_buyable{};
    int services_type{};
    std::string services_field1{};
    std::string services_field2{};
    std::string services_module{};
};
}

#endif /* TINY_CPP_CLIENT_Service_H_ */
