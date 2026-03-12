/*
 * WebsiteTable.h
 *
 * 
 */

#ifndef _WebsiteTable_H_
#define _WebsiteTable_H_


#include <string>
#include "WebsiteTableRow.h"
#include <list>
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

class WebsiteTable : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteTable();
	WebsiteTable(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteTable();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Title of the table
	 */
	std::string getTitle();

	/*! \brief Set Title of the table
	 */
	void setTitle(std::string  title);
	/*! \brief Get 
	 */
	std::list<WebsiteTableRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <WebsiteTableRow> rows);

private:
	std::string title;
	std::list <WebsiteTableRow>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsiteTable_H_ */
