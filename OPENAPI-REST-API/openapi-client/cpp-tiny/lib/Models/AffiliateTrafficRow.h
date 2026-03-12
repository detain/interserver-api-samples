
/*
 * AffiliateTrafficRow.h
 *
 * Affiliate Web Traffic Entry
 */

#ifndef TINY_CPP_CLIENT_AffiliateTrafficRow_H_
#define TINY_CPP_CLIENT_AffiliateTrafficRow_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"

namespace Tiny {


/*! \brief Affiliate Web Traffic Entry
 *
 *  \ingroup Models
 *
 */

class AffiliateTrafficRow{
public:

    /*! \brief Constructor.
	 */
    AffiliateTrafficRow();
    AffiliateTrafficRow(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~AffiliateTrafficRow();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::string getTrafficId();

	/*! \brief Set 
	 */
	void setTrafficId(std::string traffic_id);
	/*! \brief Get 
	 */
	std::string getTrafficIp();

	/*! \brief Set 
	 */
	void setTrafficIp(std::string traffic_ip);
	/*! \brief Get 
	 */
	std::string getTrafficUrl();

	/*! \brief Set 
	 */
	void setTrafficUrl(std::string traffic_url);
	/*! \brief Get 
	 */
	std::string getTrafficAffiliate();

	/*! \brief Set 
	 */
	void setTrafficAffiliate(std::string traffic_affiliate);
	/*! \brief Get 
	 */
	std::string getTrafficReferrer();

	/*! \brief Set 
	 */
	void setTrafficReferrer(std::string traffic_referrer);
	/*! \brief Get 
	 */
	std::string getTrafficTimestamp();

	/*! \brief Set 
	 */
	void setTrafficTimestamp(std::string traffic_timestamp);


    private:
    std::string traffic_id{};
    std::string traffic_ip{};
    std::string traffic_url{};
    std::string traffic_affiliate{};
    std::string traffic_referrer{};
    std::string traffic_timestamp{};
};
}

#endif /* TINY_CPP_CLIENT_AffiliateTrafficRow_H_ */
