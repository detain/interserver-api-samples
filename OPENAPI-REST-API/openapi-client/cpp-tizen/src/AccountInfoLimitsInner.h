/*
 * AccountInfoLimits_inner.h
 *
 * 
 */

#ifndef _AccountInfoLimits_inner_H_
#define _AccountInfoLimits_inner_H_


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

class AccountInfoLimits_inner : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoLimits_inner();
	AccountInfoLimits_inner(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoLimits_inner();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getStart();

	/*! \brief Set 
	 */
	void setStart(std::string  start);
	/*! \brief Get 
	 */
	std::string getEnd();

	/*! \brief Set 
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

#endif /* _AccountInfoLimits_inner_H_ */
