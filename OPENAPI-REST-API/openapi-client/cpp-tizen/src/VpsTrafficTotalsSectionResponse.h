/*
 * VpsTrafficTotalsSectionResponse.h
 *
 * VPS Traffic Totals Secttions Data
 */

#ifndef _VpsTrafficTotalsSectionResponse_H_
#define _VpsTrafficTotalsSectionResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS Traffic Totals Secttions Data
 *
 *  \ingroup Models
 *
 */

class VpsTrafficTotalsSectionResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsTrafficTotalsSectionResponse();
	VpsTrafficTotalsSectionResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsTrafficTotalsSectionResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	long long getIn();

	/*! \brief Set 
	 */
	void setIn(long long  in);
	/*! \brief Get 
	 */
	long long getOut();

	/*! \brief Set 
	 */
	void setOut(long long  out);

private:
	long long in;
	long long out;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsTrafficTotalsSectionResponse_H_ */
