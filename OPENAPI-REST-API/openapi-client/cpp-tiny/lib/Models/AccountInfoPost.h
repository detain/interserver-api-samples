
/*
 * AccountInfoPost.h
 *
 * Request to update account information.
 */

#ifndef TINY_CPP_CLIENT_AccountInfoPost_H_
#define TINY_CPP_CLIENT_AccountInfoPost_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Request to update account information.
 *
 *  \ingroup Models
 *
 */

class AccountInfoPost{
public:

    /*! \brief Constructor.
	 */
    AccountInfoPost();
    AccountInfoPost(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AccountInfoPost();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Your name.
	 */
	std::string getName();

	/*! \brief Set Your name.
	 */
	void setName(std::string name);
	/*! \brief Get Your address.
	 */
	std::string getAddress();

	/*! \brief Set Your address.
	 */
	void setAddress(std::string address);
	/*! \brief Get Your city.
	 */
	std::string getCity();

	/*! \brief Set Your city.
	 */
	void setCity(std::string city);
	/*! \brief Get Your state.
	 */
	std::string getState();

	/*! \brief Set Your state.
	 */
	void setState(std::string state);
	/*! \brief Get Your ZIP code.
	 */
	std::string getZip();

	/*! \brief Set Your ZIP code.
	 */
	void setZip(std::string zip);
	/*! \brief Get Your country.
	 */
	std::string getCountry();

	/*! \brief Set Your country.
	 */
	void setCountry(std::string country);
	/*! \brief Get Your phone number.
	 */
	std::string getPhone();

	/*! \brief Set Your phone number.
	 */
	void setPhone(std::string phone);
	/*! \brief Get Your company name.
	 */
	std::string getCompany();

	/*! \brief Set Your company name.
	 */
	void setCompany(std::string company);
	/*! \brief Get Additional address information.
	 */
	std::string getAddress2();

	/*! \brief Set Additional address information.
	 */
	void setAddress2(std::string address2);
	/*! \brief Get Your preferred locale.
	 */
	std::string getLocale();

	/*! \brief Set Your preferred locale.
	 */
	void setLocale(std::string locale);
	/*! \brief Get Your email for invoice notifications.
	 */
	std::string getEmailInvoices();

	/*! \brief Set Your email for invoice notifications.
	 */
	void setEmailInvoices(std::string email_invoices);
	/*! \brief Get Your email for abuse notifications.
	 */
	std::string getEmailAbuse();

	/*! \brief Set Your email for abuse notifications.
	 */
	void setEmailAbuse(std::string email_abuse);
	/*! \brief Get Set to `true` to disable account resets, or `false` to enable them.
	 */
	bool isDisableReset();

	/*! \brief Set Set to `true` to disable account resets, or `false` to enable them.
	 */
	void setDisableReset(bool disable_reset);
	/*! \brief Get Set to `true` to disable server reinstalls, or `false` to enable them.
	 */
	bool isDisableReinstall();

	/*! \brief Set Set to `true` to disable server reinstalls, or `false` to enable them.
	 */
	void setDisableReinstall(bool disable_reinstall);
	/*! \brief Get Set to `true` to disable server notifications, or `false` to enable them.
	 */
	bool isDisableServerNotifications();

	/*! \brief Set Set to `true` to disable server notifications, or `false` to enable them.
	 */
	void setDisableServerNotifications(bool disable_server_notifications);
	/*! \brief Get Set to `true` to disable email notifications, or `false` to enable them.
	 */
	bool isDisableEmailNotifications();

	/*! \brief Set Set to `true` to disable email notifications, or `false` to enable them.
	 */
	void setDisableEmailNotifications(bool disable_email_notifications);
	/*! \brief Get Your GST identification number (if applicable).
	 */
	std::string getGstin();

	/*! \brief Set Your GST identification number (if applicable).
	 */
	void setGstin(std::string gstin);


    private:
    std::string name{};
    std::string address{};
    std::string city{};
    std::string state{};
    std::string zip{};
    std::string country{};
    std::string phone{};
    std::string company{};
    std::string address2{};
    std::string locale{};
    std::string email_invoices{};
    std::string email_abuse{};
    bool disable_reset{};
    bool disable_reinstall{};
    bool disable_server_notifications{};
    bool disable_email_notifications{};
    std::string gstin{};
};
}

#endif /* TINY_CPP_CLIENT_AccountInfoPost_H_ */
