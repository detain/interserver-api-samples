
/*
 * ServerNetworkInfo.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ServerNetworkInfo_H_
#define TINY_CPP_CLIENT_ServerNetworkInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerNetworkInfo_assets.h"
#include "ServerNetworkInfo_switchports.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerNetworkInfo{
public:

    /*! \brief Constructor.
	 */
    ServerNetworkInfo();
    ServerNetworkInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerNetworkInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get List of VLANs.
	 */
	std::list<std::string> getVlans();

	/*! \brief Set List of VLANs.
	 */
	void setVlans(std::list<std::string> vlans);
	/*! \brief Get List of IPv6 VLANs.
	 */
	std::list<std::string> getVlans6();

	/*! \brief Set List of IPv6 VLANs.
	 */
	void setVlans6(std::list<std::string> vlans6);
	/*! \brief Get 
	 */
	ServerNetworkInfo_assets getAssets();

	/*! \brief Set 
	 */
	void setAssets(ServerNetworkInfo_assets assets);
	/*! \brief Get 
	 */
	ServerNetworkInfo_switchports getSwitchports();

	/*! \brief Set 
	 */
	void setSwitchports(ServerNetworkInfo_switchports switchports);


    private:
    std::list<std::string> vlans;
    std::list<std::string> vlans6;
    ServerNetworkInfo_assets assets;
    ServerNetworkInfo_switchports switchports;
};
}

#endif /* TINY_CPP_CLIENT_ServerNetworkInfo_H_ */
