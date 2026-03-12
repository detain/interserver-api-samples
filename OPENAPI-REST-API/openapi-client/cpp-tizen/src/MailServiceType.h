/*
 * MailServiceType.h
 *
 * Service type definition for a mail service, including name, pricing, and category.
 */

#ifndef _MailServiceType_H_
#define _MailServiceType_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Service type definition for a mail service, including name, pricing, and category.
 *
 *  \ingroup Models
 *
 */

class MailServiceType : public Object {
public:
	/*! \brief Constructor.
	 */
	MailServiceType();
	MailServiceType(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailServiceType();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID of the service type.
	 */
	std::string getServicesId();

	/*! \brief Set The ID of the service type.
	 */
	void setServicesId(std::string  services_id);
	/*! \brief Get The name of the service type.
	 */
	std::string getServicesName();

	/*! \brief Set The name of the service type.
	 */
	void setServicesName(std::string  services_name);
	/*! \brief Get The cost of the service type.
	 */
	std::string getServicesCost();

	/*! \brief Set The cost of the service type.
	 */
	void setServicesCost(std::string  services_cost);
	/*! \brief Get The category of the service type.
	 */
	std::string getServicesCategory();

	/*! \brief Set The category of the service type.
	 */
	void setServicesCategory(std::string  services_category);
	/*! \brief Get Whether the service type is buyable.
	 */
	std::string getServicesBuyable();

	/*! \brief Set Whether the service type is buyable.
	 */
	void setServicesBuyable(std::string  services_buyable);
	/*! \brief Get The type of the service type.
	 */
	std::string getServicesType();

	/*! \brief Set The type of the service type.
	 */
	void setServicesType(std::string  services_type);
	/*! \brief Get Additional field for the service type.
	 */
	std::string getServicesField1();

	/*! \brief Set Additional field for the service type.
	 */
	void setServicesField1(std::string  services_field1);
	/*! \brief Get Additional field for the service type.
	 */
	std::string getServicesField2();

	/*! \brief Set Additional field for the service type.
	 */
	void setServicesField2(std::string  services_field2);
	/*! \brief Get The module of the service type.
	 */
	std::string getServicesModule();

	/*! \brief Set The module of the service type.
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

#endif /* _MailServiceType_H_ */
