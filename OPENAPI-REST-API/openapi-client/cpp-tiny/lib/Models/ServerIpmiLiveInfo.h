
/*
 * ServerIpmiLiveInfo.h
 *
 * Information about the IPMI connection.
 */

#ifndef TINY_CPP_CLIENT_ServerIpmiLiveInfo_H_
#define TINY_CPP_CLIENT_ServerIpmiLiveInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Information about the IPMI connection.
 *
 *  \ingroup Models
 *
 */

class ServerIpmiLiveInfo{
public:

    /*! \brief Constructor.
	 */
    ServerIpmiLiveInfo();
    ServerIpmiLiveInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerIpmiLiveInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getText();

	/*! \brief Set 
	 */
	void setText(std::string text);
	/*! \brief Get 
	 */
	std::string getPublicIp();

	/*! \brief Set 
	 */
	void setPublicIp(std::string public_ip);
	/*! \brief Get 
	 */
	std::string getAllowedIp();

	/*! \brief Set 
	 */
	void setAllowedIp(std::string allowed_ip);
	/*! \brief Get 
	 */
	std::string getClientUsername();

	/*! \brief Set 
	 */
	void setClientUsername(std::string client_username);
	/*! \brief Get 
	 */
	std::string getClientPassword();

	/*! \brief Set 
	 */
	void setClientPassword(std::string client_password);


    private:
    std::string text{};
    std::string public_ip{};
    std::string allowed_ip{};
    std::string client_username{};
    std::string client_password{};
};
}

#endif /* TINY_CPP_CLIENT_ServerIpmiLiveInfo_H_ */
