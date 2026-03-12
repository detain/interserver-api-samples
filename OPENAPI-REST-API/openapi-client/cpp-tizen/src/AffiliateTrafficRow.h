/*
 * AffiliateTrafficRow.h
 *
 * Affiliate Web Traffic Entry
 */

#ifndef _AffiliateTrafficRow_H_
#define _AffiliateTrafficRow_H_


#include <string>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief Affiliate Web Traffic Entry
 *
 *  \ingroup Models
 *
 */

class AffiliateTrafficRow : public Object {
public:
	/*! \brief Constructor.
	 */
	AffiliateTrafficRow();
	AffiliateTrafficRow(char* str);

	/*! \brief Destructor.
	 */
	virtual ~AffiliateTrafficRow();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::string getTrafficId();

	/*! \brief Set 
	 */
	void setTrafficId(std::string  traffic_id);
	/*! \brief Get 
	 */
	std::string getTrafficIp();

	/*! \brief Set 
	 */
	void setTrafficIp(std::string  traffic_ip);
	/*! \brief Get 
	 */
	std::string getTrafficUrl();

	/*! \brief Set 
	 */
	void setTrafficUrl(std::string  traffic_url);
	/*! \brief Get 
	 */
	std::string getTrafficAffiliate();

	/*! \brief Set 
	 */
	void setTrafficAffiliate(std::string  traffic_affiliate);
	/*! \brief Get 
	 */
	std::string getTrafficReferrer();

	/*! \brief Set 
	 */
	void setTrafficReferrer(std::string  traffic_referrer);
	/*! \brief Get 
	 */
	std::string getTrafficTimestamp();

	/*! \brief Set 
	 */
	void setTrafficTimestamp(std::string  traffic_timestamp);

private:
	std::string traffic_id;
	std::string traffic_ip;
	std::string traffic_url;
	std::string traffic_affiliate;
	std::string traffic_referrer;
	std::string traffic_timestamp;
	void __init();
	void __cleanup();

};
}
}

#endif /* _AffiliateTrafficRow_H_ */
