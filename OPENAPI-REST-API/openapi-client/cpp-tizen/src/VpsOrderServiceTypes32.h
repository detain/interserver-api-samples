/*
 * VpsOrder_serviceTypes_32.h
 *
 * 
 */

#ifndef _VpsOrder_serviceTypes_32_H_
#define _VpsOrder_serviceTypes_32_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VpsOrder_serviceTypes_32 : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsOrder_serviceTypes_32();
	VpsOrder_serviceTypes_32(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsOrder_serviceTypes_32();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getServicesId();

	/*! \brief Set 
	 */
	void setServicesId(std::string  services_id);
	/*! \brief Get 
	 */
	std::string getServicesName();

	/*! \brief Set 
	 */
	void setServicesName(std::string  services_name);
	/*! \brief Get 
	 */
	std::string getServicesCost();

	/*! \brief Set 
	 */
	void setServicesCost(std::string  services_cost);
	/*! \brief Get 
	 */
	std::string getServicesCategory();

	/*! \brief Set 
	 */
	void setServicesCategory(std::string  services_category);
	/*! \brief Get 
	 */
	std::string getServicesBuyable();

	/*! \brief Set 
	 */
	void setServicesBuyable(std::string  services_buyable);
	/*! \brief Get 
	 */
	std::string getServicesType();

	/*! \brief Set 
	 */
	void setServicesType(std::string  services_type);
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
	std::string services_id;
	std::string services_name;
	std::string services_cost;
	std::string services_category;
	std::string services_buyable;
	std::string services_type;
	std::string services_field1;
	std::string services_field2;
	std::string services_module;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsOrder_serviceTypes_32_H_ */
