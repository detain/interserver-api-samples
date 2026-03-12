
/*
 * ServerExtraInfoTables.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_ServerExtraInfoTables_H_
#define TINY_CPP_CLIENT_ServerExtraInfoTables_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "ServerAssets.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class ServerExtraInfoTables{
public:

    /*! \brief Constructor.
	 */
    ServerExtraInfoTables();
    ServerExtraInfoTables(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~ServerExtraInfoTables();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	ServerAssets getAssets();

	/*! \brief Set 
	 */
	void setAssets(ServerAssets assets);


    private:
    ServerAssets assets;
};
}

#endif /* TINY_CPP_CLIENT_ServerExtraInfoTables_H_ */
