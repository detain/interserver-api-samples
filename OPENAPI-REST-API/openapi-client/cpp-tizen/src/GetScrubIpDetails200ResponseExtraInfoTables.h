/*
 * GetScrubIpDetails_200_response_extraInfoTables.h
 *
 * 
 */

#ifndef _GetScrubIpDetails_200_response_extraInfoTables_H_
#define _GetScrubIpDetails_200_response_extraInfoTables_H_


#include <string>
#include "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips.h"
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

class GetScrubIpDetails_200_response_extraInfoTables : public Object {
public:
	/*! \brief Constructor.
	 */
	GetScrubIpDetails_200_response_extraInfoTables();
	GetScrubIpDetails_200_response_extraInfoTables(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetScrubIpDetails_200_response_extraInfoTables();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	GetScrubIpDetails_200_response_extraInfoTables_scrub_ips getScrubIps();

	/*! \brief Set 
	 */
	void setScrubIps(GetScrubIpDetails_200_response_extraInfoTables_scrub_ips  scrub_ips);

private:
	GetScrubIpDetails_200_response_extraInfoTables_scrub_ips scrub_ips;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetScrubIpDetails_200_response_extraInfoTables_H_ */
