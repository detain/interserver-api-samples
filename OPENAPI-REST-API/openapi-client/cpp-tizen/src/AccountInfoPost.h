/*
 * AccountInfoPost.h
 *
 * Request to update account information.
 */

#ifndef _AccountInfoPost_H_
#define _AccountInfoPost_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request to update account information.
 *
 *  \ingroup Models
 *
 */

class AccountInfoPost : public Object {
public:
	/*! \brief Constructor.
	 */
	AccountInfoPost();
	AccountInfoPost(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AccountInfoPost();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Your name.
	 */
	std::string getName();

	/*! \brief Set Your name.
	 */
	void setName(std::string  name);
	/*! \brief Get Your address.
	 */
	std::string getAddress();

	/*! \brief Set Your address.
	 */
	void setAddress(std::string  address);
	/*! \brief Get Your city.
	 */
	std::string getCity();

	/*! \brief Set Your city.
	 */
	void setCity(std::string  city);
	/*! \brief Get Your state.
	 */
	std::string getState();

	/*! \brief Set Your state.
	 */
	void setState(std::string  state);
	/*! \brief Get Your ZIP code.
	 */
	std::string getZip();

	/*! \brief Set Your ZIP code.
	 */
	void setZip(std::string  zip);
	/*! \brief Get Your country.
	 */
	std::string getCountry();

	/*! \brief Set Your country.
	 */
	void setCountry(std::string  country);
	/*! \brief Get Your phone number.
	 */
	std::string getPhone();

	/*! \brief Set Your phone number.
	 */
	void setPhone(std::string  phone);
	/*! \brief Get Your company name.
	 */
	std::string getCompany();

	/*! \brief Set Your company name.
	 */
	void setCompany(std::string  company);
	/*! \brief Get Additional address information.
	 */
	std::string getAddress2();

	/*! \brief Set Additional address information.
	 */
	void setAddress2(std::string  address2);
	/*! \brief Get Your preferred locale.
	 */
	std::string getLocale();

	/*! \brief Set Your preferred locale.
	 */
	void setLocale(std::string  locale);
	/*! \brief Get Your email for invoice notifications.
	 */
	std::string getEmailInvoices();

	/*! \brief Set Your email for invoice notifications.
	 */
	void setEmailInvoices(std::string  email_invoices);
	/*! \brief Get Your email for abuse notifications.
	 */
	std::string getEmailAbuse();

	/*! \brief Set Your email for abuse notifications.
	 */
	void setEmailAbuse(std::string  email_abuse);
	/*! \brief Get Set to `true` to disable account resets, or `false` to enable them.
	 */
	bool getDisableReset();

	/*! \brief Set Set to `true` to disable account resets, or `false` to enable them.
	 */
	void setDisableReset(bool  disable_reset);
	/*! \brief Get Set to `true` to disable server reinstalls, or `false` to enable them.
	 */
	bool getDisableReinstall();

	/*! \brief Set Set to `true` to disable server reinstalls, or `false` to enable them.
	 */
	void setDisableReinstall(bool  disable_reinstall);
	/*! \brief Get Set to `true` to disable server notifications, or `false` to enable them.
	 */
	bool getDisableServerNotifications();

	/*! \brief Set Set to `true` to disable server notifications, or `false` to enable them.
	 */
	void setDisableServerNotifications(bool  disable_server_notifications);
	/*! \brief Get Set to `true` to disable email notifications, or `false` to enable them.
	 */
	bool getDisableEmailNotifications();

	/*! \brief Set Set to `true` to disable email notifications, or `false` to enable them.
	 */
	void setDisableEmailNotifications(bool  disable_email_notifications);
	/*! \brief Get Your GST identification number (if applicable).
	 */
	std::string getGstin();

	/*! \brief Set Your GST identification number (if applicable).
	 */
	void setGstin(std::string  gstin);

private:
	std::string name;
	std::string address;
	std::string city;
	std::string state;
	std::string zip;
	std::string country;
	std::string phone;
	std::string company;
	std::string address2;
	std::string locale;
	std::string email_invoices;
	std::string email_abuse;
	bool disable_reset;
	bool disable_reinstall;
	bool disable_server_notifications;
	bool disable_email_notifications;
	std::string gstin;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AccountInfoPost_H_ */
