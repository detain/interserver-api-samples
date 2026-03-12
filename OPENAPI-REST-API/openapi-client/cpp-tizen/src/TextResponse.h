/*
 * TextResponse.h
 *
 * Text Response Object
 */

#ifndef _TextResponse_H_
#define _TextResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Text Response Object
 *
 *  \ingroup Models
 *
 */

class TextResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	TextResponse();
	TextResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~TextResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Response text
	 */
	std::string getText();

	/*! \brief Set Response text
	 */
	void setText(std::string  text);
	/*! \brief Get Response message
	 */
	std::string getMessage();

	/*! \brief Set Response message
	 */
	void setMessage(std::string  message);

private:
	std::string text;
	std::string message;
	void __init();
	void __cleanup();

};
}
}

#endif /* _TextResponse_H_ */
