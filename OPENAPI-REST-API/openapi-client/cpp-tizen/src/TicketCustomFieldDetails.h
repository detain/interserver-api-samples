/*
 * TicketCustomFieldDetails.h
 *
 * Optional fields providing additional info in ticket
 */

#ifndef _TicketCustomFieldDetails_H_
#define _TicketCustomFieldDetails_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Optional fields providing additional info in ticket
 *
 *  \ingroup Models
 *
 */

class TicketCustomFieldDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	TicketCustomFieldDetails();
	TicketCustomFieldDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TicketCustomFieldDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getCustomerServerAccess();

	/*! \brief Set 
	 */
	void setCustomerServerAccess(std::string  customerServerAccess);
	/*! \brief Get 
	 */
	std::string getIpAddress();

	/*! \brief Set 
	 */
	void setIpAddress(std::string  ipAddress);
	/*! \brief Get 
	 */
	std::string getRootPassword();

	/*! \brief Set 
	 */
	void setRootPassword(std::string  rootPassword);
	/*! \brief Get 
	 */
	std::string getSudoUser();

	/*! \brief Set 
	 */
	void setSudoUser(std::string  sudoUser);
	/*! \brief Get 
	 */
	int getSudoPassword();

	/*! \brief Set 
	 */
	void setSudoPassword(int  sudoPassword);
	/*! \brief Get 
	 */
	int getPort();

	/*! \brief Set 
	 */
	void setPort(int  port);

private:
	std::string customerServerAccess;
	std::string ipAddress;
	std::string rootPassword;
	std::string sudoUser;
	int sudoPassword;
	int port;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TicketCustomFieldDetails_H_ */
