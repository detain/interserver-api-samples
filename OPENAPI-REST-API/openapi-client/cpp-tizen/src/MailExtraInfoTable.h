/*
 * MailExtraInfoTable.h
 *
 * A supplementary information table for a mail service (e.g., connection details).
 */

#ifndef _MailExtraInfoTable_H_
#define _MailExtraInfoTable_H_


#include <string>
#include "MailExtraInfoTableRow.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A supplementary information table for a mail service (e.g., connection details).
 *
 *  \ingroup Models
 *
 */

class MailExtraInfoTable : public Object {
public:
	/*! \brief Constructor.
	 */
	MailExtraInfoTable();
	MailExtraInfoTable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailExtraInfoTable();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The title of the extra info table.
	 */
	std::string getTitle();

	/*! \brief Set The title of the extra info table.
	 */
	void setTitle(std::string  title);
	/*! \brief Get The rows of the extra info table.
	 */
	std::list<MailExtraInfoTableRow> getRows();

	/*! \brief Set The rows of the extra info table.
	 */
	void setRows(std::list <MailExtraInfoTableRow> rows);

private:
	std::string title;
	std::list <MailExtraInfoTableRow>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailExtraInfoTable_H_ */
