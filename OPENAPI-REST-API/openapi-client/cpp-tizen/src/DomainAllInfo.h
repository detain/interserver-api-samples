/*
 * DomainAllInfo.h
 *
 * Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 */

#ifndef _DomainAllInfo_H_
#define _DomainAllInfo_H_


#include <string>
#include "DomainAllInfo_attributes.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Complete domain registration information returned from the registrar, including contacts, nameservers, and expiry dates.
 *
 *  \ingroup Models
 *
 */

class DomainAllInfo : public Object {
public:
	/*! \brief Constructor.
	 */
	DomainAllInfo();
	DomainAllInfo(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DomainAllInfo();

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
	DomainAllInfo_attributes getAttributes();

	/*! \brief Set 
	 */
	void setAttributes(DomainAllInfo_attributes  attributes);
	/*! \brief Get 
	 */
	std::string getObject();

	/*! \brief Set 
	 */
	void setObject(std::string  object);
	/*! \brief Get 
	 */
	std::string getProtocol();

	/*! \brief Set 
	 */
	void setProtocol(std::string  protocol);
	/*! \brief Get 
	 */
	std::string getResponseText();

	/*! \brief Set 
	 */
	void setResponseText(std::string  response_text);
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
	std::string getIsSuccess();

	/*! \brief Set 
	 */
	void setIsSuccess(std::string  is_success);

private:
	std::string _OPS_version;
	DomainAllInfo_attributes attributes;
	std::string object;
	std::string protocol;
	std::string response_text;
	std::string response_code;
	std::string action;
	std::string is_success;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DomainAllInfo_H_ */
