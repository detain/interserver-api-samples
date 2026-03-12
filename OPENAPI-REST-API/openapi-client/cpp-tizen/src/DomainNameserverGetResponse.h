/*
 * DomainNameserverGetResponse.h
 *
 * List of registered nameserver hosts with glue record metadata.
 */

#ifndef _DomainNameserverGetResponse_H_
#define _DomainNameserverGetResponse_H_


#include <string>
#include "DomainNameserverGetResponse_inner.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief List of registered nameserver hosts with glue record metadata.
 *
 *  \ingroup Models
 *
 */

class DomainNameserverGetResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainNameserverGetResponse();
	DomainNameserverGetResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainNameserverGetResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);


private:
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainNameserverGetResponse_H_ */
