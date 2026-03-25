/*
 * ViewMailLog_startDate_parameter.h
 *
 * 
 */

#ifndef _ViewMailLog_startDate_parameter_H_
#define _ViewMailLog_startDate_parameter_H_


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

class ViewMailLog_startDate_parameter : public Object {
public:
	/*! \brief Constructor.
	 */
	ViewMailLog_startDate_parameter();
	ViewMailLog_startDate_parameter(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ViewMailLog_startDate_parameter();

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

#endif /* _ViewMailLog_startDate_parameter_H_ */
