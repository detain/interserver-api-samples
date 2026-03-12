
/*
 * BillingVerifyCcRequest.h
 *
 * Payload for verifying a credit card through the verification flow.
 */

#ifndef TINY_CPP_CLIENT_BillingVerifyCcRequest_H_
#define TINY_CPP_CLIENT_BillingVerifyCcRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Payload for verifying a credit card through the verification flow.
 *
 *  \ingroup Models
 *
 */

class BillingVerifyCcRequest{
public:

    /*! \brief Constructor.
	 */
    BillingVerifyCcRequest();
    BillingVerifyCcRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BillingVerifyCcRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Card index to verify.
	 */
	int getIdx();

	/*! \brief Set Card index to verify.
	 */
	void setIdx(int idx);
	/*! \brief Get CVV code for verification.
	 */
	std::string getCcCcv2();

	/*! \brief Set CVV code for verification.
	 */
	void setCcCcv2(std::string cc_ccv2);
	/*! \brief Get First micro-charge amount for verification.
	 */
	std::string getCcAmount1();

	/*! \brief Set First micro-charge amount for verification.
	 */
	void setCcAmount1(std::string cc_amount1);
	/*! \brief Get Second micro-charge amount for verification.
	 */
	std::string getCcAmount2();

	/*! \brief Set Second micro-charge amount for verification.
	 */
	void setCcAmount2(std::string cc_amount2);
	/*! \brief Get Whether terms were accepted for verification.
	 */
	bool isTerms();

	/*! \brief Set Whether terms were accepted for verification.
	 */
	void setTerms(bool terms);


    private:
    int idx{};
    std::string cc_ccv2{};
    std::string cc_amount1{};
    std::string cc_amount2{};
    bool terms{};
};
}

#endif /* TINY_CPP_CLIENT_BillingVerifyCcRequest_H_ */
