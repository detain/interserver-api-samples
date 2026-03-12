
/*
 * DomainNameserverPutRequest.h
 *
 * Payload for replacing the assigned nameserver list for a domain.
 */

#ifndef TINY_CPP_CLIENT_DomainNameserverPutRequest_H_
#define TINY_CPP_CLIENT_DomainNameserverPutRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <list>

namespace Tiny {


/*! \brief Payload for replacing the assigned nameserver list for a domain.
 *
 *  \ingroup Models
 *
 */

class DomainNameserverPutRequest{
public:

    /*! \brief Constructor.
	 */
    DomainNameserverPutRequest();
    DomainNameserverPutRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainNameserverPutRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::list<std::string> getNameserver();

	/*! \brief Set 
	 */
	void setNameserver(std::list<std::string> nameserver);


    private:
    std::list<std::string> nameserver;
};
}

#endif /* TINY_CPP_CLIENT_DomainNameserverPutRequest_H_ */
