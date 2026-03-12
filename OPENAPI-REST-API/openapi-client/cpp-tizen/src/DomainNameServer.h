/*
 * DomainNameServer.h
 *
 * A single registered nameserver entry with glue IPs.
 */

#ifndef _DomainNameServer_H_
#define _DomainNameServer_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A single registered nameserver entry with glue IPs.
 *
 *  \ingroup Models
 *
 */

class DomainNameServer : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainNameServer();
	DomainNameServer(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainNameServer();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getSortorder();

	/*! \brief Set 
	 */
	void setSortorder(std::string  sortorder);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	std::string getIpaddress();

	/*! \brief Set 
	 */
	void setIpaddress(std::string  ipaddress);

private:
	std::string sortorder;
	std::string name;
	std::string ipaddress;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainNameServer_H_ */
