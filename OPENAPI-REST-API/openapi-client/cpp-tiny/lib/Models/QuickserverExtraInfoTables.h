
/*
 * Quickserver_extraInfoTables.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Quickserver_extraInfoTables_H_
#define TINY_CPP_CLIENT_Quickserver_extraInfoTables_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "QuickserverAddons.h"
#include "QuickserverIpInfo.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Quickserver_extraInfoTables{
public:

    /*! \brief Constructor.
	 */
    Quickserver_extraInfoTables();
    Quickserver_extraInfoTables(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Quickserver_extraInfoTables();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	QuickserverIpInfo getIpInfo();

	/*! \brief Set 
	 */
	void setIpInfo(QuickserverIpInfo ip_info);
	/*! \brief Get 
	 */
	QuickserverAddons getAddons();

	/*! \brief Set 
	 */
	void setAddons(QuickserverAddons addons);


    private:
    QuickserverIpInfo ip_info;
    QuickserverAddons addons;
};
}

#endif /* TINY_CPP_CLIENT_Quickserver_extraInfoTables_H_ */
