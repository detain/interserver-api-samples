
/*
 * ServerIpmiPowerRequest.h
 *
 * IPMI Power command for servers
 */

#ifndef TINY_CPP_CLIENT_ServerIpmiPowerRequest_H_
#define TINY_CPP_CLIENT_ServerIpmiPowerRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief IPMI Power command for servers
 *
 *  \ingroup Models
 *
 */

class ServerIpmiPowerRequest{
public:

    /*! \brief Constructor.
	 */
    ServerIpmiPowerRequest();
    ServerIpmiPowerRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerIpmiPowerRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The power action to send to the ipmi controller.
	 */
	std::string getAction();

	/*! \brief Set The power action to send to the ipmi controller.
	 */
	void setAction(std::string action);
	/*! \brief Get The Asset ID
	 */
	int getAsset();

	/*! \brief Set The Asset ID
	 */
	void setAsset(int asset);


    private:
    std::string action{};
    int asset{};
};
}

#endif /* TINY_CPP_CLIENT_ServerIpmiPowerRequest_H_ */
