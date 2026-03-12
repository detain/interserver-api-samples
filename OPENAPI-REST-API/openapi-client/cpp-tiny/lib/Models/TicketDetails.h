
/*
 * TicketDetails.h
 *
 * Detailed ticket information
 */

#ifndef TINY_CPP_CLIENT_TicketDetails_H_
#define TINY_CPP_CLIENT_TicketDetails_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Detailed ticket information
 *
 *  \ingroup Models
 *
 */

class TicketDetails{
public:

    /*! \brief Constructor.
	 */
    TicketDetails();
    TicketDetails(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~TicketDetails();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	int getTicketid();

	/*! \brief Set 
	 */
	void setTicketid(int ticketid);
	/*! \brief Get 
	 */
	std::string getTicketmaskid();

	/*! \brief Set 
	 */
	void setTicketmaskid(std::string ticketmaskid);
	/*! \brief Get 
	 */
	std::string getDepartment();

	/*! \brief Set 
	 */
	void setDepartment(std::string department);
	/*! \brief Get 
	 */
	std::string getStatus();

	/*! \brief Set 
	 */
	void setStatus(std::string status);
	/*! \brief Get 
	 */
	std::string getPriority();

	/*! \brief Set 
	 */
	void setPriority(std::string priority);
	/*! \brief Get 
	 */
	std::string getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::string subject);
	/*! \brief Get 
	 */
	std::string getCreatedOn();

	/*! \brief Set 
	 */
	void setCreatedOn(std::string created_on);
	/*! \brief Get 
	 */
	std::string getUpdatedOn();

	/*! \brief Set 
	 */
	void setUpdatedOn(std::string updated_on);


    private:
    int ticketid{};
    std::string ticketmaskid{};
    std::string department{};
    std::string status{};
    std::string priority{};
    std::string subject{};
    std::string created_on{};
    std::string updated_on{};
};
}

#endif /* TINY_CPP_CLIENT_TicketDetails_H_ */
