/*
 * GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner.h
 *
 * 
 */

#ifndef _GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner_H_
#define _GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner_H_


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

class GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner();
	GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getDesc();

	/*! \brief Set 
	 */
	void setDesc(std::string  desc);
	/*! \brief Get 
	 */
	std::string getValue();

	/*! \brief Set 
	 */
	void setValue(std::string  value);

private:
	std::string desc;
	std::string value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _GetScrubIpDetails_200_response_extraInfoTables_scrub_ips_rows_inner_H_ */
