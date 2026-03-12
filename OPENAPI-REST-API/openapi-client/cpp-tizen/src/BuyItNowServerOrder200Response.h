/*
 * BuyItNowServerOrder_200_response.h
 *
 * 
 */

#ifndef _BuyItNowServerOrder_200_response_H_
#define _BuyItNowServerOrder_200_response_H_


#include <string>
#include "BuyItNowServerOrder_200_response_bandwidth_inner.h"
#include "BuyItNowServerOrder_200_response_cp_inner.h"
#include "BuyItNowServerOrder_200_response_ips_inner.h"
#include "BuyItNowServerOrder_200_response_os_inner.h"
#include "BuyItNowServerOrder_200_response_raid_inner.h"
#include <list>
#include "Object.h"

/** \defgroup Models Data Structures for API
 *  Classes containing all the Data Structures needed for calling/returned by API endpoints
 *
 */

namespace Tizen {
namespace ArtikCloud {


/*! \brief 
 *
 *  \ingroup Models
 *
 */

class BuyItNowServerOrder_200_response : public Object {
public:
	/*! \brief Constructor.
	 */
	BuyItNowServerOrder_200_response();
	BuyItNowServerOrder_200_response(char* str);

	/*! \brief Destructor.
	 */
	virtual ~BuyItNowServerOrder_200_response();

	/*! \brief Retrieve a string JSON representation of this class.
	 */
	char* toJson();

	/*! \brief Fills in members of this class from JSON string representing it.
	 */
	void fromJson(char* jsonStr);

	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_bandwidth_inner> getBandwidth();

	/*! \brief Set 
	 */
	void setBandwidth(std::list <BuyItNowServerOrder_200_response_bandwidth_inner> bandwidth);
	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_ips_inner> getIps();

	/*! \brief Set 
	 */
	void setIps(std::list <BuyItNowServerOrder_200_response_ips_inner> ips);
	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_os_inner> getOs();

	/*! \brief Set 
	 */
	void setOs(std::list <BuyItNowServerOrder_200_response_os_inner> os);
	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_cp_inner> getCp();

	/*! \brief Set 
	 */
	void setCp(std::list <BuyItNowServerOrder_200_response_cp_inner> cp);
	/*! \brief Get 
	 */
	std::list<BuyItNowServerOrder_200_response_raid_inner> getRaid();

	/*! \brief Set 
	 */
	void setRaid(std::list <BuyItNowServerOrder_200_response_raid_inner> raid);

private:
	std::list <BuyItNowServerOrder_200_response_bandwidth_inner>bandwidth;
	std::list <BuyItNowServerOrder_200_response_ips_inner>ips;
	std::list <BuyItNowServerOrder_200_response_os_inner>os;
	std::list <BuyItNowServerOrder_200_response_cp_inner>cp;
	std::list <BuyItNowServerOrder_200_response_raid_inner>raid;
	void __init();
	void __cleanup();

};
}
}

#endif /* _BuyItNowServerOrder_200_response_H_ */
