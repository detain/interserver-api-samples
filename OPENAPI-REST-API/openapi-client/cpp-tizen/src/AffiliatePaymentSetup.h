/*
 * AffiliatePaymentSetup.h
 *
 * Affiliate Payment Setup.  Here you can set if you want the payments to go to &#x60;prepay&#x60; or &#x60;paypal&#x60; and the PayPal email address.
 */

#ifndef _AffiliatePaymentSetup_H_
#define _AffiliatePaymentSetup_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.
 *
 *  \ingroup Models
 *
 */

class AffiliatePaymentSetup : public Object {
public:
	/*! \brief Constructor.
	 */
	AffiliatePaymentSetup();
	AffiliatePaymentSetup(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AffiliatePaymentSetup();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getAffiliatePaypal();

	/*! \brief Set 
	 */
	void setAffiliatePaypal(std::string  affiliate_paypal);
	/*! \brief Get 
	 */
	std::string getAffiliatePaymentMethod();

	/*! \brief Set 
	 */
	void setAffiliatePaymentMethod(std::string  affiliate_payment_method);

private:
	std::string affiliate_paypal;
	std::string affiliate_payment_method;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AffiliatePaymentSetup_H_ */
