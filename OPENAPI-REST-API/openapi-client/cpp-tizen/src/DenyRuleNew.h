/*
 * DenyRuleNew.h
 *
 * The data for a email deny rule record.
 */

#ifndef _DenyRuleNew_H_
#define _DenyRuleNew_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief The data for a email deny rule record.
 *
 *  \ingroup Models
 *
 */

class DenyRuleNew : public Object {
public:
	/*! \brief Constructor.
	 */
	DenyRuleNew();
	DenyRuleNew(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DenyRuleNew();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The type of deny rule.
	 */
	std::string getType();

	/*! \brief Set The type of deny rule.
	 */
	void setType(std::string  type);
	/*! \brief Get The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
	 */
	std::string getData();

	/*! \brief Set The content of the rule.  If a domain type rule then an example would be google.com. For a begins with type an example would be msgid-.  For the email typer an example would be user@server.com.
	 */
	void setData(std::string  data);
	/*! \brief Get Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
	 */
	std::string getUser();

	/*! \brief Set Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
	 */
	void setUser(std::string  user);

private:
	std::string type;
	std::string data;
	std::string user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DenyRuleNew_H_ */
