
/*
 * ServerNetworkInfo_assets.h
 *
 * Object containing asset information.
 */

#ifndef TINY_CPP_CLIENT_ServerNetworkInfo_assets_H_
#define TINY_CPP_CLIENT_ServerNetworkInfo_assets_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerAsset.h"

namespace Tiny {


/*! \brief Object containing asset information.
 *
 *  \ingroup Models
 *
 */

class ServerNetworkInfo_assets{
public:

    /*! \brief Constructor.
	 */
    ServerNetworkInfo_assets();
    ServerNetworkInfo_assets(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerNetworkInfo_assets();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerAsset get3497();

	/*! \brief Set 
	 */
	void set3497(ServerAsset 3497);


    private:
    ServerAsset 3497;
};
}

#endif /* TINY_CPP_CLIENT_ServerNetworkInfo_assets_H_ */
