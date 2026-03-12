
/*
 * ServerOrder_memory_li_254.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ServerOrder_memory_li_254_H_
#define TINY_CPP_CLIENT_ServerOrder_memory_li_254_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerOrderMemory.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerOrder_memory_li_254{
public:

    /*! \brief Constructor.
	 */
    ServerOrder_memory_li_254();
    ServerOrder_memory_li_254(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerOrder_memory_li_254();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerOrderMemory get65();

	/*! \brief Set 
	 */
	void set65(ServerOrderMemory 65);


    private:
    ServerOrderMemory 65;
};
}

#endif /* TINY_CPP_CLIENT_ServerOrder_memory_li_254_H_ */
