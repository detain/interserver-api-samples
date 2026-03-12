/*
 * VPSTrafficDataDataSectionResponse.h
 *
 * VPS Traffic Data section Data subsection Row Response
 */

#ifndef _VPSTrafficDataDataSectionResponse_H_
#define _VPSTrafficDataDataSectionResponse_H_


#include <string>
#include "VPSTrafficDataDataSectionResponse_inner.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic Data section Data subsection Row Response
 *
 *  \ingroup Models
 *
 */

class VPSTrafficDataDataSectionResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VPSTrafficDataDataSectionResponse();
	VPSTrafficDataDataSectionResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VPSTrafficDataDataSectionResponse();

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

#endif /* _VPSTrafficDataDataSectionResponse_H_ */
