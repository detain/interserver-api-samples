/*
 * TicketDetails.h
 *
 * Detailed ticket information
 */

#ifndef _TicketDetails_H_
#define _TicketDetails_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Detailed ticket information
 *
 *  \ingroup Models
 *
 */

class TicketDetails : public Object {
public:
	/*! \brief Constructor.
	 */
	TicketDetails();
	TicketDetails(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TicketDetails();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	int getTicketid();

	/*! \brief Set 
	 */
	void setTicketid(int  ticketid);
	/*! \brief Get 
	 */
	std::string getTicketmaskid();

	/*! \brief Set 
	 */
	void setTicketmaskid(std::string  ticketmaskid);
	/*! \brief Get 
	 */
	std::string getDepartment();

	/*! \brief Set 
	 */
	void setDepartment(std::string  department);
	/*! \brief Get 
	 */
	std::string getStatus();

	/*! \brief Set 
	 */
	void setStatus(std::string  status);
	/*! \brief Get 
	 */
	std::string getPriority();

	/*! \brief Set 
	 */
	void setPriority(std::string  priority);
	/*! \brief Get 
	 */
	std::string getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::string  subject);
	/*! \brief Get 
	 */
	std::string getCreatedOn();

	/*! \brief Set 
	 */
	void setCreatedOn(std::string  created_on);
	/*! \brief Get 
	 */
	std::string getUpdatedOn();

	/*! \brief Set 
	 */
	void setUpdatedOn(std::string  updated_on);

private:
	int ticketid;
	std::string ticketmaskid;
	std::string department;
	std::string status;
	std::string priority;
	std::string subject;
	std::string created_on;
	std::string updated_on;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TicketDetails_H_ */
