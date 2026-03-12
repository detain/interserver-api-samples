
/*
 * License_extraInfoTables.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_License_extraInfoTables_H_
#define TINY_CPP_CLIENT_License_extraInfoTables_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "LicenseIpInfo.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class License_extraInfoTables{
public:

    /*! \brief Constructor.
	 */
    License_extraInfoTables();
    License_extraInfoTables(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~License_extraInfoTables();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	LicenseIpInfo getIpInfo();

	/*! \brief Set 
	 */
	void setIpInfo(LicenseIpInfo ip_info);


    private:
    LicenseIpInfo ip_info;
};
}

#endif /* TINY_CPP_CLIENT_License_extraInfoTables_H_ */
