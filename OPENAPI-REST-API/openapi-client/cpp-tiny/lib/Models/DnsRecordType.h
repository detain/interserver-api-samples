
/*
 * DnsRecordType.h
 *
 * Type of DNS Record
 */

#ifndef TINY_CPP_CLIENT_DnsRecordType_H_
#define TINY_CPP_CLIENT_DnsRecordType_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Type of DNS Record
 *
 *  \ingroup Models
 *
 */

class DnsRecordType{
public:

    /*! \brief Constructor.
	 */
    DnsRecordType();
    DnsRecordType(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DnsRecordType();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_DnsRecordType_H_ */
