/*
 * MailOrder.h
 *
 * A mail order record
 */

#ifndef _MailOrder_H_
#define _MailOrder_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief A mail order record
 *
 *  \ingroup Models
 *
 */

class MailOrder : public Object {
public:
	/*! \brief Constructor.
	 */
	MailOrder();
	MailOrder(char* str);

	/*! \brief Destructor.
	 */
	virtual ~MailOrder();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get The ID of the order.
	 */
	int getId();

	/*! \brief Set The ID of the order.
	 */
	void setId(int  id);
	/*! \brief Get The order status.
	 */
	std::string getStatus();

	/*! \brief Set The order status.
	 */
	void setStatus(std::string  status);
	/*! \brief Get The username to use for this order.
	 */
	std::string getUsername();

	/*! \brief Set The username to use for this order.
	 */
	void setUsername(std::string  username);
	/*! \brief Get Optional order comment.
	 */
	std::string getComment();

	/*! \brief Set Optional order comment.
	 */
	void setComment(std::string  comment);

private:
	int id;
	std::string status;
	std::string username;
	std::string comment;
	void __init();
	void __cleanup();

};
}
}

#endif /* _MailOrder_H_ */
