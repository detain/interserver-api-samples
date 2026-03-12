/*
 * QuickserverAddonsRow.h
 *
 * A single add-on item associated with a QuickServer service.
 */

#ifndef _QuickserverAddonsRow_H_
#define _QuickserverAddonsRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A single add-on item associated with a QuickServer service.
 *
 *  \ingroup Models
 *
 */

class QuickserverAddonsRow : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverAddonsRow();
	QuickserverAddonsRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverAddonsRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Description
	 */
	std::string getDesc();

	/*! \brief Set Description
	 */
	void setDesc(std::string  desc);
	/*! \brief Get Value
	 */
	std::string getValue();

	/*! \brief Set Value
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

#endif /* _QuickserverAddonsRow_H_ */
