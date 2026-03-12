
/*
 * ServerIpmiLiveRequest.h
 *
 * Request body to setup an IPMI Live connection.
 */

#ifndef TINY_CPP_CLIENT_ServerIpmiLiveRequest_H_
#define TINY_CPP_CLIENT_ServerIpmiLiveRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Request body to setup an IPMI Live connection.
 *
 *  \ingroup Models
 *
 */

class ServerIpmiLiveRequest{
public:

    /*! \brief Constructor.
	 */
    ServerIpmiLiveRequest();
    ServerIpmiLiveRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerIpmiLiveRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Your IP Address you wish to connect to the IPMI system from.
	 */
	std::string getIp();

	/*! \brief Set Your IP Address you wish to connect to the IPMI system from.
	 */
	void setIp(std::string ip);
	/*! \brief Get Asset ID
	 */
	int getAsset();

	/*! \brief Set Asset ID
	 */
	void setAsset(int asset);


    private:
    std::string ip{};
    int asset{};
};
}

#endif /* TINY_CPP_CLIENT_ServerIpmiLiveRequest_H_ */
