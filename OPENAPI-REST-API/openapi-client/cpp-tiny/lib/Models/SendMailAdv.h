
/*
 * SendMailAdv.h
 *
 * Details for an Email
 */

#ifndef TINY_CPP_CLIENT_SendMailAdv_H_
#define TINY_CPP_CLIENT_SendMailAdv_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "EmailAddressName.h"
#include "MailAttachment.h"
#include <list>

namespace Tiny {


/*! \brief Details for an Email
 *
 *  \ingroup Models
 *
 */

class SendMailAdv{
public:

    /*! \brief Constructor.
	 */
    SendMailAdv();
    SendMailAdv(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~SendMailAdv();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The subject or title of the email
	 */
	std::string getSubject();

	/*! \brief Set The subject or title of the email
	 */
	void setSubject(std::string subject);
	/*! \brief Get The main email contents.
	 */
	std::string getBody();

	/*! \brief Set The main email contents.
	 */
	void setBody(std::string body);
	/*! \brief Get 
	 */
	EmailAddressName getFrom();

	/*! \brief Set 
	 */
	void setFrom(EmailAddressName from);
	/*! \brief Get A list of destionation email addresses to send this to
	 */
	std::list<EmailAddressName> getTo();

	/*! \brief Set A list of destionation email addresses to send this to
	 */
	void setTo(std::list<EmailAddressName> to);
	/*! \brief Get (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
	 */
	std::list<EmailAddressName> getReplyto();

	/*! \brief Set (optional) A list of email addresses that specify where replies to the email should be sent instead of the _from_ address.
	 */
	void setReplyto(std::list<EmailAddressName> replyto);
	/*! \brief Get (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
	 */
	std::list<EmailAddressName> getCc();

	/*! \brief Set (optional) A list of email addresses to carbon copy this message to.  They are listed on the email and anyone getting the email can see this full list of Contacts who received the email as well.
	 */
	void setCc(std::list<EmailAddressName> cc);
	/*! \brief Get (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
	 */
	std::list<EmailAddressName> getBcc();

	/*! \brief Set (optional) list of email addresses that should receive copies of the email.  They are hidden on the email and anyone gettitng the email would not see the other people getting the email in this list.
	 */
	void setBcc(std::list<EmailAddressName> bcc);
	/*! \brief Get (optional) File attachments to include in the email.  The file contents must be base64 encoded!
	 */
	std::list<MailAttachment> getAttachments();

	/*! \brief Set (optional) File attachments to include in the email.  The file contents must be base64 encoded!
	 */
	void setAttachments(std::list<MailAttachment> attachments);
	/*! \brief Get (optional)  ID of the Mail order within our system to use as the Mail Account.
	 */
	long getId();

	/*! \brief Set (optional)  ID of the Mail order within our system to use as the Mail Account.
	 */
	void setId(long id);


    private:
    std::string subject{};
    std::string body{};
    EmailAddressName from;
    std::list<EmailAddressName> to;
    std::list<EmailAddressName> replyto;
    std::list<EmailAddressName> cc;
    std::list<EmailAddressName> bcc;
    std::list<MailAttachment> attachments;
    long id{};
};
}

#endif /* TINY_CPP_CLIENT_SendMailAdv_H_ */
