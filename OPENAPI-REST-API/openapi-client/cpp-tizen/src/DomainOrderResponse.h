/*
 * DomainOrderResponse.h
 *
 * Registrar response metadata returned after a domain order.
 */

#ifndef _DomainOrderResponse_H_
#define _DomainOrderResponse_H_


#include <string>
#include "DomainOrderResponse_attributes.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Registrar response metadata returned after a domain order.
 *
 *  \ingroup Models
 *
 */

class DomainOrderResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainOrderResponse();
	DomainOrderResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainOrderResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getOPSVersion();

	/*! \brief Set 
	 */
	void setOPSVersion(std::string  _OPS_version);
	/*! \brief Get 
	 */
	std::string getProtocol();

	/*! \brief Set 
	 */
	void setProtocol(std::string  protocol);
	/*! \brief Get 
	 */
	std::string getIsSuccess();

	/*! \brief Set 
	 */
	void setIsSuccess(std::string  is_success);
	/*! \brief Get 
	 */
	std::string getAction();

	/*! \brief Set 
	 */
	void setAction(std::string  action);
	/*! \brief Get 
	 */
	DomainOrderResponse_attributes getAttributes();

	/*! \brief Set 
	 */
	void setAttributes(DomainOrderResponse_attributes  attributes);
	/*! \brief Get 
	 */
	std::string getResponseText();

	/*! \brief Set 
	 */
	void setResponseText(std::string  response_text);
	/*! \brief Get 
	 */
	std::string getObject();

	/*! \brief Set 
	 */
	void setObject(std::string  object);
	/*! \brief Get 
	 */
	std::string getResponseCode();

	/*! \brief Set 
	 */
	void setResponseCode(std::string  response_code);

private:
	std::string _OPS_version;
	std::string protocol;
	std::string is_success;
	std::string action;
	DomainOrderResponse_attributes attributes;
	std::string response_text;
	std::string object;
	std::string response_code;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainOrderResponse_H_ */
