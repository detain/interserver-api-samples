/*
 * DomainNameserverPostRequest.h
 *
 * Payload for adding a registered nameserver (glue record).
 */

#ifndef _DomainNameserverPostRequest_H_
#define _DomainNameserverPostRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Payload for adding a registered nameserver (glue record).
 *
 *  \ingroup Models
 *
 */

class DomainNameserverPostRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainNameserverPostRequest();
	DomainNameserverPostRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainNameserverPostRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getIpAddress();

	/*! \brief Set 
	 */
	void setIpAddress(std::string  ipAddress);

private:
	std::string name;
	std::string ipAddress;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainNameserverPostRequest_H_ */
