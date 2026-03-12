/*
 * MailTutorialsTable.h
 *
 * A table of tutorial links displayed for a mail service.
 */

#ifndef _MailTutorialsTable_H_
#define _MailTutorialsTable_H_


#include <string>
#include "MailTutorialsTableRow.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A table of tutorial links displayed for a mail service.
 *
 *  \ingroup Models
 *
 */

class MailTutorialsTable : public Object {
public:
	/*! \brief Constructor.
	 */
	MailTutorialsTable();
	MailTutorialsTable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailTutorialsTable();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The title of the tutorials table.
	 */
	std::string getTitle();

	/*! \brief Set The title of the tutorials table.
	 */
	void setTitle(std::string  title);
	/*! \brief Get The rows of the tutorials table.
	 */
	std::list<MailTutorialsTableRow> getRows();

	/*! \brief Set The rows of the tutorials table.
	 */
	void setRows(std::list <MailTutorialsTableRow> rows);

private:
	std::string title;
	std::list <MailTutorialsTableRow>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailTutorialsTable_H_ */
