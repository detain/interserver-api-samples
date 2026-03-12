/*
 * TemplateRequest.h
 *
 * VPS OS Template Request
 */

#ifndef _TemplateRequest_H_
#define _TemplateRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief VPS OS Template Request
 *
 *  \ingroup Models
 *
 */

class TemplateRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	TemplateRequest();
	TemplateRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TemplateRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get OS Template Filename
	 */
	std::string getRTemplate();

	/*! \brief Set OS Template Filename
	 */
	void setRTemplate(std::string  r_template);
	/*! \brief Get Password for this account.
	 */
	std::string getLocalPassword();

	/*! \brief Set Password for this account.
	 */
	void setLocalPassword(std::string  localPassword);
	/*! \brief Get Password for Root / Administrator Account.
	 */
	std::string getPassword();

	/*! \brief Set Password for Root / Administrator Account.
	 */
	void setPassword(std::string  password);

private:
	std::string r_template;
	std::string localPassword;
	std::string password;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TemplateRequest_H_ */
