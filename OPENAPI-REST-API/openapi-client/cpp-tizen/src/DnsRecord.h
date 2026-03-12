/*
 * DnsRecord.h
 *
 * A single DNS Record row for a Domain
 */

#ifndef _DnsRecord_H_
#define _DnsRecord_H_


#include <string>
#include "DnsRecordType.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A single DNS Record row for a Domain
 *
 *  \ingroup Models
 *
 */

class DnsRecord : public Object {
public:
	/*! \brief Constructor.
	 */
	DnsRecord();
	DnsRecord(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DnsRecord();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID of the DNS Record.
	 */
	std::string getId();

	/*! \brief Set The ID of the DNS Record.
	 */
	void setId(std::string  id);
	/*! \brief Get The ID of the Domain this is a record of.
	 */
	std::string getDomainId();

	/*! \brief Set The ID of the Domain this is a record of.
	 */
	void setDomainId(std::string  domain_id);
	/*! \brief Get 
	 */
	std::string getName();

	/*! \brief Set 
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	DnsRecordType getType();

	/*! \brief Set 
	 */
	void setType(DnsRecordType  type);
	/*! \brief Get The content of the record, such as the IP address or hsotname.
	 */
	std::string getContent();

	/*! \brief Set The content of the record, such as the IP address or hsotname.
	 */
	void setContent(std::string  content);
	/*! \brief Get Time To Live (seconds)
	 */
	std::string getTtl();

	/*! \brief Set Time To Live (seconds)
	 */
	void setTtl(std::string  ttl);
	/*! \brief Get Priority
	 */
	std::string getPrio();

	/*! \brief Set Priority
	 */
	void setPrio(std::string  prio);
	/*! \brief Get 
	 */
	std::string getDisabled();

	/*! \brief Set 
	 */
	void setDisabled(std::string  disabled);
	/*! \brief Get Alternate name to use for sorting
	 */
	std::string getOrdername();

	/*! \brief Set Alternate name to use for sorting
	 */
	void setOrdername(std::string  ordername);
	/*! \brief Get 
	 */
	std::string getAuth();

	/*! \brief Set 
	 */
	void setAuth(std::string  auth);

private:
	std::string id;
	std::string domain_id;
	std::string name;
	DnsRecordType type;
	std::string content;
	std::string ttl;
	std::string prio;
	std::string disabled;
	std::string ordername;
	std::string auth;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DnsRecord_H_ */
