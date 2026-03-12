
/*
 * MailRow.h
 *
 * A result row from the &#x60;Mail&#x60; &#x60;GET&#x60; request.
 */

#ifndef TINY_CPP_CLIENT_MailRow_H_
#define TINY_CPP_CLIENT_MailRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A result row from the `Mail` `GET` request.
 *
 *  \ingroup Models
 *
 */

class MailRow{
public:

    /*! \brief Constructor.
	 */
    MailRow();
    MailRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The id of the mail.
	 */
	std::string getMailId();

	/*! \brief Set The id of the mail.
	 */
	void setMailId(std::string mail_id);
	/*! \brief Get The repeat invoices cost of the mail.
	 */
	std::string getRepeatInvoicesCost();

	/*! \brief Set The repeat invoices cost of the mail.
	 */
	void setRepeatInvoicesCost(std::string repeat_invoices_cost);
	/*! \brief Get The username of the mail.
	 */
	std::string getMailUsername();

	/*! \brief Set The username of the mail.
	 */
	void setMailUsername(std::string mail_username);
	/*! \brief Get The status of the mail.
	 */
	std::string getMailStatus();

	/*! \brief Set The status of the mail.
	 */
	void setMailStatus(std::string mail_status);
	/*! \brief Get The services name of the mail.
	 */
	std::string getServicesName();

	/*! \brief Set The services name of the mail.
	 */
	void setServicesName(std::string services_name);


    private:
    std::string mail_id{};
    std::string repeat_invoices_cost{};
    std::string mail_username{};
    std::string mail_status{};
    std::string services_name{};
};
}

#endif /* TINY_CPP_CLIENT_MailRow_H_ */
