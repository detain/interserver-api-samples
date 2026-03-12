/*
 * MailLog.h
 *
 * Mail log records
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


/*! \brief Mail log records
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

	/*! \brief Get total number of mail log entries
	 */
	int getTotal();

	/*! \brief Set total number of mail log entries
	 */
	void setTotal(int  total);
	/*! \brief Get number of emails skipped in listing
	 */
	int getSkip();

	/*! \brief Set number of emails skipped in listing
	 */
	void setSkip(int  skip);
	/*! \brief Get number of emails to return
	 */
	int getLimit();

	/*! \brief Set number of emails to return
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
