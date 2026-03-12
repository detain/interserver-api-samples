/*
 * DomainProvProcessPending_attributes.h
 *
 * 
 */

#ifndef _DomainProvProcessPending_attributes_H_
#define _DomainProvProcessPending_attributes_H_


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

class DomainProvProcessPending_attributes : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainProvProcessPending_attributes();
	DomainProvProcessPending_attributes(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainProvProcessPending_attributes();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getId();

	/*! \brief Set 
	 */
	void setId(std::string  id);
	/*! \brief Get 
	 */
	std::string getOrderId();

	/*! \brief Set 
	 */
	void setOrderId(std::string  order_id);
	/*! \brief Get 
	 */
	std::string getRegistrationexpirationdate();

	/*! \brief Set 
	 */
	void setRegistrationexpirationdate(std::string  registrationexpirationdate);
	/*! \brief Get 
	 */
	std::string getFAutoRenew();

	/*! \brief Set 
	 */
	void setFAutoRenew(std::string  f_auto_renew);

private:
	std::string id;
	std::string order_id;
	std::string registrationexpirationdate;
	std::string f_auto_renew;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainProvProcessPending_attributes_H_ */
