
/*
 * InitiatePayment_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_InitiatePayment_200_response_H_
#define TINY_CPP_CLIENT_InitiatePayment_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "Object.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class InitiatePayment_200_response{
public:

    /*! \brief Constructor.
	 */
    InitiatePayment_200_response();
    InitiatePayment_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~InitiatePayment_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
	 */
	std::string getType();

	/*! \brief Set The response type indicating how to handle the payment. Possible values: `redirect` (redirect user to a URL), `submit` (submit a form to a URL), `single` (immediate result).
	 */
	void setType(std::string type);
	/*! \brief Get URL to redirect the user to for payment (when type is `redirect`).
	 */
	std::string getRedirect();

	/*! \brief Set URL to redirect the user to for payment (when type is `redirect`).
	 */
	void setRedirect(std::string redirect);
	/*! \brief Get Form action URL (when type is `submit`).
	 */
	std::string getAction();

	/*! \brief Set Form action URL (when type is `submit`).
	 */
	void setAction(std::string action);
	/*! \brief Get HTTP method for the form submission (when type is `submit`).
	 */
	std::string getMethod();

	/*! \brief Set HTTP method for the form submission (when type is `submit`).
	 */
	void setMethod(std::string method);
	/*! \brief Get Form field name-value pairs to submit (when type is `submit`).
	 */
	Object getItems();

	/*! \brief Set Form field name-value pairs to submit (when type is `submit`).
	 */
	void setItems(Object items);
	/*! \brief Get Status or result text.
	 */
	std::string getText();

	/*! \brief Set Status or result text.
	 */
	void setText(std::string text);


    private:
    std::string type{};
    std::string redirect{};
    std::string action{};
    std::string method{};
    Object items;
    std::string text{};
};
}

#endif /* TINY_CPP_CLIENT_InitiatePayment_200_response_H_ */
