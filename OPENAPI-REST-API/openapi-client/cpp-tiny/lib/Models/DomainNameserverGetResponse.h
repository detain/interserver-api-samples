
/*
 * DomainNameserverGetResponse.h
 *
 * List of registered nameserver hosts with glue record metadata.
 */

#ifndef TINY_CPP_CLIENT_DomainNameserverGetResponse_H_
#define TINY_CPP_CLIENT_DomainNameserverGetResponse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DomainNameserverGetResponse_inner.h"
#include <list>

namespace Tiny {


/*! \brief List of registered nameserver hosts with glue record metadata.
 *
 *  \ingroup Models
 *
 */

class DomainNameserverGetResponse{
public:

    /*! \brief Constructor.
	 */
    DomainNameserverGetResponse();
    DomainNameserverGetResponse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainNameserverGetResponse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_DomainNameserverGetResponse_H_ */
