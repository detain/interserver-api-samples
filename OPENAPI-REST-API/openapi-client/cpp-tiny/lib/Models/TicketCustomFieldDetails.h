
/*
 * TicketCustomFieldDetails.h
 *
 * Optional fields providing additional info in ticket
 */

#ifndef TINY_CPP_CLIENT_TicketCustomFieldDetails_H_
#define TINY_CPP_CLIENT_TicketCustomFieldDetails_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Optional fields providing additional info in ticket
 *
 *  \ingroup Models
 *
 */

class TicketCustomFieldDetails{
public:

    /*! \brief Constructor.
	 */
    TicketCustomFieldDetails();
    TicketCustomFieldDetails(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~TicketCustomFieldDetails();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getCustomerServerAccess();

	/*! \brief Set 
	 */
	void setCustomerServerAccess(std::string customerServerAccess);
	/*! \brief Get 
	 */
	std::string getIpAddress();

	/*! \brief Set 
	 */
	void setIpAddress(std::string ipAddress);
	/*! \brief Get 
	 */
	std::string getRootPassword();

	/*! \brief Set 
	 */
	void setRootPassword(std::string rootPassword);
	/*! \brief Get 
	 */
	std::string getSudoUser();

	/*! \brief Set 
	 */
	void setSudoUser(std::string sudoUser);
	/*! \brief Get 
	 */
	int getSudoPassword();

	/*! \brief Set 
	 */
	void setSudoPassword(int sudoPassword);
	/*! \brief Get 
	 */
	int getPort();

	/*! \brief Set 
	 */
	void setPort(int port);


    private:
    std::string customerServerAccess{};
    std::string ipAddress{};
    std::string rootPassword{};
    std::string sudoUser{};
    int sudoPassword{};
    int port{};
};
}

#endif /* TINY_CPP_CLIENT_TicketCustomFieldDetails_H_ */
