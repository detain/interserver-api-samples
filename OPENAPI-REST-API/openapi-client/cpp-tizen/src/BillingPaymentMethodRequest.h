/*
 * BillingPaymentMethodRequest.h
 *
 * Payload for updating the default account payment method.
 */

#ifndef _BillingPaymentMethodRequest_H_
#define _BillingPaymentMethodRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Payload for updating the default account payment method.
 *
 *  \ingroup Models
 *
 */

class BillingPaymentMethodRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	BillingPaymentMethodRequest();
	BillingPaymentMethodRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BillingPaymentMethodRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Payment method identifier (cc, paypal, or cc{index}).
	 */
	std::string getPaymentMethod();

	/*! \brief Set Payment method identifier (cc, paypal, or cc{index}).
	 */
	void setPaymentMethod(std::string  payment_method);
	/*! \brief Get Whether automatic credit card payments are enabled.
	 */
	std::string getCcAuto();

	/*! \brief Set Whether automatic credit card payments are enabled.
	 */
	void setCcAuto(std::string  cc_auto);

private:
	std::string payment_method;
	std::string cc_auto;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BillingPaymentMethodRequest_H_ */
