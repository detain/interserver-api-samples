
/*
 * MailBlockClickHouse.h
 *
 * A block entry from the clickhouse mailblocks server.
 */

#ifndef TINY_CPP_CLIENT_MailBlockClickHouse_H_
#define TINY_CPP_CLIENT_MailBlockClickHouse_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Date.h"

namespace Tiny {


/*! \brief A block entry from the clickhouse mailblocks server.
 *
 *  \ingroup Models
 *
 */

class MailBlockClickHouse{
public:

    /*! \brief Constructor.
	 */
    MailBlockClickHouse();
    MailBlockClickHouse(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailBlockClickHouse();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	Date getDate();

	/*! \brief Set 
	 */
	void setDate(Date date);
	/*! \brief Get 
	 */
	std::string getFrom();

	/*! \brief Set 
	 */
	void setFrom(std::string from);
	/*! \brief Get 
	 */
	std::string getMessageId();

	/*! \brief Set 
	 */
	void setMessageId(std::string messageId);
	/*! \brief Get 
	 */
	std::string getSubject();

	/*! \brief Set 
	 */
	void setSubject(std::string subject);
	/*! \brief Get 
	 */
	std::string getTo();

	/*! \brief Set 
	 */
	void setTo(std::string to);


    private:
    Date date;
    std::string from{};
    std::string messageId{};
    std::string subject{};
    std::string to{};
};
}

#endif /* TINY_CPP_CLIENT_MailBlockClickHouse_H_ */
