/*
 * UpdateTicket.h
 *
 * Update custom fields of the ticket
 */

#ifndef _UpdateTicket_H_
#define _UpdateTicket_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Update custom fields of the ticket
 *
 *  \ingroup Models
 *
 */

class UpdateTicket : public Object {
public:
	/*! \brief Constructor.
	 */
	UpdateTicket();
	UpdateTicket(char* str);

	/*! \brief Destructor.
	 */
	virtual ~UpdateTicket();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getIp();

	/*! \brief Set 
	 */
	void setIp(std::string  ip);
	/*! \brief Get 
	 */
	std::string getIpAddress();

	/*! \brief Set 
	 */
	void setIpAddress(std::string  ip_address);
	/*! \brief Get 
	 */
	std::string getCustomerServerAccess();

	/*! \brief Set 
	 */
	void setCustomerServerAccess(std::string  customer_server_access);
	/*! \brief Get 
	 */
	std::string getRootPassword();

	/*! \brief Set 
	 */
	void setRootPassword(std::string  root_password);
	/*! \brief Get 
	 */
	std::string getSudoUsername();

	/*! \brief Set 
	 */
	void setSudoUsername(std::string  sudo_username);
	/*! \brief Get 
	 */
	std::string getSudoPassword();

	/*! \brief Set 
	 */
	void setSudoPassword(std::string  sudo_password);
	/*! \brief Get 
	 */
	int getPort();

	/*! \brief Set 
	 */
	void setPort(int  port);

private:
	std::string ip;
	std::string ip_address;
	std::string customer_server_access;
	std::string root_password;
	std::string sudo_username;
	std::string sudo_password;
	int port;
	void __init();
	void __cleanup();

};
}
}

#endif /* _UpdateTicket_H_ */
