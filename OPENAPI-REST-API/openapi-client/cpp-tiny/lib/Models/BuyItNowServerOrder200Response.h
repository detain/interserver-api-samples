
/*
 * BuyItNowServerOrder_200_response.h
 *
 * 
 */

#ifndef TINY_CPP_CLIENT_BuyItNowServerOrder_200_response_H_
#define TINY_CPP_CLIENT_BuyItNowServerOrder_200_response_H_


#include <string>
#include "bourne/json.hpp"
#include "Helpers.h"
#include "BuyItNowServerOrder_200_response_bandwidth_inner.h"
#include "BuyItNowServerOrder_200_response_cp_inner.h"
#include "BuyItNowServerOrder_200_response_ips_inner.h"
#include "BuyItNowServerOrder_200_response_os_inner.h"
#include "BuyItNowServerOrder_200_response_raid_inner.h"
#include <list>

namespace Tiny {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BuyItNowServerOrder_200_response{
public:

    /*! \brief Constructor.
	 */
    BuyItNowServerOrder_200_response();
    BuyItNowServerOrder_200_response(std::string jsonString);


    /*! \brief Destructor.
	 */
    virtual ~BuyItNowServerOrder_200_response();


    /*! \brief Retrieve a bourne JSON representation of this class.
	 */
    bourne::json toJson();


    /*! \brief Fills in members of this class from bourne JSON object representing it.
	 */
    void fromJson(std::string jsonObj);

	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_bandwidth_inner> getBandwidth();

	/*! \brief Set 
	 */
	void setBandwidth(std::list<BuyItNowServerOrder_200_response_bandwidth_inner> bandwidth);
	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_ips_inner> getIps();

	/*! \brief Set 
	 */
	void setIps(std::list<BuyItNowServerOrder_200_response_ips_inner> ips);
	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_os_inner> getOs();

	/*! \brief Set 
	 */
	void setOs(std::list<BuyItNowServerOrder_200_response_os_inner> os);
	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_cp_inner> getCp();

	/*! \brief Set 
	 */
	void setCp(std::list<BuyItNowServerOrder_200_response_cp_inner> cp);
	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_raid_inner> getRaid();

	/*! \brief Set 
	 */
	void setRaid(std::list<BuyItNowServerOrder_200_response_raid_inner> raid);


    private:
    std::list<BuyItNowServerOrder_200_response_bandwidth_inner> bandwidth;
    std::list<BuyItNowServerOrder_200_response_ips_inner> ips;
    std::list<BuyItNowServerOrder_200_response_os_inner> os;
    std::list<BuyItNowServerOrder_200_response_cp_inner> cp;
    std::list<BuyItNowServerOrder_200_response_raid_inner> raid;
};
}

#endif /* TINY_CPP_CLIENT_BuyItNowServerOrder_200_response_H_ */
