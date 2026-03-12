/*
 * SuccessTextResponse.h
 *
 * Response with success flag and text description.
 */

#ifndef _SuccessTextResponse_H_
#define _SuccessTextResponse_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Response with success flag and text description.
 *
 *  \ingroup Models
 *
 */

class SuccessTextResponse : public Object {
public:
	/*! \brief Constructor.
	 */
	SuccessTextResponse();
	SuccessTextResponse(char* str);

	/*! \brief Destructor.
	 */
	virtual ~SuccessTextResponse();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Indicates whether or not the command was successful or not.
	 */
	bool getSuccess();

	/*! \brief Set Indicates whether or not the command was successful or not.
	 */
	void setSuccess(bool  success);
	/*! \brief Get Text associated with the response.
	 */
	std::string getText();

	/*! \brief Set Text associated with the response.
	 */
	void setText(std::string  text);
	/*! \brief Get Optional Action relating to the response.
	 */
	std::string getAction();

	/*! \brief Set Optional Action relating to the response.
	 */
	void setAction(std::string  action);

private:
	bool success;
	std::string text;
	std::string action;
	void __init();
	void __cleanup();

};
}
}

#endif /* _SuccessTextResponse_H_ */
