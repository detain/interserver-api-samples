
/*
 * AddServer_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_AddServer_200_response_H_
#define TINY_CPP_CLIENT_AddServer_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class AddServer_200_response{
public:

    /*! \brief Constructor.
	 */
    AddServer_200_response();
    AddServer_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AddServer_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Status message.
	 */
	std::string getText();

	/*! \brief Set Status message.
	 */
	void setText(std::string text);
	/*! \brief Get Invoice ID for payment.
	 */
	int getInvoice();

	/*! \brief Set Invoice ID for payment.
	 */
	void setInvoice(int invoice);
	/*! \brief Get Server order ID.
	 */
	int getOrder();

	/*! \brief Set Server order ID.
	 */
	void setOrder(int order);


    private:
    std::string text{};
    int invoice{};
    int order{};
};
}

#endif /* TINY_CPP_CLIENT_AddServer_200_response_H_ */
