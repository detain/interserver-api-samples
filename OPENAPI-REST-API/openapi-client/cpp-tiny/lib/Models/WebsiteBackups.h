
/*
 * WebsiteBackups.h
 *
 * List of available backups for a webhosting service with their names and sizes.
 */

#ifndef TINY_CPP_CLIENT_WebsiteBackups_H_
#define TINY_CPP_CLIENT_WebsiteBackups_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "WebsiteBackups_inner.h"
#include <list>

namespace Tiny {


/*! \brief List of available backups for a webhosting service with their names and sizes.
 *
 *  \ingroup Models
 *
 */

class WebsiteBackups{
public:

    /*! \brief Constructor.
	 */
    WebsiteBackups();
    WebsiteBackups(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~WebsiteBackups();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_WebsiteBackups_H_ */
