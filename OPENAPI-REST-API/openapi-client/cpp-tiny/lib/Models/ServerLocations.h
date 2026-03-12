
/*
 * Server_locations.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Server_locations_H_
#define TINY_CPP_CLIENT_Server_locations_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerLocation1.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Server_locations{
public:

    /*! \brief Constructor.
	 */
    Server_locations();
    Server_locations(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Server_locations();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerLocation1 get1();

	/*! \brief Set 
	 */
	void set1(ServerLocation1 1);


    private:
    ServerLocation1 1;
};
}

#endif /* TINY_CPP_CLIENT_Server_locations_H_ */
