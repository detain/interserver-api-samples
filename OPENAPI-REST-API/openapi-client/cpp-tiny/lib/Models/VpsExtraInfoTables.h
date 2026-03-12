
/*
 * VpsExtraInfoTables.h
 *
 * Additional informational tables displayed for a VPS service.
 */

#ifndef TINY_CPP_CLIENT_VpsExtraInfoTables_H_
#define TINY_CPP_CLIENT_VpsExtraInfoTables_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsIPInfo.h"

namespace Tiny {


/*! \brief Additional informational tables displayed for a VPS service.
 *
 *  \ingroup Models
 *
 */

class VpsExtraInfoTables{
public:

    /*! \brief Constructor.
	 */
    VpsExtraInfoTables();
    VpsExtraInfoTables(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsExtraInfoTables();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	VpsIPInfo getIpInfo();

	/*! \brief Set 
	 */
	void setIpInfo(VpsIPInfo ip_info);


    private:
    VpsIPInfo ip_info;
};
}

#endif /* TINY_CPP_CLIENT_VpsExtraInfoTables_H_ */
