/*
 * VpsTrafficUsageAverageSectionResponse.h
 *
 * VPS Traffic Usage Average Section Response
 */

#ifndef _VpsTrafficUsageAverageSectionResponse_H_
#define _VpsTrafficUsageAverageSectionResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic Usage Average Section Response
 *
 *  \ingroup Models
 *
 */

class VpsTrafficUsageAverageSectionResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficUsageAverageSectionResponse();
	VpsTrafficUsageAverageSectionResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficUsageAverageSectionResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getTotal();

	/*! \brief Set 
	 */
	void setTotal(int  total);
	/*! \brief Get 
	 */
	int getCount();

	/*! \brief Set 
	 */
	void setCount(int  count);
	/*! \brief Get 
	 */
	int getValue();

	/*! \brief Set 
	 */
	void setValue(int  value);

private:
	int total;
	int count;
	int value;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTrafficUsageAverageSectionResponse_H_ */
