/*
 * InitiatePayment_200_response.h
 *
 * 
 */

#ifndef _InitiatePayment_200_response_H_
#define _InitiatePayment_200_response_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class InitiatePayment_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	InitiatePayment_200_response();
	InitiatePayment_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~InitiatePayment_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
	 */
	std::string getType();

	/*! \brief Set The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
	 */
	void setType(std::string  type);
	/*! \brief Get URL to redirect the user to for payment (when type is `redirect`).
	 */
	std::string getRedirect();

	/*! \brief Set URL to redirect the user to for payment (when type is `redirect`).
	 */
	void setRedirect(std::string  redirect);
	/*! \brief Get Form action URL (when type is `submit`).
	 */
	std::string getAction();

	/*! \brief Set Form action URL (when type is `submit`).
	 */
	void setAction(std::string  action);
	/*! \brief Get HTTP method for the form submission (when type is `submit`).
	 */
	std::string getMethod();

	/*! \brief Set HTTP method for the form submission (when type is `submit`).
	 */
	void setMethod(std::string  method);
	/*! \brief Get Form field name-value pairs to submit (when type is `submit`).
	 */
	std::string getItems();

	/*! \brief Set Form field name-value pairs to submit (when type is `submit`).
	 */
	void setItems(std::string  items);
	/*! \brief Get Status or result text.
	 */
	std::string getText();

	/*! \brief Set Status or result text.
	 */
	void setText(std::string  text);

private:
	std::string type;
	std::string redirect;
	std::string action;
	std::string method;
	std::string items;
	std::string text;
	void __init();
	void __cleanup();

};
}
}

#endif /* _InitiatePayment_200_response_H_ */
