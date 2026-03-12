/*
 * VpsTrafficHistoryResponse.h
 *
 * VPS Traffic Data History Section
 */

#ifndef _VpsTrafficHistoryResponse_H_
#define _VpsTrafficHistoryResponse_H_


#include <string>
#include "VpsTrafficHistorySectionResponse.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic Data History Section
 *
 *  \ingroup Models
 *
 */

class VpsTrafficHistoryResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficHistoryResponse();
	VpsTrafficHistoryResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficHistoryResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	VpsTrafficHistorySectionResponse getHour();

	/*! \brief Set 
	 */
	void setHour(VpsTrafficHistorySectionResponse  hour);
	/*! \brief Get 
	 */
	VpsTrafficHistorySectionResponse getDay();

	/*! \brief Set 
	 */
	void setDay(VpsTrafficHistorySectionResponse  day);

private:
	VpsTrafficHistorySectionResponse hour;
	VpsTrafficHistorySectionResponse day;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTrafficHistoryResponse_H_ */
