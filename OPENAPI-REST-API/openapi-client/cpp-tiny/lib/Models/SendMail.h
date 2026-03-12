
/*
 * SendMail.h
 *
 * Details for an Email
 */

#ifndef TINY_CPP_CLIENT_SendMail_H_
#define TINY_CPP_CLIENT_SendMail_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Details for an Email
 *
 *  \ingroup Models
 *
 */

class SendMail{
public:

    /*! \brief Constructor.
	 */
    SendMail();
    SendMail(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~SendMail();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The Contact whom is the primary recipient of this email.
	 */
	std::string getTo();

	/*! \brief Set The Contact whom is the primary recipient of this email.
	 */
	void setTo(std::string to);
	/*! \brief Get The contact whom is the this email is from.
	 */
	std::string getFrom();

	/*! \brief Set The contact whom is the this email is from.
	 */
	void setFrom(std::string from);
	/*! \brief Get The subject or title of the email
	 */
	std::string getSubject();

	/*! \brief Set The subject or title of the email
	 */
	void setSubject(std::string subject);
	/*! \brief Get The main email contents.
	 */
	std::string getBody();

	/*! \brief Set The main email contents.
	 */
	void setBody(std::string body);


    private:
    std::string to{};
    std::string from{};
    std::string subject{};
    std::string body{};
};
}

#endif /* TINY_CPP_CLIENT_SendMail_H_ */
