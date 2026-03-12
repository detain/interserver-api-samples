/*
 * GetOrderDetail_200_response.h
 *
 * 
 */

#ifndef _GetOrderDetail_200_response_H_
#define _GetOrderDetail_200_response_H_


#include <string>
#include "GetOrderDetail_200_response_ips_inner.h"
#include "GetOrderDetail_200_response_packageCosts.h"
#include "GetOrderDetail_200_response_serviceTypes_inner.h"
#include <list>
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

class GetOrderDetail_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	GetOrderDetail_200_response();
	GetOrderDetail_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetOrderDetail_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	GetOrderDetail_200_response_packageCosts getPackageCosts();

	/*! \brief Set 
	 */
	void setPackageCosts(GetOrderDetail_200_response_packageCosts  packageCosts);
	/*! \brief Get 
	 */
	std::list<GetOrderDetail_200_response_serviceTypes_inner> getServiceTypes();

	/*! \brief Set 
	 */
	void setServiceTypes(std::list <GetOrderDetail_200_response_serviceTypes_inner> serviceTypes);
	/*! \brief Get 
	 */
	std::list<GetOrderDetail_200_response_ips_inner> getIps();

	/*! \brief Set 
	 */
	void setIps(std::list <GetOrderDetail_200_response_ips_inner> ips);

private:
	GetOrderDetail_200_response_packageCosts packageCosts;
	std::list <GetOrderDetail_200_response_serviceTypes_inner>serviceTypes;
	std::list <GetOrderDetail_200_response_ips_inner>ips;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetOrderDetail_200_response_H_ */
