
/*
 * Home.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_Home_H_
#define TINY_CPP_CLIENT_Home_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Home_details.h"
#include "Home_services.h"
#include "Home_ticketStatus.h"
#include "Home_ticketStatusView.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class Home{
public:

    /*! \brief Constructor.
	 */
    Home();
    Home(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~Home();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Last login IP.
	 */
	std::string getLastLoginIp();

	/*! \brief Set Last login IP.
	 */
	void setLastLoginIp(std::string last_login_ip);
	/*! \brief Get Last login time.
	 */
	std::string getLastLogin();

	/*! \brief Set Last login time.
	 */
	void setLastLogin(std::string last_login);
	/*! \brief Get Currency symbol.
	 */
	std::string getCurrency();

	/*! \brief Set Currency symbol.
	 */
	void setCurrency(std::string currency);
	/*! \brief Get Amount with currency.
	 */
	std::string getAmount();

	/*! \brief Set Amount with currency.
	 */
	void setAmount(std::string amount);
	/*! \brief Get Number of invoices.
	 */
	int getInvoiceList();

	/*! \brief Set Number of invoices.
	 */
	void setInvoiceList(int invoice_list);
	/*! \brief Get Balance with currency.
	 */
	std::string getBalance();

	/*! \brief Set Balance with currency.
	 */
	void setBalance(std::string balance);
	/*! \brief Get Users full name.
	 */
	std::string getFullName();

	/*! \brief Set Users full name.
	 */
	void setFullName(std::string full_name);
	/*! \brief Get User email address.
	 */
	std::string getEmail();

	/*! \brief Set User email address.
	 */
	void setEmail(std::string email);
	/*! \brief Get List of tickets.
	 */
	std::list<std::string> getTickets();

	/*! \brief Set List of tickets.
	 */
	void setTickets(std::list<std::string> tickets);
	/*! \brief Get 
	 */
	Home_ticketStatus getTicketStatus();

	/*! \brief Set 
	 */
	void setTicketStatus(Home_ticketStatus ticketStatus);
	/*! \brief Get 
	 */
	Home_ticketStatusView getTicketStatusView();

	/*! \brief Set 
	 */
	void setTicketStatusView(Home_ticketStatusView ticketStatusView);
	/*! \brief Get 
	 */
	Home_details getDetails();

	/*! \brief Set 
	 */
	void setDetails(Home_details details);
	/*! \brief Get 
	 */
	Home_services getServices();

	/*! \brief Set 
	 */
	void setServices(Home_services services);
	/*! \brief Get Affiliate amount with currency.
	 */
	std::string getAFFILIATEAMOUNT();

	/*! \brief Set Affiliate amount with currency.
	 */
	void setAFFILIATEAMOUNT(std::string aFFILIATE_AMOUNT);


    private:
    std::string last_login_ip{};
    std::string last_login{};
    std::string currency{};
    std::string amount{};
    int invoice_list{};
    std::string balance{};
    std::string full_name{};
    std::string email{};
    std::list<std::string> tickets;
    Home_ticketStatus ticketStatus;
    Home_ticketStatusView ticketStatusView;
    Home_details details;
    Home_services services;
    std::string aFFILIATE_AMOUNT{};
};
}

#endif /* TINY_CPP_CLIENT_Home_H_ */
