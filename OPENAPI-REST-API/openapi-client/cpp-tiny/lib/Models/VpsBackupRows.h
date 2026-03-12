
/*
 * VpsBackupRows.h
 *
 * The listing of the backups for your service.
 */

#ifndef TINY_CPP_CLIENT_VpsBackupRows_H_
#define TINY_CPP_CLIENT_VpsBackupRows_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "VpsBackupRow.h"
#include <list>

namespace Tiny {


/*! \brief The listing of the backups for your service.
 *
 *  \ingroup Models
 *
 */

class VpsBackupRows{
public:

    /*! \brief Constructor.
	 */
    VpsBackupRows();
    VpsBackupRows(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~VpsBackupRows();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_VpsBackupRows_H_ */
