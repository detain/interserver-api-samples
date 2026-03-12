
/*
 * DomainOrder_services.h
 *
 * Available domain service catalog entries keyed by service ID.
 */

#ifndef TINY_CPP_CLIENT_DomainOrder_services_H_
#define TINY_CPP_CLIENT_DomainOrder_services_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "DomainOrderServices10001.h"

namespace Tiny {


/*! \brief Available domain service catalog entries keyed by service ID.
 *
 *  \ingroup Models
 *
 */

class DomainOrder_services{
public:

    /*! \brief Constructor.
	 */
    DomainOrder_services();
    DomainOrder_services(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainOrder_services();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	DomainOrderServices10001 getDomainOrderServices10001();

	/*! \brief Set 
	 */
	void setDomainOrderServices10001(DomainOrderServices10001 domainOrderServices10001);


    private:
    DomainOrderServices10001 domainOrderServices10001;
};
}

#endif /* TINY_CPP_CLIENT_DomainOrder_services_H_ */
