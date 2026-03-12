/*
 * DnsNewRecord.h
 *
 * Request data for a new DNS record.
 */

#ifndef _DnsNewRecord_H_
#define _DnsNewRecord_H_


#include <string>
#include "DnsRecordType.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request data for a new DNS record.
 *
 *  \ingroup Models
 *
 */

class DnsNewRecord : public Object {
public:
	/*! \brief Constructor.
	 */
	DnsNewRecord();
	DnsNewRecord(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DnsNewRecord();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Name part of record
	 */
	std::string getName();

	/*! \brief Set Name part of record
	 */
	void setName(std::string  name);
	/*! \brief Get 
	 */
	DnsRecordType getType();

	/*! \brief Set 
	 */
	void setType(DnsRecordType  type);
	/*! \brief Get Content of record
	 */
	std::string getContent();

	/*! \brief Set Content of record
	 */
	void setContent(std::string  content);
	/*! \brief Get Time-to-live
	 */
	int getTtl();

	/*! \brief Set Time-to-live
	 */
	void setTtl(int  ttl);
	/*! \brief Get Priority
	 */
	int getPrio();

	/*! \brief Set Priority
	 */
	void setPrio(int  prio);

private:
	std::string name;
	DnsRecordType type;
	std::string content;
	int ttl;
	int prio;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DnsNewRecord_H_ */
