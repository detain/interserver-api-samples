
/*
 * PaymentInvoiceRows.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_PaymentInvoiceRows_H_
#define TINY_CPP_CLIENT_PaymentInvoiceRows_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "InvoiceRow.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class PaymentInvoiceRows{
public:

    /*! \brief Constructor.
	 */
    PaymentInvoiceRows();
    PaymentInvoiceRows(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~PaymentInvoiceRows();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_PaymentInvoiceRows_H_ */
