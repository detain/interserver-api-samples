
/*
 * ServerOrder_os_li.h
 *
 * Operating System options for the server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrder_os_li_H_
#define TINY_CPP_CLIENT_ServerOrder_os_li_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerOrderOS.h"

namespace Tiny {


/*! \brief Operating System options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_os_li{
public:

    /*! \brief Constructor.
	 */
    ServerOrder_os_li();
    ServerOrder_os_li(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrder_os_li();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerOrderOS get51();

	/*! \brief Set 
	 */
	void set51(ServerOrderOS 51);


    private:
    ServerOrderOS 51;
};
}

#endif /* TINY_CPP_CLIENT_ServerOrder_os_li_H_ */
