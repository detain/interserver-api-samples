/*
 * Service.h
 *
 * An individual package tied to one of our services.
 */

#ifndef _Service_H_
#define _Service_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief An individual package tied to one of our services.
 *
 *  \ingroup Models
 *
 */

class Service : public Object {
public:
	/*! \brief Constructor.
	 */
	Service();
	Service(char* str);

	/*! \brief Destructor.
	 */
	virtual ~Service();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getServicesId();

	/*! \brief Set 
	 */
	void setServicesId(int  services_id);
	/*! \brief Get 
	 */
	std::string getServicesName();

	/*! \brief Set 
	 */
	void setServicesName(std::string  services_name);
	/*! \brief Get 
	 */
	long long getServicesCost();

	/*! \brief Set 
	 */
	void setServicesCost(long long  services_cost);
	/*! \brief Get 
	 */
	std::string getServicesCurrency();

	/*! \brief Set 
	 */
	void setServicesCurrency(std::string  services_currency);
	/*! \brief Get 
	 */
	int getServicesCategory();

	/*! \brief Set 
	 */
	void setServicesCategory(int  services_category);
	/*! \brief Get 
	 */
	bool getServicesBuyable();

	/*! \brief Set 
	 */
	void setServicesBuyable(bool  services_buyable);
	/*! \brief Get 
	 */
	int getServicesType();

	/*! \brief Set 
	 */
	void setServicesType(int  services_type);
	/*! \brief Get 
	 */
	std::string getServicesField1();

	/*! \brief Set 
	 */
	void setServicesField1(std::string  services_field1);
	/*! \brief Get 
	 */
	std::string getServicesField2();

	/*! \brief Set 
	 */
	void setServicesField2(std::string  services_field2);
	/*! \brief Get 
	 */
	std::string getServicesModule();

	/*! \brief Set 
	 */
	void setServicesModule(std::string  services_module);

private:
	int services_id;
	std::string services_name;
	long long services_cost;
	std::string services_currency;
	int services_category;
	bool services_buyable;
	int services_type;
	std::string services_field1;
	std::string services_field2;
	std::string services_module;
	void __init();
	void __cleanup();

};
}
}

#endif /* _Service_H_ */
