/*
 * MonthlyCounts.h
 *
 * A map of month labels (e.g., \&quot;2024-01\&quot;) to counts for a specific mail status.
 */

#ifndef _MonthlyCounts_H_
#define _MonthlyCounts_H_


#include <string>
#include <map>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A map of month labels (e.g., \"2024-01\") to counts for a specific mail status.
 *
 *  \ingroup Models
 *
 */

class MonthlyCounts : public Object {
public:
	/*! \brief Constructor.
	 */
	MonthlyCounts();
	MonthlyCounts(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MonthlyCounts();

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

#endif /* _MonthlyCounts_H_ */
