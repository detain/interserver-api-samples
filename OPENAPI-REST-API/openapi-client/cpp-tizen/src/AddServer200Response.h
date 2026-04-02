/*
 * AddServer_200_response.h
 *
 * 
 */

#ifndef _AddServer_200_response_H_
#define _AddServer_200_response_H_


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

class AddServer_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	AddServer_200_response();
	AddServer_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AddServer_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Status message.
	 */
	std::string getText();

	/*! \brief Set Status message.
	 */
	void setText(std::string  text);
	/*! \brief Get Invoice ID for payment.
	 */
	int getInvoice();

	/*! \brief Set Invoice ID for payment.
	 */
	void setInvoice(int  invoice);
	/*! \brief Get Server order ID.
	 */
	int getOrder();

	/*! \brief Set Server order ID.
	 */
	void setOrder(int  order);

private:
	std::string text;
	int invoice;
	int order;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AddServer_200_response_H_ */
