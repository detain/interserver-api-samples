/*
 * MailBlockClickHouse.h
 *
 * A block entry from the clickhouse mailblocks server.
 */

#ifndef _MailBlockClickHouse_H_
#define _MailBlockClickHouse_H_


#include <string>
#include "Date.h"
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A block entry from the clickhouse mailblocks server.
 *
 *  \ingroup Models
 *
 */

class MailBlockClickHouse : public Object {
public:
	/*! \brief Constructor.
	 */
	MailBlockClickHouse();
	MailBlockClickHouse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailBlockClickHouse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	Date getDate();

	/*! \brief Set 
	 */
	void setDate(Date  date);
	/*! \brief Get 
	 */
	std::string getFrom();

	/*! \brief Set 
	 */
	void setFrom(std::string  from);
	/*! \brief Get 
	 */
	std::string getMessageId();

	/*! \brief Set 
	 */
	void setMessageId(std::string  messageId);
	/*! \brief Get 
	 */
	std::string getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::string  subject);
	/*! \brief Get 
	 */
	std::string getTo();

	/*! \brief Set 
	 */
	void setTo(std::string  to);

private:
	Date date;
	std::string from;
	std::string messageId;
	std::string subject;
	std::string to;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailBlockClickHouse_H_ */
