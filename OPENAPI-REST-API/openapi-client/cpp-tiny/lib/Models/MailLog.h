
/*
 * MailLog.h
 *
 * Mail log records
 */

#ifndef TINY_CPP_CLIENT_MailLog_H_
#define TINY_CPP_CLIENT_MailLog_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "MailLogEntry.h"
#include <list>

namespace Tiny {


/*! \brief Mail log records
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

	/*! \brief Get total number of mail log entries
	 */
	int getTotal();

	/*! \brief Set total number of mail log entries
	 */
	void setTotal(int total);
	/*! \brief Get number of emails skipped in listing
	 */
	int getSkip();

	/*! \brief Set number of emails skipped in listing
	 */
	void setSkip(int skip);
	/*! \brief Get number of emails to return
	 */
	int getLimit();

	/*! \brief Set number of emails to return
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
