/*
 * WebsiteTableRow.h
 *
 * 
 */

#ifndef _WebsiteTableRow_H_
#define _WebsiteTableRow_H_


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

class WebsiteTableRow : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteTableRow();
	WebsiteTableRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteTableRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Description for the row
	 */
	std::string getDesc();

	/*! \brief Set Description for the row
	 */
	void setDesc(std::string  desc);
	/*! \brief Get Value for the row
	 */
	std::string getValue();

	/*! \brief Set Value for the row
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

#endif /* _WebsiteTableRow_H_ */
