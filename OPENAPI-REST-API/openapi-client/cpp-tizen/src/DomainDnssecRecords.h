/*
 * DomainDnssecRecords.h
 *
 * DNSSEC DS records currently configured for a domain.
 */

#ifndef _DomainDnssecRecords_H_
#define _DomainDnssecRecords_H_


#include <string>
#include "DomainDnssecRecords_inner.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief DNSSEC DS records currently configured for a domain.
 *
 *  \ingroup Models
 *
 */

class DomainDnssecRecords : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainDnssecRecords();
	DomainDnssecRecords(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainDnssecRecords();

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

#endif /* _DomainDnssecRecords_H_ */
