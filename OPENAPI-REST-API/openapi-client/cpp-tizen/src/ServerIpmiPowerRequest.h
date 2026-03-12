/*
 * ServerIpmiPowerRequest.h
 *
 * IPMI Power command for servers
 */

#ifndef _ServerIpmiPowerRequest_H_
#define _ServerIpmiPowerRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief IPMI Power command for servers
 *
 *  \ingroup Models
 *
 */

class ServerIpmiPowerRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerIpmiPowerRequest();
	ServerIpmiPowerRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerIpmiPowerRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The power action to send to the ipmi controller.
	 */
	std::string getAction();

	/*! \brief Set The power action to send to the ipmi controller.
	 */
	void setAction(std::string  action);
	/*! \brief Get The Asset ID
	 */
	int getAsset();

	/*! \brief Set The Asset ID
	 */
	void setAsset(int  asset);

private:
	std::string action;
	int asset;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerIpmiPowerRequest_H_ */
