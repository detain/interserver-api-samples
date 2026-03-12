/*
 * ServerNetworkInfo.h
 *
 * 
 */

#ifndef _ServerNetworkInfo_H_
#define _ServerNetworkInfo_H_


#include <string>
#include "ServerNetworkInfo_assets.h"
#include "ServerNetworkInfo_switchports.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerNetworkInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	ServerNetworkInfo();
	ServerNetworkInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServerNetworkInfo();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get List of VLANs.
	 */
	std::list<std::string> getVlans();

	/*! \brief Set List of VLANs.
	 */
	void setVlans(std::list <std::string> vlans);
	/*! \brief Get List of IPv6 VLANs.
	 */
	std::list<std::string> getVlans6();

	/*! \brief Set List of IPv6 VLANs.
	 */
	void setVlans6(std::list <std::string> vlans6);
	/*! \brief Get 
	 */
	ServerNetworkInfo_assets getAssets();

	/*! \brief Set 
	 */
	void setAssets(ServerNetworkInfo_assets  assets);
	/*! \brief Get 
	 */
	ServerNetworkInfo_switchports getSwitchports();

	/*! \brief Set 
	 */
	void setSwitchports(ServerNetworkInfo_switchports  switchports);

private:
	std::list <std::string>vlans;
	std::list <std::string>vlans6;
	ServerNetworkInfo_assets assets;
	ServerNetworkInfo_switchports switchports;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServerNetworkInfo_H_ */
