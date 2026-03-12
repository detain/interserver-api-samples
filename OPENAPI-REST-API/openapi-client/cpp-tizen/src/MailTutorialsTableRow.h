/*
 * MailTutorialsTableRow.h
 *
 * A single tutorial entry with a label and URL.
 */

#ifndef _MailTutorialsTableRow_H_
#define _MailTutorialsTableRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A single tutorial entry with a label and URL.
 *
 *  \ingroup Models
 *
 */

class MailTutorialsTableRow : public Object {
public:
	/*! \brief Constructor.
	 */
	MailTutorialsTableRow();
	MailTutorialsTableRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailTutorialsTableRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The description of the tutorials table row.
	 */
	std::string getDesc();

	/*! \brief Set The description of the tutorials table row.
	 */
	void setDesc(std::string  desc);
	/*! \brief Get The value of the tutorials table row.
	 */
	std::string getValue();

	/*! \brief Set The value of the tutorials table row.
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

#endif /* _MailTutorialsTableRow_H_ */
