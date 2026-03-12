/*
 * QuickserverIpInfo.h
 *
 * IP address information table for a QuickServer service.
 */

#ifndef _QuickserverIpInfo_H_
#define _QuickserverIpInfo_H_


#include <string>
#include "QuickserverIpTableRow.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief IP address information table for a QuickServer service.
 *
 *  \ingroup Models
 *
 */

class QuickserverIpInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverIpInfo();
	QuickserverIpInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverIpInfo();

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
	std::list<QuickserverIpTableRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <QuickserverIpTableRow> rows);

private:
	std::string title;
	std::list <QuickserverIpTableRow>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverIpInfo_H_ */
