/*
 * ServersBuyNowError.h
 *
 * Error response when a buy-it-now server order fails validation.
 */

#ifndef _ServersBuyNowError_H_
#define _ServersBuyNowError_H_


#include <string>
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Error response when a buy-it-now server order fails validation.
 *
 *  \ingroup Models
 *
 */

class ServersBuyNowError : public Object {
public:
	/*! \brief Constructor.
	 */
	ServersBuyNowError();
	ServersBuyNowError(char* str);

	/*! \brief Destructor.
	 */
	virtual ~ServersBuyNowError();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Always false for error responses.
	 */
	bool getSuccess();

	/*! \brief Set Always false for error responses.
	 */
	void setSuccess(bool  success);
	/*! \brief Get Human-readable error summary.
	 */
	std::string getText();

	/*! \brief Set Human-readable error summary.
	 */
	void setText(std::string  text);
	/*! \brief Get List of specific validation error messages.
	 */
	std::list<std::string> getErrors();

	/*! \brief Set List of specific validation error messages.
	 */
	void setErrors(std::list <std::string> errors);

private:
	bool success;
	std::string text;
	std::list <std::string>errors;
	void __init();
	void __cleanup();

};
}
}

#endif /* _ServersBuyNowError_H_ */
