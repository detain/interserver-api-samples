
/*
 * DomainOrderResponse_attributes.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_DomainOrderResponse_attributes_H_
#define TINY_CPP_CLIENT_DomainOrderResponse_attributes_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DomainOrderResponse_attributes{
public:

    /*! \brief Constructor.
	 */
    DomainOrderResponse_attributes();
    DomainOrderResponse_attributes(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~DomainOrderResponse_attributes();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Registrar order ID.
	 */
	std::string getId();

	/*! \brief Set Registrar order ID.
	 */
	void setId(std::string id);
	/*! \brief Get Administrative contact email provided for the order.
	 */
	std::string getAdminEmail();

	/*! \brief Set Administrative contact email provided for the order.
	 */
	void setAdminEmail(std::string admin_email);


    private:
    std::string id{};
    std::string admin_email{};
};
}

#endif /* TINY_CPP_CLIENT_DomainOrderResponse_attributes_H_ */
