
/*
 * ServerOrder_bandwidth_li.h
 *
 * Bandwidth options for the server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrder_bandwidth_li_H_
#define TINY_CPP_CLIENT_ServerOrder_bandwidth_li_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerOrderBandwidth.h"

namespace Tiny {


/*! \brief Bandwidth options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_bandwidth_li{
public:

    /*! \brief Constructor.
	 */
    ServerOrder_bandwidth_li();
    ServerOrder_bandwidth_li(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrder_bandwidth_li();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerOrderBandwidth get15();

	/*! \brief Set 
	 */
	void set15(ServerOrderBandwidth 15);


    private:
    ServerOrderBandwidth 15;
};
}

#endif /* TINY_CPP_CLIENT_ServerOrder_bandwidth_li_H_ */
