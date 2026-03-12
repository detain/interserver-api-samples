
/*
 * ServerOrder_ips_li.h
 *
 * IP options for the server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrder_ips_li_H_
#define TINY_CPP_CLIENT_ServerOrder_ips_li_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerOrderIP.h"

namespace Tiny {


/*! \brief IP options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_ips_li{
public:

    /*! \brief Constructor.
	 */
    ServerOrder_ips_li();
    ServerOrder_ips_li(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrder_ips_li();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerOrderIP get9();

	/*! \brief Set 
	 */
	void set9(ServerOrderIP 9);


    private:
    ServerOrderIP 9;
};
}

#endif /* TINY_CPP_CLIENT_ServerOrder_ips_li_H_ */
