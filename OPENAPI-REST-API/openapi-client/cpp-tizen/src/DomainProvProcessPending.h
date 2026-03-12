/*
 * DomainProvProcessPending.h
 *
 * Provisioning status data for a pending domain order.
 */

#ifndef _DomainProvProcessPending_H_
#define _DomainProvProcessPending_H_


#include <string>
#include "DomainProvProcessPending_attributes.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Provisioning status data for a pending domain order.
 *
 *  \ingroup Models
 *
 */

class DomainProvProcessPending : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainProvProcessPending();
	DomainProvProcessPending(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainProvProcessPending();

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
	std::string getResponseText();

	/*! \brief Set 
	 */
	void setResponseText(std::string  response_text);
	/*! \brief Get 
	 */
	std::string getProtocol();

	/*! \brief Set 
	 */
	void setProtocol(std::string  protocol);
	/*! \brief Get 
	 */
	std::string getResponseCode();

	/*! \brief Set 
	 */
	void setResponseCode(std::string  response_code);
	/*! \brief Get 
	 */
	std::string getAction();

	/*! \brief Set 
	 */
	void setAction(std::string  action);
	/*! \brief Get 
	 */
	std::string getObject();

	/*! \brief Set 
	 */
	void setObject(std::string  object);
	/*! \brief Get 
	 */
	std::string getIsSuccess();

	/*! \brief Set 
	 */
	void setIsSuccess(std::string  is_success);
	/*! \brief Get 
	 */
	DomainProvProcessPending_attributes getAttributes();

	/*! \brief Set 
	 */
	void setAttributes(DomainProvProcessPending_attributes  attributes);

private:
	std::string _OPS_version;
	std::string response_text;
	std::string protocol;
	std::string response_code;
	std::string action;
	std::string object;
	std::string is_success;
	DomainProvProcessPending_attributes attributes;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainProvProcessPending_H_ */
