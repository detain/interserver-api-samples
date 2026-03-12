/*
 * DomainNameserverPutRequest.h
 *
 * Payload for replacing the assigned nameserver list for a domain.
 */

#ifndef _DomainNameserverPutRequest_H_
#define _DomainNameserverPutRequest_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Payload for replacing the assigned nameserver list for a domain.
 *
 *  \ingroup Models
 *
 */

class DomainNameserverPutRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainNameserverPutRequest();
	DomainNameserverPutRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainNameserverPutRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<std::string> getNameserver();

	/*! \brief Set 
	 */
	void setNameserver(std::list <std::string> nameserver);

private:
	std::list <std::string>nameserver;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainNameserverPutRequest_H_ */
