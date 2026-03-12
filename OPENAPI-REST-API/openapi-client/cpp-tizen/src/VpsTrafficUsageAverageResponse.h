/*
 * VpsTrafficUsageAverageResponse.h
 *
 * VPS Traffic Usage Average Section
 */

#ifndef _VpsTrafficUsageAverageResponse_H_
#define _VpsTrafficUsageAverageResponse_H_


#include <string>
#include "VpsTrafficUsageAverageSectionResponse.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic Usage Average Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficUsageAverageResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficUsageAverageResponse();
	VpsTrafficUsageAverageResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficUsageAverageResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsTrafficUsageAverageSectionResponse getIn();

	/*! \brief Set 
	 */
	void setIn(VpsTrafficUsageAverageSectionResponse  in);
	/*! \brief Get 
	 */
	VpsTrafficUsageAverageSectionResponse getOut();

	/*! \brief Set 
	 */
	void setOut(VpsTrafficUsageAverageSectionResponse  out);

private:
	VpsTrafficUsageAverageSectionResponse in;
	VpsTrafficUsageAverageSectionResponse out;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTrafficUsageAverageResponse_H_ */
