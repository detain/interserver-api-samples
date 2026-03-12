/*
 * GetOrderDetail_200_response_serviceTypes_inner.h
 *
 * 
 */

#ifndef _GetOrderDetail_200_response_serviceTypes_inner_H_
#define _GetOrderDetail_200_response_serviceTypes_inner_H_


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

class GetOrderDetail_200_response_serviceTypes_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	GetOrderDetail_200_response_serviceTypes_inner();
	GetOrderDetail_200_response_serviceTypes_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetOrderDetail_200_response_serviceTypes_inner();

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
	int getServicesCost();

	/*! \brief Set 
	 */
	void setServicesCost(int  services_cost);
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
	int services_cost;
	std::string services_field1;
	std::string services_field2;
	std::string services_module;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetOrderDetail_200_response_serviceTypes_inner_H_ */
