/*
 * LicenseIpInfo.h
 *
 * IP address information table for a software license service.
 */

#ifndef _LicenseIpInfo_H_
#define _LicenseIpInfo_H_


#include <string>
#include "LicenseIpInfoRow.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief IP address information table for a software license service.
 *
 *  \ingroup Models
 *
 */

class LicenseIpInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	LicenseIpInfo();
	LicenseIpInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~LicenseIpInfo();

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
	std::list<LicenseIpInfoRow> getRows();

	/*! \brief Set 
	 */
	void setRows(std::list <LicenseIpInfoRow> rows);

private:
	std::string title;
	std::list <LicenseIpInfoRow>rows;
	void __init();
	void __cleanup();

};
}
}

#endif /* _LicenseIpInfo_H_ */
