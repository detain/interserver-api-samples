/*
 * ServerIpmiLiveRequest.h
 *
 * Request body to setup an IPMI Live connection.
 */

#ifndef _ServerIpmiLiveRequest_H_
#define _ServerIpmiLiveRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request body to setup an IPMI Live connection.
 *
 *  \ingroup Models
 *
 */

class ServerIpmiLiveRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerIpmiLiveRequest();
	ServerIpmiLiveRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerIpmiLiveRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Your IP Address you wish to connect to the IPMI system from.
	 */
	std::string getIp();

	/*! \brief Set Your IP Address you wish to connect to the IPMI system from.
	 */
	void setIp(std::string  ip);
	/*! \brief Get Asset ID
	 */
	int getAsset();

	/*! \brief Set Asset ID
	 */
	void setAsset(int  asset);

private:
	std::string ip;
	int asset;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerIpmiLiveRequest_H_ */
