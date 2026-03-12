
/*
 * DomainNameserverPostRequest.h
 *
 * Payload for adding a registered nameserver (glue record).
 */

#ifndef TINY_CPP_CLIENT_DomainNameserverPostRequest_H_
#define TINY_CPP_CLIENT_DomainNameserverPostRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Payload for adding a registered nameserver (glue record).
 *
 *  \ingroup Models
 *
 */

class DomainNameserverPostRequest{
public:

    /*! \brief Constructor.
	 */
    DomainNameserverPostRequest();
    DomainNameserverPostRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainNameserverPostRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string name);
	/*! \brief Get 
	 */
	std::string getIpAddress();

	/*! \brief Set 
	 */
	void setIpAddress(std::string ipAddress);


    private:
    std::string name{};
    std::string ipAddress{};
};
}

#endif /* TINY_CPP_CLIENT_DomainNameserverPostRequest_H_ */
