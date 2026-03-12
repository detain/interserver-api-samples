/*
 * TicketNew.h
 *
 * New helpdesk ticket request.  
 */

#ifndef _TicketNew_H_
#define _TicketNew_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief New helpdesk ticket request.  
 *
 *  \ingroup Models
 *
 */

class TicketNew : public Object {
public:
	/*! \brief Constructor.
	 */
	TicketNew();
	TicketNew(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TicketNew();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::string  subject);
	/*! \brief Get 
	 */
	std::string getBody();

	/*! \brief Set 
	 */
	void setBody(std::string  body);
	/*! \brief Get 
	 */
	int getServiceId();

	/*! \brief Set 
	 */
	void setServiceId(int  service_id);
	/*! \brief Get 
	 */
	std::string getServiceModule();

	/*! \brief Set 
	 */
	void setServiceModule(std::string  service_module);

private:
	std::string subject;
	std::string body;
	int service_id;
	std::string service_module;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TicketNew_H_ */
