/*
 * DnsUpdateRecord.h
 *
 * The request data to update a dns record.
 */

#ifndef _DnsUpdateRecord_H_
#define _DnsUpdateRecord_H_


#include <string>
#include "DnsRecordType.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The request data to update a dns record.
 *
 *  \ingroup Models
 *
 */

class DnsUpdateRecord : public Object {
public:
	/*! \brief Constructor.
	 */
	DnsUpdateRecord();
	DnsUpdateRecord(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DnsUpdateRecord();

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
	DnsRecordType getType();

	/*! \brief Set 
	 */
	void setType(DnsRecordType  type);
	/*! \brief Get 
	 */
	std::string getContent();

	/*! \brief Set 
	 */
	void setContent(std::string  content);
	/*! \brief Get 
	 */
	std::string getTtl();

	/*! \brief Set 
	 */
	void setTtl(std::string  ttl);
	/*! \brief Get 
	 */
	std::string getPrio();

	/*! \brief Set 
	 */
	void setPrio(std::string  prio);
	/*! \brief Get 
	 */
	std::string getDisabled();

	/*! \brief Set 
	 */
	void setDisabled(std::string  disabled);
	/*! \brief Get 
	 */
	std::string getOrdername();

	/*! \brief Set 
	 */
	void setOrdername(std::string  ordername);
	/*! \brief Get 
	 */
	std::string getAuth();

	/*! \brief Set 
	 */
	void setAuth(std::string  auth);

private:
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

#endif /* _DnsUpdateRecord_H_ */
