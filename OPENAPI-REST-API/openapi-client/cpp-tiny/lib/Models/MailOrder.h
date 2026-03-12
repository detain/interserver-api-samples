
/*
 * MailOrder.h
 *
 * A mail order record
 */

#ifndef TINY_CPP_CLIENT_MailOrder_H_
#define TINY_CPP_CLIENT_MailOrder_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief A mail order record
 *
 *  \ingroup Models
 *
 */

class MailOrder{
public:

    /*! \brief Constructor.
	 */
    MailOrder();
    MailOrder(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~MailOrder();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get The ID of the order.
	 */
	int getId();

	/*! \brief Set The ID of the order.
	 */
	void setId(int id);
	/*! \brief Get The order status.
	 */
	std::string getStatus();

	/*! \brief Set The order status.
	 */
	void setStatus(std::string status);
	/*! \brief Get The username to use for this order.
	 */
	std::string getUsername();

	/*! \brief Set The username to use for this order.
	 */
	void setUsername(std::string username);
	/*! \brief Get Optional order comment.
	 */
	std::string getComment();

	/*! \brief Set Optional order comment.
	 */
	void setComment(std::string comment);


    private:
    int id{};
    std::string status{};
    std::string username{};
    std::string comment{};
};
}

#endif /* TINY_CPP_CLIENT_MailOrder_H_ */
