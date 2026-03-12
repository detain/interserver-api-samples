/*
 * ScrubIpPlaceOrder.h
 *
 * Place ScrubIP Order
 */

#ifndef _ScrubIpPlaceOrder_H_
#define _ScrubIpPlaceOrder_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Place ScrubIP Order
 *
 *  \ingroup Models
 *
 */

class ScrubIpPlaceOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	ScrubIpPlaceOrder();
	ScrubIpPlaceOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ScrubIpPlaceOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(int  service_type);
	/*! \brief Get 
	 */
	std::string getIp();

	/*! \brief Set 
	 */
	void setIp(std::string  ip);

private:
	int service_type;
	std::string ip;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ScrubIpPlaceOrder_H_ */
