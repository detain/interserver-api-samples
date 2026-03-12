
/*
 * ServerOrder_memory_li.h
 *
 * Memory options for the server order.
 */

#ifndef TINY_CPP_CLIENT_ServerOrder_memory_li_H_
#define TINY_CPP_CLIENT_ServerOrder_memory_li_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerOrder_memory_li_254.h"

namespace Tiny {


/*! \brief Memory options for the server order.
 *
 *  \ingroup Models
 *
 */

class ServerOrder_memory_li{
public:

    /*! \brief Constructor.
	 */
    ServerOrder_memory_li();
    ServerOrder_memory_li(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrder_memory_li();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerOrder_memory_li_254 get254();

	/*! \brief Set 
	 */
	void set254(ServerOrder_memory_li_254 254);


    private:
    ServerOrder_memory_li_254 254;
};
}

#endif /* TINY_CPP_CLIENT_ServerOrder_memory_li_H_ */
