/*
 * GetScrubIpDetails_200_response_extraInfoTables_scrub_ips.h
 *
 * 
 */

#ifndef _GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_H_
#define _GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_H_


#include <string>
#include "GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner.h"
#include <list>
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

class GetScrubIpDetails_200_response_extraInfoTables_scrub_ips : public Object {
public:
	/*! \brief Constructor.
	 */
	GetScrubIpDetails_200_response_extraInfoTables_scrub_ips();
	GetScrubIpDetails_200_response_extraInfoTables_scrub_ips(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetScrubIpDetails_200_response_extraInfoTables_scrub_ips();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getTitle();

	/*! \brief Set 
	 */
	void setTitle(std::string  title);
	/*! \brief Get 
	 */
	std::list<GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner> rows);

private:
	std::string title;
	std::list <GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_H_ */
