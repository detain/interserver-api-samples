
/*
 * UpdateTicket.h
 *
 * Update custom fields of the ticket
 */

#ifndef TINY_CPP_CLIENT_UpdateTicket_H_
#define TINY_CPP_CLIENT_UpdateTicket_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Update custom fields of the ticket
 *
 *  \ingroup Models
 *
 */

class UpdateTicket{
public:

    /*! \brief Constructor.
	 */
    UpdateTicket();
    UpdateTicket(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~UpdateTicket();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getIp();

	/*! \brief Set 
	 */
	void setIp(std::string ip);
	/*! \brief Get 
	 */
	std::string getIpAddress();

	/*! \brief Set 
	 */
	void setIpAddress(std::string ip_address);
	/*! \brief Get 
	 */
	std::string getCustomerServerAccess();

	/*! \brief Set 
	 */
	void setCustomerServerAccess(std::string customer_server_access);
	/*! \brief Get 
	 */
	std::string getRootPassword();

	/*! \brief Set 
	 */
	void setRootPassword(std::string root_password);
	/*! \brief Get 
	 */
	std::string getSudoUsername();

	/*! \brief Set 
	 */
	void setSudoUsername(std::string sudo_username);
	/*! \brief Get 
	 */
	std::string getSudoPassword();

	/*! \brief Set 
	 */
	void setSudoPassword(std::string sudo_password);
	/*! \brief Get 
	 */
	int getPort();

	/*! \brief Set 
	 */
	void setPort(int port);


    private:
    std::string ip{};
    std::string ip_address{};
    std::string customer_server_access{};
    std::string root_password{};
    std::string sudo_username{};
    std::string sudo_password{};
    int port{};
};
}

#endif /* TINY_CPP_CLIENT_UpdateTicket_H_ */
