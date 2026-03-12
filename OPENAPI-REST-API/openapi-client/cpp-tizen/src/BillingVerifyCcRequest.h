/*
 * BillingVerifyCcRequest.h
 *
 * Payload for verifying a credit card through the verification flow.
 */

#ifndef _BillingVerifyCcRequest_H_
#define _BillingVerifyCcRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Payload for verifying a credit card through the verification flow.
 *
 *  \ingroup Models
 *
 */

class BillingVerifyCcRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	BillingVerifyCcRequest();
	BillingVerifyCcRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BillingVerifyCcRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Card index to verify.
	 */
	int getIdx();

	/*! \brief Set Card index to verify.
	 */
	void setIdx(int  idx);
	/*! \brief Get CVV code for verification.
	 */
	std::string getCcCcv2();

	/*! \brief Set CVV code for verification.
	 */
	void setCcCcv2(std::string  cc_ccv2);
	/*! \brief Get First micro-charge amount for verification.
	 */
	std::string getCcAmount1();

	/*! \brief Set First micro-charge amount for verification.
	 */
	void setCcAmount1(std::string  cc_amount1);
	/*! \brief Get Second micro-charge amount for verification.
	 */
	std::string getCcAmount2();

	/*! \brief Set Second micro-charge amount for verification.
	 */
	void setCcAmount2(std::string  cc_amount2);
	/*! \brief Get Whether terms were accepted for verification.
	 */
	bool getTerms();

	/*! \brief Set Whether terms were accepted for verification.
	 */
	void setTerms(bool  terms);

private:
	int idx;
	std::string cc_ccv2;
	std::string cc_amount1;
	std::string cc_amount2;
	bool terms;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BillingVerifyCcRequest_H_ */
