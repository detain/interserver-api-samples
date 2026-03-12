/*
 * VpsIPInfo.h
 *
 * IP address information table for a VPS service.
 */

#ifndef _VpsIPInfo_H_
#define _VpsIPInfo_H_


#include <string>
#include "VpsIPInfoRow.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief IP address information table for a VPS service.
 *
 *  \ingroup Models
 *
 */

class VpsIPInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	VpsIPInfo();
	VpsIPInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~VpsIPInfo();

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
	std::list<VpsIPInfoRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <VpsIPInfoRow> rows);

private:
	std::string title;
	std::list <VpsIPInfoRow>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _VpsIPInfo_H_ */
