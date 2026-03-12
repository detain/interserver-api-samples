/*
 * QuickserverOrder_version.h
 *
 * Version details.
 */

#ifndef _QuickserverOrder_version_H_
#define _QuickserverOrder_version_H_


#include <string>
#include "QuickserverOrderVersionCentosstream8.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Version details.
 *
 *  \ingroup Models
 *
 */

class QuickserverOrder_version : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverOrder_version();
	QuickserverOrder_version(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverOrder_version();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	QuickserverOrderVersionCentosstream8 getCentosstream8();

	/*! \brief Set 
	 */
	void setCentosstream8(QuickserverOrderVersionCentosstream8  centosstream8);

private:
	QuickserverOrderVersionCentosstream8 centosstream8;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverOrder_version_H_ */
