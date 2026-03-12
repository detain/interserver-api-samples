/*
 * IpLimitRange.h
 *
 * The lower and upper bounds of an ip range.
 */

#ifndef _IpLimitRange_H_
#define _IpLimitRange_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The lower and upper bounds of an ip range.
 *
 *  \ingroup Models
 *
 */

class IpLimitRange : public Object {
public:
	/*! \brief Constructor.
	 */
	IpLimitRange();
	IpLimitRange(char* str);

	/*! \brief Destructor.
	 */
	virtual ~IpLimitRange();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The begining (or first) IP address in the range.
	 */
	std::string getStart();

	/*! \brief Set The begining (or first) IP address in the range.
	 */
	void setStart(std::string  start);
	/*! \brief Get The ending (or last) IP address in the range.
	 */
	std::string getEnd();

	/*! \brief Set The ending (or last) IP address in the range.
	 */
	void setEnd(std::string  end);

private:
	std::string start;
	std::string end;
	void __init();
	void __cleanup();

};
}
}

#endif /* _IpLimitRange_H_ */
