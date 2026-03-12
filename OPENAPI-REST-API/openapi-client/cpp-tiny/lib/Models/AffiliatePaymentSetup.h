
/*
 * AffiliatePaymentSetup.h
 *
 * Affiliate Payment Setup.  Here you can set if you want the payments to go to &#x60;prepay&#x60; or &#x60;paypal&#x60; and the PayPal email address.
 */

#ifndef TINY_CPP_CLIENT_AffiliatePaymentSetup_H_
#define TINY_CPP_CLIENT_AffiliatePaymentSetup_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Affiliate Payment Setup.  Here you can set if you want the payments to go to `prepay` or `paypal` and the PayPal email address.
 *
 *  \ingroup Models
 *
 */

class AffiliatePaymentSetup{
public:

    /*! \brief Constructor.
	 */
    AffiliatePaymentSetup();
    AffiliatePaymentSetup(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AffiliatePaymentSetup();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getAffiliatePaypal();

	/*! \brief Set 
	 */
	void setAffiliatePaypal(std::string affiliate_paypal);
	/*! \brief Get 
	 */
	std::string getAffiliatePaymentMethod();

	/*! \brief Set 
	 */
	void setAffiliatePaymentMethod(std::string affiliate_payment_method);


    private:
    std::string affiliate_paypal{};
    std::string affiliate_payment_method{};
};
}

#endif /* TINY_CPP_CLIENT_AffiliatePaymentSetup_H_ */
