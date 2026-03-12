/*
 * AccountInfoLimits.h
 *
 * IP address ranges used to restrict account access to specific IPs.
 */

#ifndef _AccountInfoLimits_H_
#define _AccountInfoLimits_H_


#include <string>
#include "AccountInfoLimits_inner.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief IP address ranges used to restrict account access to specific IPs.
 *
 *  \ingroup Models
 *
 */

class AccountInfoLimits : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoLimits();
	AccountInfoLimits(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoLimits();

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

#endif /* _AccountInfoLimits_H_ */
