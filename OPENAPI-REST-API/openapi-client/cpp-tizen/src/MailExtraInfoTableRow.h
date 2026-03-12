/*
 * MailExtraInfoTableRow.h
 *
 * A single row in the mail service supplementary information table.
 */

#ifndef _MailExtraInfoTableRow_H_
#define _MailExtraInfoTableRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A single row in the mail service supplementary information table.
 *
 *  \ingroup Models
 *
 */

class MailExtraInfoTableRow : public Object {
public:
	/*! \brief Constructor.
	 */
	MailExtraInfoTableRow();
	MailExtraInfoTableRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailExtraInfoTableRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The description of the extra info table row.
	 */
	std::string getDesc();

	/*! \brief Set The description of the extra info table row.
	 */
	void setDesc(std::string  desc);
	/*! \brief Get The value of the extra info table row.
	 */
	std::string getValue();

	/*! \brief Set The value of the extra info table row.
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

#endif /* _MailExtraInfoTableRow_H_ */
