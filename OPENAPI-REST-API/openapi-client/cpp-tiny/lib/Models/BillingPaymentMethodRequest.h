
/*
 * BillingPaymentMethodRequest.h
 *
 * Payload for updating the default account payment method.
 */

#ifndef TINY_CPP_CLIENT_BillingPaymentMethodRequest_H_
#define TINY_CPP_CLIENT_BillingPaymentMethodRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Payload for updating the default account payment method.
 *
 *  \ingroup Models
 *
 */

class BillingPaymentMethodRequest{
public:

    /*! \brief Constructor.
	 */
    BillingPaymentMethodRequest();
    BillingPaymentMethodRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BillingPaymentMethodRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Payment method identifier (cc, paypal, or cc{index}).
	 */
	std::string getPaymentMethod();

	/*! \brief Set Payment method identifier (cc, paypal, or cc{index}).
	 */
	void setPaymentMethod(std::string payment_method);
	/*! \brief Get Whether automatic credit card payments are enabled.
	 */
	std::string getCcAuto();

	/*! \brief Set Whether automatic credit card payments are enabled.
	 */
	void setCcAuto(std::string cc_auto);


    private:
    std::string payment_method{};
    std::string cc_auto{};
};
}

#endif /* TINY_CPP_CLIENT_BillingPaymentMethodRequest_H_ */
