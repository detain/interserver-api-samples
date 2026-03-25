
/*
 * MailLog.h
 *
 * Paginated mail log response.  Contains the full matched count (&#x60;total&#x60;) plus a page of &#x60;MailLogEntry&#x60; records.  The &#x60;total&#x60; reflects the grouping mode: with &#x60;groupby&#x3D;recipient&#x60; it counts delivery attempts, with &#x60;groupby&#x3D;message&#x60; it counts unique messages.
 */

#ifndef TINY_CPP_CLIENT_MailLog_H_
#define TINY_CPP_CLIENT_MailLog_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailLogEntry.h"
#include <list>

namespace Tiny {


/*! \brief Paginated mail log response.  Contains the full matched count (`total`) plus a page of `MailLogEntry` records.  The `total` reflects the grouping mode: with `groupby=recipient` it counts delivery attempts, with `groupby=message` it counts unique messages.
 *
 *  \ingroup Models
 *
 */

class MailLog{
public:

    /*! \brief Constructor.
	 */
    MailLog();
    MailLog(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailLog();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode.
	 */
	int getTotal();

	/*! \brief Set Total number of log entries that match the supplied filters, regardless of `skip` and `limit`.  Reflects the `groupby` mode.
	 */
	void setTotal(int total);
	/*! \brief Get The `skip` value used for this page (echoed from the request).
	 */
	int getSkip();

	/*! \brief Set The `skip` value used for this page (echoed from the request).
	 */
	void setSkip(int skip);
	/*! \brief Get The `limit` value used for this page (echoed from the request).
	 */
	int getLimit();

	/*! \brief Set The `limit` value used for this page (echoed from the request).
	 */
	void setLimit(int limit);
	/*! \brief Get 
	 */
	std::list<MailLogEntry> getEmails();

	/*! \brief Set 
	 */
	void setEmails(std::list<MailLogEntry> emails);


    private:
    int total{};
    int skip{};
    int limit{};
    std::list<MailLogEntry> emails;
};
}

#endif /* TINY_CPP_CLIENT_MailLog_H_ */
