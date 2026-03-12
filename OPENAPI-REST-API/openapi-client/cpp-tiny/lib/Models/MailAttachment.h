
/*
 * MailAttachment.h
 *
 * (optional) File attachments to include in the email.  The file contents must be base64
 */

#ifndef TINY_CPP_CLIENT_MailAttachment_H_
#define TINY_CPP_CLIENT_MailAttachment_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief (optional) File attachments to include in the email.  The file contents must be base64
 *
 *  \ingroup Models
 *
 */

class MailAttachment{
public:

    /*! \brief Constructor.
	 */
    MailAttachment();
    MailAttachment(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailAttachment();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The filename of the attached file.
	 */
	std::string getFilename();

	/*! \brief Set The filename of the attached file.
	 */
	void setFilename(std::string filename);
	/*! \brief Get The file contents base64 encoded
	 */
	std::string getData();

	/*! \brief Set The file contents base64 encoded
	 */
	void setData(std::string data);


    private:
    std::string filename{};
    std::string data{};
};
}

#endif /* TINY_CPP_CLIENT_MailAttachment_H_ */
