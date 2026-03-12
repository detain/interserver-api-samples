
/*
 * MailLogEntry.h
 *
 * An email record
 */

#ifndef TINY_CPP_CLIENT_MailLogEntry_H_
#define TINY_CPP_CLIENT_MailLogEntry_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief An email record
 *
 *  \ingroup Models
 *
 */

class MailLogEntry{
public:

    /*! \brief Constructor.
	 */
    MailLogEntry();
    MailLogEntry(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailLogEntry();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get internal db id
	 */
	int getId();

	/*! \brief Set internal db id
	 */
	void setId(int _id);
	/*! \brief Get mail id
	 */
	std::string getId();

	/*! \brief Set mail id
	 */
	void setId(std::string id);
	/*! \brief Get from address
	 */
	std::string getFrom();

	/*! \brief Set from address
	 */
	void setFrom(std::string from);
	/*! \brief Get to address
	 */
	std::string getTo();

	/*! \brief Set to address
	 */
	void setTo(std::string to);
	/*! \brief Get email subject
	 */
	std::string getSubject();

	/*! \brief Set email subject
	 */
	void setSubject(std::string subject);
	/*! \brief Get creation date
	 */
	std::string getCreated();

	/*! \brief Set creation date
	 */
	void setCreated(std::string created);
	/*! \brief Get creation timestamp
	 */
	int getTime();

	/*! \brief Set creation timestamp
	 */
	void setTime(int time);
	/*! \brief Get user account
	 */
	std::string getUser();

	/*! \brief Set user account
	 */
	void setUser(std::string user);
	/*! \brief Get transaction type
	 */
	std::string getTranstype();

	/*! \brief Set transaction type
	 */
	void setTranstype(std::string transtype);
	/*! \brief Get origin ip
	 */
	std::string getOrigin();

	/*! \brief Set origin ip
	 */
	void setOrigin(std::string origin);
	/*! \brief Get interface name
	 */
	std::string getInterface();

	/*! \brief Set interface name
	 */
	void setInterface(std::string interface);
	/*! \brief Get sending zone
	 */
	std::string getSendingZone();

	/*! \brief Set sending zone
	 */
	void setSendingZone(std::string sendingZone);
	/*! \brief Get email body size in bytes
	 */
	int getBodySize();

	/*! \brief Set email body size in bytes
	 */
	void setBodySize(int bodySize);
	/*! \brief Get index of email in the to adderess list
	 */
	int getSeq();

	/*! \brief Set index of email in the to adderess list
	 */
	void setSeq(int seq);
	/*! \brief Get to address this email is being sent to
	 */
	std::string getRecipient();

	/*! \brief Set to address this email is being sent to
	 */
	void setRecipient(std::string recipient);
	/*! \brief Get to address domain
	 */
	std::string getDomain();

	/*! \brief Set to address domain
	 */
	void setDomain(std::string domain);
	/*! \brief Get locked status
	 */
	int getLocked();

	/*! \brief Set locked status
	 */
	void setLocked(int locked);
	/*! \brief Get lock timestamp
	 */
	int getLockTime();

	/*! \brief Set lock timestamp
	 */
	void setLockTime(int lockTime);
	/*! \brief Get assigned server
	 */
	std::string getAssigned();

	/*! \brief Set assigned server
	 */
	void setAssigned(std::string assigned);
	/*! \brief Get queued timestamp
	 */
	std::string getQueued();

	/*! \brief Set queued timestamp
	 */
	void setQueued(std::string queued);
	/*! \brief Get mx hostname
	 */
	std::string getMxHostname();

	/*! \brief Set mx hostname
	 */
	void setMxHostname(std::string mxHostname);
	/*! \brief Get mail delivery response
	 */
	std::string getResponse();

	/*! \brief Set mail delivery response
	 */
	void setResponse(std::string response);
	/*! \brief Get message id
	 */
	std::string getMessageId();

	/*! \brief Set message id
	 */
	void setMessageId(std::string messageId);


    private:
    int _id{};
    std::string id{};
    std::string from{};
    std::string to{};
    std::string subject{};
    std::string created{};
    int time{};
    std::string user{};
    std::string transtype{};
    std::string origin{};
    std::string interface{};
    std::string sendingZone{};
    int bodySize{};
    int seq{};
    std::string recipient{};
    std::string domain{};
    int locked{};
    int lockTime{};
    std::string assigned{};
    std::string queued{};
    std::string mxHostname{};
    std::string response{};
    std::string messageId{};
};
}

#endif /* TINY_CPP_CLIENT_MailLogEntry_H_ */
