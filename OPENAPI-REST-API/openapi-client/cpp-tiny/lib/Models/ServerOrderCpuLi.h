
/*
 * ServerOrder_cpu_li.h
 *
 * CPU options for the server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrder_cpu_li_H_
#define TINY_CPP_CLIENT_ServerOrder_cpu_li_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerOrderCPU.h"

namespace Tiny {


/*! \brief CPU options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_cpu_li{
public:

    /*! \brief Constructor.
	 */
    ServerOrder_cpu_li();
    ServerOrder_cpu_li(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrder_cpu_li();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerOrderCPU get254();

	/*! \brief Set 
	 */
	void set254(ServerOrderCPU 254);


    private:
    ServerOrderCPU 254;
};
}

#endif /* TINY_CPP_CLIENT_ServerOrder_cpu_li_H_ */
