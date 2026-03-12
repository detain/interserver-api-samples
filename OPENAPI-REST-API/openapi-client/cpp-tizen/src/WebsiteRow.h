/*
 * WebsiteRow.h
 *
 * A result row from the &#x60;Webhosting&#x60; &#x60;GET&#x60; request.
 */

#ifndef _WebsiteRow_H_
#define _WebsiteRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A result row from the `Webhosting` `GET` request.
 *
 *  \ingroup Models
 *
 */

class WebsiteRow : public Object {
public:
	/*! \brief Constructor.
	 */
	WebsiteRow();
	WebsiteRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~WebsiteRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the website.
	 */
	std::string getWebsiteId();

	/*! \brief Set The id of the website.
	 */
	void setWebsiteId(std::string  website_id);
	/*! \brief Get The hostname of the website.
	 */
	std::string getWebsiteHostname();

	/*! \brief Set The hostname of the website.
	 */
	void setWebsiteHostname(std::string  website_hostname);
	/*! \brief Get The repeat invoices cost of the website.
	 */
	std::string getRepeatInvoicesCost();

	/*! \brief Set The repeat invoices cost of the website.
	 */
	void setRepeatInvoicesCost(std::string  repeat_invoices_cost);
	/*! \brief Get The status of the website.
	 */
	std::string getWebsiteStatus();

	/*! \brief Set The status of the website.
	 */
	void setWebsiteStatus(std::string  website_status);
	/*! \brief Get The services name of the website.
	 */
	std::string getServicesName();

	/*! \brief Set The services name of the website.
	 */
	void setServicesName(std::string  services_name);
	/*! \brief Get The comment of the website.
	 */
	std::string getWebsiteComment();

	/*! \brief Set The comment of the website.
	 */
	void setWebsiteComment(std::string  website_comment);

private:
	std::string website_id;
	std::string website_hostname;
	std::string repeat_invoices_cost;
	std::string website_status;
	std::string services_name;
	std::string website_comment;
	void __init();
	void __cleanup();

};
}
}

#endif /* _WebsiteRow_H_ */
