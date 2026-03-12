/*
 * WebsiteExtraInfoTables.h
 *
 * Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 */

#ifndef _WebsiteExtraInfoTables_H_
#define _WebsiteExtraInfoTables_H_


#include <string>
#include "WebsiteTable.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Supplementary information tables displayed for a webhosting service (links, DNS, preview).
 *
 *  \ingroup Models
 *
 */

class WebsiteExtraInfoTables : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteExtraInfoTables();
	WebsiteExtraInfoTables(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteExtraInfoTables();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	WebsiteTable getLinks();

	/*! \brief Set 
	 */
	void setLinks(WebsiteTable  links);
	/*! \brief Get 
	 */
	WebsiteTable getPreview();

	/*! \brief Set 
	 */
	void setPreview(WebsiteTable  preview);
	/*! \brief Get 
	 */
	WebsiteTable getDns();

	/*! \brief Set 
	 */
	void setDns(WebsiteTable  dns);

private:
	WebsiteTable links;
	WebsiteTable preview;
	WebsiteTable dns;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsiteExtraInfoTables_H_ */
