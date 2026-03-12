/*
 * QuickserverAddons.h
 *
 * 
 */

#ifndef _QuickserverAddons_H_
#define _QuickserverAddons_H_


#include <string>
#include "QuickserverAddonsRow.h"
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

class QuickserverAddons : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverAddons();
	QuickserverAddons(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverAddons();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Table title
	 */
	std::string getTitle();

	/*! \brief Set Table title
	 */
	void setTitle(std::string  title);
	/*! \brief Get 
	 */
	std::list<QuickserverAddonsRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <QuickserverAddonsRow> rows);

private:
	std::string title;
	std::list <QuickserverAddonsRow>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverAddons_H_ */
