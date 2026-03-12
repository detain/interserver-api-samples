/*
 * DenyRuleRecord.h
 *
 * The data for a email deny rule record.
 */

#ifndef _DenyRuleRecord_H_
#define _DenyRuleRecord_H_


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

class DenyRuleRecord : public Object {
public:
	/*! \brief Constructor.
	 */
	DenyRuleRecord();
	DenyRuleRecord(char* str);

	/*! \brief Destructor.
	 */
	virtual ~DenyRuleRecord();

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
	/*! \brief Get The deny rule Id number.
	 */
	int getId();

	/*! \brief Set The deny rule Id number.
	 */
	void setId(int  id);
	/*! \brief Get the date the rule was created.
	 */
	std::string getCreated();

	/*! \brief Set the date the rule was created.
	 */
	void setCreated(std::string  created);
	/*! \brief Get Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
	 */
	std::string getUser();

	/*! \brief Set Mail account username that will be tied to this rule.  If not specified the first active mail order will be used.
	 */
	void setUser(std::string  user);

private:
	std::string type;
	std::string data;
	int id;
	std::string created;
	std::string user;
	void __init();
	void __cleanup();

};
}
}

#endif /* _DenyRuleRecord_H_ */
