/*
 * DnsRecordType.h
 *
 * Type of DNS Record
 */

#ifndef _DnsRecordType_H_
#define _DnsRecordType_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Type of DNS Record
 *
 *  \ingroup Models
 *
 */

class DnsRecordType : public Object {
public:
	/*! \brief Constructor.
	 */
	DnsRecordType();
	DnsRecordType(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DnsRecordType();

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

#endif /* _DnsRecordType_H_ */
