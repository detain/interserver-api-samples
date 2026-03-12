
/*
 * DomainDnssecRecords.h
 *
 * DNSSEC DS records currently configured for a domain.
 */

#ifndef TINY_CPP_CLIENT_DomainDnssecRecords_H_
#define TINY_CPP_CLIENT_DomainDnssecRecords_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DomainDnssecRecords_inner.h"
#include <list>

namespace Tiny {


/*! \brief DNSSEC DS records currently configured for a domain.
 *
 *  \ingroup Models
 *
 */

class DomainDnssecRecords{
public:

    /*! \brief Constructor.
	 */
    DomainDnssecRecords();
    DomainDnssecRecords(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainDnssecRecords();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_DomainDnssecRecords_H_ */
