
/*
 * BillingInvoiceDetail.h
 *
 * Detailed invoice data payload returned for a single invoice.
 */

#ifndef TINY_CPP_CLIENT_BillingInvoiceDetail_H_
#define TINY_CPP_CLIENT_BillingInvoiceDetail_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include <map>

namespace Tiny {


/*! \brief Detailed invoice data payload returned for a single invoice.
 *
 *  \ingroup Models
 *
 */

class BillingInvoiceDetail{
public:

    /*! \brief Constructor.
	 */
    BillingInvoiceDetail();
    BillingInvoiceDetail(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BillingInvoiceDetail();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);



    private:
};
}

#endif /* TINY_CPP_CLIENT_BillingInvoiceDetail_H_ */
