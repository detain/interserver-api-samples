
/*
 * AffiliateDockSetup.h
 *
 * Affiliate Landing Page information.
 */

#ifndef TINY_CPP_CLIENT_AffiliateDockSetup_H_
#define TINY_CPP_CLIENT_AffiliateDockSetup_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Affiliate Landing Page information.
 *
 *  \ingroup Models
 *
 */

class AffiliateDockSetup{
public:

    /*! \brief Constructor.
	 */
    AffiliateDockSetup();
    AffiliateDockSetup(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AffiliateDockSetup();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getAffiliateDockTitle();

	/*! \brief Set 
	 */
	void setAffiliateDockTitle(std::string affiliate_dock_title);
	/*! \brief Get 
	 */
	std::string getAffiliateDockDescription();

	/*! \brief Set 
	 */
	void setAffiliateDockDescription(std::string affiliate_dock_description);
	/*! \brief Get 
	 */
	std::string getReferrerCoupon();

	/*! \brief Set 
	 */
	void setReferrerCoupon(std::string referrer_coupon);


    private:
    std::string affiliate_dock_title{};
    std::string affiliate_dock_description{};
    std::string referrer_coupon{};
};
}

#endif /* TINY_CPP_CLIENT_AffiliateDockSetup_H_ */
