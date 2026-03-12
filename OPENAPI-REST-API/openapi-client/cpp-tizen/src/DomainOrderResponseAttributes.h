/*
 * DomainOrderResponse_attributes.h
 *
 * 
 */

#ifndef _DomainOrderResponse_attributes_H_
#define _DomainOrderResponse_attributes_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class DomainOrderResponse_attributes : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainOrderResponse_attributes();
	DomainOrderResponse_attributes(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainOrderResponse_attributes();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Registrar order ID.
	 */
	std::string getId();

	/*! \brief Set Registrar order ID.
	 */
	void setId(std::string  id);
	/*! \brief Get Administrative contact email provided for the order.
	 */
	std::string getAdminEmail();

	/*! \brief Set Administrative contact email provided for the order.
	 */
	void setAdminEmail(std::string  admin_email);

private:
	std::string id;
	std::string admin_email;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainOrderResponse_attributes_H_ */
