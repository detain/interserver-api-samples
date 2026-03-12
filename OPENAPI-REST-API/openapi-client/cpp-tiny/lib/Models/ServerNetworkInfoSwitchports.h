
/*
 * ServerNetworkInfo_switchports.h
 *
 * Object containing switchport information.
 */

#ifndef TINY_CPP_CLIENT_ServerNetworkInfo_switchports_H_
#define TINY_CPP_CLIENT_ServerNetworkInfo_switchports_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerSwitchport.h"

namespace Tiny {


/*! \brief Object containing switchport information.
 *
 *  \ingroup Models
 *
 */

class ServerNetworkInfo_switchports{
public:

    /*! \brief Constructor.
	 */
    ServerNetworkInfo_switchports();
    ServerNetworkInfo_switchports(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerNetworkInfo_switchports();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerSwitchport get10414();

	/*! \brief Set 
	 */
	void set10414(ServerSwitchport 10414);


    private:
    ServerSwitchport 10414;
};
}

#endif /* TINY_CPP_CLIENT_ServerNetworkInfo_switchports_H_ */
