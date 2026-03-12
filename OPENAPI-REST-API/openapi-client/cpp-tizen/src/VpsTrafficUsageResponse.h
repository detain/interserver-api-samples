/*
 * VpsTrafficUsageResponse.h
 *
 * VPS Traffic Usage Section
 */

#ifndef _VpsTrafficUsageResponse_H_
#define _VpsTrafficUsageResponse_H_


#include <string>
#include "VpsTrafficTotalsSectionResponse.h"
#include "VpsTrafficUsageAverageResponse.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic Usage Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficUsageResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficUsageResponse();
	VpsTrafficUsageResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficUsageResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getCurrent();

	/*! \brief Set 
	 */
	void setCurrent(VpsTrafficTotalsSectionResponse  current);
	/*! \brief Get 
	 */
	VpsTrafficTotalsSectionResponse getPeak();

	/*! \brief Set 
	 */
	void setPeak(VpsTrafficTotalsSectionResponse  peak);
	/*! \brief Get 
	 */
	VpsTrafficUsageAverageResponse getAverage();

	/*! \brief Set 
	 */
	void setAverage(VpsTrafficUsageAverageResponse  average);

private:
	VpsTrafficTotalsSectionResponse current;
	VpsTrafficTotalsSectionResponse peak;
	VpsTrafficUsageAverageResponse average;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTrafficUsageResponse_H_ */
