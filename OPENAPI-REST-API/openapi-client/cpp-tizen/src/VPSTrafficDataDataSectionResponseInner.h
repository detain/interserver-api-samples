/*
 * VPSTrafficDataDataSectionResponse_inner.h
 *
 * 
 */

#ifndef _VPSTrafficDataDataSectionResponse_inner_H_
#define _VPSTrafficDataDataSectionResponse_inner_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class VPSTrafficDataDataSectionResponse_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	VPSTrafficDataDataSectionResponse_inner();
	VPSTrafficDataDataSectionResponse_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VPSTrafficDataDataSectionResponse_inner();

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

#endif /* _VPSTrafficDataDataSectionResponse_inner_H_ */
