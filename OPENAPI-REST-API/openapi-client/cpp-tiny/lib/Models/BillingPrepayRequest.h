
/*
 * BillingPrepayRequest.h
 *
 * Request payload for creating a new prepay balance.
 */

#ifndef TINY_CPP_CLIENT_BillingPrepayRequest_H_
#define TINY_CPP_CLIENT_BillingPrepayRequest_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Request payload for creating a new prepay balance.
 *
 *  \ingroup Models
 *
 */

class BillingPrepayRequest{
public:

    /*! \brief Constructor.
	 */
    BillingPrepayRequest();
    BillingPrepayRequest(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BillingPrepayRequest();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get Module the prepay should be applied to (for example `default`).
	 */
	std::string getModule();

	/*! \brief Set Module the prepay should be applied to (for example `default`).
	 */
	void setModule(std::string module);
	/*! \brief Get Amount to add to prepay balance. Minimum is $10.
	 */
	long getAmount();

	/*! \brief Set Amount to add to prepay balance. Minimum is $10.
	 */
	void setAmount(long amount);
	/*! \brief Get Whether the prepay balance should be used automatically.
	 */
	std::string getAutomaticUse();

	/*! \brief Set Whether the prepay balance should be used automatically.
	 */
	void setAutomaticUse(std::string automatic_use);


    private:
    std::string module{};
    long amount{};
    std::string automatic_use{};
};
}

#endif /* TINY_CPP_CLIENT_BillingPrepayRequest_H_ */
