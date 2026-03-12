
/*
 * BackupExtraInfoTables.h
 *
 * Supplementary information tables for a backup service (IP info, etc.).
 */

#ifndef TINY_CPP_CLIENT_BackupExtraInfoTables_H_
#define TINY_CPP_CLIENT_BackupExtraInfoTables_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BackupIPInfo.h"

namespace Tiny {


/*! \brief Supplementary information tables for a backup service (IP info, etc.).
 *
 *  \ingroup Models
 *
 */

class BackupExtraInfoTables{
public:

    /*! \brief Constructor.
	 */
    BackupExtraInfoTables();
    BackupExtraInfoTables(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BackupExtraInfoTables();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	BackupIPInfo getIpInfo();

	/*! \brief Set 
	 */
	void setIpInfo(BackupIPInfo ip_info);


    private:
    BackupIPInfo ip_info;
};
}

#endif /* TINY_CPP_CLIENT_BackupExtraInfoTables_H_ */
