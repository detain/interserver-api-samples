/*
 * QuickserverOrderTemplatesUbuntu64.h
 *
 * Ubuntu template details.
 */

#ifndef _QuickserverOrderTemplatesUbuntu64_H_
#define _QuickserverOrderTemplatesUbuntu64_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Ubuntu template details.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrderTemplatesUbuntu64 : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverOrderTemplatesUbuntu64();
	QuickserverOrderTemplatesUbuntu64(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverOrderTemplatesUbuntu64();

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

#endif /* _QuickserverOrderTemplatesUbuntu64_H_ */
