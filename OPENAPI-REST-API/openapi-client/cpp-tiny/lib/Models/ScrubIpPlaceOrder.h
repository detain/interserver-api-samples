
/*
 * ScrubIpPlaceOrder.h
 *
 * Place ScrubIP Order
 */

#ifndef TINY_CPP_CLIENT_ScrubIpPlaceOrder_H_
#define TINY_CPP_CLIENT_ScrubIpPlaceOrder_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Place ScrubIP Order
 *
 *  \ingroup Models
 *
 */

class ScrubIpPlaceOrder{
public:

    /*! \brief Constructor.
	 */
    ScrubIpPlaceOrder();
    ScrubIpPlaceOrder(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ScrubIpPlaceOrder();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getServiceType();

	/*! \brief Set 
	 */
	void setServiceType(int service_type);
	/*! \brief Get 
	 */
	std::string getIp();

	/*! \brief Set 
	 */
	void setIp(std::string ip);


    private:
    int service_type{};
    std::string ip{};
};
}

#endif /* TINY_CPP_CLIENT_ScrubIpPlaceOrder_H_ */
