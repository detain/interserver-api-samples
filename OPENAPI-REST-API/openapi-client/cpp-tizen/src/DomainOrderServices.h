/*
 * DomainOrder_services.h
 *
 * Available domain service catalog entries keyed by service ID.
 */

#ifndef _DomainOrder_services_H_
#define _DomainOrder_services_H_


#include <string>
#include "DomainOrderServices10001.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Available domain service catalog entries keyed by service ID.
 *
 *  \ingroup Models
 *
 */

class DomainOrder_services : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainOrder_services();
	DomainOrder_services(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainOrder_services();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	DomainOrderServices10001 getDomainOrderServices10001();

	/*! \brief Set 
	 */
	void setDomainOrderServices10001(DomainOrderServices10001  domainOrderServices10001);

private:
	DomainOrderServices10001 domainOrderServices10001;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainOrder_services_H_ */
