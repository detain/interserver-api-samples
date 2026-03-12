/*
 * ServerIpmiLiveInfo.h
 *
 * Information about the IPMI connectioj.
 */

#ifndef _ServerIpmiLiveInfo_H_
#define _ServerIpmiLiveInfo_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Information about the IPMI connectioj.
 *
 *  \ingroup Models
 *
 */

class ServerIpmiLiveInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerIpmiLiveInfo();
	ServerIpmiLiveInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerIpmiLiveInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getText();

	/*! \brief Set 
	 */
	void setText(std::string  text);
	/*! \brief Get 
	 */
	std::string getPublicIp();

	/*! \brief Set 
	 */
	void setPublicIp(std::string  public_ip);
	/*! \brief Get 
	 */
	std::string getAllowedIp();

	/*! \brief Set 
	 */
	void setAllowedIp(std::string  allowed_ip);
	/*! \brief Get 
	 */
	std::string getClientUsername();

	/*! \brief Set 
	 */
	void setClientUsername(std::string  client_username);
	/*! \brief Get 
	 */
	std::string getClientPassword();

	/*! \brief Set 
	 */
	void setClientPassword(std::string  client_password);

private:
	std::string text;
	std::string public_ip;
	std::string allowed_ip;
	std::string client_username;
	std::string client_password;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerIpmiLiveInfo_H_ */
