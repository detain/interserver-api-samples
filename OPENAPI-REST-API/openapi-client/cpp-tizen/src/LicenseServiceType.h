/*
 * LicenseServiceType.h
 *
 * Service type definition for a software license, including name, pricing, and category.
 */

#ifndef _LicenseServiceType_H_
#define _LicenseServiceType_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Service type definition for a software license, including name, pricing, and category.
 *
 *  \ingroup Models
 *
 */

class LicenseServiceType : public Object {
public:
	/*! \brief Constructor.
	 */
	LicenseServiceType();
	LicenseServiceType(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicenseServiceType();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Service ID
	 */
	std::string getServicesId();

	/*! \brief Set Service ID
	 */
	void setServicesId(std::string  services_id);
	/*! \brief Get Service name
	 */
	std::string getServicesName();

	/*! \brief Set Service name
	 */
	void setServicesName(std::string  services_name);
	/*! \brief Get Service cost
	 */
	std::string getServicesCost();

	/*! \brief Set Service cost
	 */
	void setServicesCost(std::string  services_cost);
	/*! \brief Get Service category
	 */
	std::string getServicesCategory();

	/*! \brief Set Service category
	 */
	void setServicesCategory(std::string  services_category);
	/*! \brief Get Buyable status
	 */
	std::string getServicesBuyable();

	/*! \brief Set Buyable status
	 */
	void setServicesBuyable(std::string  services_buyable);
	/*! \brief Get Service type
	 */
	std::string getServicesType();

	/*! \brief Set Service type
	 */
	void setServicesType(std::string  services_type);
	/*! \brief Get Service field 1
	 */
	std::string getServicesField1();

	/*! \brief Set Service field 1
	 */
	void setServicesField1(std::string  services_field1);
	/*! \brief Get Service field 2
	 */
	std::string getServicesField2();

	/*! \brief Set Service field 2
	 */
	void setServicesField2(std::string  services_field2);
	/*! \brief Get Service module
	 */
	std::string getServicesModule();

	/*! \brief Set Service module
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

#endif /* _LicenseServiceType_H_ */
