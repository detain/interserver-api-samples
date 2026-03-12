/*
 * GetOrderDetail_200_response_ips_inner.h
 *
 * 
 */

#ifndef _GetOrderDetail_200_response_ips_inner_H_
#define _GetOrderDetail_200_response_ips_inner_H_


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

class GetOrderDetail_200_response_ips_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	GetOrderDetail_200_response_ips_inner();
	GetOrderDetail_200_response_ips_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetOrderDetail_200_response_ips_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getServiceId();

	/*! \brief Set 
	 */
	void setServiceId(long long  service_id);
	/*! \brief Get 
	 */
	std::string getServiceModule();

	/*! \brief Set 
	 */
	void setServiceModule(std::string  service_module);
	/*! \brief Get 
	 */
	std::string getServiceHostname();

	/*! \brief Set 
	 */
	void setServiceHostname(std::string  service_hostname);

private:
	long long service_id;
	std::string service_module;
	std::string service_hostname;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetOrderDetail_200_response_ips_inner_H_ */
