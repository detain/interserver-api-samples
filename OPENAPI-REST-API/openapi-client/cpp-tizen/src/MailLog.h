/*
 * MailLog.h
 *
 * Paginated mail log response.  Contains the full matched count (&#x60;total&#x60;) plus a page of &#x60;MailLogEntry&#x60; records.  The &#x60;total&#x60; reflects the grouping mode: with &#x60;groupby&#x3D;recipient&#x60; it counts delivery attempts, with &#x60;groupby&#x3D;message&#x60; it counts unique messages.
 */

#ifndef _MailLog_H_
#define _MailLog_H_


#include <string>
#include "MailLogEntry.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Paginated mail log response.  Contains the full matched count (`total`) plus a page of `MailLogEntry` records.  The `total` reflects the grouping mode: with `groupby=recipient` it counts delivery attempts, with `groupby=message` it counts unique messages.
 *
 *  \ingroup Models
 *
 */

class MailLog : public Object {
public:
	/*! \brief Constructor.
	 */
	MailLog();
	MailLog(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailLog();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode.
	 */
	int getTotal();

	/*! \brief Set Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode.
	 */
	void setTotal(int  total);
	/*! \brief Get The `skip` value used for this page (echoed from the request).
	 */
	int getSkip();

	/*! \brief Set The `skip` value used for this page (echoed from the request).
	 */
	void setSkip(int  skip);
	/*! \brief Get The `limit` value used for this page (echoed from the request).
	 */
	int getLimit();

	/*! \brief Set The `limit` value used for this page (echoed from the request).
	 */
	void setLimit(int  limit);
	/*! \brief Get 
	 */
	std::list<MailLogEntry> getEmails();

	/*! \brief Set 
	 */
	void setEmails(std::list <MailLogEntry> emails);

private:
	int total;
	int skip;
	int limit;
	std::list <MailLogEntry>emails;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailLog_H_ */
