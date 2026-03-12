/*
 * AffiliateDockSetup.h
 *
 * Affiliate Landing Page information.
 */

#ifndef _AffiliateDockSetup_H_
#define _AffiliateDockSetup_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Affiliate Landing Page information.
 *
 *  \ingroup Models
 *
 */

class AffiliateDockSetup : public Object {
public:
	/*! \brief Constructor.
	 */
	AffiliateDockSetup();
	AffiliateDockSetup(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AffiliateDockSetup();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getAffiliateDockTitle();

	/*! \brief Set 
	 */
	void setAffiliateDockTitle(std::string  affiliate_dock_title);
	/*! \brief Get 
	 */
	std::string getAffiliateDockDescription();

	/*! \brief Set 
	 */
	void setAffiliateDockDescription(std::string  affiliate_dock_description);
	/*! \brief Get 
	 */
	std::string getReferrerCoupon();

	/*! \brief Set 
	 */
	void setReferrerCoupon(std::string  referrer_coupon);

private:
	std::string affiliate_dock_title;
	std::string affiliate_dock_description;
	std::string referrer_coupon;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AffiliateDockSetup_H_ */
