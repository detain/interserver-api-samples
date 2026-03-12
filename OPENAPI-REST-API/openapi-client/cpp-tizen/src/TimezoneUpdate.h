/*
 * TimezoneUpdate.h
 *
 * The request to update the time zone of a vps.
 */

#ifndef _TimezoneUpdate_H_
#define _TimezoneUpdate_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The request to update the time zone of a vps.
 *
 *  \ingroup Models
 *
 */

class TimezoneUpdate : public Object {
public:
	/*! \brief Constructor.
	 */
	TimezoneUpdate();
	TimezoneUpdate(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TimezoneUpdate();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The time zone
	 */
	std::string getTimezone();

	/*! \brief Set The time zone
	 */
	void setTimezone(std::string  timezone);

private:
	std::string timezone;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TimezoneUpdate_H_ */
