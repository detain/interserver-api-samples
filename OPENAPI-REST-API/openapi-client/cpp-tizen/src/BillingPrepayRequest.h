/*
 * BillingPrepayRequest.h
 *
 * Request payload for creating a new prepay balance.
 */

#ifndef _BillingPrepayRequest_H_
#define _BillingPrepayRequest_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Request payload for creating a new prepay balance.
 *
 *  \ingroup Models
 *
 */

class BillingPrepayRequest : public Object {
public:
	/*! \brief Constructor.
	 */
	BillingPrepayRequest();
	BillingPrepayRequest(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BillingPrepayRequest();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get Module the prepay should be applied to (for example `default`).
	 */
	std::string getRModule();

	/*! \brief Set Module the prepay should be applied to (for example `default`).
	 */
	void setRModule(std::string  r_module);
	/*! \brief Get Amount to add to prepay balance. Minimum is $10.
	 */
	long long getAmount();

	/*! \brief Set Amount to add to prepay balance. Minimum is $10.
	 */
	void setAmount(long long  amount);
	/*! \brief Get Whether the prepay balance should be used automatically.
	 */
	std::string getAutomaticUse();

	/*! \brief Set Whether the prepay balance should be used automatically.
	 */
	void setAutomaticUse(std::string  automatic_use);

private:
	std::string r_module;
	long long amount;
	std::string automatic_use;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BillingPrepayRequest_H_ */
