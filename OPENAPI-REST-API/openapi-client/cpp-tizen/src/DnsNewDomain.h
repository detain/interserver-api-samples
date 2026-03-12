/*
 * DnsNewDomain.h
 *
 * The request for a new domain to be managed by the dns servers.
 */

#ifndef _DnsNewDomain_H_
#define _DnsNewDomain_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The request for a new domain to be managed by the dns servers.
 *
 *  \ingroup Models
 *
 */

class DnsNewDomain : public Object {
public:
	/*! \brief Constructor.
	 */
	DnsNewDomain();
	DnsNewDomain(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DnsNewDomain();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The domain name.
	 */
	std::string getDomain();

	/*! \brief Set The domain name.
	 */
	void setDomain(std::string  domain);
	/*! \brief Get IP Address to point the domain to.
	 */
	std::string getIp();

	/*! \brief Set IP Address to point the domain to.
	 */
	void setIp(std::string  ip);

private:
	std::string domain;
	std::string ip;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DnsNewDomain_H_ */
