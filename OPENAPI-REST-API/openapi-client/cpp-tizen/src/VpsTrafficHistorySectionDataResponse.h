/*
 * VpsTrafficHistorySectionDataResponse.h
 *
 * VPS Traffic Hisotrty Data Row of Hour/Day Section
 */

#ifndef _VpsTrafficHistorySectionDataResponse_H_
#define _VpsTrafficHistorySectionDataResponse_H_


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


/*! \brief VPS Traffic Hisotrty Data Row of Hour/Day Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficHistorySectionDataResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficHistorySectionDataResponse();
	VpsTrafficHistorySectionDataResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficHistorySectionDataResponse();

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

#endif /* _VpsTrafficHistorySectionDataResponse_H_ */
