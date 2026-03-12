
/*
 * HostnameObject.h
 *
 * Request specifying the hostname.
 */

#ifndef TINY_CPP_CLIENT_HostnameObject_H_
#define TINY_CPP_CLIENT_HostnameObject_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Request specifying the hostname.
 *
 *  \ingroup Models
 *
 */

class HostnameObject{
public:

    /*! \brief Constructor.
	 */
    HostnameObject();
    HostnameObject(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~HostnameObject();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getHostname();

	/*! \brief Set 
	 */
	void setHostname(std::string hostname);


    private:
    std::string hostname{};
};
}

#endif /* TINY_CPP_CLIENT_HostnameObject_H_ */
