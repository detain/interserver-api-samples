/*
 * MailRow.h
 *
 * A result row from the &#x60;Mail&#x60; &#x60;GET&#x60; request.
 */

#ifndef _MailRow_H_
#define _MailRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A result row from the `Mail` `GET` request.
 *
 *  \ingroup Models
 *
 */

class MailRow : public Object {
public:
	/*! \brief Constructor.
	 */
	MailRow();
	MailRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the mail.
	 */
	std::string getMailId();

	/*! \brief Set The id of the mail.
	 */
	void setMailId(std::string  mail_id);
	/*! \brief Get The repeat invoices cost of the mail.
	 */
	std::string getRepeatInvoicesCost();

	/*! \brief Set The repeat invoices cost of the mail.
	 */
	void setRepeatInvoicesCost(std::string  repeat_invoices_cost);
	/*! \brief Get The username of the mail.
	 */
	std::string getMailUsername();

	/*! \brief Set The username of the mail.
	 */
	void setMailUsername(std::string  mail_username);
	/*! \brief Get The status of the mail.
	 */
	std::string getMailStatus();

	/*! \brief Set The status of the mail.
	 */
	void setMailStatus(std::string  mail_status);
	/*! \brief Get The services name of the mail.
	 */
	std::string getServicesName();

	/*! \brief Set The services name of the mail.
	 */
	void setServicesName(std::string  services_name);

private:
	std::string mail_id;
	std::string repeat_invoices_cost;
	std::string mail_username;
	std::string mail_status;
	std::string services_name;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailRow_H_ */
