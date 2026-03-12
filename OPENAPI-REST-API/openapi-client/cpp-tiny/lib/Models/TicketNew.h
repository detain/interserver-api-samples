
/*
 * TicketNew.h
 *
 * New helpdesk ticket request.  
 */

#ifndef TINY_CPP_CLIENT_TicketNew_H_
#define TINY_CPP_CLIENT_TicketNew_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief New helpdesk ticket request.  
 *
 *  \ingroup Models
 *
 */

class TicketNew{
public:

    /*! \brief Constructor.
	 */
    TicketNew();
    TicketNew(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~TicketNew();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::string subject);
	/*! \brief Get 
	 */
	std::string getBody();

	/*! \brief Set 
	 */
	void setBody(std::string body);
	/*! \brief Get 
	 */
	int getServiceId();

	/*! \brief Set 
	 */
	void setServiceId(int service_id);
	/*! \brief Get 
	 */
	std::string getServiceModule();

	/*! \brief Set 
	 */
	void setServiceModule(std::string service_module);


    private:
    std::string subject{};
    std::string body{};
    int service_id{};
    std::string service_module{};
};
}

#endif /* TINY_CPP_CLIENT_TicketNew_H_ */
