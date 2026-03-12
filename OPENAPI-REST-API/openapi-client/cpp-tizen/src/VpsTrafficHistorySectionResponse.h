/*
 * VpsTrafficHistorySectionResponse.h
 *
 * VPS Traffic History Hour and Day Sections
 */

#ifndef _VpsTrafficHistorySectionResponse_H_
#define _VpsTrafficHistorySectionResponse_H_


#include <string>
#include "VpsTrafficHistorySectionDataResponse.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic History Hour and Day Sections
 *
 *  \ingroup Models
 *
 */

class VpsTrafficHistorySectionResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficHistorySectionResponse();
	VpsTrafficHistorySectionResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficHistorySectionResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<VpsTrafficHistorySectionDataResponse> getData();

	/*! \brief Set 
	 */
	void setData(std::list <VpsTrafficHistorySectionDataResponse> data);
	/*! \brief Get 
	 */
	std::list<std::string> getTimes();

	/*! \brief Set 
	 */
	void setTimes(std::list <std::string> times);

private:
	std::list <VpsTrafficHistorySectionDataResponse>data;
	std::list <std::string>times;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTrafficHistorySectionResponse_H_ */
