
/*
 * MailServiceInfo.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_MailServiceInfo_H_
#define TINY_CPP_CLIENT_MailServiceInfo_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class MailServiceInfo{
public:

    /*! \brief Constructor.
	 */
    MailServiceInfo();
    MailServiceInfo(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailServiceInfo();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The ID of the mail service.
	 */
	std::string getMailId();

	/*! \brief Set The ID of the mail service.
	 */
	void setMailId(std::string mail_id);
	/*! \brief Get The type of mail service.
	 */
	std::string getMailType();

	/*! \brief Set The type of mail service.
	 */
	void setMailType(std::string mail_type);
	/*! \brief Get The currency of the mail service.
	 */
	std::string getMailCurrency();

	/*! \brief Set The currency of the mail service.
	 */
	void setMailCurrency(std::string mail_currency);
	/*! \brief Get The order date of the mail service.
	 */
	std::string getMailOrderDate();

	/*! \brief Set The order date of the mail service.
	 */
	void setMailOrderDate(std::string mail_order_date);
	/*! \brief Get The customer ID associated with the mail service.
	 */
	std::string getMailCustid();

	/*! \brief Set The customer ID associated with the mail service.
	 */
	void setMailCustid(std::string mail_custid);
	/*! \brief Get The mail quota for the service.
	 */
	std::string getMailQuota();

	/*! \brief Set The mail quota for the service.
	 */
	void setMailQuota(std::string mail_quota);
	/*! \brief Get The status of the mail service.
	 */
	std::string getMailStatus();

	/*! \brief Set The status of the mail service.
	 */
	void setMailStatus(std::string mail_status);
	/*! \brief Get The invoice ID of the mail service.
	 */
	std::string getMailInvoice();

	/*! \brief Set The invoice ID of the mail service.
	 */
	void setMailInvoice(std::string mail_invoice);
	/*! \brief Get The username associated with the mail service.
	 */
	std::string getMailUsername();

	/*! \brief Set The username associated with the mail service.
	 */
	void setMailUsername(std::string mail_username);
	/*! \brief Get The IP address associated with the mail service.
	 */
	std::string getMailIp();

	/*! \brief Set The IP address associated with the mail service.
	 */
	void setMailIp(std::string mail_ip);
	/*! \brief Get The coupon associated with the mail service.
	 */
	std::string getMailCoupon();

	/*! \brief Set The coupon associated with the mail service.
	 */
	void setMailCoupon(std::string mail_coupon);
	/*! \brief Get Additional information for the mail service.
	 */
	std::string getMailExtra();

	/*! \brief Set Additional information for the mail service.
	 */
	void setMailExtra(std::string mail_extra);
	/*! \brief Get The server status of the mail service.
	 */
	std::string getMailServerStatus();

	/*! \brief Set The server status of the mail service.
	 */
	void setMailServerStatus(std::string mail_server_status);
	/*! \brief Get Additional comments for the mail service.
	 */
	std::string getMailComment();

	/*! \brief Set Additional comments for the mail service.
	 */
	void setMailComment(std::string mail_comment);


    private:
    std::string mail_id{};
    std::string mail_type{};
    std::string mail_currency{};
    std::string mail_order_date{};
    std::string mail_custid{};
    std::string mail_quota{};
    std::string mail_status{};
    std::string mail_invoice{};
    std::string mail_username{};
    std::string mail_ip{};
    std::string mail_coupon{};
    std::string mail_extra{};
    std::string mail_server_status{};
    std::string mail_comment{};
};
}

#endif /* TINY_CPP_CLIENT_MailServiceInfo_H_ */
