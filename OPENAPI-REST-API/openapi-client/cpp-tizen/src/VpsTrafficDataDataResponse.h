/*
 * VpsTrafficDataDataResponse.h
 *
 * VPS Traffic Data section Data subsection response
 */

#ifndef _VpsTrafficDataDataResponse_H_
#define _VpsTrafficDataDataResponse_H_


#include <string>
#include "VPSTrafficDataDataSectionResponse.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic Data section Data subsection response
 *
 *  \ingroup Models
 *
 */

class VpsTrafficDataDataResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficDataDataResponse();
	VpsTrafficDataDataResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficDataDataResponse();

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

#endif /* _VpsTrafficDataDataResponse_H_ */
