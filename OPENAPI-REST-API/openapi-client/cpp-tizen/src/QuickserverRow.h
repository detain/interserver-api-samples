/*
 * QuickserverRow.h
 *
 * A result row from the &#x60;Quickservers&#x60; &#x60;GET&#x60; request.
 */

#ifndef _QuickserverRow_H_
#define _QuickserverRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A result row from the `Quickservers` `GET` request.
 *
 *  \ingroup Models
 *
 */

class QuickserverRow : public Object {
public:
	/*! \brief Constructor.
	 */
	QuickserverRow();
	QuickserverRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~QuickserverRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The id of the qs.
	 */
	std::string getQsId();

	/*! \brief Set The id of the qs.
	 */
	void setQsId(std::string  qs_id);
	/*! \brief Get The name of the qs.
	 */
	std::string getQsName();

	/*! \brief Set The name of the qs.
	 */
	void setQsName(std::string  qs_name);
	/*! \brief Get The cost of the qs.
	 */
	std::string getCost();

	/*! \brief Set The cost of the qs.
	 */
	void setCost(std::string  cost);
	/*! \brief Get The hostname of the qs.
	 */
	std::string getQsHostname();

	/*! \brief Set The hostname of the qs.
	 */
	void setQsHostname(std::string  qs_hostname);
	/*! \brief Get The status of the qs.
	 */
	std::string getQsStatus();

	/*! \brief Set The status of the qs.
	 */
	void setQsStatus(std::string  qs_status);
	/*! \brief Get The comment of the qs.
	 */
	std::string getQsComment();

	/*! \brief Set The comment of the qs.
	 */
	void setQsComment(std::string  qs_comment);

private:
	std::string qs_id;
	std::string qs_name;
	std::string cost;
	std::string qs_hostname;
	std::string qs_status;
	std::string qs_comment;
	void __init();
	void __cleanup();

};
}
}

#endif /* _QuickserverRow_H_ */
