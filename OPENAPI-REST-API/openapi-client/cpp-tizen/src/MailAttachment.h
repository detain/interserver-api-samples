/*
 * MailAttachment.h
 *
 * (optional) File attachments to include in the email.  The file contents must be base64
 */

#ifndef _MailAttachment_H_
#define _MailAttachment_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief (optional) File attachments to include in the email.  The file contents must be base64
 *
 *  \ingroup Models
 *
 */

class MailAttachment : public Object {
public:
	/*! \brief Constructor.
	 */
	MailAttachment();
	MailAttachment(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailAttachment();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The filename of the attached file.
	 */
	std::string getFilename();

	/*! \brief Set The filename of the attached file.
	 */
	void setFilename(std::string  filename);
	/*! \brief Get The file contents base64 encoded
	 */
	std::string getData();

	/*! \brief Set The file contents base64 encoded
	 */
	void setData(std::string  data);

private:
	std::string filename;
	std::string data;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailAttachment_H_ */
